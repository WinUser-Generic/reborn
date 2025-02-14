// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <thread>
#include "BB/SdkHeaders.hpp"
#include "safetyhook.hpp"
#include "client_ws.hpp"
#include "server_ws.hpp"
#include <iostream>
#include <future>
#include <queue>
#include <format>
#include <mutex>;
#include "json/json.h"

using WsServer = SimpleWeb::SocketServer<SimpleWeb::WS>;
using WsClient = SimpleWeb::SocketClient<SimpleWeb::WS>;

namespace Settings {
    int32_t gamePort = 6969;
    int32_t websocketPort = 1337;
}

namespace Globals {
    uintptr_t baseAddress = 0x0;

    UTcpNetDriver* netDriver = 0x0;

    std::vector<UNetConnection*> connections = std::vector<UNetConnection*>();

    WsServer websocketServer;

    std::thread websocketServerThread;

    std::vector< std::shared_ptr<WsServer::Connection>> websocketConnections = std::vector< std::shared_ptr<WsServer::Connection>>();

    WsClient* websocketClient;

    std::thread websocketClientThread;

    Json::Value payloadToApply = Json::nullValue;

    std::mutex paylodMutex;

    std::vector<UChannel*> remoteChannels = std::vector<UChannel*>();
}

namespace SDKUtils {
    template<typename T>
    T* GetLastOfClass() {
        UClass* theClass = T::StaticClass();
        for (int i = UObject::GObjObjects()->size() - 1; i >= 0; i--) {
            UObject* obj = UObject::GObjObjects()->at(i);

            if (obj && obj->IsA(theClass))
                return (T*)obj;
        }

        return nullptr;
    }

    template<typename T>
    std::vector<T*> GetAllOfClass() {
        std::vector<T*> ret = std::vector<T*>();

        UClass* theClass = T::StaticClass();
        for (int i = 0; i < UObject::GObjObjects()->size(); i++) {
            UObject* obj = UObject::GObjObjects()->at(i);

            if (obj && obj->IsA(theClass))
                ret.push_back((T*)obj);
        }

        return ret;
    }

    template<typename T>
    void ListAllOfClass() {
        UClass* theClass = T::StaticClass();
        for (int i = 0; i < UObject::GObjObjects()->size(); i++) {
            UObject* obj = UObject::GObjObjects()->at(i);

            if (obj && obj->IsA(theClass))
                printf("%s\n", obj->GetFullName().c_str());
        }
    }
}

namespace EngineLogic {
    void ExecConsoleCommand(const wchar_t* command) {
        reinterpret_cast<void* (*)(uintptr_t, const wchar_t*, uintptr_t)>(Globals::baseAddress + 0x01fca00)((__int64)((*GObjects)[0]) + 0x25ebde8, command, 0);
    }

    void DontPauseOnLossOfFocus() {
        SDKUtils::GetLastOfClass<UEngine>()->bPauseOnLossOfFocus = false;
    }

    void* EngineMalloc(size_t size) {
        int* param_1 = reinterpret_cast<int* (*)()>(Globals::baseAddress + 0x0d33260)();

        return reinterpret_cast<void* (*)(unsigned int param_1, size_t param_2, size_t param_3, size_t param_4, size_t param_5, unsigned int param_6, unsigned int param_7, const char* param_8, unsigned int param_9, const char* param_10)>(Globals::baseAddress + 0x0d2e160)(*(int*)(param_1 + 0x10), 0, size, 0x8, 0, 0, 0x31c0019,
            "t:\\POPLAR-PATCH-PC\\Development\\Src\\Core\\Src\\gbxmem.cpp", 0x46, "appMalloc");
        /*  lVar1 = FUN_140d33260();
      FUN_140d2e160(*(undefined4 *)(lVar1 + 0x10),0,param_2,0x10,0,0,0x31c0019,
                    "t:\\POPLAR-PATCH-PC\\Development\\Src\\Core\\Src\\gbxmem.cpp",0x46,"appMalloc");*/
    }
}

