#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct FingerFlexReactor : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FingerFlexReactor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::FingerFlexReactor_BlendShapeTarget*>* GetBlendShapeTargets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::FingerFlexReactor_BlendShapeTarget*>*> _field = GetClass().GetField(O("_blendShapeTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::VRMap*>* GetFingers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VRMap*>*> _field = GetClass().GetField(O("_fingers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlendShapeTargets(::BNM::Structures::Mono::Array<::GlobalNamespace::FingerFlexReactor_BlendShapeTarget*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::FingerFlexReactor_BlendShapeTarget*>*> _field = GetClass().GetField(O("_blendShapeTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFingers(::BNM::Structures::Mono::Array<::GlobalNamespace::VRMap*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VRMap*>*> _field = GetClass().GetField(O("_fingers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static float GetLerpValue(::GlobalNamespace::VRMap* map) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetLerpValue"), {"map"});
            return _m.Call(map);
        }
        void Setup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateBlendShapes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBlendShapes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
