#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaIOBT : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaIOBT");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetCenterEyeAnchor() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_centerEyeAnchor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCenterEyeAnchor(::Transform* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_centerEyeAnchor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsHandTracking() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsHandTracking"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Transform* GetLeftControllerAnchor() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_leftControllerAnchor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLeftControllerAnchor(::Transform* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_leftControllerAnchor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Transform* GetLeftHandAnchor() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_leftHandAnchor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLeftHandAnchor(::Transform* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_leftHandAnchor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::HandTrackingFingerCurl* GetLeftHandCurl() {
            static BNM::Method<::GlobalNamespace::HandTrackingFingerCurl*> _method = GetClass().GetMethod(O("get_leftHandCurl"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLeftHandCurl(::GlobalNamespace::HandTrackingFingerCurl* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_leftHandCurl"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Transform* GetRightControllerAnchor() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_rightControllerAnchor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRightControllerAnchor(::Transform* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_rightControllerAnchor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Transform* GetRightHandAnchor() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_rightHandAnchor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRightHandAnchor(::Transform* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_rightHandAnchor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::HandTrackingFingerCurl* GetRightHandCurl() {
            static BNM::Method<::GlobalNamespace::HandTrackingFingerCurl*> _method = GetClass().GetMethod(O("get_rightHandCurl"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRightHandCurl(::GlobalNamespace::HandTrackingFingerCurl* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_rightHandCurl"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Transform* GetTrackingSpace() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_trackingSpace"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTrackingSpace(::Transform* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_trackingSpace"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_TrackingSpaceChanged(::BNM::Structures::Mono::Action<::Transform*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_TrackingSpaceChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_TrackingSpaceChanged(::BNM::Structures::Mono::Action<::Transform*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_TrackingSpaceChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_UpdatedAnchors(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaIOBT*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_UpdatedAnchors"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_UpdatedAnchors(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaIOBT*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_UpdatedAnchors"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::Structures::Unity::Matrix4x4 GetPreviousTrackingSpaceTransform() {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("_previousTrackingSpaceTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSkipUpdate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_skipUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCenterEyeAnchorName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("centerEyeAnchorName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLeftControllerAnchorName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("leftControllerAnchorName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLeftHandAnchorName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("leftHandAnchorName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRightControllerAnchorName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("rightControllerAnchorName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRightHandAnchorName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("rightHandAnchorName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetTrackingChangedAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("trackingChangedAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetTrackingGainedClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("trackingGainedClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetTrackingLostClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("trackingLostClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::Transform*>* GetTrackingSpaceChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<::Transform*>*> _field = GetClass().GetField(O("TrackingSpaceChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTrackingSpaceName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("trackingSpaceName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaIOBT*>* GetUpdatedAnchors() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaIOBT*>*> _field = GetClass().GetField(O("UpdatedAnchors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetUpperBodySkeleton() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("upperBodySkeleton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPreviousTrackingSpaceTransform(::BNM::Structures::Unity::Matrix4x4 value) {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("_previousTrackingSpaceTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkipUpdate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_skipUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrackingChangedAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("trackingChangedAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrackingGainedClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("trackingGainedClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrackingLostClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("trackingLostClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrackingSpaceChanged(::BNM::Structures::Mono::Action<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::Transform*>*> _field = GetClass().GetField(O("TrackingSpaceChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdatedAnchors(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaIOBT*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaIOBT*>*> _field = GetClass().GetField(O("UpdatedAnchors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpperBodySkeleton(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("upperBodySkeleton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_TrackingSpaceChanged_1(::BNM::Structures::Mono::Action<::Transform*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_TrackingSpaceChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_UpdatedAnchors_1(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaIOBT*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_UpdatedAnchors"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckForAnchorsInParent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckForAnchorsInParent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckForTrackingSpaceChangesAndRaiseEvent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckForTrackingSpaceChangesAndRaiseEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Matrix4x4 ComputeTrackReferenceMatrix() {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("ComputeTrackReferenceMatrix"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* ConfigureAnchor(::Transform* root, ::BNM::Structures::Mono::String* name) {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("ConfigureAnchor"), {"root", "name"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(root, name);
        }
        void EnsureGameObjectIntegrity() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnsureGameObjectIntegrity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::Transform* get_centerEyeAnchor() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_centerEyeAnchor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsHandTracking() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsHandTracking"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_leftActiveController() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_leftActiveController"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* get_leftControllerAnchor() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_leftControllerAnchor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* get_leftHandAnchor() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_leftHandAnchor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::HandTrackingFingerCurl* get_leftHandCurl() {
            static BNM::Method<::GlobalNamespace::HandTrackingFingerCurl*> _m = GetClass().GetMethod(O("get_leftHandCurl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_rightActiveController() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_rightActiveController"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* get_rightControllerAnchor() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_rightControllerAnchor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* get_rightHandAnchor() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_rightHandAnchor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::HandTrackingFingerCurl* get_rightHandCurl() {
            static BNM::Method<::GlobalNamespace::HandTrackingFingerCurl*> _m = GetClass().GetMethod(O("get_rightHandCurl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* get_trackingSpace() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_trackingSpace"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnBeforeRenderCallback() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBeforeRenderCallback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RaiseUpdatedAnchorsEvent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RaiseUpdatedAnchorsEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_TrackingSpaceChanged_1(::BNM::Structures::Mono::Action<::Transform*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_TrackingSpaceChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_UpdatedAnchors_1(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaIOBT*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_UpdatedAnchors"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_centerEyeAnchor(::Transform* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_centerEyeAnchor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_leftActiveController(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_leftActiveController"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_leftControllerAnchor(::Transform* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_leftControllerAnchor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_leftHandAnchor(::Transform* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_leftHandAnchor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_leftHandCurl(::GlobalNamespace::HandTrackingFingerCurl* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_leftHandCurl"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_rightActiveController(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_rightActiveController"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_rightControllerAnchor(::Transform* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_rightControllerAnchor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_rightHandAnchor(::Transform* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_rightHandAnchor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_rightHandCurl(::GlobalNamespace::HandTrackingFingerCurl* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_rightHandCurl"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_trackingSpace(::Transform* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_trackingSpace"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
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
        void UpdateAnchors() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateAnchors"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
