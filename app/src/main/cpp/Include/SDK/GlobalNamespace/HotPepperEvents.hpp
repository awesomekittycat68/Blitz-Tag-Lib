#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticRefID.hpp"

namespace GlobalNamespace {
    struct HotPepperEvents : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HotPepperEvents");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::EdibleHoldable* GetPepper() {
            static BNM::Field<::GlobalNamespace::EdibleHoldable*> _field = GetClass().GetField(O("_pepper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CosmeticRefID GetMTargetEffectID() {
            static BNM::Field<::GlobalNamespace::CosmeticRefID> _field = GetClass().GetField(O("m_targetEffectID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPepper(::GlobalNamespace::EdibleHoldable* value) {
            static BNM::Field<::GlobalNamespace::EdibleHoldable*> _field = GetClass().GetField(O("_pepper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTargetEffectID(::GlobalNamespace::CosmeticRefID value) {
            static BNM::Field<::GlobalNamespace::CosmeticRefID> _field = GetClass().GetField(O("m_targetEffectID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnBite(::GlobalNamespace::VRRig* rig, int nextState, bool isViewRig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBite"), {"rig", "nextState", "isViewRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig, nextState, isViewRig);
        }
        void OnBiteView(::GlobalNamespace::VRRig* rig, int nextState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBiteView"), {"rig", "nextState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig, nextState);
        }
        void OnBiteWorld(::GlobalNamespace::VRRig* rig, int nextState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBiteWorld"), {"rig", "nextState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig, nextState);
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
