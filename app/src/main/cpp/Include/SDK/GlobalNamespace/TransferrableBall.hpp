#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TransferrableObject.hpp"

namespace GlobalNamespace {
    struct TransferrableBall : ::GlobalNamespace::TransferrableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TransferrableBall");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAllowHeadButting() {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowHeadButting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplyFrictionHolding() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyFrictionHolding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBallRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("ballRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<void*>* GetCollisionContacts() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("collisionContacts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCollisionContactsCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("collisionContactsCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDraw() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDraw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDepenetrationBias() {
            static BNM::Field<float> _field = GetClass().GetField(O("depenetrationBias"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDepenetrationSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("depenetrationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetFrictionHoldLocalPosLeft() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("frictionHoldLocalPosLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetFrictionHoldLocalPosRight() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("frictionHoldLocalPosRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetFrictionHoldLocalRotLeft() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("frictionHoldLocalRotLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetFrictionHoldLocalRotRight() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("frictionHoldLocalRotRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetGorillaHeadTriggerTag() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("gorillaHeadTriggerTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGravityCounterAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityCounterAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetGroundContact() {
            static BNM::Field<void*> _field = GetClass().GetField(O("groundContact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GorillaLocomotion_Climbing::GorillaHandClimber*, int>* GetHandClimberMap() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaLocomotion_Climbing::GorillaHandClimber*, int>*> _field = GetClass().GetField(O("handClimberMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHandHitAudioMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("handHitAudioMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHandRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("handRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHeadButtHitMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("headButtHitMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHeadButtRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("headButtRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHeadOverlapping() {
            static BNM::Field<bool> _field = GetClass().GetField(O("headOverlapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetHitMultiplierCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("hitMultiplierCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetHitSoundBank() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("hitSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetHitSoundPitchMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("hitSoundPitchMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHitSoundSpamCooldownResetTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("hitSoundSpamCooldownResetTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHitSoundSpamCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("hitSoundSpamCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHitSoundSpamLastHitTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("hitSoundSpamLastHitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHitSoundSpamLimit() {
            static BNM::Field<int> _field = GetClass().GetField(O("hitSoundSpamLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetHitSoundVolumeMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("hitSoundVolumeMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHitSpeedThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("hitSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetHitSpeedToAudioMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("hitSpeedToAudioMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetHitSpeedToHitMultiplierMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("hitSpeedToHitMultiplierMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHitTorqueMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("hitTorqueMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftHandOverlapping() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftHandOverlapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxHitSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHitSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinHitSpeedThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("minHitSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOnGround() {
            static BNM::Field<bool> _field = GetClass().GetField(O("onGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::SphereCollider* GetPlayerHeadCollider() {
            static BNM::Field<::SphereCollider*> _field = GetClass().GetField(O("playerHeadCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReflectOffHandAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("reflectOffHandAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetReflectOffHandAmountOutputMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("reflectOffHandAmountOutputMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetReflectOffHandSpeedInputMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("reflectOffHandSpeedInputMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightHandOverlapping() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightHandOverlapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSurfaceGripDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("surfaceGripDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllowHeadButting(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowHeadButting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyFrictionHolding(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyFrictionHolding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBallRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ballRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionContacts(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("collisionContacts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionContactsCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("collisionContactsCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDraw(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDraw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepenetrationBias(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("depenetrationBias"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepenetrationSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("depenetrationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrictionHoldLocalPosLeft(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("frictionHoldLocalPosLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrictionHoldLocalPosRight(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("frictionHoldLocalPosRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrictionHoldLocalRotLeft(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("frictionHoldLocalRotLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrictionHoldLocalRotRight(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("frictionHoldLocalRotRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGorillaHeadTriggerTag(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("gorillaHeadTriggerTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravityCounterAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityCounterAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroundContact(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("groundContact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandClimberMap(::BNM::Structures::Mono::Dictionary<::GorillaLocomotion_Climbing::GorillaHandClimber*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaLocomotion_Climbing::GorillaHandClimber*, int>*> _field = GetClass().GetField(O("handClimberMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandHitAudioMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("handHitAudioMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("handRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadButtHitMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("headButtHitMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadButtRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("headButtRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadOverlapping(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("headOverlapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitMultiplierCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("hitMultiplierCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitSoundBank(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("hitSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitSoundPitchMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("hitSoundPitchMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitSoundSpamCooldownResetTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hitSoundSpamCooldownResetTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitSoundSpamCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("hitSoundSpamCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitSoundSpamLastHitTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hitSoundSpamLastHitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitSoundSpamLimit(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("hitSoundSpamLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitSoundVolumeMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("hitSoundVolumeMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitSpeedThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hitSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitSpeedToAudioMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("hitSpeedToAudioMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitSpeedToHitMultiplierMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("hitSpeedToHitMultiplierMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitTorqueMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hitTorqueMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandOverlapping(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftHandOverlapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxHitSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHitSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinHitSpeedThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minHitSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGround(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("onGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerHeadCollider(::SphereCollider* value) {
            static BNM::Field<::SphereCollider*> _field = GetClass().GetField(O("playerHeadCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectOffHandAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("reflectOffHandAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectOffHandAmountOutputMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("reflectOffHandAmountOutputMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReflectOffHandSpeedInputMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("reflectOffHandSpeedInputMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandOverlapping(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightHandOverlapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceGripDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("surfaceGripDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool ApplyHit(::BNM::Structures::Unity::Vector3 hitPoint, ::BNM::Structures::Unity::Vector3 hitDir, float hitSpeed) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ApplyHit"), {"hitPoint", "hitDir", "hitSpeed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hitPoint, hitDir, hitSpeed);
        }
        bool CheckCollisionWithHand(::BNM::Structures::Unity::Vector3 handCenter, ::BNM::Structures::Unity::Quaternion handRotation, ::BNM::Structures::Unity::Vector3 palmForward, ::BNM::Structures::Unity::Vector3& hitPoint, ::BNM::Structures::Unity::Vector3& hitNormal, float& penetrationDist) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckCollisionWithHand"), {"handCenter", "handRotation", "palmForward", "hitPoint", "hitNormal", "penetrationDist"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handCenter, handRotation, palmForward, &hitPoint, &hitNormal, &penetrationDist);
        }
        bool CheckCollisionWithHead(::SphereCollider* headCollider, ::BNM::Structures::Unity::Vector3& hitPoint, ::BNM::Structures::Unity::Vector3& hitNormal, float& penetrationDist) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckCollisionWithHead"), {"headCollider", "hitPoint", "hitNormal", "penetrationDist"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(headCollider, &hitPoint, &hitNormal, &penetrationDist);
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCollisionEnter(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionEnter"), {"collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collision);
        }
        void OnCollisionStay(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionStay"), {"collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collision);
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
        void PlayHitSound(float hitSpeed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHitSound"), {"hitSpeed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitSpeed);
        }
        void TakeOwnershipAndEnablePhysics() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TakeOwnershipAndEnablePhysics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TriggeredLateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggeredLateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
