#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/PhotonMessageInfoWrapped.hpp"

namespace GorillaLocomotion_Gameplay {
    struct GorillaRopeSwing : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Gameplay", "GorillaRopeSwing");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float MAX_VELOCITY_FOR_IDLE = 0.5f;
        static constexpr float TIME_FOR_IDLE = 2.0f;
        bool GetHasPlayers() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasPlayers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsFullyIdle() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isFullyIdle"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsFullyIdle(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_isFullyIdle"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsIdle() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isIdle"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsIdle(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_isIdle"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetSupportsMovingAtRuntime() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_SupportsMovingAtRuntime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasMonkeBlockParent() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasMonkeBlockParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastGrabTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastGrabTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastNodeCheckIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastNodeCheckIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLocalPlayerBoneIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("localPlayerBoneIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLocalPlayerOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("localPlayerOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLocalPlayerXRNode() {
            static BNM::Field<void*> _field = GetClass().GetField(O("localPlayerXRNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetMonkeBlockParent() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("monkeBlockParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetNodeHits() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("nodeHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetNodes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("nodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPotentialIdleTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("potentialIdleTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPrefabRopeBit() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("prefabRopeBit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* GetRemotePlayers() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("remotePlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRopeBitGenOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("ropeBitGenOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetRopeCreakSFX() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("ropeCreakSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRopeDataIndexOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("ropeDataIndexOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRopeDataStartIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("ropeDataStartIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRopeId() {
            static BNM::Field<int> _field = GetClass().GetField(O("ropeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRopeLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("ropeLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScaleFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Gameplay::GorillaRopeSwingSettings* GetSettings() {
            static BNM::Field<::GorillaLocomotion_Gameplay::GorillaRopeSwingSettings*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStarted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("started"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetStaticId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("staticId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSupportMovingAtRuntime() {
            static BNM::Field<bool> _field = GetClass().GetField(O("supportMovingAtRuntime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseStaticId() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useStaticId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaVelocityTracker* GetVelocityTracker() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaVelocityTracker*> _field = GetClass().GetField(O("velocityTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetWallLayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("wallLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHasMonkeBlockParent(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasMonkeBlockParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastGrabTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastGrabTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastNodeCheckIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastNodeCheckIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPlayerBoneIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("localPlayerBoneIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPlayerOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("localPlayerOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPlayerXRNode(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("localPlayerXRNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMonkeBlockParent(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("monkeBlockParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeHits(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("nodeHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodes(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("nodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPotentialIdleTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("potentialIdleTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrefabRopeBit(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("prefabRopeBit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemotePlayers(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("remotePlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeBitGenOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ropeBitGenOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeCreakSFX(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("ropeCreakSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeDataIndexOffset(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ropeDataIndexOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeDataStartIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ropeDataStartIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ropeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeLength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ropeLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSettings(::GorillaLocomotion_Gameplay::GorillaRopeSwingSettings* value) {
            static BNM::Field<::GorillaLocomotion_Gameplay::GorillaRopeSwingSettings*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStarted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("started"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStaticId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("staticId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSupportMovingAtRuntime(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("supportMovingAtRuntime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseStaticId(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useStaticId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityTracker(::GorillaLocomotion_Climbing::GorillaVelocityTracker* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaVelocityTracker*> _field = GetClass().GetField(O("velocityTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWallLayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("wallLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        void AttachLocalPlayer(TP0 xrNode, ::Transform* grabbedBone, ::BNM::Structures::Unity::Vector3 offset, ::BNM::Structures::Unity::Vector3 velocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachLocalPlayer"), {"xrNode", "grabbedBone", "offset", "velocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(xrNode, grabbedBone, offset, velocity);
        }
        bool AttachRemotePlayer(int playerId, int boneIndex, ::Transform* offsetTransform, ::BNM::Structures::Unity::Vector3 offset) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AttachRemotePlayer"), {"playerId", "boneIndex", "offsetTransform", "offset"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerId, boneIndex, offsetTransform, offset);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CalculateId(bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalculateId"), {"force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(force);
        }
        void DetachLocalPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DetachLocalPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DetachRemotePlayer(int playerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DetachRemotePlayer"), {"playerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerId);
        }
        void EdRecalculateId() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EdRecalculateId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_hasPlayers() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasPlayers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isFullyIdle() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isFullyIdle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isIdle() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isIdle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_SupportsMovingAtRuntime() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_SupportsMovingAtRuntime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* GetBone(int index) {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetBone"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        int GetBoneIndex(::Transform* r) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetBoneIndex"), {"r"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(r);
        }
        void InvokeUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsAttachedToMovingPiece() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAttachedToMovingPiece"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void OnPieceActivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceActivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPieceCreate(int pieceType, int pieceId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceCreate"), {"pieceType", "pieceId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceType, pieceId);
        }
        void OnPieceDeactivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceDeactivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPieceDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPiecePlacementDeserialized() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPiecePlacementDeserialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshAllBonesMass() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshAllBonesMass"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_isFullyIdle(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isFullyIdle"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_isIdle(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isIdle"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetIsIdle_1(bool idle, bool resetPos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetIsIdle"), {"idle", "resetPos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(idle, resetPos);
        }
        void SetVelocity(int boneIndex, ::BNM::Structures::Unity::Vector3 velocity, bool wholeRope, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVelocity"), {"boneIndex", "velocity", "wholeRope", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(boneIndex, velocity, wholeRope, info);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ToggleVelocityTracker(bool enable, int boneIndex, ::BNM::Structures::Unity::Vector3 offset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleVelocityTracker"), {"enable", "boneIndex", "offset"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable, boneIndex, offset);
        }
    };
}
