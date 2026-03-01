#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderShootingGallery_FunctionalState.hpp"

namespace GorillaTagScripts_Builder {
    struct BuilderShootingGallery : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "BuilderShootingGallery");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetActivated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("activated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetColliders() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCowboyCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("cowboyCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCowboyCycleDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("cowboyCycleDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCowboyEnd() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("cowboyEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCowboyHitAnimation() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("cowboyHitAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SlingshotProjectileHitNotifier* GetCowboyHitNotifier() {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier*> _field = GetClass().GetField(O("cowboyHitNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetCowboyHitSound() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("cowboyHitSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetCowboyInitLocalPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("cowboyInitLocalPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetCowboyInitLocalRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("cowboyInitLocalRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCowboyStart() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("cowboyStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCowboyTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("cowboyTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCowboyVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("cowboyVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::BuilderShootingGallery_FunctionalState GetCurrentState() {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderShootingGallery_FunctionalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCurrForward() {
            static BNM::Field<bool> _field = GetClass().GetField(O("currForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrT() {
            static BNM::Field<float> _field = GetClass().GetField(O("currT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("distance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDtSinceServerUpdate() {
            static BNM::Field<float> _field = GetClass().GetField(O("dtSinceServerUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHitCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("hitCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastHitTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastHitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastServerTimeStamp() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastServerTimeStamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetMyPiece() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("myPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotateAmt() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotateAmt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotateStartAmt() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotateStartAmt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWheelCycleDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("wheelCycleDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetWheelHitAnimation() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("wheelHitAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SlingshotProjectileHitNotifier* GetWheelHitNotifier() {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier*> _field = GetClass().GetField(O("wheelHitNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetWheelHitSound() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("wheelHitSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetWheelInitLocalRot() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("wheelInitLocalRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetWheelTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("wheelTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWheelVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("wheelVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("activated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliders(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCowboyCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("cowboyCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCowboyCycleDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cowboyCycleDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCowboyEnd(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("cowboyEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCowboyHitAnimation(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("cowboyHitAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCowboyHitNotifier(::GlobalNamespace::SlingshotProjectileHitNotifier* value) {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier*> _field = GetClass().GetField(O("cowboyHitNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCowboyHitSound(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("cowboyHitSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCowboyInitLocalPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("cowboyInitLocalPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCowboyInitLocalRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("cowboyInitLocalRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCowboyStart(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("cowboyStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCowboyTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("cowboyTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCowboyVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cowboyVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GorillaTagScripts_Builder::BuilderShootingGallery_FunctionalState value) {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderShootingGallery_FunctionalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrForward(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("currForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrT(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDtSinceServerUpdate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dtSinceServerUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hitCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHitTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastHitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastServerTimeStamp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastServerTimeStamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyPiece(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("myPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotateAmt(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotateAmt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotateStartAmt(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotateStartAmt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWheelCycleDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("wheelCycleDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWheelHitAnimation(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("wheelHitAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWheelHitNotifier(::GlobalNamespace::SlingshotProjectileHitNotifier* value) {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier*> _field = GetClass().GetField(O("wheelHitNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWheelHitSound(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("wheelHitSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWheelInitLocalRot(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("wheelInitLocalRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWheelTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("wheelTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWheelVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("wheelVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float CowboyCycleCompletionPercent() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("CowboyCycleCompletionPercent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int CowboyCycleCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CowboyCycleCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t CowboyCycleLengthMs() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("CowboyCycleLengthMs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CowboyHitEffects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CowboyHitEffects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        double CowboyPlatformTime() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("CowboyPlatformTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void FunctionalPieceFixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FunctionalPieceFixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FunctionalPieceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FunctionalPieceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsEvenCycle() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEvenCycle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsStateValid(uint8_t state) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsStateValid"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(state);
        }
        int64_t NetworkTimeMs() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("NetworkTimeMs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnCowboyHit(::GlobalNamespace::SlingshotProjectile* projectile, ::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCowboyHit"), {"projectile", "collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, collision);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
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
        void OnStateChanged(uint8_t newState, ::GlobalNamespace::NetPlayer* instigator, int timeStamp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStateChanged"), {"newState", "instigator", "timeStamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, instigator, timeStamp);
        }
        void OnStateRequest(uint8_t newState, ::GlobalNamespace::NetPlayer* instigator, int timeStamp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStateRequest"), {"newState", "instigator", "timeStamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, instigator, timeStamp);
        }
        void OnWheelHit(::GlobalNamespace::SlingshotProjectile* projectile, ::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnWheelHit"), {"projectile", "collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, collision);
        }
        float WheelCycleCompletionPercent() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("WheelCycleCompletionPercent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t WheelCycleLengthMs() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("WheelCycleLengthMs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void WheelHitEffects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WheelHitEffects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        double WheelPlatformTime() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("WheelPlatformTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
