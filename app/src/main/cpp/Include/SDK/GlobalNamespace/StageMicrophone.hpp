#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct StageMicrophone : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "StageMicrophone");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAmplifiedSpatialBlend() {
            static BNM::Field<float> _field = GetClass().GetField(O("AmplifiedSpatialBlend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::StageMicrophone* GetInstance() {
            static BNM::Field<::GlobalNamespace::StageMicrophone*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        float GetPickupRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("PickupRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAmplifiedSpatialBlend(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("AmplifiedSpatialBlend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::StageMicrophone* value) {
            static BNM::Field<::GlobalNamespace::StageMicrophone*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void SetPickupRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PickupRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float GetPlayerSpatialBlend(::GlobalNamespace::VRRig* player) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetPlayerSpatialBlend"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool IsPlayerAmplified(::GlobalNamespace::VRRig* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerAmplified"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
    };
}
