#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    struct BuilderProjectile_ProjectileImpactEvent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "BuilderProjectile").GetInnerClass("ProjectileImpactEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP4 = void*>
        void* BeginInvoke(::GorillaTagScripts_Builder::BuilderProjectile* projectile, ::BNM::Structures::Unity::Vector3 impactPos, ::GlobalNamespace::NetPlayer* hitPlayer, ::BNM::IL2CPP::Il2CppObject* callback, TP4 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"projectile", "impactPos", "hitPlayer", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(projectile, impactPos, hitPlayer, callback, object);
        }
        template <typename TP0 = void*>
        void EndInvoke(TP0 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void Invoke(::GorillaTagScripts_Builder::BuilderProjectile* projectile, ::BNM::Structures::Unity::Vector3 impactPos, ::GlobalNamespace::NetPlayer* hitPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"projectile", "impactPos", "hitPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, impactPos, hitPlayer);
        }
    };
}
