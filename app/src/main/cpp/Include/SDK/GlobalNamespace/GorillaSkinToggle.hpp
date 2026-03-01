#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaSkinToggle_ColoringRule.hpp"

namespace GlobalNamespace {
    struct GorillaSkinToggle : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaSkinToggle");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetApplied() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_applied"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GorillaSkin* GetActiveSkin() {
            static BNM::Field<::GlobalNamespace::GorillaSkin*> _field = GetClass().GetField(O("_activeSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplied_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_applied"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaSkin* GetSkin() {
            static BNM::Field<::GlobalNamespace::GorillaSkin*> _field = GetClass().GetField(O("_skin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaSkinToggle_ColoringRule>* GetColoringRules() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaSkinToggle_ColoringRule>*> _field = GetClass().GetField(O("coloringRules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveSkin(::GlobalNamespace::GorillaSkin* value) {
            static BNM::Field<::GlobalNamespace::GorillaSkin*> _field = GetClass().GetField(O("_activeSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplied(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_applied"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkin(::GlobalNamespace::GorillaSkin* value) {
            static BNM::Field<::GlobalNamespace::GorillaSkin*> _field = GetClass().GetField(O("_skin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColoringRules(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaSkinToggle_ColoringRule>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaSkinToggle_ColoringRule>*> _field = GetClass().GetField(O("coloringRules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Apply() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Apply"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ApplyToMannequin(::GameObject* mannequin, bool swapMesh) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyToMannequin"), {"mannequin", "swapMesh"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mannequin, swapMesh);
        }
        bool get_applied() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_applied"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPlayerColorChanged(::BNM::Structures::Unity::Color playerColor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerColorChanged"), {"playerColor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerColor);
        }
        void Remove() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Remove"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
