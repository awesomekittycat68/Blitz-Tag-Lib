#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct HandTapEffect : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HandTapEffect");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight* GetLeftHandEffect() {
            static BNM::Field<::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*> _field = GetClass().GetField(O("leftHandEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight* GetRightHandEffect() {
            static BNM::Field<::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*> _field = GetClass().GetField(O("rightHandEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLeftHandEffect(::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight* value) {
            static BNM::Field<::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*> _field = GetClass().GetField(O("leftHandEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandEffect(::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight* value) {
            static BNM::Field<::GlobalNamespace::HandTapEffect_HandTapEffectLeftRight*> _field = GetClass().GetField(O("rightHandEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
