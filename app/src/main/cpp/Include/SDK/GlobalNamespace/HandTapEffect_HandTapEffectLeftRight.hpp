#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct HandTapEffect_HandTapEffectLeftRight : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HandTapEffect").GetInnerClass("HandTapEffectLeftRight");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp* GetDownTapEffect() {
            static BNM::Field<::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*> _field = GetClass().GetField(O("downTapEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HandEffectContext* GetHandContext() {
            static BNM::Field<::GlobalNamespace::HandEffectContext*> _field = GetClass().GetField(O("handContext"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSeparateUpTapCooldown() {
            static BNM::Field<bool> _field = GetClass().GetField(O("separateUpTapCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HandTapEffect_HandTapEffectDownUp* GetUpTapEffect() {
            static BNM::Field<::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*> _field = GetClass().GetField(O("upTapEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDownTapEffect(::GlobalNamespace::HandTapEffect_HandTapEffectDownUp* value) {
            static BNM::Field<::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*> _field = GetClass().GetField(O("downTapEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandContext(::GlobalNamespace::HandEffectContext* value) {
            static BNM::Field<::GlobalNamespace::HandEffectContext*> _field = GetClass().GetField(O("handContext"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeparateUpTapCooldown(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("separateUpTapCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpTapEffect(::GlobalNamespace::HandTapEffect_HandTapEffectDownUp* value) {
            static BNM::Field<::GlobalNamespace::HandTapEffect_HandTapEffectDownUp*> _field = GetClass().GetField(O("upTapEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
    };
}
