#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "ProjectileTracker_ProjectileInfo.hpp"

namespace GlobalNamespace {
    struct ProjectileTracker : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProjectileTracker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int AddAndIncrementLocalProjectile(::GlobalNamespace::SlingshotProjectile* projectile, ::BNM::Structures::Unity::Vector3 intialVelocity, ::BNM::Structures::Unity::Vector3 initialPosition, float scale) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("AddAndIncrementLocalProjectile"), {"projectile", "intialVelocity", "initialPosition", "scale"});
            return _m.Call(projectile, intialVelocity, initialPosition, scale);
        }
        static void AddRemotePlayerProjectile(::GlobalNamespace::NetPlayer* player, ::GlobalNamespace::SlingshotProjectile* projectile, int projectileIndex, double timeShot, ::BNM::Structures::Unity::Vector3 intialVelocity, ::BNM::Structures::Unity::Vector3 initialPosition, float scale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddRemotePlayerProjectile"), {"player", "projectile", "projectileIndex", "timeShot", "intialVelocity", "initialPosition", "scale"});
            _m.Call(player, projectile, projectileIndex, timeShot, intialVelocity, initialPosition, scale);
        }
        static void ClearProjectiles() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearProjectiles"));
            _m.Call();
        }
        static int FindIndexOfProjectile(::BNM::Structures::Mono::List<::GlobalNamespace::ProjectileTracker_ProjectileInfo>* list, int projectileNum) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FindIndexOfProjectile"), {"list", "projectileNum"});
            return _m.Call(list, projectileNum);
        }
        static void* GetAndRemoveRemotePlayerProjectile(::GlobalNamespace::NetPlayer* player, int index) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetAndRemoveRemotePlayerProjectile"), {"player", "index"});
            return _m.Call(player, index);
        }
        static ::GlobalNamespace::ProjectileTracker_ProjectileInfo GetLocalProjectile(int index) {
            static BNM::Method<::GlobalNamespace::ProjectileTracker_ProjectileInfo> _m = GetClass().GetMethod(O("GetLocalProjectile"), {"index"});
            return _m.Call(index);
        }
        static bool IsHitPlausible(::BNM::Structures::Unity::Vector3 hitLocation, ::GlobalNamespace::PhotonMessageInfoWrapped info, ::GlobalNamespace::NetPlayer* hitPlayer, int projectileCount) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHitPlausible"), {"hitLocation", "info", "hitPlayer", "projectileCount"});
            return _m.Call(hitLocation, info, hitPlayer, projectileCount);
        }
        static void RemovePlayerProjectiles(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePlayerProjectiles"), {"player"});
            _m.Call(player);
        }
    };
}
