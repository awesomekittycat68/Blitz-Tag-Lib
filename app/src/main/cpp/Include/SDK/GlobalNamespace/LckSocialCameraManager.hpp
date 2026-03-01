#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LckBodyCameraSpawner_CameraState.hpp"

namespace GlobalNamespace {
    struct LckSocialCameraManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LckSocialCameraManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::LckSocialCameraManager* get_Instance() {
            static BNM::Method<::GlobalNamespace::LckSocialCameraManager*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GlobalNamespace::LckSocialCameraManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::LckSocialCameraManager*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        bool GetCameraActive() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_cameraActive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCameraActive(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_cameraActive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::LckSocialCameraManager* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::LckSocialCameraManager*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::LckDirectGrabbable* GetLckDirectGrabbable() {
            static BNM::Method<::GlobalNamespace::LckDirectGrabbable*> _method = GetClass().GetMethod(O("get_lckDirectGrabbable"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetUiVisible() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_uiVisible"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUiVisible(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_uiVisible"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetForceHidden() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_forceHidden"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetGtLckController() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_gtLckController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::LckSocialCameraManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::LckSocialCameraManager*> _field = GetClass().GetField(O("_instance"));
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
        ::GlobalNamespace::LckDirectGrabbable* GetLckDirectGrabbable_f() {
            static BNM::Field<::GlobalNamespace::LckDirectGrabbable*> _field = GetClass().GetField(O("_lckDirectGrabbable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLocalCameras() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_localCameras"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLocalUi() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_localUi"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRecording() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_recording"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LckSocialCamera* GetSocialCameraCococamInstance() {
            static BNM::Field<::GlobalNamespace::LckSocialCamera*> _field = GetClass().GetField(O("_socialCameraCococamInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LckSocialCamera* GetSocialCameraTabletInstance() {
            static BNM::Field<::GlobalNamespace::LckSocialCamera*> _field = GetClass().GetField(O("_socialCameraTabletInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetTabletPositionOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_tabletPositionOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCoconutCamera() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("CoconutCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::GlobalNamespace::LckSocialCameraManager*>* GetOnManagerSpawned() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::LckSocialCameraManager*>*> _field = GetClass().GetField(O("OnManagerSpawned"));
            return _field.Get();
        }
        void SetForceHidden(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_forceHidden"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGtLckController(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_gtLckController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::LckSocialCameraManager* value) {
            static BNM::Field<::GlobalNamespace::LckSocialCameraManager*> _field = GetClass().GetField(O("_instance"));
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
        void SetLckDirectGrabbable(::GlobalNamespace::LckDirectGrabbable* value) {
            static BNM::Field<::GlobalNamespace::LckDirectGrabbable*> _field = GetClass().GetField(O("_lckDirectGrabbable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalCameras(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_localCameras"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalUi(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_localUi"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecording(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_recording"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSocialCameraCococamInstance(::GlobalNamespace::LckSocialCamera* value) {
            static BNM::Field<::GlobalNamespace::LckSocialCamera*> _field = GetClass().GetField(O("_socialCameraCococamInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSocialCameraTabletInstance(::GlobalNamespace::LckSocialCamera* value) {
            static BNM::Field<::GlobalNamespace::LckSocialCamera*> _field = GetClass().GetField(O("_socialCameraTabletInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTabletPositionOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_tabletPositionOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoconutCamera(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("CoconutCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnManagerSpawned(::BNM::Structures::Mono::Action<::GlobalNamespace::LckSocialCameraManager*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::LckSocialCameraManager*>*> _field = GetClass().GetField(O("OnManagerSpawned"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_cameraActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_cameraActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::LckSocialCameraManager* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::LckSocialCameraManager*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        ::GlobalNamespace::LckDirectGrabbable* get_lckDirectGrabbable() {
            static BNM::Method<::GlobalNamespace::LckDirectGrabbable*> _m = GetClass().GetMethod(O("get_lckDirectGrabbable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_uiVisible() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_uiVisible"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnBodyCameraStateChanged(::GlobalNamespace::LckBodyCameraSpawner_CameraState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBodyCameraStateChanged"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
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
        void OnRecordingStarted(::BNM::IL2CPP::Il2CppObject* result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRecordingStarted"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void OnRecordingStopped(::BNM::IL2CPP::Il2CppObject* result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRecordingStopped"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void set_cameraActive(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_cameraActive"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_uiVisible(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_uiVisible"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetForceHidden_1(bool hidden) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetForceHidden"), {"hidden"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hidden);
        }
        void SetLckSocialCococamCamera(::GlobalNamespace::LckSocialCamera* socialCamera) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLckSocialCococamCamera"), {"socialCamera"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(socialCamera);
        }
        void SetLckSocialTabletCamera(::GlobalNamespace::LckSocialCamera* socialCameraTablet) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLckSocialTabletCamera"), {"socialCameraTablet"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(socialCameraTablet);
        }
        void SetManagerInstance() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetManagerInstance"));
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
