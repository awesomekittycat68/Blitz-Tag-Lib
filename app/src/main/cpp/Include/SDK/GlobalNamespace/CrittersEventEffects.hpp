#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersManager_CritterEvent.hpp"

namespace GlobalNamespace {
    struct CrittersEventEffects : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersEventEffects");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersManager_CritterEvent, ::GameObject*>* GetEffectResponse() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersManager_CritterEvent, ::GameObject*>*> _field = GetClass().GetField(O("effectResponse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::CrittersEventEffects_CrittersEventResponse*>* GetEventEffects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CrittersEventEffects_CrittersEventResponse*>*> _field = GetClass().GetField(O("eventEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersManager* GetManager() {
            static BNM::Field<::GlobalNamespace::CrittersManager*> _field = GetClass().GetField(O("manager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEffectResponse(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersManager_CritterEvent, ::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::CrittersManager_CritterEvent, ::GameObject*>*> _field = GetClass().GetField(O("effectResponse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventEffects(::BNM::Structures::Mono::Array<::GlobalNamespace::CrittersEventEffects_CrittersEventResponse*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CrittersEventEffects_CrittersEventResponse*>*> _field = GetClass().GetField(O("eventEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetManager(::GlobalNamespace::CrittersManager* value) {
            static BNM::Field<::GlobalNamespace::CrittersManager*> _field = GetClass().GetField(O("manager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleReceivedEvent(::GlobalNamespace::CrittersManager_CritterEvent eventType, int sourceActor, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleReceivedEvent"), {"eventType", "sourceActor", "position", "rotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventType, sourceActor, position, rotation);
        }
    };
}
