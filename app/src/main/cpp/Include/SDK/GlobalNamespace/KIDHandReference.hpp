#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct KIDHandReference : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDHandReference");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetLeftHand() {
            static BNM::Method<::GameObject*> _method = GetClass().GetMethod(O("get_LeftHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GameObject* GetRightHand() {
            static BNM::Method<::GameObject*> _method = GetClass().GetMethod(O("get_RightHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GameObject* GetLeftHand_f() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_leftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GameObject* GetLeftHandRef() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_leftHandRef"));
            return _field.Get();
        }
        ::GameObject* GetRightHand_f() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_rightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GameObject* GetRightHandRef() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_rightHandRef"));
            return _field.Get();
        }
        void SetLeftHand(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_leftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLeftHandRef(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_leftHandRef"));
            _field.Set(value);
        }
        void SetRightHand(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_rightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRightHandRef(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_rightHandRef"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GameObject* get_LeftHand() {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("get_LeftHand"));
            return _m.Call();
        }
        static ::GameObject* get_RightHand() {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("get_RightHand"));
            return _m.Call();
        }
    };
}
