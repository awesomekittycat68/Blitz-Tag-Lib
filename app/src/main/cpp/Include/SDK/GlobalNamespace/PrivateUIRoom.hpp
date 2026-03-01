#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonoBehaviourTick.hpp"

namespace GlobalNamespace {
    struct PrivateUIRoom : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PrivateUIRoom");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::PrivateUIRoom* GetInstance() {
            static BNM::Field<::GlobalNamespace::PrivateUIRoom*> field = GetClass().GetField("instance");
            return field.Get();
        }
        ::GorillaLocomotion::GTPlayer* GetLocalPlayer() {
            static BNM::Method<::GorillaLocomotion::GTPlayer*> _method = GetClass().GetMethod(O("get_localPlayer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetInitialAudioVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("_initialAudioVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetUiRoot() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_uiRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBackgroundDirectionPropertyID() {
            static BNM::Field<int> _field = GetClass().GetField(O("backgroundDirectionPropertyID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBackgroundDirectionPropertyName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("backgroundDirectionPropertyName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetBackgroundRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("backgroundRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFocusTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("focusTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInOverlay() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inOverlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::PrivateUIRoom* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::PrivateUIRoom*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastStablePosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastStablePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetLastStableRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("lastStableRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLateralPlay() {
            static BNM::Field<float> _field = GetClass().GetField(O("lateralPlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLeftHandObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leftHandObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetOccluder() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("occluder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOverlayForcedActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overlayForcedActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRightHandObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightHandObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotationalPlay() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationalPlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSavedCullingLayers() {
            static BNM::Field<int> _field = GetClass().GetField(O("savedCullingLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetUi() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("ui"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::Transform*, ::Transform*>* GetUiParents() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, ::Transform*>*> _field = GetClass().GetField(O("uiParents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVerticalPlay() {
            static BNM::Field<float> _field = GetClass().GetField(O("verticalPlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetVisibleLayers() {
            static BNM::Field<void*> _field = GetClass().GetField(O("visibleLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInitialAudioVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_initialAudioVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUiRoot(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_uiRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBackgroundDirectionPropertyID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("backgroundDirectionPropertyID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBackgroundDirectionPropertyName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("backgroundDirectionPropertyName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBackgroundRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("backgroundRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFocusTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("focusTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInOverlay(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inOverlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::PrivateUIRoom* value) {
            static BNM::Field<::GlobalNamespace::PrivateUIRoom*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetLastStablePosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastStablePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastStableRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("lastStableRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLateralPlay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lateralPlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leftHandObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOccluder(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("occluder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverlayForcedActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overlayForcedActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightHandObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationalPlay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationalPlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSavedCullingLayers(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("savedCullingLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUi(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("ui"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUiParents(::BNM::Structures::Mono::Dictionary<::Transform*, ::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, ::Transform*>*> _field = GetClass().GetField(O("uiParents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVerticalPlay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("verticalPlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisibleLayers(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("visibleLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void AddUI(::Transform* focus) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddUI"), {"focus"});
            _m.Call(focus);
        }
        static void AssignShoulderCameraToCanvases(::Transform* focus) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AssignShoulderCameraToCanvases"), {"focus"});
            _m.Call(focus);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void ForceStartOverlay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceStartOverlay"));
            _m.Call();
        }
        ::GorillaLocomotion::GTPlayer* get_localPlayer() {
            static BNM::Method<::GorillaLocomotion::GTPlayer*> _m = GetClass().GetMethod(O("get_localPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetIdealScreenPositionRotation(::BNM::Structures::Unity::Vector3& position, ::BNM::Structures::Unity::Quaternion& rotation, ::BNM::Structures::Unity::Vector3& scale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetIdealScreenPositionRotation"), {"position", "rotation", "scale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&position, &rotation, &scale);
        }
        static bool GetInOverlay_1() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetInOverlay"));
            return _m.Call();
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
        static void RemoveUI(::Transform* focus) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveUI"), {"focus"});
            _m.Call(focus);
        }
        bool ShouldUpdatePosition() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldUpdatePosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ShouldUpdateRotation() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldUpdateRotation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void StartOverlay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartOverlay"));
            _m.Call();
        }
        static void StopForcedOverlay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopForcedOverlay"));
            _m.Call();
        }
        static void StopOverlay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopOverlay"));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ToggleLevelVisibility(bool levelShouldBeVisible) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleLevelVisibility"), {"levelShouldBeVisible"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(levelShouldBeVisible);
        }
        void UpdateUIPosition() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateUIPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateUIPositionAndRotation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateUIPositionAndRotation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
