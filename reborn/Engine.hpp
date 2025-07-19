#pragma once

#include "BB/SdkHeaders.hpp"
#include "Globals.hpp"
#include "Utils.hpp"

namespace Engine {
    void* EngineMalloc(size_t size);

    UObject* StaticConstructObject(UClass* theClass, UObject* outer);

    UObject* ScuffedDuplicateObject(UObject* InObject, UObject* Outer);

    void ExecConsoleCommand(const wchar_t* command);

    void DontPauseOnLossOfFocus();

    FString* MakeFString(const wchar_t* contents);

    void* ScaleformMalloc(unsigned int size);
}