#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_ScavengerHunt {
    struct ScavengerManager_Hunt : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.ScavengerHunt", "ScavengerManager").GetInnerClass("Hunt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsCompleted() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsCompleted"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts_ScavengerHunt::ScavengerTarget*>* GetTargets() {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaTagScripts_ScavengerHunt::ScavengerTarget*>*> _method = GetClass().GetMethod(O("get_Targets"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void* GetCollectedTargetNamesNullable() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_collectedTargetNamesNullable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts_ScavengerHunt::ScavengerTarget*>* GetTargets_f() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_ScavengerHunt::ScavengerTarget*>*> _field = GetClass().GetField(O("_targets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetHuntCompleted() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("HuntCompleted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetHuntCompletedArg() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("HuntCompletedArg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSendHuntCompletedEventsOnLoad() {
            static BNM::Field<bool> _field = GetClass().GetField(O("SendHuntCompletedEventsOnLoad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSendTargetCollectedEventsOnLoad() {
            static BNM::Field<bool> _field = GetClass().GetField(O("SendTargetCollectedEventsOnLoad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetTargetCollected() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("TargetCollected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetTargetCollectedArg() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("TargetCollectedArg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCollectedTargetNamesNullable(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_collectedTargetNamesNullable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargets(::BNM::Structures::Mono::List<::GorillaTagScripts_ScavengerHunt::ScavengerTarget*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_ScavengerHunt::ScavengerTarget*>*> _field = GetClass().GetField(O("_targets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHuntCompleted(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("HuntCompleted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHuntCompletedArg(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("HuntCompletedArg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendHuntCompletedEventsOnLoad(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("SendHuntCompletedEventsOnLoad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendTargetCollectedEventsOnLoad(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("SendTargetCollectedEventsOnLoad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetCollected(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("TargetCollected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetCollectedArg(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("TargetCollectedArg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ClearCollectedTargets() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearCollectedTargets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool Collect(::GorillaTagScripts_ScavengerHunt::ScavengerTarget* target, bool initialLoad) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Collect"), {"target", "initialLoad"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(target, initialLoad);
        }
        void* get__collectedTargetNames() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get__collectedTargetNames"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_CollectedTargetNames() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_CollectedTargetNames"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsCompleted() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsCompleted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts_ScavengerHunt::ScavengerTarget*>* get_Targets() {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaTagScripts_ScavengerHunt::ScavengerTarget*>*> _m = GetClass().GetMethod(O("get_Targets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTagScripts_ScavengerHunt::ScavengerTarget* GetTarget(::BNM::Structures::Mono::String* name) {
            static BNM::Method<::GorillaTagScripts_ScavengerHunt::ScavengerTarget*> _m = GetClass().GetMethod(O("GetTarget"), {"name"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(name);
        }
        bool IsCollected(::GorillaTagScripts_ScavengerHunt::ScavengerTarget* target) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsCollected"), {"target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(target);
        }
        void SendHuntCompletedEvents() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendHuntCompletedEvents"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendTargetCollectedEvents(::GorillaTagScripts_ScavengerHunt::ScavengerTarget* target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendTargetCollectedEvents"), {"target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target);
        }
    };
}
