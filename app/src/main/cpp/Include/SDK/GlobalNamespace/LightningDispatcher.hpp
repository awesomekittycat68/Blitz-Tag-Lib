#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LightningDispatcher : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LightningDispatcher");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_RequestLightningStrike(::GlobalNamespace::LightningDispatcher_DispatchLightningEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_RequestLightningStrike"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_RequestLightningStrike(::GlobalNamespace::LightningDispatcher_DispatchLightningEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_RequestLightningStrike"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        float GetBeamWidthCM() {
            static BNM::Field<float> _field = GetClass().GetField(O("beamWidthCM"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Gradient* GetColorOverLifetime() {
            static BNM::Field<::Gradient*> _field = GetClass().GetField(O("colorOverLifetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("minDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::LightningDispatcher_DispatchLightningEvent* GetRequestLightningStrike() {
            static BNM::Field<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*> _field = GetClass().GetField(O("RequestLightningStrike"));
            return _field.Get();
        }
        float GetSoundVolumeMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("soundVolumeMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBeamWidthCM(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("beamWidthCM"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorOverLifetime(::Gradient* value) {
            static BNM::Field<::Gradient*> _field = GetClass().GetField(O("colorOverLifetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRequestLightningStrike(::GlobalNamespace::LightningDispatcher_DispatchLightningEvent* value) {
            static BNM::Field<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*> _field = GetClass().GetField(O("RequestLightningStrike"));
            _field.Set(value);
        }
        void SetSoundVolumeMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("soundVolumeMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void add_RequestLightningStrike_1(::GlobalNamespace::LightningDispatcher_DispatchLightningEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_RequestLightningStrike"), {"value"});
            _m.Call(value);
        }
        void DispatchLightning(::BNM::Structures::Unity::Vector3 p1, ::BNM::Structures::Unity::Vector3 p2) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DispatchLightning"), {"p1", "p2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(p1, p2);
        }
        static void remove_RequestLightningStrike_1(::GlobalNamespace::LightningDispatcher_DispatchLightningEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_RequestLightningStrike"), {"value"});
            _m.Call(value);
        }
    };
}
