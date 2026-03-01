#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CameraShaker : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CameraShaker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_HaltRequested(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_HaltRequested"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_HaltRequested(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_HaltRequested"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_ShakeRequested(::BNM::Structures::Mono::Action<float, float, ::BNM::Structures::Unity::Vector2, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_ShakeRequested"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_ShakeRequested(::BNM::Structures::Mono::Action<float, float, ::BNM::Structures::Unity::Vector2, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_ShakeRequested"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        float GetDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetFreqRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("freqRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetHaltRequested() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("HaltRequested"));
            return _field.Get();
        }
        float GetMagnitude() {
            static BNM::Field<float> _field = GetClass().GetField(O("magnitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRollOff() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rollOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRumbling() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rumbling"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<float, float, ::BNM::Structures::Unity::Vector2, bool>* GetShakeRequested() {
            static BNM::Field<::BNM::Structures::Mono::Action<float, float, ::BNM::Structures::Unity::Vector2, bool>*> _field = GetClass().GetField(O("ShakeRequested"));
            return _field.Get();
        }
        float GetStopTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("stopTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFreqRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("freqRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHaltRequested(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("HaltRequested"));
            _field.Set(value);
        }
        void SetMagnitude(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("magnitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRollOff(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rollOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRumbling(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rumbling"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetShakeRequested(::BNM::Structures::Mono::Action<float, float, ::BNM::Structures::Unity::Vector2, bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<float, float, ::BNM::Structures::Unity::Vector2, bool>*> _field = GetClass().GetField(O("ShakeRequested"));
            _field.Set(value);
        }
        void SetStopTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stopTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void _HaltRequested() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_HaltRequested"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _ShakeRequested(float _duration, float _magnitude, ::BNM::Structures::Unity::Vector2 _freqRange, bool _rollOff) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_ShakeRequested"), {"_duration", "_magnitude", "_freqRange", "_rollOff"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_duration, _magnitude, _freqRange, _rollOff);
        }
        static void add_HaltRequested_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_HaltRequested"), {"value"});
            _m.Call(value);
        }
        static void add_ShakeRequested_1(::BNM::Structures::Mono::Action<float, float, ::BNM::Structures::Unity::Vector2, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_ShakeRequested"), {"value"});
            _m.Call(value);
        }
        ::BNM::Coroutine::IEnumerator* crRumble() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("crRumble"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void Halt() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Halt"));
            _m.Call();
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
        static void remove_HaltRequested_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_HaltRequested"), {"value"});
            _m.Call(value);
        }
        static void remove_ShakeRequested_1(::BNM::Structures::Mono::Action<float, float, ::BNM::Structures::Unity::Vector2, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_ShakeRequested"), {"value"});
            _m.Call(value);
        }
        static void Shake(float duration, float magnitude) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Shake"), {"duration", "magnitude"});
            _m.Call(duration, magnitude);
        }
        static void Shake(float duration, float magnitude, ::BNM::Structures::Unity::Vector2 freqRange) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Shake"), {"duration", "magnitude", "freqRange"});
            _m.Call(duration, magnitude, freqRange);
        }
        static void Shake(float duration, float magnitude, ::BNM::Structures::Unity::Vector2 freqRange, bool rollOffOverDuration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Shake"), {"duration", "magnitude", "freqRange", "rollOffOverDuration"});
            _m.Call(duration, magnitude, freqRange, rollOffOverDuration);
        }
    };
}
