#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Rendering {
    struct ZoneLiquidEffectableManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Rendering", "ZoneLiquidEffectableManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetHasInstance() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHasInstance(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_hasInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaTag_Rendering::ZoneLiquidEffectableManager* GetInstance() {
            static BNM::Method<::GorillaTag_Rendering::ZoneLiquidEffectableManager*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GorillaTag_Rendering::ZoneLiquidEffectableManager* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::GorillaTag_Rendering::ZoneLiquidEffectable*>* GetZoneLiquidEffectables() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_Rendering::ZoneLiquidEffectable*>*> _field = GetClass().GetField(O("zoneLiquidEffectables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CreateManager() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateManager"));
            _m.Call();
        }
        static bool get_hasInstance() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasInstance"));
            return _m.Call();
        }
        static ::GorillaTag_Rendering::ZoneLiquidEffectableManager* get_instance() {
            static BNM::Method<::GorillaTag_Rendering::ZoneLiquidEffectableManager*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void Register(::GorillaTag_Rendering::ZoneLiquidEffectable* effect) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"effect"});
            _m.Call(effect);
        }
        static void set_hasInstance(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_hasInstance"), {"value"});
            _m.Call(value);
        }
        static void set_instance(::GorillaTag_Rendering::ZoneLiquidEffectableManager* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_instance"), {"value"});
            _m.Call(value);
        }
        static void SetInstance_1(::GorillaTag_Rendering::ZoneLiquidEffectableManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInstance"), {"manager"});
            _m.Call(manager);
        }
        static void Unregister(::GorillaTag_Rendering::ZoneLiquidEffectable* effect) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"effect"});
            _m.Call(effect);
        }
    };
}
