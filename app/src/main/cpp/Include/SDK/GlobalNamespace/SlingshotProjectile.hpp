#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SlingshotProjectile_AOEKnockbackConfig.hpp"

namespace GlobalNamespace {
    struct SlingshotProjectile : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SlingshotProjectile");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Vector3 GetLaunchPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_launchPosition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLaunchPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_launchPosition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetRadius() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Radius"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnImpact(::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnImpact"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnImpact(::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnImpact"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void* GetAoeKnockbackConfig() {
            static BNM::Field<void*> _field = GetClass().GetField(O("aoeKnockbackConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetBlueBall() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("blueBall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetBlueColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("blueColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetColorizeBalls() {
            static BNM::Field<bool> _field = GetClass().GetField(O("colorizeBalls"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static float GetDebugCollisionRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("debugCollisionRadius"));
            return _field.Get();
        }
        ::Renderer* GetDefaultBall() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("defaultBall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetDefaultColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("defaultColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDistanceTraveled() {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceTraveled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDontDestroyOnHit() {
            static BNM::Field<bool> _field = GetClass().GetField(O("dontDestroyOnHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFaceDirectionOfTravel() {
            static BNM::Field<bool> _field = GetClass().GetField(O("faceDirectionOfTravel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFloorLayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("floorLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetForceComponent() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("forceComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetForwardForceMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("forwardForceMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGravityMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetImpactEffectOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("impactEffectOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetImpactEffectScaleMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("impactEffectScaleMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetImpactSoundPitchOverride() {
            static BNM::Field<void*> _field = GetClass().GetField(O("impactSoundPitchOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetImpactSoundVolumeOverride() {
            static BNM::Field<void*> _field = GetClass().GetField(O("impactSoundVolumeOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInitialScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("initialScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsSettled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSettled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetKeepRotationUpright() {
            static BNM::Field<bool> _field = GetClass().GetField(O("keepRotationUpright"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetLaunchSoundBankPlayer() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("launchSoundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLifeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lifeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMSendNetworkedImpact() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_sendNetworkedImpact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMatPropBlock() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("matPropBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMyProjectileCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("myProjectileCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnHitPlayer() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnHitPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnImapctEvent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnImapctEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent* GetOnImpact() {
            static BNM::Field<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*> _field = GetClass().GetField(O("OnImpact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnLaunch() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnLaunch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetOrangeBall() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("orangeBall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetOrangeColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("orangeColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetParticleLaunched() {
            static BNM::Field<bool> _field = GetClass().GetField(O("particleLaunched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlacementOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("placementOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPlayerImpactEffectPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("playerImpactEffectPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPreviousPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("previousPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetProjectileOwner() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("projectileOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetProjectileRigidbody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("projectileRigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRemainingLifeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingLifeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Reactions::SpawnWorldEffects* GetSpawnWorldEffects() {
            static BNM::Field<::GorillaTag_Reactions::SpawnWorldEffects*> _field = GetClass().GetField(O("spawnWorldEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSurfaceImpactEffectPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("surfaceImpactEffectPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetTeamColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("teamColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetTeamRenderer() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("teamRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeCreated() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeCreated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseForwardForce() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useForwardForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAoeKnockbackConfig(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("aoeKnockbackConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlueBall(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("blueBall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlueColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("blueColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorizeBalls(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("colorizeBalls"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetDebugCollisionRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("debugCollisionRadius"));
            _field.Set(value);
        }
        void SetDefaultBall(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("defaultBall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("defaultColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistanceTraveled(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceTraveled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDontDestroyOnHit(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("dontDestroyOnHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFaceDirectionOfTravel(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("faceDirectionOfTravel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloorLayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("floorLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceComponent(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("forceComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForwardForceMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("forwardForceMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravityMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImpactEffectOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("impactEffectOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImpactEffectScaleMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("impactEffectScaleMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImpactSoundPitchOverride(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("impactSoundPitchOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImpactSoundVolumeOverride(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("impactSoundVolumeOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("initialScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsSettled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSettled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKeepRotationUpright(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("keepRotationUpright"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchSoundBankPlayer(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("launchSoundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLifeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lifeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSendNetworkedImpact(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_sendNetworkedImpact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatPropBlock(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("matPropBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyProjectileCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("myProjectileCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnHitPlayer(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnHitPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnImapctEvent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnImapctEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnImpact(::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent* value) {
            static BNM::Field<::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*> _field = GetClass().GetField(O("OnImpact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnLaunch(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnLaunch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOrangeBall(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("orangeBall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOrangeColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("orangeColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParticleLaunched(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("particleLaunched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlacementOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("placementOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerImpactEffectPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("playerImpactEffectPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("previousPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileOwner(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("projectileOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileRigidbody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("projectileRigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemainingLifeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingLifeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnWorldEffects(::GorillaTag_Reactions::SpawnWorldEffects* value) {
            static BNM::Field<::GorillaTag_Reactions::SpawnWorldEffects*> _field = GetClass().GetField(O("spawnWorldEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceImpactEffectPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("surfaceImpactEffectPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeamColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("teamColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeamRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("teamRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeCreated(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeCreated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseForwardForce(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useForwardForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnImpact_1(::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnImpact"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ApplyColor(::Renderer* rend, ::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyColor"), {"rend", "color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rend, color);
        }
        void ApplyTeamModelAndColor(bool blueTeam, bool orangeTeam, bool shouldOverrideColor, ::BNM::Structures::Unity::Color overrideColor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyTeamModelAndColor"), {"blueTeam", "orangeTeam", "shouldOverrideColor", "overrideColor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(blueTeam, orangeTeam, shouldOverrideColor, overrideColor);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckForAOEKnockback(::BNM::Structures::Unity::Vector3 impactPosition, float impactSpeed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckForAOEKnockback"), {"impactPosition", "impactSpeed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(impactPosition, impactSpeed);
        }
        void Deactivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Deactivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DestroyAfterRelease() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyAfterRelease"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_launchPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_launchPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static float get_Radius() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Radius"));
            return _m.Call();
        }
        float GetDistanceTraveled_1() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetDistanceTraveled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetRemainingLifeTime_1() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetRemainingLifeTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InvokeUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Launch(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 velocity, ::GlobalNamespace::NetPlayer* player, bool blueTeam, bool orangeTeam, int projectileCount, float scale, bool shouldOverrideColor, ::BNM::Structures::Unity::Color overrideColor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Launch"), {"position", "velocity", "player", "blueTeam", "orangeTeam", "projectileCount", "scale", "shouldOverrideColor", "overrideColor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position, velocity, player, blueTeam, orangeTeam, projectileCount, scale, shouldOverrideColor, overrideColor);
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
        void remove_OnImpact_1(::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnImpact"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_launchPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_launchPosition"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SettleProjectile() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SettleProjectile"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SpawnImpactEffect(::GameObject* prefab, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 normal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnImpactEffect"), {"prefab", "position", "normal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prefab, position, normal);
        }
        void UpdateRemainingLifeTime(float newLifeTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRemainingLifeTime"), {"newLifeTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newLifeTime);
        }
    };
}
