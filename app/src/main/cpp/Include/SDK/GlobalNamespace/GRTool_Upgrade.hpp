#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRToolProgressionManager_ToolParts.hpp"

namespace GlobalNamespace {
    struct GRTool_Upgrade : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRTool").GetInnerClass("Upgrade");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GRBonusEntry*>* GetBonusEffects() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRBonusEntry*>*> _field = GetClass().GetField(O("bonusEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSlot() {
            static BNM::Field<int> _field = GetClass().GetField(O("Slot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolProgressionManager_ToolParts GetUpgradeType() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager_ToolParts> _field = GetClass().GetField(O("UpgradeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetVisibleItem() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("VisibleItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBonusEffects(::BNM::Structures::Mono::List<::GlobalNamespace::GRBonusEntry*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRBonusEntry*>*> _field = GetClass().GetField(O("bonusEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlot(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Slot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradeType(::GlobalNamespace::GRToolProgressionManager_ToolParts value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager_ToolParts> _field = GetClass().GetField(O("UpgradeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisibleItem(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("VisibleItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
