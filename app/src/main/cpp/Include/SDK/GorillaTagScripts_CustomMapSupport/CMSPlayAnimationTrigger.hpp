#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CMSTrigger.hpp"

namespace GorillaTagScripts_CustomMapSupport {
    struct CMSPlayAnimationTrigger : ::GorillaTagScripts_CustomMapSupport::CMSTrigger {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.CustomMapSupport", "CMSPlayAnimationTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GameObject*>* GetAnimatedObjects() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("animatedObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetAnimationName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("animationName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimatedObjects(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("animatedObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimationName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("animationName"));
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
