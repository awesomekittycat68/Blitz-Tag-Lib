#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaMetaReport : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaMetaReport");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaLocomotion::GTPlayer* GetLocalPlayer() {
            static BNM::Method<::GorillaLocomotion::GTPlayer*> _method = GetClass().GetMethod(O("get_localPlayer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetBlockButtonsUntilTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("blockButtonsUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaReportButton* GetCloseButton() {
            static BNM::Field<::GlobalNamespace::GorillaReportButton*> _field = GetClass().GetField(O("closeButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaScoreBoard* GetCurrentScoreboard() {
            static BNM::Field<::GlobalNamespace::GorillaScoreBoard*> _field = GetClass().GetField(O("currentScoreboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasSavedCullingMask() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasSavedCullingMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsMoving() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMoving"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLeftHandObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leftHandObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMovementTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("movementTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetOccluder() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("occluder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPlayerLocalScreenPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("playerLocalScreenPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetReportScoreboard() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("reportScoreboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetReportText() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ReportText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRightHandObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightHandObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSavedCullingLayers() {
            static BNM::Field<int> _field = GetClass().GetField(O("savedCullingLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTestPress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("testPress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetVisibleLayers() {
            static BNM::Field<void*> _field = GetClass().GetField(O("visibleLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlockButtonsUntilTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("blockButtonsUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCloseButton(::GlobalNamespace::GorillaReportButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaReportButton*> _field = GetClass().GetField(O("closeButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentScoreboard(::GlobalNamespace::GorillaScoreBoard* value) {
            static BNM::Field<::GlobalNamespace::GorillaScoreBoard*> _field = GetClass().GetField(O("currentScoreboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasSavedCullingMask(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasSavedCullingMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsMoving(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMoving"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leftHandObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMovementTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("movementTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOccluder(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("occluder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerLocalScreenPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("playerLocalScreenPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReportScoreboard(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("reportScoreboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReportText(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ReportText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightHandObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSavedCullingLayers(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("savedCullingLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestPress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("testPress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisibleLayers(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("visibleLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CheckDistance() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckDistance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckReportSubmit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckReportSubmit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DuplicateScoreboard() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DuplicateScoreboard"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::BNM::Structures::Mono::String* FormatListToString(::BNM::Structures::Mono::String*& list) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("FormatListToString"), {"list"});
            return _m.Call(&list);
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
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnMuteSanction(::BNM::Structures::Mono::String* muteNotification) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMuteSanction"), {"muteNotification"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(muteNotification);
        }
        void OnNotification(::GlobalNamespace::NotificationsMessageResponse* notification, ::BNM::Types::nint _) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnNotification"), {"notification", "_"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(notification, _);
        }
        void OnWarning(::BNM::Structures::Mono::String* warningNotification) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnWarning"), {"warningNotification"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(warningNotification);
        }
        ::BNM::Coroutine::IEnumerator* Start() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void StartOverlay(bool isSanction) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartOverlay"), {"isSanction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isSanction);
        }
        ::BNM::Coroutine::IEnumerator* Submitted() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("Submitted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Teardown() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Teardown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ToggleLevelVisibility(bool state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleLevelVisibility"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
