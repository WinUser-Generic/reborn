#include "Engine.hpp"

namespace Engine {
    void* EngineMalloc(size_t size) {
        return reinterpret_cast<void* (*)(size_t)>(Globals::baseAddress + 0xD2E0A0)(size);
    }

    UObject* StaticConstructObject(UClass* theClass, UObject* outer) {
        FName* name = (FName*)EngineMalloc(sizeof(FName));
        *name = FName();
        return reinterpret_cast<UObject * (*)(UClass*, UObject * outer, FName * name, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8, int a9)>(Globals::baseAddress + 0x8C050)(theClass, outer, name, 0, 0, 0, 0, 0, 0);
    }

    UObject* ScuffedDuplicateObject(UObject* InObject, UObject* Outer) {
        UObject* ret = reinterpret_cast<UObject * (*)(UObject * SourceObject, UObject * RootObject, UObject * DestOuter, const wchar_t* DestName, __int64 FlagMask, UClass * DestClass)>(Globals::baseAddress + 0x8C390)(InObject, InObject, Outer, L"None", 0x0, InObject->Class);
        return ret;
    }

    void ExecConsoleCommand(const wchar_t* command) {
        reinterpret_cast<void* (*)(uintptr_t, const wchar_t*, uintptr_t)>(Globals::baseAddress + 0x01fca00)((__int64)((*GObjects)[0]) + 0x25ebde8, command, 0);
    }

    void DontPauseOnLossOfFocus() {
        SDKUtils::GetLastOfClass<UEngine>()->bPauseOnLossOfFocus = false;
    }

    FString* MakeFString(const wchar_t* contents) {
        size_t length = wcslen(contents);

        FString* string = (FString*)EngineMalloc(sizeof(FString));

        *string = FString();

        string->ArrayCount = length;
        string->ArrayMax = string->ArrayCount;

        void* data = EngineMalloc(sizeof(wchar_t) * (string->ArrayMax + 1));

        memcpy_s(data, sizeof(wchar_t) * (string->ArrayMax + 1), contents, (length + 1) * sizeof(wchar_t));

        string->ArrayData = (wchar_t*)data;

        return string;
    }

    void* ScaleformMalloc(unsigned int size) {
        return reinterpret_cast<void* (*)(long poolId, __int64, __int64 size, __int64 align, __int64, int, __int64, __int64, int, __int64)>(Globals::baseAddress + 0xD2E160)(-2, 0, size, 0x1, 0x8, 0, 0x321001F, Globals::baseAddress + 0x26b62fa, 0, Globals::baseAddress + 0x26b62fa);
    }
}
