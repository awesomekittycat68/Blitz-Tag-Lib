#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../TagEffects/IHandEffectsTrigger_Mode.hpp"

namespace GlobalNamespace {
    struct HandEffectsTester : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HandEffectsTester");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

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
        ::TagEffects::TagEffectPack* GetCosmeticEffectPack() {
            static BNM::Field<::TagEffects::TagEffectPack*> _field = GetClass().GetField(O("cosmeticEffectPack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsStatic() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isStatic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TagEffects::IHandEffectsTrigger_Mode GetMode() {
            static BNM::Field<::TagEffects::IHandEffectsTrigger_Mode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTriggerRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetTriggerZone() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("triggerZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCosmeticEffectPack(::TagEffects::TagEffectPack* value) {
            static BNM::Field<::TagEffects::TagEffectPack*> _field = GetClass().GetField(O("cosmeticEffectPack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsStatic(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isStatic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMode(::TagEffects::IHandEffectsTrigger_Mode value) {
            static BNM::Field<::TagEffects::IHandEffectsTrigger_Mode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerZone(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("triggerZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::Action<::TagEffects::IHandEffectsTrigger_Mode>* get_OnTrigger() {
            static BNM::Method<::BNM::Structures::Mono::Action<::TagEffects::IHandEffectsTrigger_Mode>*> _m = GetClass().GetMethod(O("get_OnTrigger"));
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
        template <typename TP0 = void*>
        bool InTriggerZone(TP0 t) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("InTriggerZone"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t);
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
