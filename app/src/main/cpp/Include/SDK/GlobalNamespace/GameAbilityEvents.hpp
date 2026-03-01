#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GameAbilityEvents : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameAbilityEvents");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GameAbilityEvent*>* GetEvents() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameAbilityEvent*>*> _field = GetClass().GetField(O("events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameAbilityEvent* GetStartEvent() {
            static BNM::Field<::GlobalNamespace::GameAbilityEvent*> _field = GetClass().GetField(O("startEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameAbilityEvent* GetStopEvent() {
            static BNM::Field<::GlobalNamespace::GameAbilityEvent*> _field = GetClass().GetField(O("stopEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEvents(::BNM::Structures::Mono::List<::GlobalNamespace::GameAbilityEvent*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameAbilityEvent*>*> _field = GetClass().GetField(O("events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartEvent(::GlobalNamespace::GameAbilityEvent* value) {
            static BNM::Field<::GlobalNamespace::GameAbilityEvent*> _field = GetClass().GetField(O("startEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStopEvent(::GlobalNamespace::GameAbilityEvent* value) {
            static BNM::Field<::GlobalNamespace::GameAbilityEvent*> _field = GetClass().GetField(O("stopEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnAbilityStart(float abilityTime, ::AudioSource* audioSource) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAbilityStart"), {"abilityTime", "audioSource"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(abilityTime, audioSource);
        }
        void OnAbilityStop(float abilityTime, ::AudioSource* audioSource) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAbilityStop"), {"abilityTime", "audioSource"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(abilityTime, audioSource);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TryPlay(float abilityTime, ::AudioSource* audioSource) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryPlay"), {"abilityTime", "audioSource"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(abilityTime, audioSource);
        }
    };
}
