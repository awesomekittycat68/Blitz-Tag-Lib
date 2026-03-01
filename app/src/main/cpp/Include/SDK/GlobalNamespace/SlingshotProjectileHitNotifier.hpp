#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTag_GuidedRefs/BaseGuidedRefTargetMono.hpp"

namespace GlobalNamespace {
    struct SlingshotProjectileHitNotifier : ::GorillaTag_GuidedRefs::BaseGuidedRefTargetMono {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SlingshotProjectileHitNotifier");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_OnPaperPlaneHit(::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPaperPlaneHit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnPaperPlaneHit(::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPaperPlaneHit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnProjectileCollisionStay(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnProjectileCollisionStay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnProjectileCollisionStay(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnProjectileCollisionStay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnProjectileHit(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnProjectileHit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnProjectileHit(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnProjectileHit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnProjectileTriggerEnter(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnProjectileTriggerEnter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnProjectileTriggerEnter(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnProjectileTriggerEnter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnProjectileTriggerExit(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnProjectileTriggerExit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnProjectileTriggerExit(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnProjectileTriggerExit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent* GetOnPaperPlaneHit() {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent*> _field = GetClass().GetField(O("OnPaperPlaneHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent* GetOnProjectileCollisionStay() {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*> _field = GetClass().GetField(O("OnProjectileCollisionStay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent* GetOnProjectileHit() {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*> _field = GetClass().GetField(O("OnProjectileHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent* GetOnProjectileTriggerEnter() {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*> _field = GetClass().GetField(O("OnProjectileTriggerEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent* GetOnProjectileTriggerExit() {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*> _field = GetClass().GetField(O("OnProjectileTriggerExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOnPaperPlaneHit(::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent* value) {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent*> _field = GetClass().GetField(O("OnPaperPlaneHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnProjectileCollisionStay(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent* value) {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*> _field = GetClass().GetField(O("OnProjectileCollisionStay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnProjectileHit(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent* value) {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*> _field = GetClass().GetField(O("OnProjectileHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnProjectileTriggerEnter(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent* value) {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*> _field = GetClass().GetField(O("OnProjectileTriggerEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnProjectileTriggerExit(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent* value) {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*> _field = GetClass().GetField(O("OnProjectileTriggerExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnPaperPlaneHit_1(::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPaperPlaneHit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnProjectileCollisionStay_1(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnProjectileCollisionStay"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnProjectileHit_1(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnProjectileHit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnProjectileTriggerEnter_1(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnProjectileTriggerEnter"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnProjectileTriggerExit_1(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnProjectileTriggerExit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void InvokeCollisionStay(::GlobalNamespace::SlingshotProjectile* projectile, ::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeCollisionStay"), {"projectile", "collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, collision);
        }
        void InvokeHit(::GlobalNamespace::SlingshotProjectile* projectile, ::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeHit"), {"projectile", "collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, collision);
        }
        void InvokeHit(::GlobalNamespace::PaperPlaneProjectile* projectile, ::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeHit"), {"projectile", "collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, collider);
        }
        void InvokeTriggerEnter(::GlobalNamespace::SlingshotProjectile* projectile, ::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeTriggerEnter"), {"projectile", "collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, collider);
        }
        void InvokeTriggerExit(::GlobalNamespace::SlingshotProjectile* projectile, ::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeTriggerExit"), {"projectile", "collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, collider);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_OnPaperPlaneHit_1(::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPaperPlaneHit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnProjectileCollisionStay_1(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnProjectileCollisionStay"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnProjectileHit_1(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnProjectileHit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnProjectileTriggerEnter_1(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnProjectileTriggerEnter"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnProjectileTriggerExit_1(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnProjectileTriggerExit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
