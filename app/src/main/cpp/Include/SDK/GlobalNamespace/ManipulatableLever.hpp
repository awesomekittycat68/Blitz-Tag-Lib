#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ManipulatableObject.hpp"

namespace GlobalNamespace {
    struct ManipulatableLever : ::GlobalNamespace::ManipulatableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ManipulatableLever");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetBreakDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("breakDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLeverGrip() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leverGrip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Matrix4x4 GetLocalSpace() {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("localSpace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("minAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::ManipulatableLever_LeverNotch*>* GetNotches() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ManipulatableLever_LeverNotch*>*> _field = GetClass().GetField(O("notches"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBreakDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("breakDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeverGrip(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leverGrip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalSpace(::BNM::Structures::Unity::Matrix4x4 value) {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("localSpace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNotches(::BNM::Structures::Mono::Array<::GlobalNamespace::ManipulatableLever_LeverNotch*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ManipulatableLever_LeverNotch*>*> _field = GetClass().GetField(O("notches"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int GetNotch() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNotch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetValue() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnHeldUpdate(::GameObject* hand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHeldUpdate"), {"hand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hand);
        }
        void SetNotch(int notchValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNotch"), {"notchValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(notchValue);
        }
        void SetValue(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetValue"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool ShouldHandDetach(::GameObject* hand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldHandDetach"), {"hand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hand);
        }
    };
}
