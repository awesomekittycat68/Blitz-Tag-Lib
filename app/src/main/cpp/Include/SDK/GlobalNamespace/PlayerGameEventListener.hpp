#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PlayerGameEvents_EventType.hpp"

namespace GlobalNamespace {
    struct PlayerGameEventListener : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PlayerGameEventListener");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCooldownEnd() {
            static BNM::Field<float> _field = GetClass().GetField(O("_cooldownEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PlayerGameEvents_EventType GetEventType() {
            static BNM::Field<::GlobalNamespace::PlayerGameEvents_EventType> _field = GetClass().GetField(O("eventType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFilter() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("filter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnGameEvent() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onGameEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnGameEventCounted() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onGameEventCounted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCooldownEnd(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_cooldownEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventType(::GlobalNamespace::PlayerGameEvents_EventType value) {
            static BNM::Field<::GlobalNamespace::PlayerGameEvents_EventType> _field = GetClass().GetField(O("eventType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFilter(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("filter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGameEvent(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onGameEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGameEventCounted(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onGameEventCounted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        void OnGameEventTriggered(::BNM::Structures::Mono::String* eventName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGameEventTriggered"), {"eventName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventName);
        }
        void OnGameEventTriggered(::BNM::Structures::Mono::String* eventName, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGameEventTriggered"), {"eventName", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventName, count);
        }
        void OnGameMoveEventTriggered(float distance, float speed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGameMoveEventTriggered"), {"distance", "speed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(distance, speed);
        }
        void SubscribeToEvents() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SubscribeToEvents"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UnsubscribeFromEvents() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnsubscribeFromEvents"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
