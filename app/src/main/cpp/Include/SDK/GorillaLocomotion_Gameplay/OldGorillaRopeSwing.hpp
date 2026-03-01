#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/MonoBehaviourPun.hpp"

namespace GorillaLocomotion_Gameplay {
    struct OldGorillaRopeSwing : ::Photon_Pun::MonoBehaviourPun {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Gameplay", "OldGorillaRopeSwing");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float kPlayerMass = 0.8f;
        static constexpr float ropeBitGenOffset = 1.0f;
        static constexpr float MAX_ROPE_SPEED = 15.0f;
        static constexpr float MAX_VELOCITY_FOR_IDLE = 0.1f;
        static constexpr float TIME_FOR_IDLE = 2.0f;
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
        ::BNM::Structures::Mono::Array<::Rigidbody*>* GetBones() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Rigidbody*>*> _field = GetClass().GetField(O("bones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastGrabTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastGrabTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetLocalGrabbedRigid() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("localGrabbedRigid"));
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
        ::AudioSource* GetRopeCreakSFX() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("ropeCreakSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRopeLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("ropeLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Gameplay::GorillaRopeSwingSettings* GetSettings() {
            static BNM::Field<::GorillaLocomotion_Gameplay::GorillaRopeSwingSettings*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBones(::BNM::Structures::Mono::Array<::Rigidbody*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Rigidbody*>*> _field = GetClass().GetField(O("bones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastGrabTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastGrabTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalGrabbedRigid(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("localGrabbedRigid"));
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
        void SetRopeCreakSFX(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("ropeCreakSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeLength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ropeLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSettings(::GorillaLocomotion_Gameplay::GorillaRopeSwingSettings* value) {
            static BNM::Field<::GorillaLocomotion_Gameplay::GorillaRopeSwingSettings*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        void AttachLocalPlayer(TP0 xrNode, ::Rigidbody* rigid, ::BNM::Structures::Unity::Vector3 offset, ::BNM::Structures::Unity::Vector3 velocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachLocalPlayer"), {"xrNode", "rigid", "offset", "velocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(xrNode, rigid, offset, velocity);
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
        bool get_isIdle() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isIdle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Rigidbody* GetBone(int index) {
            static BNM::Method<::Rigidbody*> _m = GetClass().GetMethod(O("GetBone"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        int GetBoneIndex(::Rigidbody* r) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetBoneIndex"), {"r"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(r);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_isIdle(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isIdle"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetIsIdle_1(bool idle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetIsIdle"), {"idle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(idle);
        }
        void SetVelocity(int boneIndex, ::BNM::Structures::Unity::Vector3 velocity, bool wholeRope, ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* ropeRotations, ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* ropeVelocities) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVelocity"), {"boneIndex", "velocity", "wholeRope", "ropeRotations", "ropeVelocities"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(boneIndex, velocity, wholeRope, ropeRotations, ropeVelocities);
        }
        void SetVelocity_RPC(int boneIndex, ::BNM::Structures::Unity::Vector3 velocity, bool wholeRope, ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* ropeRotations, ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* ropeVelocities) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVelocity_RPC"), {"boneIndex", "velocity", "wholeRope", "ropeRotations", "ropeVelocities"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(boneIndex, velocity, wholeRope, ropeRotations, ropeVelocities);
        }
        void ToggleIsKinematic(bool kinematic) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleIsKinematic"), {"kinematic"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(kinematic);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
