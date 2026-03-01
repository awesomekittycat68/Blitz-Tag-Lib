#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipWebSocketRetryQueue_RetryingWebSocket : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipWebSocketRetryQueue").GetInnerClass("RetryingWebSocket");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetLastSetTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_lastSetTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRetryEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_retryEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeLeft() {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ActiveWebSocket* GetWebsocket() {
            static BNM::Field<::GlobalNamespace::ActiveWebSocket*> _field = GetClass().GetField(O("_websocket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLastSetTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_lastSetTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetryEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_retryEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeLeft(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool Equals_1(::GlobalNamespace::ActiveWebSocket* other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Retry() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Retry"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick(float deltaSeconds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"), {"deltaSeconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(deltaSeconds);
        }
    };
}
