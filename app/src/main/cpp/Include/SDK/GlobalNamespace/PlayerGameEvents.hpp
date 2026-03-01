#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PlayerGameEvents : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PlayerGameEvents");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_OnCritterEvent(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCritterEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnCritterEvent(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCritterEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnDroppedObject(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDroppedObject"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnDroppedObject(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDroppedObject"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnEatObject(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnEatObject"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnEatObject(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnEatObject"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnEnterLocation(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnEnterLocation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnEnterLocation(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnEnterLocation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnGameModeCompleteRound(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGameModeCompleteRound"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnGameModeCompleteRound(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGameModeCompleteRound"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnGameModeObjectiveTrigger(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGameModeObjectiveTrigger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnGameModeObjectiveTrigger(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGameModeObjectiveTrigger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnGrabbedObject(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGrabbedObject"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnGrabbedObject(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGrabbedObject"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnLaunchedProjectile(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnLaunchedProjectile"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnLaunchedProjectile(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnLaunchedProjectile"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnMiscEvent(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnMiscEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnMiscEvent(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnMiscEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnPlayerMoved(::BNM::Structures::Mono::Action<float, float>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPlayerMoved"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnPlayerMoved(::BNM::Structures::Mono::Action<float, float>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPlayerMoved"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnPlayerSwam(::BNM::Structures::Mono::Action<float, float>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPlayerSwam"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnPlayerSwam(::BNM::Structures::Mono::Action<float, float>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPlayerSwam"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnTapObject(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnTapObject"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnTapObject(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnTapObject"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnTriggerHandEffect(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnTriggerHandEffect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnTriggerHandEffect(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnTriggerHandEffect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnCritterEvent() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnCritterEvent"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnDroppedObject() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnDroppedObject"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnEatObject() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnEatObject"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnEnterLocation() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnEnterLocation"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnGameModeCompleteRound() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnGameModeCompleteRound"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnGameModeObjectiveTrigger() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnGameModeObjectiveTrigger"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnGrabbedObject() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnGrabbedObject"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnLaunchedProjectile() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnLaunchedProjectile"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* GetOnMiscEvent() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("OnMiscEvent"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<float, float>* GetOnPlayerMoved() {
            static BNM::Field<::BNM::Structures::Mono::Action<float, float>*> _field = GetClass().GetField(O("OnPlayerMoved"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<float, float>* GetOnPlayerSwam() {
            static BNM::Field<::BNM::Structures::Mono::Action<float, float>*> _field = GetClass().GetField(O("OnPlayerSwam"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnTapObject() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnTapObject"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnTriggerHandEffect() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnTriggerHandEffect"));
            return _field.Get();
        }
        static void SetOnCritterEvent(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnCritterEvent"));
            _field.Set(value);
        }
        static void SetOnDroppedObject(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnDroppedObject"));
            _field.Set(value);
        }
        static void SetOnEatObject(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnEatObject"));
            _field.Set(value);
        }
        static void SetOnEnterLocation(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnEnterLocation"));
            _field.Set(value);
        }
        static void SetOnGameModeCompleteRound(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnGameModeCompleteRound"));
            _field.Set(value);
        }
        static void SetOnGameModeObjectiveTrigger(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnGameModeObjectiveTrigger"));
            _field.Set(value);
        }
        static void SetOnGrabbedObject(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnGrabbedObject"));
            _field.Set(value);
        }
        static void SetOnLaunchedProjectile(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnLaunchedProjectile"));
            _field.Set(value);
        }
        static void SetOnMiscEvent(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("OnMiscEvent"));
            _field.Set(value);
        }
        static void SetOnPlayerMoved(::BNM::Structures::Mono::Action<float, float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<float, float>*> _field = GetClass().GetField(O("OnPlayerMoved"));
            _field.Set(value);
        }
        static void SetOnPlayerSwam(::BNM::Structures::Mono::Action<float, float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<float, float>*> _field = GetClass().GetField(O("OnPlayerSwam"));
            _field.Set(value);
        }
        static void SetOnTapObject(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnTapObject"));
            _field.Set(value);
        }
        static void SetOnTriggerHandEffect(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnTriggerHandEffect"));
            _field.Set(value);
        }
        static void add_OnCritterEvent_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCritterEvent"), {"value"});
            _m.Call(value);
        }
        static void add_OnDroppedObject_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDroppedObject"), {"value"});
            _m.Call(value);
        }
        static void add_OnEatObject_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnEatObject"), {"value"});
            _m.Call(value);
        }
        static void add_OnEnterLocation_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnEnterLocation"), {"value"});
            _m.Call(value);
        }
        static void add_OnGameModeCompleteRound_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGameModeCompleteRound"), {"value"});
            _m.Call(value);
        }
        static void add_OnGameModeObjectiveTrigger_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGameModeObjectiveTrigger"), {"value"});
            _m.Call(value);
        }
        static void add_OnGrabbedObject_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGrabbedObject"), {"value"});
            _m.Call(value);
        }
        static void add_OnLaunchedProjectile_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnLaunchedProjectile"), {"value"});
            _m.Call(value);
        }
        static void add_OnMiscEvent_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnMiscEvent"), {"value"});
            _m.Call(value);
        }
        static void add_OnPlayerMoved_1(::BNM::Structures::Mono::Action<float, float>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPlayerMoved"), {"value"});
            _m.Call(value);
        }
        static void add_OnPlayerSwam_1(::BNM::Structures::Mono::Action<float, float>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPlayerSwam"), {"value"});
            _m.Call(value);
        }
        static void add_OnTapObject_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnTapObject"), {"value"});
            _m.Call(value);
        }
        static void add_OnTriggerHandEffect_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnTriggerHandEffect"), {"value"});
            _m.Call(value);
        }
        static void CritterEvent(::BNM::Structures::Mono::String* eventName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CritterEvent"), {"eventName"});
            _m.Call(eventName);
        }
        static void DroppedObject(::BNM::Structures::Mono::String* objectName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DroppedObject"), {"objectName"});
            _m.Call(objectName);
        }
        static void EatObject(::BNM::Structures::Mono::String* objectName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EatObject"), {"objectName"});
            _m.Call(objectName);
        }
        static void GameModeCompleteRound() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GameModeCompleteRound"));
            _m.Call();
        }
        static void GameModeObjectiveTriggered() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GameModeObjectiveTriggered"));
            _m.Call();
        }
        static void GrabbedObject(::BNM::Structures::Mono::String* objectName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabbedObject"), {"objectName"});
            _m.Call(objectName);
        }
        static void LaunchedProjectile(::BNM::Structures::Mono::String* objectName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LaunchedProjectile"), {"objectName"});
            _m.Call(objectName);
        }
        static void MiscEvent(::BNM::Structures::Mono::String* eventName, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MiscEvent"), {"eventName", "count"});
            _m.Call(eventName, count);
        }
        static void PlayerMoved(float distance, float speed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerMoved"), {"distance", "speed"});
            _m.Call(distance, speed);
        }
        static void PlayerSwam(float distance, float speed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerSwam"), {"distance", "speed"});
            _m.Call(distance, speed);
        }
        static void remove_OnCritterEvent_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCritterEvent"), {"value"});
            _m.Call(value);
        }
        static void remove_OnDroppedObject_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDroppedObject"), {"value"});
            _m.Call(value);
        }
        static void remove_OnEatObject_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnEatObject"), {"value"});
            _m.Call(value);
        }
        static void remove_OnEnterLocation_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnEnterLocation"), {"value"});
            _m.Call(value);
        }
        static void remove_OnGameModeCompleteRound_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGameModeCompleteRound"), {"value"});
            _m.Call(value);
        }
        static void remove_OnGameModeObjectiveTrigger_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGameModeObjectiveTrigger"), {"value"});
            _m.Call(value);
        }
        static void remove_OnGrabbedObject_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGrabbedObject"), {"value"});
            _m.Call(value);
        }
        static void remove_OnLaunchedProjectile_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnLaunchedProjectile"), {"value"});
            _m.Call(value);
        }
        static void remove_OnMiscEvent_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnMiscEvent"), {"value"});
            _m.Call(value);
        }
        static void remove_OnPlayerMoved_1(::BNM::Structures::Mono::Action<float, float>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPlayerMoved"), {"value"});
            _m.Call(value);
        }
        static void remove_OnPlayerSwam_1(::BNM::Structures::Mono::Action<float, float>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPlayerSwam"), {"value"});
            _m.Call(value);
        }
        static void remove_OnTapObject_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnTapObject"), {"value"});
            _m.Call(value);
        }
        static void remove_OnTriggerHandEffect_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnTriggerHandEffect"), {"value"});
            _m.Call(value);
        }
        static void TapObject(::BNM::Structures::Mono::String* objectName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TapObject"), {"objectName"});
            _m.Call(objectName);
        }
        static void TriggerEnterLocation(::BNM::Structures::Mono::String* locationName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerEnterLocation"), {"locationName"});
            _m.Call(locationName);
        }
        static void TriggerHandEffect(::BNM::Structures::Mono::String* effectName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerHandEffect"), {"effectName"});
            _m.Call(effectName);
        }
    };
}
