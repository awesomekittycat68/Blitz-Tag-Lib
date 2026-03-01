#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "HandTapReactor_TapType.hpp"
#include "../TagEffects/IHandEffectsTrigger_Mode.hpp"

namespace GlobalNamespace {
    struct HandTapReactor : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HandTapReactor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetLeftHandTrigger() {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftHandTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetMyRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRightHandTrigger() {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightHandTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLeftHandTrigger(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftHandTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandTrigger(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightHandTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void LeftDown(::GlobalNamespace::HandEffectContext* ctx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LeftDown"), {"ctx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ctx);
        }
        void LeftGesture(::TagEffects::IHandEffectsTrigger_Mode mode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LeftGesture"), {"mode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mode);
        }
        void LeftUp(::GlobalNamespace::HandEffectContext* ctx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LeftUp"), {"ctx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ctx);
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
        void RightDown(::GlobalNamespace::HandEffectContext* ctx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RightDown"), {"ctx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ctx);
        }
        void RightGesture(::TagEffects::IHandEffectsTrigger_Mode mode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RightGesture"), {"mode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mode);
        }
        void RightUp(::GlobalNamespace::HandEffectContext* ctx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RightUp"), {"ctx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ctx);
        }
    };
}
