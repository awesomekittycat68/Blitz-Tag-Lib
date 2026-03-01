#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TimeSince.hpp"
#include "UnityTag.hpp"

namespace GlobalNamespace {
    struct TaggedColliderTrigger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TaggedColliderTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::TimeSince GetSinceLastEnter() {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_sinceLastEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TimeSince GetSinceLastExit() {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_sinceLastExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEnterHysteresis() {
            static BNM::Field<float> _field = GetClass().GetField(O("enterHysteresis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExitHysteresis() {
            static BNM::Field<float> _field = GetClass().GetField(O("exitHysteresis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnEnter() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnExit() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::UnityTag GetTag() {
            static BNM::Field<::GlobalNamespace::UnityTag> _field = GetClass().GetField(O("tag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSinceLastEnter(::GlobalNamespace::TimeSince value) {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_sinceLastEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSinceLastExit(::GlobalNamespace::TimeSince value) {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_sinceLastExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnterHysteresis(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("enterHysteresis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExitHysteresis(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("exitHysteresis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnEnter(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnExit(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTag(::GlobalNamespace::UnityTag value) {
            static BNM::Field<::GlobalNamespace::UnityTag> _field = GetClass().GetField(O("tag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
    };
}
