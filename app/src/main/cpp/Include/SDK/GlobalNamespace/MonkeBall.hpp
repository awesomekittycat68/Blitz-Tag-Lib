#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonoBehaviourTick.hpp"

namespace GlobalNamespace {
    struct MonkeBall : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MonkeBall");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDroppedTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("_droppedTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetJustGrabbed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_justGrabbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetJustGrabbedTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("_justGrabbedTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLaunchAfterScore() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_launchAfterScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOffsetThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("_offsetThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPositionFailsafe() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_positionFailsafe"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPositionFailsafeTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("_positionFailsafeTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetResyncDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("_resyncDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetResyncPosition() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_resyncPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRigidBody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("_rigidBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetVisualOffset() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_visualOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAlreadyDropped() {
            static BNM::Field<bool> _field = GetClass().GetField(O("alreadyDropped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetDefaultMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameBall* GetGameBall() {
            static BNM::Field<::GlobalNamespace::GameBall*> _field = GetClass().GetField(O("gameBall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastVisiblePosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastVisiblePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetMainRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("mainRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxLerpTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLerpTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOffsetLerp() {
            static BNM::Field<float> _field = GetClass().GetField(O("offsetLerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetRestrictTeamGrabEndTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("restrictTeamGrabEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetTeamMaterial() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("teamMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDroppedTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_droppedTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJustGrabbed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_justGrabbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJustGrabbedTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_justGrabbedTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchAfterScore(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_launchAfterScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffsetThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_offsetThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionFailsafe(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_positionFailsafe"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionFailsafeTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_positionFailsafeTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResyncDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_resyncDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResyncPosition(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_resyncPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigidBody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("_rigidBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisualOffset(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_visualOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAlreadyDropped(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("alreadyDropped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameBall(::GlobalNamespace::GameBall* value) {
            static BNM::Field<::GlobalNamespace::GameBall*> _field = GetClass().GetField(O("gameBall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastVisiblePosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastVisiblePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("mainRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxLerpTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLerpTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffsetLerp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("offsetLerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestrictTeamGrabEndTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("restrictTeamGrabEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeamMaterial(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("teamMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool AlreadyDropped() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AlreadyDropped"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ClearCannotGrabTeamId() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearCannotGrabTeamId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GlobalNamespace::MonkeBall* Get(::GlobalNamespace::GameBall* ball) {
            static BNM::Method<::GlobalNamespace::MonkeBall*> _m = GetClass().GetMethod(O("Get"), {"ball"});
            return _m.Call(ball);
        }
        static bool IsGamePlayer(::Collider* collider) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsGamePlayer"), {"collider"});
            return _m.Call(collider);
        }
        void OnCollisionEnter(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionEnter"), {"collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collision);
        }
        void OnGrabbed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrabbed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSwitchHeldByTeam(int teamId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSwitchHeldByTeam"), {"teamId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(teamId);
        }
        void ReattachVisuals() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReattachVisuals"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Refresh() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Refresh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool RestrictBallToTeam(int teamId, float duration) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RestrictBallToTeam"), {"teamId", "duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(teamId, duration);
        }
        void SetRigidbodyContinuous() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRigidbodyContinuous"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetRigidbodyDiscrete() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRigidbodyDiscrete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetVisualOffset_1(bool detach) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVisualOffset"), {"detach"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(detach);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TriggerDelayedResync() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerDelayedResync"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateVisualOffset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateVisualOffset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
