#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PropHuntPools_$$c__DisplayClass53_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PropHuntPools").GetInnerClass("<>c__DisplayClass53_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetCosmeticId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cosmeticId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::CosmeticSO* GetCosmeticSO() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticSO*> _field = GetClass().GetField(O("cosmeticSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCosmeticId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cosmeticId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticSO(::GorillaTag_CosmeticSystem::CosmeticSO* value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticSO*> _field = GetClass().GetField(O("cosmeticSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
