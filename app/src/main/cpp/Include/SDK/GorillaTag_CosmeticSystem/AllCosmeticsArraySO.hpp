#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTag/GTDirectAssetRef$1.hpp"

namespace GorillaTag_CosmeticSystem {
    struct AllCosmeticsArraySO : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.CosmeticSystem", "AllCosmeticsArraySO");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag_CosmeticSystem::CosmeticSO* SearchForCosmeticSO(::BNM::Structures::Mono::String* playfabId) {
            static BNM::Method<::GorillaTag_CosmeticSystem::CosmeticSO*> _m = GetClass().GetMethod(O("SearchForCosmeticSO"), {"playfabId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playfabId);
        }
    };
}
