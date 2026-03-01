#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AnimStateHash.hpp"
#include "TimeSince.hpp"

namespace GlobalNamespace {
    struct SetStateConditional : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SetStateConditional");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetDidSetup() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_didSetup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AnimStateHash GetSetToID() {
            static BNM::Field<::GlobalNamespace::AnimStateHash> _field = GetClass().GetField(O("_setToID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TimeSince GetSinceEnter() {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_sinceEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("delay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Animator* GetParentAnimator() {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("parentAnimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSetToState() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("setToState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDidSetup(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_didSetup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetToID(::GlobalNamespace::AnimStateHash value) {
            static BNM::Field<::GlobalNamespace::AnimStateHash> _field = GetClass().GetField(O("_setToID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSinceEnter(::GlobalNamespace::TimeSince value) {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_sinceEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("delay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentAnimator(::Animator* value) {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("parentAnimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetToState(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("setToState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP1 = void*>
        bool CanSetState(::Animator* animator, TP1 stateInfo, int layerIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanSetState"), {"animator", "stateInfo", "layerIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(animator, stateInfo, layerIndex);
        }
        template <typename TP1 = void*>
        void OnStateEnter(::Animator* animator, TP1 stateInfo, int layerIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStateEnter"), {"animator", "stateInfo", "layerIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(animator, stateInfo, layerIndex);
        }
        template <typename TP1 = void*>
        void OnStateUpdate(::Animator* animator, TP1 stateInfo, int layerIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStateUpdate"), {"animator", "stateInfo", "layerIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(animator, stateInfo, layerIndex);
        }
        void OnValidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP1 = void*>
        void Setup(::Animator* animator, TP1 stateInfo, int layerIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"animator", "stateInfo", "layerIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(animator, stateInfo, layerIndex);
        }
    };
}
