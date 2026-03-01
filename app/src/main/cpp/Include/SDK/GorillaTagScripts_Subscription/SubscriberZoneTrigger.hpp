#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Subscription {
    struct SubscriberZoneTrigger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Subscription", "SubscriberZoneTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsRestrictedZone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRestrictedZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Subscription::SubscriberExclusiveZone* GetParentZone() {
            static BNM::Field<::GorillaTagScripts_Subscription::SubscriberExclusiveZone*> _field = GetClass().GetField(O("parentZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsRestrictedZone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRestrictedZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentZone(::GorillaTagScripts_Subscription::SubscriberExclusiveZone* value) {
            static BNM::Field<::GorillaTagScripts_Subscription::SubscriberExclusiveZone*> _field = GetClass().GetField(O("parentZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
    };
}
