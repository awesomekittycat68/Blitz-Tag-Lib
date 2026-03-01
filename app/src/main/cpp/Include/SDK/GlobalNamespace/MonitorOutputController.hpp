#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LckBodyCameraSpawner_CameraState.hpp"

namespace GlobalNamespace {
    struct MonitorOutputController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MonitorOutputController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetGtLckController() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_gtLckController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLckActiveCameraMode() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_lckActiveCameraMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Camera* GetLckCamera() {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("_lckCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Camera* GetShoulderCamera() {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("_shoulderCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShoulderCameraFov() {
            static BNM::Field<float> _field = GetClass().GetField(O("_shoulderCameraFov"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGtLckController(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_gtLckController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLckActiveCameraMode(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_lckActiveCameraMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLckCamera(::Camera* value) {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("_lckCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShoulderCamera(::Camera* value) {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("_shoulderCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShoulderCameraFov(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_shoulderCameraFov"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CameraStateChanged(::GlobalNamespace::LckBodyCameraSpawner_CameraState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CameraStateChanged"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void FindShoulderCamera() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FindShoulderCamera"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*, typename TP1 = void*>
        void OnCameraModeChanged(TP0 mode, TP1 lckCamera) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCameraModeChanged"), {"mode", "lckCamera"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mode, lckCamera);
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
        void RestoreShoulderCamera() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestoreShoulderCamera"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TakeOverShoulderCamera() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TakeOverShoulderCamera"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
