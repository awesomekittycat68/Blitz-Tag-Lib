#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LckSocialCamera_CameraData.hpp"
#include "LckSocialCamera_CameraState.hpp"
#include "LckSocialCamera_CameraType.hpp"
#include "NetworkComponent.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct LckSocialCamera : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LckSocialCamera");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::LckSocialCamera_CameraData& GetNetworkedData() {
            static BNM::Method<::GlobalNamespace::LckSocialCamera_CameraData&> _method = GetClass().GetMethod(O("get__networkedData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsOnNeck() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsOnNeck"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsOnNeck(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsOnNeck"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetRecording() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_recording"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRecording(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_recording"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::LCKSocialCameraFollower* GetSocialCameraFollower() {
            static BNM::Method<::GlobalNamespace::LCKSocialCameraFollower*> _method = GetClass().GetMethod(O("get_SocialCameraFollower"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSocialCameraFollower(::GlobalNamespace::LCKSocialCameraFollower* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SocialCameraFollower"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetVisible() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_visible"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetVisible(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_visible"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::VRRig* GetVrRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _method = GetClass().GetMethod(O("get_VrRig"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::LckSocialCamera_CameraData GetNetworkedData_f() {
            static BNM::Field<::GlobalNamespace::LckSocialCamera_CameraData> _field = GetClass().GetField(O("__networkedData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LckSocialCamera_CameraState GetLocalState() {
            static BNM::Field<::GlobalNamespace::LckSocialCamera_CameraState> _field = GetClass().GetField(O("_localState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LckSocialCamera_CameraState GetPreviousRenderedState() {
            static BNM::Field<::GlobalNamespace::LckSocialCamera_CameraState> _field = GetClass().GetField(O("_previousRenderedState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetScaleTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_scaleTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetVrrig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_vrrig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCameraVisuals() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("CameraVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LckSocialCamera_CameraType GetMCameraType() {
            static BNM::Field<::GlobalNamespace::LckSocialCamera_CameraType> _field = GetClass().GetField(O("m_cameraType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMCameraVisuals() {
            static BNM::Field<void*> _field = GetClass().GetField(O("m_CameraVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMIsCorrupted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_isCorrupted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMLckDelegateRegistered() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_lckDelegateRegistered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRigSerializer* GetMRigNetworkController() {
            static BNM::Field<::GlobalNamespace::VRRigSerializer*> _field = GetClass().GetField(O("m_rigNetworkController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNetworkedData(::GlobalNamespace::LckSocialCamera_CameraData value) {
            static BNM::Field<::GlobalNamespace::LckSocialCamera_CameraData> _field = GetClass().GetField(O("__networkedData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalState(::GlobalNamespace::LckSocialCamera_CameraState value) {
            static BNM::Field<::GlobalNamespace::LckSocialCamera_CameraState> _field = GetClass().GetField(O("_localState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousRenderedState(::GlobalNamespace::LckSocialCamera_CameraState value) {
            static BNM::Field<::GlobalNamespace::LckSocialCamera_CameraState> _field = GetClass().GetField(O("_previousRenderedState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_scaleTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrrig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_vrrig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraVisuals(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("CameraVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMCameraType(::GlobalNamespace::LckSocialCamera_CameraType value) {
            static BNM::Field<::GlobalNamespace::LckSocialCamera_CameraType> _field = GetClass().GetField(O("m_cameraType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMCameraVisuals(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("m_CameraVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMIsCorrupted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_isCorrupted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLckDelegateRegistered(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_lckDelegateRegistered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMRigNetworkController(::GlobalNamespace::VRRigSerializer* value) {
            static BNM::Field<::GlobalNamespace::VRRigSerializer*> _field = GetClass().GetField(O("m_rigNetworkController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyVisualState(::GlobalNamespace::LckSocialCamera_CameraState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyVisualState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyBackingFieldsToState(bool ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyBackingFieldsToState"), {""});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyStateToBackingFields() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyStateToBackingFields"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::LckSocialCamera_CameraData& get__networkedData() {
            static BNM::Method<::GlobalNamespace::LckSocialCamera_CameraData&> _m = GetClass().GetMethod(O("get__networkedData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsOnNeck() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsOnNeck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_recording() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_recording"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::LCKSocialCameraFollower* get_SocialCameraFollower() {
            static BNM::Method<::GlobalNamespace::LCKSocialCameraFollower*> _m = GetClass().GetMethod(O("get_SocialCameraFollower"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_visible() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_visible"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::VRRig* get_VrRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("get_VrRig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool GetFlag(::GlobalNamespace::LckSocialCamera_CameraState currentState, ::GlobalNamespace::LckSocialCamera_CameraState flag) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetFlag"), {"currentState", "flag"});
            return _m.Call(currentState, flag);
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
        void OnManagerSpawned(::GlobalNamespace::LckSocialCameraManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnManagerSpawned"), {"manager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(manager);
        }
        void OnSpawned() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSpawned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSuccesfullSpawn(::GlobalNamespace::RigContainer*& rig, ::GlobalNamespace::PhotonMessageInfoWrapped& info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSuccesfullSpawn"), {"rig", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&rig, &info);
        }
        void ReadDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReadDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void ReadDataShared(::GlobalNamespace::LckSocialCamera_CameraState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataShared"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void set_IsOnNeck(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsOnNeck"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_recording(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_recording"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SocialCameraFollower(::GlobalNamespace::LCKSocialCameraFollower* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SocialCameraFollower"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_visible(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_visible"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static ::GlobalNamespace::LckSocialCamera_CameraState SetFlag(::GlobalNamespace::LckSocialCamera_CameraState currentState, ::GlobalNamespace::LckSocialCamera_CameraState flag, bool shouldBeSet) {
            static BNM::Method<::GlobalNamespace::LckSocialCamera_CameraState> _m = GetClass().GetMethod(O("SetFlag"), {"currentState", "flag", "shouldBeSet"});
            return _m.Call(currentState, flag, shouldBeSet);
        }
        void SetVisibility(bool isVisible) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVisibility"), {"isVisible"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isVisible);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TurnOff() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TurnOff"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
    };
}
