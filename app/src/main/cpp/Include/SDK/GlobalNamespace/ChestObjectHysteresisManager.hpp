#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonoBehaviourTick.hpp"

namespace GlobalNamespace {
    struct ChestObjectHysteresisManager : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ChestObjectHysteresisManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::ChestObjectHysteresisManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::ChestObjectHysteresisManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::ChestObjectHysteresis*>* GetAllChests() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ChestObjectHysteresis*>*> _field = GetClass().GetField(O("allChests"));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GlobalNamespace::ChestObjectHysteresisManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::ChestObjectHysteresisManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void SetAllChests(::BNM::Structures::Mono::List<::GlobalNamespace::ChestObjectHysteresis*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ChestObjectHysteresis*>*> _field = GetClass().GetField(O("allChests"));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::ChestObjectHysteresisManager* value) {
            static BNM::Field<::GlobalNamespace::ChestObjectHysteresisManager*> _field = GetClass().GetField(O("instance"));
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
        static void RegisterCH(::GlobalNamespace::ChestObjectHysteresis* cOH) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterCH"), {"cOH"});
            _m.Call(cOH);
        }
        static void SetInstance_1(::GlobalNamespace::ChestObjectHysteresisManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInstance"), {"manager"});
            _m.Call(manager);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void UnregisterCH(::GlobalNamespace::ChestObjectHysteresis* cOH) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterCH"), {"cOH"});
            _m.Call(cOH);
        }
    };
}
