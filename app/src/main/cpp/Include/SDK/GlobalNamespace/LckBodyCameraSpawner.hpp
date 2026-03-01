#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LckBodyCameraSpawner_CameraPosition.hpp"
#include "LckBodyCameraSpawner_CameraState.hpp"
#include "MonoBehaviourTick.hpp"

namespace GlobalNamespace {
    struct LckBodyCameraSpawner : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LckBodyCameraSpawner");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::LckBodyCameraSpawner_CameraPosition GetCameraPosition() {
            static BNM::Method<::GlobalNamespace::LckBodyCameraSpawner_CameraPosition> _method = GetClass().GetMethod(O("get_cameraPosition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCameraPosition(::GlobalNamespace::LckBodyCameraSpawner_CameraPosition value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_cameraPosition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::LckBodyCameraSpawner_CameraState GetCameraState() {
            static BNM::Method<::GlobalNamespace::LckBodyCameraSpawner_CameraState> _method = GetClass().GetMethod(O("get_cameraState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCameraState(::GlobalNamespace::LckBodyCameraSpawner_CameraState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_cameraState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetCameraVisible() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_cameraVisible"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCameraVisible(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_cameraVisible"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::TabletSpawnInstance* GetTabletSpawnInstance() {
            static BNM::Method<::GlobalNamespace::TabletSpawnInstance*> _method = GetClass().GetMethod(O("get_tabletSpawnInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnCameraStateChange(::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCameraStateChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnCameraStateChange(::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCameraStateChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        float GetActivateDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("_activateDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LckDirectGrabbable* GetCameraModelGrabbable() {
            static BNM::Field<::GlobalNamespace::LckDirectGrabbable*> _field = GetClass().GetField(O("_cameraModelGrabbable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCameraModelOriginTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_cameraModelOriginTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCameraModelTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_cameraModelTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LckBodyCameraSpawner_CameraPosition GetCameraPosition_f() {
            static BNM::Field<::GlobalNamespace::LckBodyCameraSpawner_CameraPosition> _field = GetClass().GetField(O("_cameraPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCameraPositionDefault() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_cameraPositionDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCameraPositionSlingshot() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_cameraPositionSlingshot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCameraSpawnParentTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_cameraSpawnParentTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCameraSpawnPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_cameraSpawnPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LckBodyCameraSpawner_CameraState GetCameraState_f() {
            static BNM::Field<::GlobalNamespace::LckBodyCameraSpawner_CameraState> _field = GetClass().GetField(O("_cameraState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetCameraStrapPoints() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("_cameraStrapPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetCameraStrapPositions() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("_cameraStrapPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LineRenderer* GetCameraStrapRenderer() {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("_cameraStrapRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetChestSpawnRotationOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_chestSpawnRotationOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDummyTablet() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_dummyTablet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFollowTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_followTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetGhostColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_ghostColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLeftHandSpawnOffsetAndroid() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_leftHandSpawnOffsetAndroid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLeftHandSpawnOffsetWindows() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_leftHandSpawnOffsetWindows"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetLocalRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_localRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetNormalColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_normalColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPreviousMode() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_previousMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRightHandSpawnOffsetAndroid() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_rightHandSpawnOffsetAndroid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRightHandSpawnOffsetWindows() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_rightHandSpawnOffsetWindows"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRotationOffsetAndroid() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_rotationOffsetAndroid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRotationOffsetWindows() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_rotationOffsetWindows"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldMoveCameraToNeck() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_shouldMoveCameraToNeck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSnapToNeckDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("_snapToNeckDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSwapEmobi() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_swapEmobi"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSwapTablet() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_swapTablet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TabletSpawnInstance* GetTabletSpawnInstance_f() {
            static BNM::Field<::GlobalNamespace::TabletSpawnInstance*> _field = GetClass().GetField(O("_tabletSpawnInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate* GetOnCameraStateChange() {
            static BNM::Field<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*> _field = GetClass().GetField(O("OnCameraStateChange"));
            return _field.Get();
        }
        void SetActivateDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_activateDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraModelGrabbable(::GlobalNamespace::LckDirectGrabbable* value) {
            static BNM::Field<::GlobalNamespace::LckDirectGrabbable*> _field = GetClass().GetField(O("_cameraModelGrabbable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraModelOriginTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_cameraModelOriginTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraModelTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_cameraModelTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraPosition_fs(::GlobalNamespace::LckBodyCameraSpawner_CameraPosition value) {
            static BNM::Field<::GlobalNamespace::LckBodyCameraSpawner_CameraPosition> _field = GetClass().GetField(O("_cameraPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraPositionDefault(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_cameraPositionDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraPositionSlingshot(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_cameraPositionSlingshot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraSpawnParentTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_cameraSpawnParentTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraSpawnPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_cameraSpawnPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraState_fs(::GlobalNamespace::LckBodyCameraSpawner_CameraState value) {
            static BNM::Field<::GlobalNamespace::LckBodyCameraSpawner_CameraState> _field = GetClass().GetField(O("_cameraState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraStrapPoints(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("_cameraStrapPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraStrapPositions(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("_cameraStrapPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraStrapRenderer(::LineRenderer* value) {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("_cameraStrapRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChestSpawnRotationOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_chestSpawnRotationOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDummyTablet(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_dummyTablet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFollowTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_followTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGhostColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_ghostColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandSpawnOffsetAndroid(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_leftHandSpawnOffsetAndroid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandSpawnOffsetWindows(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_leftHandSpawnOffsetWindows"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_localRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNormalColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_normalColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousMode(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_previousMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandSpawnOffsetAndroid(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_rightHandSpawnOffsetAndroid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandSpawnOffsetWindows(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_rightHandSpawnOffsetWindows"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationOffsetAndroid(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_rotationOffsetAndroid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationOffsetWindows(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_rotationOffsetWindows"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldMoveCameraToNeck(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_shouldMoveCameraToNeck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapToNeckDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_snapToNeckDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwapEmobi(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_swapEmobi"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwapTablet(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_swapTablet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTabletSpawnInstance(::GlobalNamespace::TabletSpawnInstance* value) {
            static BNM::Field<::GlobalNamespace::TabletSpawnInstance*> _field = GetClass().GetField(O("_tabletSpawnInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnCameraStateChange(::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate* value) {
            static BNM::Field<::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate*> _field = GetClass().GetField(O("OnCameraStateChange"));
            _field.Set(value);
        }
        static void add_OnCameraStateChange_1(::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCameraStateChange"), {"value"});
            _m.Call(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ChangeCameraModelParent(::Transform* transform) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeCameraModelParent"), {"transform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(transform);
        }
        ::GlobalNamespace::LckBodyCameraSpawner_CameraPosition get_cameraPosition() {
            static BNM::Method<::GlobalNamespace::LckBodyCameraSpawner_CameraPosition> _m = GetClass().GetMethod(O("get_cameraPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::LckBodyCameraSpawner_CameraState get_cameraState() {
            static BNM::Method<::GlobalNamespace::LckBodyCameraSpawner_CameraState> _m = GetClass().GetMethod(O("get_cameraState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_cameraVisible() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_cameraVisible"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::TabletSpawnInstance* get_tabletSpawnInstance() {
            static BNM::Method<::GlobalNamespace::TabletSpawnInstance*> _m = GetClass().GetMethod(O("get_tabletSpawnInstance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::VRRig* GetLocalRig_1() {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("GetLocalRig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitCameraStrap() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitCameraStrap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsSlingshotActiveInHierarchy() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSlingshotActiveInHierarchy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsSlingshotHeldInHand(bool& leftHand, bool& rightHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSlingshotHeldInHand"), {"leftHand", "rightHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&leftHand, &rightHand);
        }
        void ManuallySetCameraOnNeck() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ManuallySetCameraOnNeck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCameraModelReleased() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCameraModelReleased"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
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
        void OnZoneChanged(::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneData*>* zones) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneChanged"), {"zones"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zones);
        }
        static void remove_OnCameraStateChange_1(::GlobalNamespace::LckBodyCameraSpawner_CameraStateDelegate* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCameraStateChange"), {"value"});
            _m.Call(value);
        }
        void ResetCameraModel() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetCameraModel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_cameraPosition(::GlobalNamespace::LckBodyCameraSpawner_CameraPosition value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_cameraPosition"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_cameraState(::GlobalNamespace::LckBodyCameraSpawner_CameraState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_cameraState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_cameraVisible(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_cameraVisible"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetFollowTransform_1(::Transform* transform) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFollowTransform"), {"transform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(transform);
        }
        void SetPreviewActive(bool isActive) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPreviewActive"), {"isActive"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isActive);
        }
        bool ShouldSpawnCamera(::Transform* gorillaGrabberTransform) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldSpawnCamera"), {"gorillaGrabberTransform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gorillaGrabberTransform);
        }
        void SpawnCamera(::GlobalNamespace::GorillaGrabber* overrideGorillaGrabber, ::Transform* transform) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnCamera"), {"overrideGorillaGrabber", "transform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(overrideGorillaGrabber, transform);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateCameraStrap() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCameraStrap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
