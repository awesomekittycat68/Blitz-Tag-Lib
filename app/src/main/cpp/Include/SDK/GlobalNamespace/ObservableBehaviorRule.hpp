#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ObservableBehaviorRule : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ObservableBehaviorRule");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetInverseObservable() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InverseObservable"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector2 GetObservableDistanceRange() {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _method = GetClass().GetMethod(O("get_ObservableDistanceRange"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector2 GetObservableDotRange() {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _method = GetClass().GetMethod(O("get_ObservableDotRange"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetInverseObservable_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inverseObservable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetObservableDistanceRange_f() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("observableDistanceRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetObservableDotRange_f() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("observableDotRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInverseObservable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inverseObservable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObservableDistanceRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("observableDistanceRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObservableDotRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("observableDotRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_InverseObservable() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InverseObservable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector2 get_ObservableDistanceRange() {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("get_ObservableDistanceRange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector2 get_ObservableDotRange() {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("get_ObservableDotRange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
