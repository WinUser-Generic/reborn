#pragma once

#include <vector>
#include <string>
#include <iostream>

#include "BB/SdkHeaders.hpp"

namespace SDKUtils {
    template<typename T>
    inline T* GetLastOfClass() {
        UClass* theClass = T::StaticClass();
        for (int i = UObject::GObjObjects()->size() - 1; i >= 0; i--) {
            UObject* obj = UObject::GObjObjects()->at(i);

            if (obj && obj->IsA(theClass))
                return (T*)obj;
        }

        return nullptr;
    }

    template<typename T>
    inline std::vector<T*> GetAllOfClass() {
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
    inline void ListAllOfClass() {
        UClass* theClass = T::StaticClass();
        for (int i = 0; i < UObject::GObjObjects()->size(); i++) {
            UObject* obj = UObject::GObjObjects()->at(i);

            if (obj && obj->IsA(theClass))
                printf("%s\n", obj->GetFullName().c_str());
        }
    }
}

namespace GameUtils {
    inline int RarityStringToRarity(std::string rarityString) {
        std::string normalRarityString = rarityString;

        if (normalRarityString.contains("VeryRare")) {
            return 4;
        }
        else if (normalRarityString.contains("Uncommon")) {
            return 2;
        }
        else if (normalRarityString.contains("Rare")) {
            return 3;
        }
        else if (normalRarityString.contains("Common")) {
            return 1;
        }
        else if (normalRarityString.contains("Legendary")) {
            return 5;
        }
        else {
            std::cout << "Unrecognized Rarity: " << normalRarityString << std::endl;
            return 5;
        }
    }
}