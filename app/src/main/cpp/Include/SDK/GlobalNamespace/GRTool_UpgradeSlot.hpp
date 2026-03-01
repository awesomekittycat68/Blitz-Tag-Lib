#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRTool_UpgradeSlot : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRTool").GetInnerClass("UpgradeSlot");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GameObject*>* GetDefaultVisibleItems() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("DefaultVisibleItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRTool_Upgrade* GetInstalledItem() {
            static BNM::Field<::GlobalNamespace::GRTool_Upgrade*> _field = GetClass().GetField(O("installedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDefaultVisibleItems(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("DefaultVisibleItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstalledItem(::GlobalNamespace::GRTool_Upgrade* value) {
            static BNM::Field<::GlobalNamespace::GRTool_Upgrade*> _field = GetClass().GetField(O("installedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
