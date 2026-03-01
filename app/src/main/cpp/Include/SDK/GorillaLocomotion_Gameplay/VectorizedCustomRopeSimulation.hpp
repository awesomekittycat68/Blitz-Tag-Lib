#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VectorizedBurstRopeData.hpp"

namespace GorillaLocomotion_Gameplay {
    struct VectorizedCustomRopeSimulation : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Gameplay", "VectorizedCustomRopeSimulation");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaLocomotion_Gameplay::VectorizedCustomRopeSimulation* GetInstance() {
            static BNM::Field<::GorillaLocomotion_Gameplay::VectorizedCustomRopeSimulation*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr int MAX_NODE_COUNT = 32;
        static constexpr float MAX_ROPE_SPEED = 15.0f;
        int GetApplyConstraintIterations() {
            static BNM::Field<int> _field = GetClass().GetField(O("applyConstraintIterations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Gameplay::VectorizedBurstRopeData GetBurstData() {
            static BNM::Field<::GorillaLocomotion_Gameplay::VectorizedBurstRopeData> _field = GetClass().GetField(O("burstData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::GorillaRopeSwing*>* GetDeregisterQueue() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::GorillaRopeSwing*>*> _field = GetClass().GetField(O("deregisterQueue"));
            return _field.Get();
        }
        int GetFinalPassIterations() {
            static BNM::Field<int> _field = GetClass().GetField(O("finalPassIterations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGravity() {
            static BNM::Field<float> _field = GetClass().GetField(O("gravity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaLocomotion_Gameplay::VectorizedCustomRopeSimulation* GetInstance_f() {
            static BNM::Field<::GorillaLocomotion_Gameplay::VectorizedCustomRopeSimulation*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        float GetLastDelta() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastDelta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNodeDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("nodeDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetNodes() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("nodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::GorillaRopeSwing*>* GetRegisterQueue() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::GorillaRopeSwing*>*> _field = GetClass().GetField(O("registerQueue"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::GorillaRopeSwing*>* GetRopes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::GorillaRopeSwing*>*> _field = GetClass().GetField(O("ropes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetApplyConstraintIterations(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("applyConstraintIterations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBurstData(::GorillaLocomotion_Gameplay::VectorizedBurstRopeData value) {
            static BNM::Field<::GorillaLocomotion_Gameplay::VectorizedBurstRopeData> _field = GetClass().GetField(O("burstData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetDeregisterQueue(::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::GorillaRopeSwing*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::GorillaRopeSwing*>*> _field = GetClass().GetField(O("deregisterQueue"));
            _field.Set(value);
        }
        void SetFinalPassIterations(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("finalPassIterations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gravity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaLocomotion_Gameplay::VectorizedCustomRopeSimulation* value) {
            static BNM::Field<::GorillaLocomotion_Gameplay::VectorizedCustomRopeSimulation*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetLastDelta(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastDelta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nodeDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodes(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("nodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRegisterQueue(::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::GorillaRopeSwing*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::GorillaRopeSwing*>*> _field = GetClass().GetField(O("registerQueue"));
            _field.Set(value);
        }
        void SetRopes(::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::GorillaRopeSwing*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::GorillaRopeSwing*>*> _field = GetClass().GetField(O("ropes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetNodeVelocity(::GorillaLocomotion_Gameplay::GorillaRopeSwing* ropeTarget, int nodeIndex) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetNodeVelocity"), {"ropeTarget", "nodeIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(ropeTarget, nodeIndex);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RegenerateData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegenerateData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void Register(::GorillaLocomotion_Gameplay::GorillaRopeSwing* rope) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"rope"});
            _m.Call(rope);
        }
        void SetMassForPlayers(::GorillaLocomotion_Gameplay::GorillaRopeSwing* ropeTarget, bool hasPlayers, int furthestBoneIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMassForPlayers"), {"ropeTarget", "hasPlayers", "furthestBoneIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ropeTarget, hasPlayers, furthestBoneIndex);
        }
        void SetRopePos(::GorillaLocomotion_Gameplay::GorillaRopeSwing* ropeTarget, ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* positions, bool setCurPos, bool setLastPos, int onlySetIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRopePos"), {"ropeTarget", "positions", "setCurPos", "setLastPos", "onlySetIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ropeTarget, positions, setCurPos, setLastPos, onlySetIndex);
        }
        void SetVelocity(::GorillaLocomotion_Gameplay::GorillaRopeSwing* ropeTarget, ::BNM::Structures::Unity::Vector3 velocity, bool wholeRope, int boneIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVelocity"), {"ropeTarget", "velocity", "wholeRope", "boneIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ropeTarget, velocity, wholeRope, boneIndex);
        }
        static void Unregister(::GorillaLocomotion_Gameplay::GorillaRopeSwing* rope) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"rope"});
            _m.Call(rope);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
