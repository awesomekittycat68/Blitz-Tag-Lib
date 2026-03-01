#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticCritterAction.hpp"
#include "CosmeticCritterHoldable.hpp"

namespace GlobalNamespace {
    struct CosmeticCritterCatcher : ::GlobalNamespace::CosmeticCritterHoldable {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticCritterCatcher");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::CosmeticCritterSpawner* GetOptionalLinkedSpawner() {
            static BNM::Field<::GlobalNamespace::CosmeticCritterSpawner*> _field = GetClass().GetField(O("optionalLinkedSpawner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOptionalLinkedSpawner(::GlobalNamespace::CosmeticCritterSpawner* value) {
            static BNM::Field<::GlobalNamespace::CosmeticCritterSpawner*> _field = GetClass().GetField(O("optionalLinkedSpawner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::CosmeticCritterSpawner* GetLinkedSpawner() {
            static BNM::Method<::GlobalNamespace::CosmeticCritterSpawner*> _m = GetClass().GetMethod(O("GetLinkedSpawner"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::CosmeticCritterAction GetLocalCatchAction(::GlobalNamespace::CosmeticCritter* critter) {
            static BNM::Method<::GlobalNamespace::CosmeticCritterAction> _m = GetClass().GetMethod(O("GetLocalCatchAction"), {"critter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(critter);
        }
        void OnCatch(::GlobalNamespace::CosmeticCritter* critter, ::GlobalNamespace::CosmeticCritterAction catchAction, double serverTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCatch"), {"critter", "catchAction", "serverTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter, catchAction, serverTime);
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
        bool ValidateRemoteCatchAction(::GlobalNamespace::CosmeticCritter* critter, ::GlobalNamespace::CosmeticCritterAction catchAction, double serverTime) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateRemoteCatchAction"), {"critter", "catchAction", "serverTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(critter, catchAction, serverTime);
        }
    };
}