namespace ServerNetworking {
    enum EPropertyFlags : uint64_t
    {
        CPF_Edit = 0x0000000000000001, // Property is user-settable in the editor.
        CPF_Const = 0x0000000000000002,	// Actor's property always matches class's default actor property.
        CPF_Input = 0x0000000000000004,	// Variable is writable by the input system.
        CPF_ExportObject = 0x0000000000000008, // Object can be exported with actor.
        CPF_OptionalParm = 0x0000000000000010, // Optional parameter (if CPF_Param is set).
        CPF_Net = 0x0000000000000020, // Property is relevant to network replication.
        CPF_EditFixedSize = 0x0000000000000040, // Indicates that elements of an array can be modified, but its size cannot be changed.
        CPF_Parm = 0x0000000000000080,	// Function/When call parameter.
        CPF_OutParm = 0x0000000000000100, // Value is copied out after function call.
        CPF_SkipParm = 0x0000000000000200, // Property is a short-circuitable evaluation function parm.
        CPF_ReturnParm = 0x0000000000000400, // Return value.
        CPF_CoerceParm = 0x0000000000000800, // Coerce args into this function parameter.
        CPF_Native = 0x0000000000001000, // Property is native: C++ code is responsible for serializing it.
        CPF_Transient = 0x0000000000002000,	// Property is transient: shouldn't be saved, zero-filled at load time.
        CPF_Config = 0x0000000000004000, // Property should be loaded/saved as permanent profile.
        CPF_Localized = 0x0000000000008000,	// Property should be loaded as localizable text.
        CPF_Travel = 0x0000000000010000, // Property travels across levels/servers.
        CPF_EditConst = 0x0000000000020000,	// Property is uneditable in the editor.
        CPF_GlobalConfig = 0x0000000000040000, // Load config from base class, not subclass.
        CPF_Component = 0x0000000000080000,	// Property containts component references.
        CPF_AlwaysInit = 0x0000000000100000, // Property should never be exported as NoInit(@todo - this doesn't need to be a property flag...only used during make).
        CPF_DuplicateTransient = 0x0000000000200000, // Property should always be reset to the default value during any type of duplication (copy/paste, binary duplication, etc.).
        CPF_NeedCtorLink = 0x0000000000400000, // Fields need construction/destruction.
        CPF_NoExport = 0x0000000000800000, // Property should not be exported to the native class header file.
        CPF_NoClear = 0x0000000002000000, // Hide clear (and browse) button.
        CPF_EditInline = 0x0000000004000000, // Edit this object reference inline.	
        CPF_EditInlineUse = 0x0000000010000000,	// EditInline with Use button.
        CPF_EditFindable = 0x0000000008000000, // References are set by clicking on actors in the editor viewports.
        CPF_Deprecated = 0x0000000020000000, // Property is deprecated.  Read it from an archive, but don't save it.	
        CPF_DataBinding = 0x0000000040000000, // Indicates that this property should be exposed to data stores.
        CPF_SerializeText = 0x0000000080000000,	// Native property should be serialized as text (ImportText, ExportText).
        CPF_RepNotify = 0x0000000100000000,	// Notify actors when a property is replicated.
        CPF_Interp = 0x0000000200000000, // Interpolatable property for use with matinee.
        CPF_NonTransactional = 0x0000000400000000, // Property isn't transacted.
        CPF_EditorOnly = 0x0000000800000000, // Property should only be loaded in the editor.
        CPF_NotForConsole = 0x0000001000000000, // Property should not be loaded on console (or be a console cooker commandlet).
        CPF_RepRetry = 0x0000002000000000, // Property replication of this property if it fails to be fully sent (e.g. object references not yet available to serialize over the network).
        CPF_PrivateWrite = 0x0000004000000000, // Property is const outside of the class it was declared in.
        CPF_ProtectedWrite = 0x0000008000000000, // Property is const outside of the class it was declared in and subclasses.
        CPF_ArchetypeProperty = 0x0000010000000000, // Property should be ignored by archives which have ArIgnoreArchetypeRef set.
        CPF_EditHide = 0x0000020000000000, // Property should never be shown in a properties window.
        CPF_EditTextBox = 0x0000040000000000, // Property can be edited using a text dialog box.
        CPF_CrossLevelPassive = 0x0000100000000000, // Property can point across levels, and will be serialized properly, but assumes it's target exists in-game (non-editor)
        CPF_CrossLevelActive = 0x0000200000000000, // Property can point across levels, and will be serialized properly, and will be updated when the target is streamed in/out
    };

    void InitListen() {
        SDKUtils::ListAllOfClass<UGameEngine>();

        SDKUtils::GetLastOfClass<UGameEngine>()->CreateNamedNetDriver(FName(020724));

        UTcpNetDriver* NetDriver = SDKUtils::GetLastOfClass<UTcpNetDriver>();

        UWorld* theWorld = *reinterpret_cast<UWorld**>(Globals::baseAddress + 0x34DFCA0);

        theWorld->NetDriver = NetDriver;

        UObject::FindObject<AWorldInfo>("WorldInfo Wishbone_P.TheWorld.PersistentLevel.WorldInfo")->NetMode = ENetMode::NM_ListenServer;

        FURL furl = FURL();

        furl.Port = Settings::gamePort;

        FString error = FString((const char*)L"");

        printf("[NETWORKING] Normal init status %i\n", reinterpret_cast<char (*)(UNetDriver * NetDriver, size_t world, FURL & url, FString & error)>(Globals::baseAddress + 0x0c21e30)(NetDriver, (__int64)theWorld + 0x58, furl, error));

        theWorld->NetDriver = NetDriver;

        NetDriver->NetConnectionClass = UTcpipConnection::StaticClass();

        Globals::netDriver = NetDriver;

        //(*(void(__fastcall**)(__int64))(**(__int64**)(NetDriver + 0x90) + 568LL))(*(__int64*)(NetDriver + 0x90)); // owo

        printf("[NETWORKING] Game networking listening on port %i!\n", Settings::gamePort);

        /*

        Globals::websocketServer.config.port = Settings::websocketPort;

        auto& propertyReplicationEndpoint = Globals::websocketServer.endpoint["^/propertyreplication/?$"];

        propertyReplicationEndpoint.on_open = [](std::shared_ptr<WsServer::Connection> connection) {
            Globals::websocketConnections.push_back(connection);
            printf("[NETWORKING] New propertyreplication websocket client!\n");
        };

        propertyReplicationEndpoint.on_close = [](std::shared_ptr<WsServer::Connection> connection, int status, const std::string&) {
            Globals::websocketConnections.erase(std::remove(Globals::websocketConnections.begin(), Globals::websocketConnections.end(), connection), Globals::websocketConnections.end());
            printf("[NETWORKING] propertyreplication websocket client disconnected!\n");
        }; 

        Globals::websocketServerThread = std::thread([]() {
            // Start server
            Globals::websocketServer.start([](unsigned short port) {
                printf("[NETWORKING] Websocket networking listening on port %i!\n", port);
            });
        });

        Globals::websocketServerThread.detach();
        */
    }

