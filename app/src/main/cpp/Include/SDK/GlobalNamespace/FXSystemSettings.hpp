#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct FXSystemSettings : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FXSystemSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "FXSystemSettings: ";
        static constexpr const char* preErr = "ERROR!!!  FXSystemSettings: ";
        ::BNM::Structures::Mono::Array<::GlobalNamespace::LimiterType*>* GetCallLimits() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::LimiterType*>*> _field = GetClass().GetField(O("callLimits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::CooldownType*>* GetCallLimitsCooldown() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CooldownType*>*> _field = GetClass().GetField(O("CallLimitsCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetForLocalRig() {
            static BNM::Field<bool> _field = GetClass().GetField(O("forLocalRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallLimits(::BNM::Structures::Mono::Array<::GlobalNamespace::LimiterType*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::LimiterType*>*> _field = GetClass().GetField(O("callLimits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCallLimitsCooldown(::BNM::Structures::Mono::Array<::GlobalNamespace::CooldownType*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CooldownType*>*> _field = GetClass().GetField(O("CallLimitsCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForLocalRig(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("forLocalRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
