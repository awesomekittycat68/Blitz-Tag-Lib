#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CustomMapCosmeticItem.hpp"

namespace GorillaTagScripts_VirtualStumpCustomMaps {
    struct CustomMapCosmeticsData_$$c__DisplayClass9_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapCosmeticsData").GetInnerClass("<>c__DisplayClass9_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapCosmeticItem GetItemFromJson() {
            static BNM::Field<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapCosmeticItem> _field = GetClass().GetField(O("itemFromJson"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetItemFromJson(::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapCosmeticItem value) {
            static BNM::Field<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapCosmeticItem> _field = GetClass().GetField(O("itemFromJson"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