    std::vector<AActor*> GetAllActors() {
        return SDKUtils::GetAllOfClass<AActor>(); // TODO: Flags instead of this abomination
    }

    uint8_t GetConnectionState(UNetConnection* connection) {
        return *(uint8_t*)((__int64)connection + 0x98);
    }

    UActorChannel* GetActorChannelForActor(AActor* actor, UNetConnection* connection) {
        for (UChannel* channel : connection->Channels) {
            if (channel && !channel->Closing) {
                if (channel->IsA<UActorChannel>() && ((UActorChannel*)channel)->Actor == actor) {
                    return (UActorChannel*)channel;
                }
            }
        }

        return nullptr;
    }

    Json::Value SerializeProperty(UField* prop, __int64 addr) {
        Json::Value ret = Json::Value();

        if (prop->IsA<UByteProperty>()) {
            UByteProperty* castProp = reinterpret_cast<UByteProperty*>(prop);

            ret["type"] = "byte";
            ret["offset"] = castProp->Offset;
            ret["value"] = *reinterpret_cast<uint8_t*>(addr);
        }
        else if (prop->IsA<UBoolProperty>()) {
            UBoolProperty* castProp = reinterpret_cast<UBoolProperty*>(prop);

            ret["type"] = "bool";
            ret["offset"] = castProp->Offset;
            ret["value"] = *reinterpret_cast<uint32_t*>(addr);
        }
        else if (prop->IsA<UFloatProperty>()) {
            UFloatProperty* castProp = reinterpret_cast<UFloatProperty*>(prop);

            ret["type"] = "float";
            ret["offset"] = castProp->Offset;
            ret["value"] = *reinterpret_cast<float*>(addr);
        }
        else if (prop->IsA<UIntProperty>()) {
            UIntProperty* castProp = reinterpret_cast<UIntProperty*>(prop);

            ret["type"] = "int";
            ret["offset"] = castProp->Offset;
            ret["value"] = *reinterpret_cast<int*>(addr);
        }
        /*
        else if (prop->IsA<UStrProperty>()) {
            UStrProperty* castProp = reinterpret_cast<UStrProperty*>(prop);

            ret["type"] = "str";
            ret["offset"] = castProp->Offset;
            ret["value"] = (*reinterpret_cast<FString*>(addr)).c_str();
        }
        */
        else if (prop->IsA<UObjectProperty>()) {
            UObjectProperty* castProp = reinterpret_cast<UObjectProperty*>(prop);

            ret["type"] = "obj";
            ret["offset"] = castProp->Offset;
            if ((*reinterpret_cast<UObject**>(addr))) {
                ret["value"] = (*reinterpret_cast<UObject**>(addr))->GetFullName().c_str();
            }
            else {
                ret["value"] = "NONE";
            }
        }
        /*
        else if (prop->IsA<UArrayProperty>()) {
            UArrayProperty* castProp = reinterpret_cast<UArrayProperty*>(prop);
            if (castProp->Inner->ElementSize == 1 || castProp->Inner->ElementSize == 2 || castProp->Inner->ElementSize == 4 || castProp->Inner->ElementSize == 8) {
                ret["type"] = "array";
                ret["offset"] = castProp->Offset;
                ret["innersize"] = castProp->Inner->ElementSize;
                ret["num"] = (reinterpret_cast<TArray<void**>*>(addr))->size();
                ret["max"] = (reinterpret_cast<TArray<void**>*>(addr))->capacity();
                ret["data"] = Json::Value();

                switch (castProp->Inner->ElementSize) {
                case 1:
                    for (int i = 0; i < (reinterpret_cast<TArray<void**>*>(addr))->size(); i++) {
                        ret["data"][i] = SerializeProperty(castProp->Inner, (__int64)&((reinterpret_cast<TArray<uint8_t>*>(addr))->data()[i]));
                    }
                    break;
                case 2:
                    for (int i = 0; i < (reinterpret_cast<TArray<void**>*>(addr))->size(); i++) {
                        ret["data"][i] = SerializeProperty(castProp->Inner, (__int64)&((reinterpret_cast<TArray<uint16_t>*>(addr))->data()[i]));
                    }
                    break;
                case 4:
                    for (int i = 0; i < (reinterpret_cast<TArray<void**>*>(addr))->size(); i++) {
                        ret["data"][i] = SerializeProperty(castProp->Inner, (__int64)&((reinterpret_cast<TArray<uint32_t>*>(addr))->data()[i]));
                    }
                    break;
                case 8:
                    for (int i = 0; i < (reinterpret_cast<TArray<void**>*>(addr))->size(); i++) {
                        ret["data"][i] = SerializeProperty(castProp->Inner, (__int64)&((reinterpret_cast<TArray<__int64>*>(addr))->data()[i]));
                    }
                    break;
                default:
                    break;
                }
            }
        }
        */
        else if (prop->IsA<UStructProperty>()) {
            UStructProperty* castProp = reinterpret_cast<UStructProperty*>(prop);

            ret["debug"] = castProp->GetFullName();
            ret["type"] = "struct";
            ret["offset"] = castProp->Offset;
            ret["properties"] = Json::Value();
            
            UField* prop2 = castProp->Struct->Children;
            int propIDX = 0;
            while (prop2) {
                if (prop2->IsA<UProperty>()) {
                    Json::Value serializedProperty = SerializeProperty(prop2, addr + reinterpret_cast<UProperty*>(prop2)->Offset);
                    if (serializedProperty["type"] != Json::nullValue) {
                        ret["properties"][propIDX] = serializedProperty;
                        propIDX++;
                    }
                }

                prop2 = prop2->Next;
            }

            if (ret["properties"].size() == 0) {
                ret = Json::Value();
            }
        }

        return ret;
    }

