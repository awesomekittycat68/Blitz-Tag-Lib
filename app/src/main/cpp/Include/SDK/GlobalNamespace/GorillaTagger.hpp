#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaTagger_StatusEffect.hpp"
#include "GorillaTagger_StiltTagData.hpp"
#include "../GorillaLocomotion/StiltID.hpp"
#include "../GorillaTag_GuidedRefs/GuidedRefReceiverFieldInfo.hpp"

namespace GlobalNamespace {
    struct GorillaTagger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTagger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GorillaTagger* get_Instance() {
            static BNM::Method<::GlobalNamespace::GorillaTagger*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GlobalNamespace::GorillaTagger* GetInstance() {
            static BNM::Field<::GlobalNamespace::GorillaTagger*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        float GetDefaultHandTapVolume() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_DefaultHandTapVolume"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetForcePerfRefreshRate() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ForcePerfRefreshRate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasTappedSurface() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasTappedSurface"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHasTappedSurface(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_hasTappedSurface"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GorillaTagger* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::GorillaTagger*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Voice_Unity::Recorder* GetMyRecorder() {
            static BNM::Method<::Photon_Voice_Unity::Recorder*> _method = GetClass().GetMethod(O("get_myRecorder"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMyRecorder(::Photon_Voice_Unity::Recorder* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_myRecorder"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::NetworkView* GetMyVRRig() {
            static BNM::Method<::GlobalNamespace::NetworkView*> _method = GetClass().GetMethod(O("get_myVRRig"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetPerformanceOn() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_PerformanceOn"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Rigidbody* GetRigidbody() {
            static BNM::Method<::Rigidbody*> _method = GetClass().GetMethod(O("get_rigidbody"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRigidbody(::Rigidbody* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_rigidbody"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::VRRigSerializer* GetRigSerializer() {
            static BNM::Method<::GlobalNamespace::VRRigSerializer*> _method = GetClass().GetMethod(O("get_rigSerializer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetSphereCastRadius() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_sphereCastRadius"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnHandTap(::BNM::Structures::Mono::Action<bool, ::BNM::Structures::Unity::Vector3, ::BNM::Structures::Unity::Vector3>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnHandTap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnHandTap(::BNM::Structures::Mono::Action<bool, ::BNM::Structures::Unity::Vector3, ::BNM::Structures::Unity::Vector3>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnHandTap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        float GetDefaultRefreshRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("_defaultRefreshRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetForceFramerateCheck() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_forceFramerateCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetForcePerfRefreshRate_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_forcePerfRefreshRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFramerateHealthTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("_framerateHealthTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFramerateIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_framerateIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFramerateTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("_framerateTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFramerateTotal() {
            static BNM::Field<float> _field = GetClass().GetField(O("_framerateTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetFramerateTracker() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("_framerateTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFramerateUpdated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_framerateUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFramesForHandTrigger() {
            static BNM::Field<int> _field = GetClass().GetField(O("_framesForHandTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::GorillaTagger* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GorillaTagger*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaTagger_DebouncedBool* GetLeftHandDown() {
            static BNM::Field<::GlobalNamespace::GorillaTagger_DebouncedBool*> _field = GetClass().GetField(O("_leftHandDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPerformanceOn_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_performanceOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPerfRefreshRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("_perfRefreshRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPrevFramerateHealth() {
            static BNM::Field<int> _field = GetClass().GetField(O("_prevFramerateHealth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPrevSmoothedFramerate() {
            static BNM::Field<int> _field = GetClass().GetField(O("_prevSmoothedFramerate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaTagger_DebouncedBool* GetRightHandDown() {
            static BNM::Field<::GlobalNamespace::GorillaTagger_DebouncedBool*> _field = GetClass().GetField(O("_rightHandDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetActiveXRDisplay() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("activeXRDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAudioClipIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("audioClipIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetBaseMirrorCameraCullingMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("BaseMirrorCameraCullingMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBaseSlideControl() {
            static BNM::Field<float> _field = GetClass().GetField(O("baseSlideControl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetBodyCollider() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("bodyCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetBodyRaycastSweep() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("bodyRaycastSweep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetBodySlideSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("bodySlideSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetBodyVector() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("bodyVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetBottomVector() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("bottomVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCacheHandTapVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("cacheHandTapVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetColliderOverlaps() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("colliderOverlaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaTagger_StatusEffect GetCurrentStatus() {
            static BNM::Field<::GlobalNamespace::GorillaTagger_StatusEffect> _field = GetClass().GetField(O("currentStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetDirFromHitToHand() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("dirFromHitToHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableTutorial() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableTutorial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFramerateHealth() {
            static BNM::Field<int> _field = GetClass().GetField(O("FramerateHealth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGorillaTagColliderLayerMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("gorillaTagColliderLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHandTapSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("handTapSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHandTapVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("handTapVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticWaitSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticWaitSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        ::SphereCollider* GetHeadCollider() {
            static BNM::Field<::SphereCollider*> _field = GetClass().GetField(O("headCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetHeadRaycastSweep() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("headRaycastSweep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::RaycastHit GetHitInfo() {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("hitInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInCosmeticsRoom() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inCosmeticsRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetInputDevice() {
            static BNM::Field<void*> _field = GetClass().GetField(O("inputDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastBodyPositionForTag() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastBodyPositionForTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastHeadPositionForTag() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastHeadPositionForTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastLeftHandPositionForTag() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastLeftHandPositionForTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastLeftTap() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastLeftTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastLeftUpTap() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastLeftUpTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastRightHandPositionForTag() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastRightHandPositionForTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastRightTap() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRightTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastRightUpTap() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRightUpTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLeftDevice() {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetLeftHandSlideSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("leftHandSlideSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLeftHandTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftHandTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLeftHandTriggerCollider() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leftHandTriggerCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftHandWasTouching() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftHandWasTouching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetLeftHapticsBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("leftHapticsBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLeftHapticsRoutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("leftHapticsRoutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLeftHeadRaycastSweep() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("leftHeadRaycastSweep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLeftRaycastSweep() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("leftRaycastSweep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLoadedDeviceName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("loadedDeviceName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMainCamera() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("mainCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxStiltTagDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxStiltTagDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxTagDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTagDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static float GetModerationMutedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("moderationMutedTime"));
            return _field.Get();
        }
        int GetNonAllocHits() {
            static BNM::Field<int> _field = GetClass().GetField(O("nonAllocHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetNonAllocRaycastHits() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("nonAllocRaycastHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetOfflineVRRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("offlineVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo GetOfflineVRRigGRef() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("offlineVRRig_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<bool, ::BNM::Structures::Unity::Vector3, ::BNM::Structures::Unity::Vector3>* GetOnHandTap() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, ::BNM::Structures::Unity::Vector3, ::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("OnHandTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnPlayerSpawnedRootCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onPlayerSpawnedRootCallback"));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetOtherPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("otherPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOverrideNotInFocus() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideNotInFocus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPrimaryButtonPressLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("primaryButtonPressLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPrimaryButtonPressRight() {
            static BNM::Field<bool> _field = GetClass().GetField(O("primaryButtonPressRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRefreshRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("refreshRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRightDevice() {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetRightHandSlideSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("rightHandSlideSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRightHandTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightHandTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRightHandTriggerCollider() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightHandTriggerCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightHandWasTouching() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightHandWasTouching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetRightHapticsBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("rightHapticsBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetRightHapticsRoutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("rightHapticsRoutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRightHeadRaycastSweep() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rightHeadRaycastSweep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRightRaycastSweep() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rightRaycastSweep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSecondaryButtonPressLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("secondaryButtonPressLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSecondaryButtonPressRight() {
            static BNM::Field<bool> _field = GetClass().GetField(O("secondaryButtonPressRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlowCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("slowCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSmoothedFramerate() {
            static BNM::Field<int> _field = GetClass().GetField(O("SmoothedFramerate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStatusEndTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("statusEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStatusStartTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("statusStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaTagger_StiltTagData>* GetStiltTagData() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaTagger_StiltTagData>*> _field = GetClass().GetField(O("stiltTagData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTagCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("tagCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTaggedHapticDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("taggedHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTaggedHapticStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("taggedHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTaggedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("taggedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTagHapticDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("tagHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTagHapticStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("tagHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTagRadiusOverride() {
            static BNM::Field<void*> _field = GetClass().GetField(O("tagRadiusOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTagRadiusOverrideFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("tagRadiusOverrideFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::Collider*, ::GlobalNamespace::VRRig*>* GetTagRigDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Collider*, ::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tagRigDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTapCoolDown() {
            static BNM::Field<float> _field = GetClass().GetField(O("tapCoolDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTapHapticDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("tapHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTapHapticStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("tapHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetTempCreator() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("tempCreator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetTempView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("tempView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTestTutorial() {
            static BNM::Field<bool> _field = GetClass().GetField(O("testTutorial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetThirdPersonCamera() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("thirdPersonCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetTopVector() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("topVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetTouchedPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("touchedPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetTryPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("tryPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasInOverlay() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasInOverlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetXrSubsystemIsActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("xrSubsystemIsActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDefaultRefreshRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_defaultRefreshRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceFramerateCheck(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_forceFramerateCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForcePerfRefreshRate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_forcePerfRefreshRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFramerateHealthTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_framerateHealthTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFramerateIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_framerateIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFramerateTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_framerateTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFramerateTotal(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_framerateTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFramerateTracker(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("_framerateTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFramerateUpdated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_framerateUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFramesForHandTrigger(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_framesForHandTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::GorillaTagger* value) {
            static BNM::Field<::GlobalNamespace::GorillaTagger*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetLeftHandDown(::GlobalNamespace::GorillaTagger_DebouncedBool* value) {
            static BNM::Field<::GlobalNamespace::GorillaTagger_DebouncedBool*> _field = GetClass().GetField(O("_leftHandDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerformanceOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_performanceOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerfRefreshRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_perfRefreshRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevFramerateHealth(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_prevFramerateHealth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevSmoothedFramerate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_prevSmoothedFramerate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandDown(::GlobalNamespace::GorillaTagger_DebouncedBool* value) {
            static BNM::Field<::GlobalNamespace::GorillaTagger_DebouncedBool*> _field = GetClass().GetField(O("_rightHandDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveXRDisplay(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("activeXRDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioClipIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("audioClipIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseMirrorCameraCullingMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("BaseMirrorCameraCullingMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseSlideControl(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("baseSlideControl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyCollider(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("bodyCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyRaycastSweep(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("bodyRaycastSweep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodySlideSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("bodySlideSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyVector(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("bodyVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBottomVector(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("bottomVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCacheHandTapVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cacheHandTapVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliderOverlaps(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("colliderOverlaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentStatus(::GlobalNamespace::GorillaTagger_StatusEffect value) {
            static BNM::Field<::GlobalNamespace::GorillaTagger_StatusEffect> _field = GetClass().GetField(O("currentStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDirFromHitToHand(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("dirFromHitToHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableTutorial(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableTutorial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFramerateHealth(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("FramerateHealth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGorillaTagColliderLayerMask(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("gorillaTagColliderLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandTapSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("handTapSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandTapVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("handTapVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticWaitSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticWaitSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        void SetHeadCollider(::SphereCollider* value) {
            static BNM::Field<::SphereCollider*> _field = GetClass().GetField(O("headCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadRaycastSweep(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("headRaycastSweep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitInfo(::BNM::Structures::Unity::RaycastHit value) {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("hitInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInCosmeticsRoom(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inCosmeticsRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputDevice(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("inputDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastBodyPositionForTag(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastBodyPositionForTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHeadPositionForTag(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastHeadPositionForTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastLeftHandPositionForTag(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastLeftHandPositionForTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastLeftTap(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastLeftTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastLeftUpTap(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastLeftUpTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRightHandPositionForTag(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastRightHandPositionForTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRightTap(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRightTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRightUpTap(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRightUpTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftDevice(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandSlideSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("leftHandSlideSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftHandTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandTriggerCollider(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leftHandTriggerCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandWasTouching(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftHandWasTouching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHapticsBuffer(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("leftHapticsBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHapticsRoutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("leftHapticsRoutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHeadRaycastSweep(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("leftHeadRaycastSweep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftRaycastSweep(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("leftRaycastSweep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadedDeviceName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("loadedDeviceName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainCamera(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("mainCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxStiltTagDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxStiltTagDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxTagDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTagDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetModerationMutedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("moderationMutedTime"));
            _field.Set(value);
        }
        void SetNonAllocHits(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nonAllocHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNonAllocRaycastHits(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("nonAllocRaycastHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOfflineVRRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("offlineVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOfflineVRRigGRef(::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("offlineVRRig_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnHandTap(::BNM::Structures::Mono::Action<bool, ::BNM::Structures::Unity::Vector3, ::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, ::BNM::Structures::Unity::Vector3, ::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("OnHandTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnPlayerSpawnedRootCallback(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onPlayerSpawnedRootCallback"));
            _field.Set(value);
        }
        void SetOtherPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("otherPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideNotInFocus(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideNotInFocus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrimaryButtonPressLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("primaryButtonPressLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrimaryButtonPressRight(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("primaryButtonPressRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRefreshRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("refreshRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightDevice(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandSlideSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("rightHandSlideSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightHandTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandTriggerCollider(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightHandTriggerCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandWasTouching(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightHandWasTouching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHapticsBuffer(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("rightHapticsBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHapticsRoutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("rightHapticsRoutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHeadRaycastSweep(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rightHeadRaycastSweep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightRaycastSweep(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rightRaycastSweep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSecondaryButtonPressLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("secondaryButtonPressLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSecondaryButtonPressRight(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("secondaryButtonPressRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlowCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slowCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmoothedFramerate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("SmoothedFramerate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatusEndTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("statusEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatusStartTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("statusStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStiltTagData(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaTagger_StiltTagData>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaTagger_StiltTagData>*> _field = GetClass().GetField(O("stiltTagData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tagCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTaggedHapticDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("taggedHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTaggedHapticStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("taggedHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTaggedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("taggedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagHapticDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tagHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagHapticStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tagHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagRadiusOverride(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("tagRadiusOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagRadiusOverrideFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("tagRadiusOverrideFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagRigDict(::BNM::Structures::Mono::Dictionary<::Collider*, ::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Collider*, ::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tagRigDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTapCoolDown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tapCoolDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTapHapticDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tapHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTapHapticStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tapHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempCreator(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("tempCreator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("tempView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestTutorial(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("testTutorial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThirdPersonCamera(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("thirdPersonCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTopVector(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("topVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTouchedPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("touchedPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTryPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("tryPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasInOverlay(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasInOverlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetXrSubsystemIsActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("xrSubsystemIsActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnHandTap_1(::BNM::Structures::Mono::Action<bool, ::BNM::Structures::Unity::Vector3, ::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnHandTap"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ApplyStatusEffect(::GlobalNamespace::GorillaTagger_StatusEffect newStatus, float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyStatusEffect"), {"newStatus", "duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newStatus, duration);
        }
        ::BNM::Coroutine::IEnumerator* AudioClipHapticPulses(bool forLeftController, ::AudioClip* clip, float strength) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("AudioClipHapticPulses"), {"forLeftController", "clip", "strength"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(forLeftController, clip, strength);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float CalcSlideControl(float fps) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("CalcSlideControl"), {"fps"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(fps);
        }
        void CheckEndStatusEffect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckEndStatusEffect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearFramerateTracker() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearFramerateTracker"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ConfirmUpdatedFrameRate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConfirmUpdatedFrameRate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DebugDrawTagCasts(::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugDrawTagCasts"), {"color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(color);
        }
        template <typename TP0 = void*>
        void DoVibration(TP0 node, float amplitude, float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoVibration"), {"node", "amplitude", "duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(node, amplitude, duration);
        }
        void DrawSphereCast(::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3 dir, float radius, float dist, ::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawSphereCast"), {"start", "dir", "radius", "dist", "color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(start, dir, radius, dist, color);
        }
        void EndStatusEffect(::GlobalNamespace::GorillaTagger_StatusEffect effectToEnd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndStatusEffect"), {"effectToEnd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effectToEnd);
        }
        float get_DefaultHandTapVolume() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_DefaultHandTapVolume"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ForcePerfRefreshRate() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ForcePerfRefreshRate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_hasTappedSurface() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasTappedSurface"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::GorillaTagger* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::GorillaTagger*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        ::Photon_Voice_Unity::Recorder* get_myRecorder() {
            static BNM::Method<::Photon_Voice_Unity::Recorder*> _m = GetClass().GetMethod(O("get_myRecorder"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::NetworkView* get_myVRRig() {
            static BNM::Method<::GlobalNamespace::NetworkView*> _m = GetClass().GetMethod(O("get_myVRRig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_PerformanceOn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_PerformanceOn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Rigidbody* get_rigidbody() {
            static BNM::Method<::Rigidbody*> _m = GetClass().GetMethod(O("get_rigidbody"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::VRRigSerializer* get_rigSerializer() {
            static BNM::Method<::GlobalNamespace::VRRigSerializer*> _m = GetClass().GetMethod(O("get_rigSerializer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_sphereCastRadius() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_sphereCastRadius"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GuidedRefInitialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GuidedRefInitialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* HapticPulses(bool forLeftController, float amplitude, float duration) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("HapticPulses"), {"forLeftController", "amplitude", "duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(forLeftController, amplitude, duration);
        }
        void HitWithKnockBack(::GlobalNamespace::NetPlayer* taggedPlayer, ::GlobalNamespace::NetPlayer* taggingPlayer, bool leftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HitWithKnockBack"), {"taggedPlayer", "taggingPlayer", "leftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, taggingPlayer, leftHand);
        }
        bool IsOculusQuest2() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsOculusQuest2"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void IsXRSubsystemActive() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IsXRSubsystemActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void OnPlayerSpawned(::BNM::Structures::Mono::Action<>* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerSpawned"), {"action"});
            _m.Call(action);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void PlayHapticClip(bool forLeftController, ::AudioClip* clip, float strength) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHapticClip"), {"forLeftController", "clip", "strength"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(forLeftController, clip, strength);
        }
        void ProcessHandTapping(bool& isLeftHand, ::GorillaLocomotion::StiltID& stiltID, float& lastTapTime, float& lastTapUpTime, bool& wasHandTouching, ::AudioSource*& handSlideSource) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessHandTapping"), {"isLeftHand", "stiltID", "lastTapTime", "lastTapUpTime", "wasHandTouching", "handSlideSource"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&isLeftHand, &stiltID, &lastTapTime, &lastTapUpTime, &wasHandTouching, &handSlideSource);
        }
        void RecoverMissingRefs() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RecoverMissingRefs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename T>
        void RecoverMissingRefs_Asdf(T& objRef, ::BNM::Structures::Mono::String* objFieldName, ::BNM::Structures::Mono::String* recoveryPath) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RecoverMissingRefs_Asdf"), {"objRef", "objFieldName", "recoveryPath"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&objRef, objFieldName, recoveryPath);
        }
        void remove_OnHandTap_1(::BNM::Structures::Mono::Action<bool, ::BNM::Structures::Unity::Vector3, ::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnHandTap"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ResetTappedSurfaceCheck() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetTappedSurfaceCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_hasTappedSurface(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_hasTappedSurface"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_myRecorder(::Photon_Voice_Unity::Recorder* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_myRecorder"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_rigidbody(::Rigidbody* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_rigidbody"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetExtraHandPosition(::GorillaLocomotion::StiltID stiltID, ::BNM::Structures::Unity::Vector3 position, bool canTag, bool canStun) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetExtraHandPosition"), {"stiltID", "position", "canTag", "canStun"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stiltID, position, canTag, canStun);
        }
        void SetForcedRefreshRate(bool forcePerf, float newRefreshRate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetForcedRefreshRate"), {"forcePerf", "newRefreshRate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(forcePerf, newRefreshRate);
        }
        void SetTagRadiusOverrideThisFrame(float radius) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTagRadiusOverrideThisFrame"), {"radius"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(radius);
        }
        void ShowCosmeticParticles(bool showParticles) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowCosmeticParticles"), {"showParticles"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(showParticles);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartVibration(bool forLeftController, float amplitude, float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartVibration"), {"forLeftController", "amplitude", "duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(forLeftController, amplitude, duration);
        }
        void StopHapticClip(bool forLeftController) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopHapticClip"), {"forLeftController"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(forLeftController);
        }
        void ToggleDefaultPerformanceRefresh() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleDefaultPerformanceRefresh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ToggleForcedPerformanceRefresh() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleForcedPerformanceRefresh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ToggleForcedRefreshRate(float newRefreshRate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleForcedRefreshRate"), {"newRefreshRate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newRefreshRate);
        }
        bool TryToTag(::Collider* hitCollider, bool isBodyTag, bool canStun, float maxTagDistance, ::GlobalNamespace::NetPlayer*& taggedPlayer, ::GlobalNamespace::NetPlayer*& touchedNetPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryToTag"), {"hitCollider", "isBodyTag", "canStun", "maxTagDistance", "taggedPlayer", "touchedNetPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hitCollider, isBodyTag, canStun, maxTagDistance, &taggedPlayer, &touchedNetPlayer);
        }
        bool TryToTag(::GlobalNamespace::VRRig* rig, ::BNM::Structures::Unity::Vector3 hitObjectPos, bool isBodyTag, bool canStun, float maxTagDistance, ::GlobalNamespace::NetPlayer*& taggedPlayer, ::GlobalNamespace::NetPlayer*& touchedPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryToTag"), {"rig", "hitObjectPos", "isBodyTag", "canStun", "maxTagDistance", "taggedPlayer", "touchedPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rig, hitObjectPos, isBodyTag, canStun, maxTagDistance, &taggedPlayer, &touchedPlayer);
        }
        void UpdateColor(float red, float green, float blue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateColor"), {"red", "green", "blue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(red, green, blue);
        }
        void UpdateResolutionScale(bool performanceMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateResolutionScale"), {"performanceMode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(performanceMode);
        }
    };
}
