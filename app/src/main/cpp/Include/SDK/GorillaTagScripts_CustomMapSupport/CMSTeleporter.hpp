#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CMSTrigger.hpp"

namespace GorillaTagScripts_CustomMapSupport {
    struct CMSTeleporter : ::GorillaTagScripts_CustomMapSupport::CMSTrigger {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.CustomMapSupport", "CMSTeleporter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetMaintainVelocity() {
            static BNM::Field<bool> _field = GetClass().GetField(O("maintainVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMatchTeleportPointRotation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("matchTeleportPointRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetTeleportPoints() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("TeleportPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMaintainVelocity(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("maintainVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatchTeleportPointRotation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("matchTeleportPointRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportPoints(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("TeleportPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CopyTriggerSettings(::BNM::IL2CPP::Il2CppObject* settings) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyTriggerSettings"), {"settings"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(settings);
        }
        void Trigger(double triggerTime, bool originatedLocally, bool ignoreTriggerCount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Trigger"), {"triggerTime", "originatedLocally", "ignoreTriggerCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(triggerTime, originatedLocally, ignoreTriggerCount);
        }
    };
}
