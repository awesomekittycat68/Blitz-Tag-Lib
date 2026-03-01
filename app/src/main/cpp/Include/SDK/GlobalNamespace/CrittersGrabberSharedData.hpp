#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CrittersGrabberSharedData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersGrabberSharedData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActorGrabber*>* GetActorGrabbers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActorGrabber*>*> _field = GetClass().GetField(O("actorGrabbers"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* GetEnteredCritterActor() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("enteredCritterActor"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* GetHeldActor() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("heldActor"));
            return _field.Get();
        }
        static bool GetInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetTriggerCollidersToCheck() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("triggerCollidersToCheck"));
            return _field.Get();
        }
        static void SetActorGrabbers(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActorGrabber*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActorGrabber*>*> _field = GetClass().GetField(O("actorGrabbers"));
            _field.Set(value);
        }
        static void SetEnteredCritterActor(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("enteredCritterActor"));
            _field.Set(value);
        }
        static void SetHeldActor(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("heldActor"));
            _field.Set(value);
        }
        static void SetInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.Set(value);
        }
        static void SetTriggerCollidersToCheck(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("triggerCollidersToCheck"));
            _field.Set(value);
        }
        static void AddActorGrabber(::GlobalNamespace::CrittersActorGrabber* grabber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddActorGrabber"), {"grabber"});
            _m.Call(grabber);
        }
        static void AddEnteredActor(::GlobalNamespace::CrittersActor* actor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddEnteredActor"), {"actor"});
            _m.Call(actor);
        }
        static void AddTrigger(::BNM::IL2CPP::Il2CppObject* trigger) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddTrigger"), {"trigger"});
            _m.Call(trigger);
        }
        static void DisableEmptyGrabberJoints() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableEmptyGrabberJoints"));
            _m.Call();
        }
        static void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.Call();
        }
        static void RemoveActorGrabber(::GlobalNamespace::CrittersActorGrabber* grabber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveActorGrabber"), {"grabber"});
            _m.Call(grabber);
        }
        static void RemoveEnteredActor(::GlobalNamespace::CrittersActor* actor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveEnteredActor"), {"actor"});
            _m.Call(actor);
        }
        static void RemoveTrigger(::BNM::IL2CPP::Il2CppObject* trigger) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveTrigger"), {"trigger"});
            _m.Call(trigger);
        }
    };
}
