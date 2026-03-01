#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "RoomSystem_ProjectileSource.hpp"
#include "TransferrableObject.hpp"

namespace GlobalNamespace {
    struct ProjectileWeapon : ::GlobalNamespace::TransferrableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProjectileWeapon");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetProjectilePrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetProjectileTrail() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("projectileTrail"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetShootSfx() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("shootSfx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetShootSfxClips() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("shootSfxClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetProjectilePrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileTrail(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("projectileTrail"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShootSfx(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("shootSfx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShootSfxClips(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("shootSfxClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AttachTrail(int trailHash, ::GameObject* newProjectile, ::BNM::Structures::Unity::Vector3 location, bool blueTeam, bool orangeTeam, bool shouldOverrideColor, ::BNM::Structures::Unity::Color overrideColor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachTrail"), {"trailHash", "newProjectile", "location", "blueTeam", "orangeTeam", "shouldOverrideColor", "overrideColor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(trailHash, newProjectile, location, blueTeam, orangeTeam, shouldOverrideColor, overrideColor);
        }
        void GetIsOnTeams(bool& blueTeam, bool& orangeTeam, bool& shouldUsePlayerColor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetIsOnTeams"), {"blueTeam", "orangeTeam", "shouldUsePlayerColor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&blueTeam, &orangeTeam, &shouldUsePlayerColor);
        }
        ::BNM::Structures::Unity::Vector3 GetLaunchPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetLaunchPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetLaunchVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetLaunchVelocity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::SlingshotProjectile* LaunchNetworkedProjectile(::BNM::Structures::Unity::Vector3 location, ::BNM::Structures::Unity::Vector3 velocity, ::GlobalNamespace::RoomSystem_ProjectileSource projectileSource, int projectileCounter, float scale, bool shouldOverrideColor, ::BNM::Structures::Unity::Color color, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<::GlobalNamespace::SlingshotProjectile*> _m = GetClass().GetMethod(O("LaunchNetworkedProjectile"), {"location", "velocity", "projectileSource", "projectileCounter", "scale", "shouldOverrideColor", "color", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(location, velocity, projectileSource, projectileCounter, scale, shouldOverrideColor, color, info);
        }
        void LaunchProjectile() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LaunchProjectile"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayLaunchSfx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayLaunchSfx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