    Json::Value SerializeActor(UChannel* ch, AActor* actor) {
        Json::Value ret = Json::Value();

        ret["actor"] = actor->GetFullName();

        ret["properties"] = Json::Value();

        UField* prop = actor->Class->Children;
        int propIDX = 0;
        while (prop) {
            if (prop->IsA<UProperty>() && reinterpret_cast<UProperty*>(prop)->PropertyFlags & EPropertyFlags::CPF_Net) {
                Json::Value serializedProperty = SerializeProperty(prop, (__int64)actor + (__int64)(reinterpret_cast<UProperty*>(prop)->Offset));
                if (serializedProperty["type"] != Json::nullValue) {
                    ret["properties"][propIDX] = serializedProperty;
                    propIDX++;
                }
            }

            prop = prop->Next;
        }

        return ret;
    }

    void TickNetServer(UTcpNetDriver* NetDriver) {
        std::vector<AActor*> actors = GetAllActors();

        for (UNetConnection* connection : Globals::connections) {
            if (GetConnectionState(connection) != 3)
                continue;

            //Json::Value payload = Json::Value();
            int actorIDX = 0;

            for (AActor* actor : actors) {
                if (!actor)
                    continue;

                if (!actor->WorldInfo && !actor->IsA<AWorldInfo>())
                    continue;

                if (actor->RemoteRole == ENetRole::ROLE_None)
                    continue;

                (*(void(__fastcall**)(UNetConnection*, AActor*))(*(__int64*)connection + 624LL))(connection, actor);

                /*
                if (actor->bNetTemporary || actor->bTearOff)
                    continue;
                    */

                if (actor->IsA<APlayerController>() && (connection->Actor != actor)) {
                    continue;
                }
                else if (actor->IsA<APlayerController>()) {
                    //reinterpret_cast<APlayerController*>(actor)->LongClientAdjustPosition();
                    reinterpret_cast<APlayerController*>(actor)->eventSendClientAdjustment();
                }

                //reinterpret_cast<void(*)(AActor*, UNetConnection*, bool)>(Globals::baseAddress + 0x403830)(actor, connection, false);

                //actor->RemoteRole = ENetRole::ROLE_Authority;

                //printf("[NETWORKING] Starting the replication run for %s\n", actor->GetFullName().c_str());

                UActorChannel* channel = GetActorChannelForActor(actor, connection);

                

                if (!channel) {
                    //printf("[NETWORKING] No channel, calling an RPC and hoping for the best...\n");
                    //actor->ClientDrawDebugLine(FVector(), FVector(), 0, 255, 0, false, 0);
                    //actor->ClientConsoleCommand((const char*)L"0w0");
                    //printf("[NETWORKING] No channel, creating...\n");

                    channel = reinterpret_cast<UActorChannel * (__thiscall*)(UNetConnection * connection, int channelType, uint32_t openedLocally, int chIndex)>(Globals::baseAddress + 0x061daa0)(connection, 2, 1, -1);
                    
                    if (channel) {
                        //printf("[NETWORKING] Setting channel actor...\n");
                        reinterpret_cast<void(__thiscall*)(UActorChannel*, AActor*)>(Globals::baseAddress + 0x0611970)(channel, actor);
                    }
                }

                
                /*
                else if(channel->OpenAckd && !channel->Closing) {
                    if (payload["actors"] == Json::nullValue)
                        payload["actors"] = Json::Value();

                    Json::Value serializedActor = SerializeActor(channel, actor);

                    if (serializedActor["properties"].size() > 0) {
                        payload["actors"][actorIDX] = serializedActor;
                        actorIDX++;
                    }
                }
            */


                if (channel && !(*(uint8_t*)(channel + 0xC0) & 0x10)) {
                    //printf("[NETWORKING] Replication time!\n");
                    //reinterpret_cast<void (*)(UActorChannel * channel)>(Globals::baseAddress + 0x0613050)(channel);
                    *(uint8_t*)(channel + 0xC0) |= 0x10;
                    reinterpret_cast<void (*)(UActorChannel * channel)>(Globals::baseAddress + 0x0613050)(channel);
                    actor->NetTag++;
                    *(uint8_t*)(channel + 0xC0) &= ~0x10;
                }
            }

            /*
            if (payload["actors"] != Json::nullValue) {
                for (std::shared_ptr<WsServer::Connection> connection : Globals::websocketConnections) { // TODO: Match UE3 connections to our WS connections
                    connection.get()->send(payload.toStyledString());
                }
            }
            */
            /*
            while (connection->Actor && (*(reinterpret_cast<bool(**)(UNetConnection*, int)>(*(__int64*)connection + 0x260)))(connection, 0)) {
                if (connection->Actor)
                    connection->Actor->ClientAdminMessage((const char*)L"0w0w0w0w0w0w00w0w0w0w0w00ww00w0w0w0w0w0w0w0w0w0w0w0w00w00w0w0w0w0w00w0w0w0w0w0w0w00w0w0w0w0w0w00w0w0");
            }
            */
        }
    }
}

