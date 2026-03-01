#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BoingBones_Chain_CurveType.hpp"

namespace BoingKit {
    struct BoingBones_Chain : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingBones").GetInnerClass("Chain");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BoingKit::BoingBones_Chain_CurveType GetAnimationBlendCurveType() {
            static BNM::Field<::BoingKit::BoingBones_Chain_CurveType> _field = GetClass().GetField(O("AnimationBlendCurveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetAnimationBlendCustomCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("AnimationBlendCustomCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingBones_Chain_CurveType GetBendAngleCapCurveType() {
            static BNM::Field<::BoingKit::BoingBones_Chain_CurveType> _field = GetClass().GetField(O("BendAngleCapCurveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetBendAngleCapCustomCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("BendAngleCapCustomCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetBounds() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Bounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingBones_Chain_CurveType GetCollisionRadiusCurveType() {
            static BNM::Field<::BoingKit::BoingBones_Chain_CurveType> _field = GetClass().GetField(O("CollisionRadiusCurveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCollisionRadiusCustomCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("CollisionRadiusCustomCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEffectorReaction() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EffectorReaction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableBoingKitCollision() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableBoingKitCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableInterChainCollision() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableInterChainCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableUnityCollision() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableUnityCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetExclusion() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("Exclusion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetGravity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("Gravity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingBones_Chain_CurveType GetLengthStiffnessCurveType() {
            static BNM::Field<::BoingKit::BoingBones_Chain_CurveType> _field = GetClass().GetField(O("LengthStiffnessCurveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLengthStiffnessCustomCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("LengthStiffnessCustomCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLooseRoot() {
            static BNM::Field<bool> _field = GetClass().GetField(O("LooseRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMHierarchyHash() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_hierarchyHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetMScannedExclusion() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("m_scannedExclusion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetMScannedRoot() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("m_scannedRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxBendAngleCap() {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxBendAngleCap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxCollisionRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxCollisionRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxLengthFromRoot() {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxLengthFromRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxSquash() {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxSquash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxStretch() {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxStretch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::SharedBoingParams* GetParamsOverride() {
            static BNM::Field<::BoingKit::SharedBoingParams*> _field = GetClass().GetField(O("ParamsOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingBones_Chain_CurveType GetPoseStiffnessCurveType() {
            static BNM::Field<::BoingKit::BoingBones_Chain_CurveType> _field = GetClass().GetField(O("PoseStiffnessCurveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPoseStiffnessCustomCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("PoseStiffnessCustomCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRoot() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("Root"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingBones_Chain_CurveType GetSquashAndStretchCurveType() {
            static BNM::Field<::BoingKit::BoingBones_Chain_CurveType> _field = GetClass().GetField(O("SquashAndStretchCurveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSquashAndStretchCustomCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("SquashAndStretchCustomCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimationBlendCurveType(::BoingKit::BoingBones_Chain_CurveType value) {
            static BNM::Field<::BoingKit::BoingBones_Chain_CurveType> _field = GetClass().GetField(O("AnimationBlendCurveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimationBlendCustomCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("AnimationBlendCustomCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBendAngleCapCurveType(::BoingKit::BoingBones_Chain_CurveType value) {
            static BNM::Field<::BoingKit::BoingBones_Chain_CurveType> _field = GetClass().GetField(O("BendAngleCapCurveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBendAngleCapCustomCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("BendAngleCapCustomCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBounds(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Bounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionRadiusCurveType(::BoingKit::BoingBones_Chain_CurveType value) {
            static BNM::Field<::BoingKit::BoingBones_Chain_CurveType> _field = GetClass().GetField(O("CollisionRadiusCurveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionRadiusCustomCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("CollisionRadiusCustomCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEffectorReaction(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EffectorReaction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableBoingKitCollision(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableBoingKitCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableInterChainCollision(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableInterChainCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableUnityCollision(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableUnityCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExclusion(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("Exclusion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("Gravity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLengthStiffnessCurveType(::BoingKit::BoingBones_Chain_CurveType value) {
            static BNM::Field<::BoingKit::BoingBones_Chain_CurveType> _field = GetClass().GetField(O("LengthStiffnessCurveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLengthStiffnessCustomCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("LengthStiffnessCustomCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLooseRoot(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("LooseRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMHierarchyHash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_hierarchyHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMScannedExclusion(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("m_scannedExclusion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMScannedRoot(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("m_scannedRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxBendAngleCap(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxBendAngleCap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxCollisionRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxCollisionRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxLengthFromRoot(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxLengthFromRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxSquash(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxSquash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxStretch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MaxStretch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParamsOverride(::BoingKit::SharedBoingParams* value) {
            static BNM::Field<::BoingKit::SharedBoingParams*> _field = GetClass().GetField(O("ParamsOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPoseStiffnessCurveType(::BoingKit::BoingBones_Chain_CurveType value) {
            static BNM::Field<::BoingKit::BoingBones_Chain_CurveType> _field = GetClass().GetField(O("PoseStiffnessCurveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPoseStiffnessCustomCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("PoseStiffnessCustomCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoot(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("Root"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSquashAndStretchCurveType(::BoingKit::BoingBones_Chain_CurveType value) {
            static BNM::Field<::BoingKit::BoingBones_Chain_CurveType> _field = GetClass().GetField(O("SquashAndStretchCurveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSquashAndStretchCustomCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("SquashAndStretchCustomCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static float EvaluateCurve(::BoingKit::BoingBones_Chain_CurveType type, float t, ::BNM::IL2CPP::Il2CppObject* curve) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("EvaluateCurve"), {"type", "t", "curve"});
            return _m.Call(type, t, curve);
        }
    };
}
