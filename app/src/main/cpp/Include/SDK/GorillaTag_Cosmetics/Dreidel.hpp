#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../CjLib/FloatSpring.hpp"
#include "../CjLib/Vector3Spring.hpp"
#include "Dreidel_Side.hpp"
#include "Dreidel_State.hpp"
#include "Dreidel_Variation.hpp"

namespace GorillaTag_Cosmetics {
    struct Dreidel : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "Dreidel");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetBodyRect() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("bodyRect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetBottomPointOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("bottomPointOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBounceFallSwitchTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("bounceFallSwitchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCanStartSpin() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canStartSpin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetCenterOfMassOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("centerOfMassOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetConfettiHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("confettiHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDraw() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDraw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDreidelCollider() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("dreidelCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetFallSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("fallSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFallTimeSlowTurn() {
            static BNM::Field<float> _field = GetClass().GetField(O("fallTimeSlowTurn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFallTimeTumble() {
            static BNM::Field<float> _field = GetClass().GetField(O("fallTimeTumble"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFalseTargetReached() {
            static BNM::Field<bool> _field = GetClass().GetField(O("falseTargetReached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetGimelConfetti() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("gimelConfetti"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetGimelConfettiSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("gimelConfettiSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::CjLib::Vector3Spring GetGroundPointSpring() {
            static BNM::Field<::CjLib::Vector3Spring> _field = GetClass().GetField(O("groundPointSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGroundTrackingDampingRatio() {
            static BNM::Field<float> _field = GetClass().GetField(O("groundTrackingDampingRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGroundTrackingFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("groundTrackingFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasLanded() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasLanded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::Dreidel_Side GetLandingSide() {
            static BNM::Field<::GorillaTag_Cosmetics::Dreidel_Side> _field = GetClass().GetField(O("landingSide"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetLandingTiltLeadingTarget() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("landingTiltLeadingTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetLandingTiltTarget() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("landingTiltTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector2>* GetLandingTiltValues() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector2>*> _field = GetClass().GetField(O("landingTiltValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::Dreidel_Variation GetLandingVariation() {
            static BNM::Field<::GorillaTag_Cosmetics::Dreidel_Variation> _field = GetClass().GetField(O("landingVariation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPathDir() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("pathDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPathEndTurnRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("pathEndTurnRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPathMoveSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("pathMoveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPathOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("pathOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPathStartTurnRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("pathStartTurnRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPathTurnRateSinOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("pathTurnRateSinOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRespawnTimeAfterLanding() {
            static BNM::Field<float> _field = GetClass().GetField(O("respawnTimeAfterLanding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlowTurnDampingRatio() {
            static BNM::Field<float> _field = GetClass().GetField(O("slowTurnDampingRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlowTurnFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("slowTurnFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlowTurnSwitchTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("slowTurnSwitchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSmoothFallDampingRatio() {
            static BNM::Field<float> _field = GetClass().GetField(O("smoothFallDampingRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSmoothFallFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("smoothFallFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpinAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("spinAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSpinAxis() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("spinAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSpinCounterClockwise() {
            static BNM::Field<bool> _field = GetClass().GetField(O("spinCounterClockwise"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetSpinLoopAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("spinLoopAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpinSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("spinSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpinSpeedEnd() {
            static BNM::Field<float> _field = GetClass().GetField(O("spinSpeedEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::CjLib::FloatSpring GetSpinSpeedSpring() {
            static BNM::Field<::CjLib::FloatSpring> _field = GetClass().GetField(O("spinSpeedSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpinSpeedStart() {
            static BNM::Field<float> _field = GetClass().GetField(O("spinSpeedStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpinSpeedStopRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("spinSpeedStopRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetSpinStartTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("spinStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpinTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("spinTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetSpinTimeRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("spinTimeRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSpinTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spinTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpinWobbleAmplitude() {
            static BNM::Field<float> _field = GetClass().GetField(O("spinWobbleAmplitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpinWobbleAmplitudeEndMin() {
            static BNM::Field<float> _field = GetClass().GetField(O("spinWobbleAmplitudeEndMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpinWobbleFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("spinWobbleFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::Dreidel_State GetState() {
            static BNM::Field<::GorillaTag_Cosmetics::Dreidel_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetStateStartTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSurfaceCheckDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("surfaceCheckDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSurfaceDreidelAngleThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("surfaceDreidelAngleThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSurfaceLayers() {
            static BNM::Field<void*> _field = GetClass().GetField(O("surfaceLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSurfacePlaneNormal() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("surfacePlaneNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSurfacePlanePoint() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("surfacePlanePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSurfaceUprightThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("surfaceUprightThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTiltFrontBack() {
            static BNM::Field<float> _field = GetClass().GetField(O("tiltFrontBack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::CjLib::FloatSpring GetTiltFrontBackSpring() {
            static BNM::Field<::CjLib::FloatSpring> _field = GetClass().GetField(O("tiltFrontBackSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTiltLeftRight() {
            static BNM::Field<float> _field = GetClass().GetField(O("tiltLeftRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::CjLib::FloatSpring GetTiltLeftRightSpring() {
            static BNM::Field<::CjLib::FloatSpring> _field = GetClass().GetField(O("tiltLeftRightSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTiltWobble() {
            static BNM::Field<float> _field = GetClass().GetField(O("tiltWobble"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTumbleFallDampingRatio() {
            static BNM::Field<float> _field = GetClass().GetField(O("tumbleFallDampingRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTumbleFallFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("tumbleFallFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTumbleFallFrontBackDampingRatio() {
            static BNM::Field<float> _field = GetClass().GetField(O("tumbleFallFrontBackDampingRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTumbleFallFrontBackFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("tumbleFallFrontBackFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyRect(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("bodyRect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBottomPointOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("bottomPointOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBounceFallSwitchTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bounceFallSwitchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanStartSpin(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canStartSpin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCenterOfMassOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("centerOfMassOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfettiHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("confettiHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDraw(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDraw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDreidelCollider(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("dreidelCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFallSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("fallSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFallTimeSlowTurn(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fallTimeSlowTurn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFallTimeTumble(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fallTimeTumble"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFalseTargetReached(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("falseTargetReached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGimelConfetti(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("gimelConfetti"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGimelConfettiSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("gimelConfettiSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroundPointSpring(::CjLib::Vector3Spring value) {
            static BNM::Field<::CjLib::Vector3Spring> _field = GetClass().GetField(O("groundPointSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroundTrackingDampingRatio(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("groundTrackingDampingRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroundTrackingFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("groundTrackingFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasLanded(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasLanded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLandingSide(::GorillaTag_Cosmetics::Dreidel_Side value) {
            static BNM::Field<::GorillaTag_Cosmetics::Dreidel_Side> _field = GetClass().GetField(O("landingSide"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLandingTiltLeadingTarget(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("landingTiltLeadingTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLandingTiltTarget(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("landingTiltTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLandingTiltValues(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector2>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector2>*> _field = GetClass().GetField(O("landingTiltValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLandingVariation(::GorillaTag_Cosmetics::Dreidel_Variation value) {
            static BNM::Field<::GorillaTag_Cosmetics::Dreidel_Variation> _field = GetClass().GetField(O("landingVariation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPathDir(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("pathDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPathEndTurnRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pathEndTurnRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPathMoveSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pathMoveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPathOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("pathOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPathStartTurnRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pathStartTurnRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPathTurnRateSinOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pathTurnRateSinOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRespawnTimeAfterLanding(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("respawnTimeAfterLanding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlowTurnDampingRatio(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slowTurnDampingRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlowTurnFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slowTurnFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlowTurnSwitchTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slowTurnSwitchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmoothFallDampingRatio(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("smoothFallDampingRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmoothFallFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("smoothFallFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spinAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinAxis(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("spinAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinCounterClockwise(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("spinCounterClockwise"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinLoopAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("spinLoopAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spinSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinSpeedEnd(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spinSpeedEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinSpeedSpring(::CjLib::FloatSpring value) {
            static BNM::Field<::CjLib::FloatSpring> _field = GetClass().GetField(O("spinSpeedSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinSpeedStart(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spinSpeedStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinSpeedStopRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spinSpeedStopRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinStartTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("spinStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spinTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinTimeRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("spinTimeRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spinTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinWobbleAmplitude(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spinWobbleAmplitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinWobbleAmplitudeEndMin(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spinWobbleAmplitudeEndMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinWobbleFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spinWobbleFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GorillaTag_Cosmetics::Dreidel_State value) {
            static BNM::Field<::GorillaTag_Cosmetics::Dreidel_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateStartTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceCheckDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("surfaceCheckDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceDreidelAngleThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("surfaceDreidelAngleThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceLayers(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("surfaceLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfacePlaneNormal(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("surfacePlaneNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfacePlanePoint(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("surfacePlanePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceUprightThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("surfaceUprightThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTiltFrontBack(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tiltFrontBack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTiltFrontBackSpring(::CjLib::FloatSpring value) {
            static BNM::Field<::CjLib::FloatSpring> _field = GetClass().GetField(O("tiltFrontBackSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTiltLeftRight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tiltLeftRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTiltLeftRightSpring(::CjLib::FloatSpring value) {
            static BNM::Field<::CjLib::FloatSpring> _field = GetClass().GetField(O("tiltLeftRightSpring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTiltWobble(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tiltWobble"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTumbleFallDampingRatio(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tumbleFallDampingRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTumbleFallFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tumbleFallFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTumbleFallFrontBackDampingRatio(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tumbleFallFrontBackDampingRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTumbleFallFrontBackFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tumbleFallFrontBackFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AlignToSurfacePlane() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AlignToSurfacePlane"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetGroundContactPoint() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetGroundContactPoint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetTiltVectorsForSideWithNext(::GorillaTag_Cosmetics::Dreidel_Side side, ::BNM::Structures::Unity::Vector2& sideTilt, ::BNM::Structures::Unity::Vector2& nextSideTilt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTiltVectorsForSideWithNext"), {"side", "sideTilt", "nextSideTilt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(side, &sideTilt, &nextSideTilt);
        }
        void GetTiltVectorsForSideWithPrev(::GorillaTag_Cosmetics::Dreidel_Side side, ::BNM::Structures::Unity::Vector2& sideTilt, ::BNM::Structures::Unity::Vector2& prevSideTilt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTiltVectorsForSideWithPrev"), {"side", "sideTilt", "prevSideTilt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(side, &sideTilt, &prevSideTilt);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetSpinStartData(::BNM::Structures::Unity::Vector3 surfacePoint, ::BNM::Structures::Unity::Vector3 surfaceNormal, float duration, bool counterClockwise, ::GorillaTag_Cosmetics::Dreidel_Side side, ::GorillaTag_Cosmetics::Dreidel_Variation variation, double startTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSpinStartData"), {"surfacePoint", "surfaceNormal", "duration", "counterClockwise", "side", "variation", "startTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(surfacePoint, surfaceNormal, duration, counterClockwise, side, variation, startTime);
        }
        void Spin() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Spin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartFall() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartFall"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartFindingSurfaces() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartFindingSurfaces"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartIdle() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartIdle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartSpin() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartSpin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool TryCheckForSurfaces() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryCheckForSurfaces"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool TryGetSpinStartData(::BNM::Structures::Unity::Vector3& surfacePoint, ::BNM::Structures::Unity::Vector3& surfaceNormal, float& randomDuration, ::GorillaTag_Cosmetics::Dreidel_Side& randomSide, ::GorillaTag_Cosmetics::Dreidel_Variation& randomVariation, double& startTime) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetSpinStartData"), {"surfacePoint", "surfaceNormal", "randomDuration", "randomSide", "randomVariation", "startTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&surfacePoint, &surfaceNormal, &randomDuration, &randomSide, &randomVariation, &startTime);
        }
        bool TrySetIdle() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TrySetIdle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void UpdateSpinTransform() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSpinTransform"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