namespace ClientNetworking {
    /*
    AActor* GetActorForChannelIDX(UNetConnection* connection, uint32_t chIDX) {
        //int i = 0;
        for (UChannel* channel : connection->Channels) {
            //printf("%i\n", i);
            //i++;
            if (channel) { // Sweet manmade horrors beyond comprehension
                if (channel->ChIndex == chIDX && channel->IsA<UActorChannel>()) {
                    return ((UActorChannel*)channel)->Actor;
                }
            }
        }

        return nullptr;
    }
    */

    void ParseAndApplyProperty(Json::Value propJSON, __int64 addr) {
        if (propJSON["type"] == "byte") {
            printf("[NETWORKING]                - [BYTEPROP] %llx %u %u\n", addr, propJSON["offset"].asUInt(), propJSON["value"].asUInt());
            *reinterpret_cast<uint8_t*>(addr) = propJSON["value"].asUInt();
        }
        else if (propJSON["type"] == "bool") {
            printf("[NETWORKING]                - [BOOLPROP] %llx %u %u\n", addr, propJSON["offset"].asUInt(), propJSON["value"].asUInt());
            *reinterpret_cast<uint32_t*>(addr) = propJSON["value"].asUInt();
        }
        else if (propJSON["type"] == "float") {
            printf("[NETWORKING]                - [FLOATPROP] %llx %u %f\n", addr, propJSON["offset"].asUInt(), propJSON["value"].asFloat());
            *reinterpret_cast<float*>(addr) = propJSON["value"].asFloat();
        }
        else if (propJSON["type"] == "int") {
            printf("[NETWORKING]                - [INTPROP] %llx %u %i\n", addr, propJSON["offset"].asUInt(), propJSON["value"].asInt());
            *reinterpret_cast<int*>(addr) = propJSON["value"].asInt();
        }
        /*
        else if (propJSON["type"] == "str") {
            printf("[NETWORKING]                - [STRPROP] %llx %u %u\n", addr, propJSON["offset"].asUInt(), propJSON["value"].asString().length());
            (*reinterpret_cast<FString*>(addr)).ArrayData = strdup(propJSON["value"].asCString());
            (*reinterpret_cast<FString*>(addr)).ArrayCount = propJSON["value"].asString().length();
            (*reinterpret_cast<FString*>(addr)).ArrayMax = propJSON["value"].asString().length();
        }
        */
        else if (propJSON["type"] == "obj") {
            //printf("[NETWORKING]                - [OBJPROP] %u %s\n", propJSON["offset"].asUInt(), propJSON["value"].asCString());
            if (propJSON["value"].asString() != "NONE") {
                if (!*reinterpret_cast<UObject**>(addr))
                    *reinterpret_cast<UObject**>(addr) = UObject::FindObject<UObject>(propJSON["value"].asCString());
            }
            else {
                *reinterpret_cast<UObject**>(addr) = nullptr;
            }
        }
        else if (propJSON["type"] == "struct") {
            printf("[NETWORKING]                - [STRUCTPROP] %llx %u %s\n", addr, propJSON["offset"].asUInt(), propJSON["debug"].asCString());
            uint32_t baseOffset = propJSON["offset"].asUInt();
            if (propJSON["properties"].size() > 0) {
                for (Json::Value innerPropJSON : propJSON["properties"]) {
                    ParseAndApplyProperty(innerPropJSON, addr + baseOffset + innerPropJSON["offset"].asUInt());
                }
            }
        }
        else if (propJSON["type"] == "array") {
            //printf("%s\n", propJSON.toStyledString().c_str());
            //printf("[NETWORKING]                - [ARRAYPROP] %u %s\n", propJSON["offset"].asUInt(), propJSON["value"].asCString());
            switch (propJSON["innersize"].asInt()) {
            case 1:
                /*
                if (((reinterpret_cast<TArray<uint8_t>*>(addr))->capacity() < propJSON["num"].asInt())) {
                    void* newMem = EngineLogic::EngineMalloc(sizeof(uint8_t) * propJSON["num"].asInt());
                    memcpy_s(newMem, sizeof(uint8_t) * propJSON["num"].asInt(), reinterpret_cast<TArray<uint8_t>*>(addr)->data(), sizeof(uint8_t) * reinterpret_cast<TArray<uint8_t>*>(addr)->size());
                    (reinterpret_cast<TArray<uint8_t>*>(addr)->ArrayData) = (uint8_t*)newMem;
                    reinterpret_cast<TArray<uint8_t>*>(addr)->ArrayMax = propJSON["num"].asInt();
                }
                */

                for (int i = 0; i < propJSON["num"].asInt() && i < (reinterpret_cast<TArray<uint8_t>*>(addr))->size(); i++) {
                    ParseAndApplyProperty(propJSON["data"][i], (__int64)&((reinterpret_cast<TArray<uint8_t>*>(addr))->data()[i]));
                }

                break;
            case 2:
                /*
                if (((reinterpret_cast<TArray<uint16_t>*>(addr))->capacity() < propJSON["num"].asInt())) {
                    void* newMem = EngineLogic::EngineMalloc(sizeof(uint16_t) * propJSON["num"].asInt());
                    memcpy_s(newMem, sizeof(uint16_t) * propJSON["num"].asInt(), reinterpret_cast<TArray<uint16_t>*>(addr)->data(), sizeof(uint16_t) * reinterpret_cast<TArray<uint16_t>*>(addr)->size());
                    (reinterpret_cast<TArray<uint16_t>*>(addr)->ArrayData) = (uint16_t*)newMem;
                    reinterpret_cast<TArray<uint16_t>*>(addr)->ArrayMax = propJSON["num"].asInt();
                }
                */

                for (int i = 0; i < propJSON["num"].asInt() && i < (reinterpret_cast<TArray<uint16_t>*>(addr))->size(); i++) {
                    ParseAndApplyProperty(propJSON["data"][i], (__int64)&((reinterpret_cast<TArray<uint16_t>*>(addr))->data()[i]));
                }

                break;
            case 4:
                /*
                if (((reinterpret_cast<TArray<uint32_t>*>(addr))->capacity() < propJSON["num"].asInt())) {
                    void* newMem = EngineLogic::EngineMalloc(sizeof(uint32_t) * propJSON["num"].asInt());
                    memcpy_s(newMem, sizeof(uint32_t) * propJSON["num"].asInt(), reinterpret_cast<TArray<uint32_t>*>(addr)->data(), sizeof(uint32_t) * reinterpret_cast<TArray<uint32_t>*>(addr)->size());
                    (reinterpret_cast<TArray<uint32_t>*>(addr)->ArrayData) = (uint32_t*)newMem;
                    reinterpret_cast<TArray<uint32_t>*>(addr)->ArrayMax = propJSON["num"].asInt();
                }
                */

                for (int i = 0; i < propJSON["num"].asInt() && i < (reinterpret_cast<TArray<uint32_t>*>(addr))->size(); i++) {
                    ParseAndApplyProperty(propJSON["data"][i], (__int64)&((reinterpret_cast<TArray<uint32_t>*>(addr))->data()[i]));
                }

                break;
            case 8:
                /*
                if (((reinterpret_cast<TArray<__int64>*>(addr))->capacity() < propJSON["num"].asInt())) {
                    void* newMem = EngineLogic::EngineMalloc(sizeof(__int64) * propJSON["num"].asInt());
                    memcpy_s(newMem, sizeof(__int64) * propJSON["num"].asInt(), reinterpret_cast<TArray<__int64>*>(addr)->data(), sizeof(__int64) * reinterpret_cast<TArray<__int64>*>(addr)->size());
                    (reinterpret_cast<TArray<__int64>*>(addr)->ArrayData) = (__int64*)newMem;
                    reinterpret_cast<TArray<__int64>*>(addr)->ArrayMax = propJSON["num"].asInt();
                }
                */

                for (int i = 0; i < propJSON["num"].asInt() && i < (reinterpret_cast<TArray<__int64>*>(addr))->size(); i++) {
                    ParseAndApplyProperty(propJSON["data"][i], (__int64)&((reinterpret_cast<TArray<__int64>*>(addr))->data()[i]));
                }

                break;
            default:
                break;
            }
        }
    }

