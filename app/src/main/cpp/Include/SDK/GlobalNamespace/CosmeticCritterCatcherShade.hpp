#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticCritterAction.hpp"
#include "CosmeticCritterCatcher.hpp"

namespace GlobalNamespace {
    struct CosmeticCritterCatcherShade : ::GlobalNamespace::CosmeticCritterCatcher {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticCritterCatcherShade");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float HEARTBEAT_DELAY = 1.0f;
        ::BNM::Structures::Unity::Vector3 GetLastTargetPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_LastTargetPosition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLastTargetPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LastTargetPosition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Transform* GetCatchOrigin() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("catchOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCatchRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("catchRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CosmeticCritter* GetCurrentTarget() {
            static BNM::Field<::GlobalNamespace::CosmeticCritter*> _field = GetClass().GetField(O("currentTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHeartbeatCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("heartbeatCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxHoldTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHoldTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinSecondsLockedToCatch() {
            static BNM::Field<float> _field = GetClass().GetField(O("minSecondsLockedToCatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSecondsToReveal() {
            static BNM::Field<float> _field = GetClass().GetField(O("secondsToReveal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShadeRevealer* GetShadeRevealer() {
            static BNM::Field<::GlobalNamespace::ShadeRevealer*> _field = GetClass().GetField(O("shadeRevealer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTargetHoldTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("targetHoldTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVacuumSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("vacuumSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCatchOrigin(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("catchOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCatchRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("catchRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentTarget(::GlobalNamespace::CosmeticCritter* value) {
            static BNM::Field<::GlobalNamespace::CosmeticCritter*> _field = GetClass().GetField(O("currentTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeartbeatCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("heartbeatCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxHoldTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHoldTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinSecondsLockedToCatch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minSecondsLockedToCatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSecondsToReveal(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("secondsToReveal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShadeRevealer(::GlobalNamespace::ShadeRevealer* value) {
            static BNM::Field<::GlobalNamespace::ShadeRevealer*> _field = GetClass().GetField(O("shadeRevealer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetHoldTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("targetHoldTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVacuumSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("vacuumSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::CallLimiter* CreateCallLimiter() {
            static BNM::Method<::GlobalNamespace::CallLimiter*> _m = GetClass().GetMethod(O("CreateCallLimiter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_LastTargetPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_LastTargetPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetActionTimeFrac() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetActionTimeFrac"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::CosmeticCritterAction GetLocalCatchAction(::GlobalNamespace::CosmeticCritter* critter) {
            static BNM::Method<::GlobalNamespace::CosmeticCritterAction> _m = GetClass().GetMethod(O("GetLocalCatchAction"), {"critter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(critter);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void set_LastTargetPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LastTargetPosition"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool ValidateRemoteCatchAction(::GlobalNamespace::CosmeticCritter* critter, ::GlobalNamespace::CosmeticCritterAction catchAction, double serverTime) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateRemoteCatchAction"), {"critter", "catchAction", "serverTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(critter, catchAction, serverTime);
        }
    };
}
