#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BoingEffector_Params.hpp"
#include "BoingReactor.hpp"
#include "Version.hpp"

namespace BoingKit {
    struct BoingBones : ::BoingKit::BoingReactor {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingBones");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetMinScale() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_MinScale"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::BoingKit::BoingBoneCollider*>* GetBoingColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BoingKit::BoingBoneCollider*>*> _field = GetClass().GetField(O("BoingColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BoingKit::BoingBones_Chain*>* GetBoneChains() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BoingKit::BoingBones_Chain*>*> _field = GetClass().GetField(O("BoneChains"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BoingKit::BoingBones_Bone*>* GetBoneData() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BoingKit::BoingBones_Bone*>*> _field = GetClass().GetField(O("BoneData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDrawBoingBones() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugDrawBoingBones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDrawBoneNames() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugDrawBoneNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDrawChainBounds() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugDrawChainBounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDrawColliders() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugDrawColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDrawFinalBones() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugDrawFinalBones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDrawLengthFromRoot() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugDrawLengthFromRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDrawRawBones() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugDrawRawBones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDrawTargetBones() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugDrawTargetBones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMMinScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_minScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxCollisionResolutionSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxCollisionResolutionSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTwistPropagation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("TwistPropagation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetUnityColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("UnityColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBoingColliders(::BNM::Structures::Mono::Array<::BoingKit::BoingBoneCollider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BoingKit::BoingBoneCollider*>*> _field = GetClass().GetField(O("BoingColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoneChains(::BNM::Structures::Mono::Array<::BoingKit::BoingBones_Chain*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BoingKit::BoingBones_Chain*>*> _field = GetClass().GetField(O("BoneChains"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoneData(::BNM::Structures::Mono::Array<::BoingKit::BoingBones_Bone*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BoingKit::BoingBones_Bone*>*> _field = GetClass().GetField(O("BoneData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDrawBoingBones(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugDrawBoingBones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDrawBoneNames(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugDrawBoneNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDrawChainBounds(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugDrawChainBounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDrawColliders(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugDrawColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDrawFinalBones(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugDrawFinalBones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDrawLengthFromRoot(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugDrawLengthFromRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDrawRawBones(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugDrawRawBones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDrawTargetBones(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugDrawTargetBones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMMinScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_minScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxCollisionResolutionSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxCollisionResolutionSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTwistPropagation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("TwistPropagation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnityColliders(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("UnityColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AccumulateTarget(::BoingKit::BoingEffector_Params& effector, float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AccumulateTarget"), {"effector", "dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&effector, dt);
        }
        void EndAccumulateTargets() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndAccumulateTargets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float get_MinScale() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_MinScale"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
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
        void OnUpgrade(::BoingKit::Version oldVersion, ::BoingKit::Version newVersion) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpgrade"), {"oldVersion", "newVersion"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(oldVersion, newVersion);
        }
        void OnValidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PrepareExecute() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PrepareExecute"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Reboot() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reboot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Reboot(int iChain) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reboot"), {"iChain"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(iChain);
        }
        void Register() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RescanBoneChains() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RescanBoneChains"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Restore() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Restore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Unregister() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateCollisionRadius() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCollisionRadius"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
