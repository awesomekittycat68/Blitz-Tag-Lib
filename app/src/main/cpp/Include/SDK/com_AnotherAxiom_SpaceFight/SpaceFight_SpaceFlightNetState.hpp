#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace com_AnotherAxiom_SpaceFight {
    struct SpaceFight_SpaceFlightNetState : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("com.AnotherAxiom.SpaceFight", "SpaceFight").GetInnerClass("SpaceFlightNetState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetP1LocX() {
            static BNM::Field<float> _field = GetClass().GetField(O("P1LocX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetP1LocY() {
            static BNM::Field<float> _field = GetClass().GetField(O("P1LocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetP1PrLocX() {
            static BNM::Field<float> _field = GetClass().GetField(O("P1PrLocX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetP1PrLocY() {
            static BNM::Field<float> _field = GetClass().GetField(O("P1PrLocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetP1Rot() {
            static BNM::Field<float> _field = GetClass().GetField(O("P1Rot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetP2LocX() {
            static BNM::Field<float> _field = GetClass().GetField(O("P2LocX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetP2LocY() {
            static BNM::Field<float> _field = GetClass().GetField(O("P2LocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetP2PrLocX() {
            static BNM::Field<float> _field = GetClass().GetField(O("P2PrLocX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetP2PrLocY() {
            static BNM::Field<float> _field = GetClass().GetField(O("P2PrLocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetP2Rot() {
            static BNM::Field<float> _field = GetClass().GetField(O("P2Rot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetP1LocX(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("P1LocX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetP1LocY(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("P1LocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetP1PrLocX(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("P1PrLocX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetP1PrLocY(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("P1PrLocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetP1Rot(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("P1Rot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetP2LocX(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("P2LocX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetP2LocY(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("P2LocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetP2PrLocX(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("P2PrLocX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetP2PrLocY(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("P2PrLocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetP2Rot(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("P2Rot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool Equals_1(::com_AnotherAxiom_SpaceFight::SpaceFight_SpaceFlightNetState other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
    };
}
