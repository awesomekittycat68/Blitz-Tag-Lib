#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TimeSince.hpp"

namespace GlobalNamespace {
    struct SkyboxController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SkyboxController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        double GetCurrentSeconds() {
            static BNM::Field<double> _field = GetClass().GetField(O("_currentSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetCurrentSky() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_currentSky"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BetterDayNightManager* GetDayNightManager() {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager*> _field = GetClass().GetField(O("_dayNightManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetNextSky() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_nextSky"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetTotalSecondsInRange() {
            static BNM::Field<double> _field = GetClass().GetField(O("_totalSecondsInRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TimeSince GetLastUpdate() {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("lastUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLerpValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetSkyBack() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("skyBack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetSkyFront() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("skyFront"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetSkyMaterials() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("skyMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentSeconds(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("_currentSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSky(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_currentSky"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDayNightManager(::GlobalNamespace::BetterDayNightManager* value) {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager*> _field = GetClass().GetField(O("_dayNightManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextSky(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_nextSky"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalSecondsInRange(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("_totalSecondsInRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastUpdate(::GlobalNamespace::TimeSince value) {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("lastUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLerpValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkyBack(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("skyBack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkyFront(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("skyFront"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkyMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("skyMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnValidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetBackToOpaque() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBackToOpaque"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetFrontToOpaque() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFrontToOpaque"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetFrontToTransparent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFrontToTransparent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateSky() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSky"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