    void ParseAndApplyPayload(Json::Value payload) {
        UNetConnection* serverConnection = SDKUtils::GetLastOfClass<UNetConnection>(); //TODO: Cache this, find a ptr chain, SOMETHING other than this

        for (Json::Value actorJSON : payload["actors"]) {
            // printf("[NETWORKING]        - [ACTOR] %u\n", (__int64)actorJSON["chIDX"].asUInt());
            //AActor* actor = GetActorForChannelIDX(serverConnection, actorJSON["chIDX"].asUInt());
            printf("[NETWORKING]        - [ACTOR] %s\n", (__int64)actorJSON["actor"].asString().c_str());
            AActor* actor = UObject::FindObject<AActor>(actorJSON["actor"].asString());
            printf("[NETWORKING]        - [ACTOR] %llx\n", (__int64)actor);

            if (actor) {
               printf("[NETWORKING]        - [ACTOR] %s\n", actor->GetFullName().c_str());
                
               for (Json::Value propJSON : actorJSON["properties"]) {
                   ParseAndApplyProperty(propJSON, (__int64)actor + (__int64)propJSON["offset"].asUInt());
               }
            }
            else {
                //printf("[NETWORKING]        - [ACTOR] Actor not spawned!\n");
            }
        }
    }

    void TickNetClient() {
        /*
        std::lock_guard lock(Globals::paylodMutex);

        if (Globals::payloadToApply != Json::nullValue) {
            printf("=============NEW TICK=============\n");
            printf("%s\n", Globals::payloadToApply.toStyledString().c_str());
            ParseAndApplyPayload(Globals::payloadToApply);
            Globals::payloadToApply = Json::nullValue;
        }
        */
    }

