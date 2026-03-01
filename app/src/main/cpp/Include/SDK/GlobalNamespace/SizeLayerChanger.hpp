#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SizeLayerChanger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SizeLayerChanger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetSizeLayerMask() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SizeLayerMask"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetAffectLayerA() {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAffectLayerB() {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAffectLayerC() {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAffectLayerD() {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerD"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplyOnTriggerEnter() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyOnTriggerEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplyOnTriggerExit() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyOnTriggerExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsAssurance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isAssurance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("minScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTriggerWithBodyCollider() {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerWithBodyCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAffectLayerA(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAffectLayerB(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAffectLayerC(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAffectLayerD(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerD"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyOnTriggerEnter(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyOnTriggerEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyOnTriggerExit(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyOnTriggerExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsAssurance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isAssurance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerWithBodyCollider(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerWithBodyCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_SizeLayerMask() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SizeLayerMask"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
