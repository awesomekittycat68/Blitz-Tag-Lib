#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ObservableBehavior : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ObservableBehavior");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetFirstFrame() {
            static BNM::Field<bool> _field = GetClass().GetField(O("firstFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetObservable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("observable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ObservableBehaviorRule* GetObservableBehaviorRule() {
            static BNM::Field<::GlobalNamespace::ObservableBehaviorRule*> _field = GetClass().GetField(O("observableBehaviorRule"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFirstFrame(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("firstFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObservable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("observable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObservableBehaviorRule(::GlobalNamespace::ObservableBehaviorRule* value) {
            static BNM::Field<::GlobalNamespace::ObservableBehaviorRule*> _field = GetClass().GetField(O("observableBehaviorRule"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ObservableSliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ObservableSliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnBecameObservable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBecameObservable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
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
        void OnLostObservable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLostObservable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UnityOnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnityOnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UnityOnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnityOnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