    void ConnectWebsocket() {
        Globals::websocketClient = new WsClient("127.0.0.1:1337/propertyreplication");

        Globals::websocketClient->on_open = [](std::shared_ptr<WsClient::Connection> connection) {
            printf("[NETWORKING] Connected to server's propertyreplication websocket!\n");
        };

        Globals::websocketClient->on_close = [](std::shared_ptr<WsClient::Connection> connection, int status, const std::string& reason) {
            printf("[NETWORKING] Disconnected from server's propertyreplication websocket!\n");
        };

        Globals::websocketClient->on_message = [](std::shared_ptr<WsClient::Connection> connection, std::shared_ptr<WsClient::InMessage> in_message) {
            //printf("[NETWORKING] Recv'd propertyreplication payload!\n");
            std::lock_guard lock(Globals::paylodMutex);

            Json::Value payload;
            Json::Reader reader;

            reader.parse(in_message.get()->string(), payload);
            
            Globals::payloadToApply = payload;
        };

        Globals::websocketClient->start();
    }

    void JoinServer() {
        EngineLogic::ExecConsoleCommand(L"open 127.0.0.1:6969");

        Sleep(5 * 1000);

        ConnectWebsocket();
    }
}

namespace Hooks{
    SafetyHookInline CreateChannel;

    UChannel* CreateChannelHook(UNetConnection* connection, uint8_t ChType, uint32_t openedLocally, int chIndex) {
        UChannel* ret = CreateChannel.call<UChannel*>(connection, ChType, openedLocally, chIndex);

        if (!openedLocally) {
            Globals::remoteChannels.push_back(ret);
        }

        return ret;
    }

    SafetyHookInline ProcessRemoteFunction;

    bool ProcessRemoteFunctionHook(AActor* actor, UFunction* function, void* params, void* stack) {
        if (!actor->WorldInfo) {
            actor->WorldInfo = UObject::FindObject<AWorldInfo>("WorldInfo Wishbone_P.TheWorld.PersistentLevel.WorldInfo");
        }

        bool ret = ProcessRemoteFunction.call<bool>(actor, function, params, stack);

        return ret;
    }

    SafetyHookInline WorldControlMessage;

    void WorldControlMessageHook(UWorld* world, UNetConnection* connection, uint8_t message, void* inbunch) {
        WorldControlMessage.call<void>(world, connection, message, inbunch);

        if (message == 0x0) {
            printf("[NETWORKING] Welcoming a new player!\n");

            reinterpret_cast<void* (*)(UWorld*, UNetConnection*)>(Globals::baseAddress + 0x045b060)(world, connection);
        }
        else if (message == 0x9) {
            printf("[NETWORKING] Spawning a new player!\n");

            UWorld* theWorld = UObject::FindObject<UWorld>("World Wishbone_P.TheWorld");
            FURL theURL = FURL();

            FUniqueNetId netID = FUniqueNetId();

            netID.bHasValue = true;

            static uint8_t id = 0x0;

            id++;

            netID.RawId[0] = id;

            FString err = FString();

            APoplarPlayerController* pc = reinterpret_cast<APoplarPlayerController * (__thiscall*)(UWorld * world, UPlayer * player, ENetRole RemoteRole, FURL * url, FUniqueNetId * netID, FString * err, uint8_t InNetPlayerIndex)>(Globals::baseAddress + 0x03ef7b0)(theWorld, connection, ENetRole::ROLE_AutonomousProxy, &theURL, &netID, &err, 0);

            connection->Actor = pc;

            pc->Player = connection;

            pc->RemoteRole = ENetRole::ROLE_AutonomousProxy;

            Globals::connections.push_back(connection);
        }
        else if (message == 0xf) {
            printf("[NETWORKING] New player ack'd!\n");
        }
    }

    SafetyHookInline GameEngineTick;

    void GameEngineTickHook(UGameEngine* engine, float DeltaTime) {
        if (Globals::websocketClient) { 
            ClientNetworking::TickNetClient();
        }

        GameEngineTick.call<void>(engine, DeltaTime);

        if (Globals::netDriver) {
            ServerNetworking::TickNetServer(Globals::netDriver);
        }
    }

    SafetyHookInline MainMenu;
    
    bool MainMenuHook(__int64 a1, __int64* a2, __int64 a3, __int64 a4, int a5, int a6, __int64* a7) {
        return 1;
    }

    SafetyHookInline ProcessEvent;

    void StartupCompletedHook() {
        SDKUtils::GetLastOfClass< UPoplarPressStartGFxMovie>()->ContinueToMenu();
    }

