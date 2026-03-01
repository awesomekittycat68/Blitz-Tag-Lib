#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "IHandEffectsTrigger_Mode.hpp"

namespace TagEffects {
    struct TagEffectTester : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("TagEffects", "TagEffectTester");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::TagEffects::TagEffectPack* GetCosmeticEffectPack() {
            static BNM::Method<::TagEffects::TagEffectPack*> _method = GetClass().GetMethod(O("get_CosmeticEffectPack"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::TagEffects::IHandEffectsTrigger_Mode GetEffectMode() {
            static BNM::Method<::TagEffects::IHandEffectsTrigger_Mode> _method = GetClass().GetMethod(O("get_EffectMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetFingersDown() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_FingersDown"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetFingersUp() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_FingersUp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetMagnitude() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Magnitude"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Action<::TagEffects::IHandEffectsTrigger_Mode>* GetOnTrigger() {
            static BNM::Method<::BNM::Structures::Mono::Action<::TagEffects::IHandEffectsTrigger_Mode>*> _method = GetClass().GetMethod(O("get_OnTrigger"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOnTrigger(::BNM::Structures::Mono::Action<::TagEffects::IHandEffectsTrigger_Mode>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_OnTrigger"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _method = GetClass().GetMethod(O("get_Rig"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetRightHand() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_RightHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetStatic() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Static"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Transform* GetTransform() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_Transform"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_Velocity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsStatic() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isStatic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsStatic(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isStatic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::TagEffects::TagEffectPack* get_CosmeticEffectPack() {
            static BNM::Method<::TagEffects::TagEffectPack*> _m = GetClass().GetMethod(O("get_CosmeticEffectPack"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::TagEffects::IHandEffectsTrigger_Mode get_EffectMode() {
            static BNM::Method<::TagEffects::IHandEffectsTrigger_Mode> _m = GetClass().GetMethod(O("get_EffectMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_FingersDown() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_FingersDown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_FingersUp() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_FingersUp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_Magnitude() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Magnitude"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Action<::TagEffects::IHandEffectsTrigger_Mode>* get_OnTrigger() {
            static BNM::Method<::BNM::Structures::Mono::Action<::TagEffects::IHandEffectsTrigger_Mode>*> _m = GetClass().GetMethod(O("get_OnTrigger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::VRRig* get_Rig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("get_Rig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_RightHand() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_RightHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_Static() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Static"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* get_Transform() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_Transform"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_Velocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_Velocity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        bool InTriggerZone(TP0 t) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("InTriggerZone"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t);
        }
        template <typename TP0 = void*>
        void OnTriggerEntered(TP0 other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEntered"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void set_OnTrigger(::BNM::Structures::Mono::Action<::TagEffects::IHandEffectsTrigger_Mode>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_OnTrigger"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
