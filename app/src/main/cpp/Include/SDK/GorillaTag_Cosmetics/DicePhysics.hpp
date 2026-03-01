#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DicePhysics_CosmeticRollOverride.hpp"
#include "DicePhysics_DiceType.hpp"

namespace GorillaTag_Cosmetics {
    struct DicePhysics : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "DicePhysics");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float a = 38.833332f;
        static constexpr float b = 77.66666f;
        bool GetAllowPickupFromGround() {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowPickupFromGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetAngleDeltaVsStrengthCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("angleDeltaVsStrengthCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBounceAmplification() {
            static BNM::Field<float> _field = GetClass().GetField(O("bounceAmplification"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetCachedLocalRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("cachedLocalRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::DicePhysics_CosmeticRollOverride>* GetCosmeticRollOverrides() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::DicePhysics_CosmeticRollOverride>*> _field = GetClass().GetField(O("cosmeticRollOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetD20SideDirections() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("d20SideDirections"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetD6SideDirections() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("d6SideDirections"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDamping() {
            static BNM::Field<float> _field = GetClass().GetField(O("damping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::DicePhysics_DiceType GetDiceType() {
            static BNM::Field<::GorillaTag_Cosmetics::DicePhysics_DiceType> _field = GetClass().GetField(O("diceType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetForcedLandingSide() {
            static BNM::Field<int> _field = GetClass().GetField(O("forcedLandingSide"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetForceLandingSide() {
            static BNM::Field<bool> _field = GetClass().GetField(O("forceLandingSide"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::DiceHoldable* GetHoldableParent() {
            static BNM::Field<::GorillaTag_Cosmetics::DiceHoldable*> _field = GetClass().GetField(O("holdableParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::InteractionPoint* GetInteractionPoint() {
            static BNM::Field<::GlobalNamespace::InteractionPoint*> _field = GetClass().GetField(O("interactionPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLandingSide() {
            static BNM::Field<int> _field = GetClass().GetField(O("landingSide"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLandingTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("landingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLandingTimeVsStrengthCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("landingTimeVsStrengthCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnBestRoll() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onBestRoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnRollFinished() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onRollFinished"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnWorstRoll() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onWorstRoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPostLandingTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("postLandingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPrevVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("prevVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRb() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("strength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSurfaceLayers() {
            static BNM::Field<void*> _field = GetClass().GetField(O("surfaceLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetThrowSettledTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("throwSettledTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetThrowStartTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("throwStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllowPickupFromGround(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowPickupFromGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAngleDeltaVsStrengthCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("angleDeltaVsStrengthCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBounceAmplification(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bounceAmplification"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedLocalRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("cachedLocalRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticRollOverrides(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::DicePhysics_CosmeticRollOverride>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::DicePhysics_CosmeticRollOverride>*> _field = GetClass().GetField(O("cosmeticRollOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetD20SideDirections(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("d20SideDirections"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetD6SideDirections(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("d6SideDirections"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamping(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("damping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDiceType(::GorillaTag_Cosmetics::DicePhysics_DiceType value) {
            static BNM::Field<::GorillaTag_Cosmetics::DicePhysics_DiceType> _field = GetClass().GetField(O("diceType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForcedLandingSide(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("forcedLandingSide"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceLandingSide(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("forceLandingSide"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoldableParent(::GorillaTag_Cosmetics::DiceHoldable* value) {
            static BNM::Field<::GorillaTag_Cosmetics::DiceHoldable*> _field = GetClass().GetField(O("holdableParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInteractionPoint(::GlobalNamespace::InteractionPoint* value) {
            static BNM::Field<::GlobalNamespace::InteractionPoint*> _field = GetClass().GetField(O("interactionPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLandingSide(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("landingSide"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLandingTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("landingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLandingTimeVsStrengthCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("landingTimeVsStrengthCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnBestRoll(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onBestRoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnRollFinished(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onRollFinished"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnWorstRoll(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onWorstRoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPostLandingTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("postLandingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("prevVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRb(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("strength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceLayers(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("surfaceLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowSettledTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("throwSettledTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowStartTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("throwStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CheckCosmeticRollOverride(int& rollSide) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckCosmeticRollOverride"), {"rollSide"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&rollSide);
        }
        void EndThrow() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndThrow"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int GetRandomSide() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRandomSide"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetSideDirection(int side) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetSideDirection"), {"side"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(side);
        }
        void InvokeLandingEffects(int side) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeLandingEffects"), {"side"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(side);
        }
        void OnCollisionEnter(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionEnter"), {"collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collision);
        }
        void StartThrow(::GorillaTag_Cosmetics::DiceHoldable* holdable, ::BNM::Structures::Unity::Vector3 startPosition, ::BNM::Structures::Unity::Vector3 velocity, float playerScale, int side, double startTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartThrow"), {"holdable", "startPosition", "velocity", "playerScale", "side", "startTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(holdable, startPosition, velocity, playerScale, side, startTime);
        }
    };
}