    void MainPanelClickedHook(uint32_t PanelId) {
        if (PanelId == 8) { // Dojo
            EngineLogic::ExecConsoleCommand(L"open Dojo_P");
        }
    }

    void ProcessEventHook(UObject* object, UFunction* function, void* params) {
        //printf("[PE] %s - %s\n", object->GetFullName().c_str(), function->GetFullName().c_str());

        /*
        if (function->FunctionFlags & FUNC_NetClient) {
            if (Globals::connections.size() > 0 && !ServerNetworking::GetActorChannelForActor((AActor*)object, Globals::connections[0])) {
                printf("[NETWORKING] Blocked RPC due to no channel!\n");
                return;
            }
        }
        */

        static UFunction* startupCompleteUFunction = nullptr;

        if (!startupCompleteUFunction)
            startupCompleteUFunction = UFunction::FindFunction("Function PoplarGame.PoplarPlayerManager.StartupProcessComplete");

        if (function == startupCompleteUFunction) {
            StartupCompletedHook();
            return;
        }

        static UFunction* mainPanelClickedUFunction = nullptr;

        if (!mainPanelClickedUFunction)
            mainPanelClickedUFunction = UFunction::FindFunction("Function PoplarGame.PoplarFrontendScreenMainGFxObject.HandleMainPanelButtonClicked");

        if (function == mainPanelClickedUFunction) {
            MainPanelClickedHook(reinterpret_cast<UPoplarFrontendScreenMainGFxObject_execHandleMainPanelButtonClicked_Params*>(params)->PanelId);
            //return;
        }

        static UFunction* refreshInventoryUFunction = nullptr;

        if (!refreshInventoryUFunction)
            refreshInventoryUFunction = UFunction::FindFunction("Function PoplarGame.PoplarCommandGFxMovie.OnRefreshInventoryComplete");

        if (function == refreshInventoryUFunction) {
            reinterpret_cast<UPoplarCommandGFxMovie_execOnRefreshInventoryComplete_Params*>(params)->ServiceResult = 0;
        }

        static UFunction* readStatsUFunction = nullptr;

        if (!readStatsUFunction)
            readStatsUFunction = UFunction::FindFunction("Function PoplarGame.PoplarCommandGFxMovie.ReadPlayersStatsDataComplete");

        if (function == readStatsUFunction) {
            reinterpret_cast<UPoplarCommandGFxMovie_execReadPlayersStatsDataComplete_Params*>(params)->ServiceResult = 0;
        }

        //Function PoplarGame.PoplarCommandGFxMovie.ReadPlayersStatsDataComplete

        return ProcessEvent.call<void>(object, function, params);
    }

    SafetyHookInline Base;

    char BaseHook(__int64 a1, __int64 a2) {
        return 1;
    }
}

namespace Init {
    void Globals() {
        Globals::baseAddress = (size_t)GetModuleHandleA("Battleborn.exe");

        GObjects = reinterpret_cast<TArray<UObject*>*>(Globals::baseAddress + (size_t)0x035152D0);
        GNames = reinterpret_cast<TArray<FNameEntry*>*>(Globals::baseAddress + (size_t)0x03515228);
    }

    void Console() {
        AllocConsole();
        FILE* fileOut = NULL;
        FILE* fileErr = NULL;
        FILE* fileIn = NULL;
        freopen_s(&fileOut, "CONOUT$", "w", stdout);
        freopen_s(&fileErr, "CONOUT$", "w", stderr);
        freopen_s(&fileIn, "CONIN$", "r", stdin);
    }

    void Hooks() {
        Hooks::MainMenu = safetyhook::create_inline((void*)(Globals::baseAddress + 0x127D860), &Hooks::MainMenuHook);
        Hooks::ProcessEvent = safetyhook::create_inline((void*)(Globals::baseAddress + 0x109ca0), &Hooks::ProcessEventHook);
        Hooks::GameEngineTick = safetyhook::create_inline((void*)(Globals::baseAddress + 0x0207e10), &Hooks::GameEngineTickHook);
        Hooks::WorldControlMessage = safetyhook::create_inline((void*)(Globals::baseAddress + 0x045c540), &Hooks::WorldControlMessageHook);
        Hooks::ProcessRemoteFunction = safetyhook::create_inline((void*)(Globals::baseAddress + 0x0728fd0), &Hooks::ProcessRemoteFunctionHook);
    }
}

void MainThread() {
    Init::Globals();
    Init::Console();
    Init::Hooks();

    bool listening = false;
    bool connected = false;

    while (true) {
        if (GetAsyncKeyState(VK_F6)) {
            EngineLogic::DontPauseOnLossOfFocus();
            listening = true;
            EngineLogic::ExecConsoleCommand(L"open Wishbone_P");

            Sleep(10 * 1000);

            ServerNetworking::InitListen();

            while (GetAsyncKeyState(VK_F6)) {

            }
        }

        if (GetAsyncKeyState(VK_F7) && !listening && !connected) {
            connected = true;
            EngineLogic::DontPauseOnLossOfFocus();
            ClientNetworking::JoinServer();

            while (GetAsyncKeyState(VK_F7)) {

            }
        }
    }
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        std::thread t(MainThread);
        t.detach();
    }

    return TRUE;
}

