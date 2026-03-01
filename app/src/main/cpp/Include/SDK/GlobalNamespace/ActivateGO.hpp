#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PlayerPrefFlags_Flag.hpp"

namespace GlobalNamespace {
    struct ActivateGO : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ActivateGO");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("active"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PlayerPrefFlags_Flag GetFlag() {
            static BNM::Field<::GlobalNamespace::PlayerPrefFlags_Flag> _field = GetClass().GetField(O("flag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFlashes() {
            static BNM::Field<int> _field = GetClass().GetField(O("flashes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFlashing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("flashing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("layerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTargetGO() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("targetGO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("active"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlag(::GlobalNamespace::PlayerPrefFlags_Flag value) {
            static BNM::Field<::GlobalNamespace::PlayerPrefFlags_Flag> _field = GetClass().GetField(O("flag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlashes(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("flashes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlashing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("flashing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("layerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetGO(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("targetGO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void OnFlagChange(::GlobalNamespace::PlayerPrefFlags_Flag f, bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFlagChange"), {"f", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(f, value);
        }
        void SetGOsActive(int fls) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGOsActive"), {"fls"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fls);
        }
        void toggle(::BNM::Structures::Mono::List<::Renderer*>* renderers, bool state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("toggle"), {"renderers", "state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(renderers, state);
        }
    };
}
