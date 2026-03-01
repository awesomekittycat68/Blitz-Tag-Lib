#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonoBehaviourTick.hpp"

namespace GlobalNamespace {
    struct SlingshotProjectileManager : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SlingshotProjectileManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::SlingshotProjectileManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::SlingshotProjectile*>* GetAllsP() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SlingshotProjectile*>*> _field = GetClass().GetField(O("allsP"));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GlobalNamespace::SlingshotProjectileManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void SetAllsP(::BNM::Structures::Mono::List<::GlobalNamespace::SlingshotProjectile*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SlingshotProjectile*>*> _field = GetClass().GetField(O("allsP"));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::SlingshotProjectileManager* value) {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CreateManager() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateManager"));
            _m.Call();
        }
        static void RegisterSP(::GlobalNamespace::SlingshotProjectile* sP) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterSP"), {"sP"});
            _m.Call(sP);
        }
        static void SetInstance_1(::GlobalNamespace::SlingshotProjectileManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInstance"), {"manager"});
            _m.Call(manager);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void UnregisterSP(::GlobalNamespace::SlingshotProjectile* sP) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterSP"), {"sP"});
            _m.Call(sP);
        }
    };
}
