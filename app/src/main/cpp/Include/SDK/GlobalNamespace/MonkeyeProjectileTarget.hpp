#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MonkeyeProjectileTarget : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MonkeyeProjectileTarget");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::MonkeyeAI* GetMonkeyeAI() {
            static BNM::Field<::GlobalNamespace::MonkeyeAI*> _field = GetClass().GetField(O("monkeyeAI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SlingshotProjectileHitNotifier* GetNotifier() {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier*> _field = GetClass().GetField(O("notifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMonkeyeAI(::GlobalNamespace::MonkeyeAI* value) {
            static BNM::Field<::GlobalNamespace::MonkeyeAI*> _field = GetClass().GetField(O("monkeyeAI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNotifier(::GlobalNamespace::SlingshotProjectileHitNotifier* value) {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier*> _field = GetClass().GetField(O("notifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Notifier_OnPaperPlaneHit(::GlobalNamespace::PaperPlaneProjectile* projectile, ::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Notifier_OnPaperPlaneHit"), {"projectile", "collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, collider);
        }
        void Notifier_OnProjectileHit(::GlobalNamespace::SlingshotProjectile* projectile, ::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Notifier_OnProjectileHit"), {"projectile", "collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, collision);
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
    };
}
