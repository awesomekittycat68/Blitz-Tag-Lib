#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaFireballControllerManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaFireballControllerManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetHasInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLeftHand() {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLeftHandLastState() {
            static BNM::Field<float> _field = GetClass().GetField(O("leftHandLastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRightHand() {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRightHandLastState() {
            static BNM::Field<float> _field = GetClass().GetField(O("rightHandLastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetThrowingThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("throwingThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHasInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHand(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandLastState(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("leftHandLastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHand(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandLastState(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rightHandLastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowingThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("throwingThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CreateFireball(bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateFireball"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand);
        }
        void TryThrowFireball(bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryThrowFireball"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
