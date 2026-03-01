#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SlingshotProjectileHitNotifier").GetInnerClass("PaperPlaneProjectileHitEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP3 = void*>
        void* BeginInvoke(::GlobalNamespace::PaperPlaneProjectile* projectile, ::Collider* collider, ::BNM::IL2CPP::Il2CppObject* callback, TP3 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"projectile", "collider", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(projectile, collider, callback, object);
        }
        template <typename TP0 = void*>
        void EndInvoke(TP0 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void Invoke(::GlobalNamespace::PaperPlaneProjectile* projectile, ::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"projectile", "collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, collider);
        }
    };
}
