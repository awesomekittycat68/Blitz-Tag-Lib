#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticsController_CosmeticItem.hpp"

namespace GorillaNetworking {
    struct CosmeticsController_CosmeticSet_$$c__DisplayClass32_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "CosmeticsController").GetInnerClass("CosmeticSet").GetInnerClass("<>c__DisplayClass32_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaNetworking::CosmeticsController_CosmeticItem GetItem() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("item"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetItem(::GorillaNetworking::CosmeticsController_CosmeticItem value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("item"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
