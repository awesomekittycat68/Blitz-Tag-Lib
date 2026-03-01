#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTZone.hpp"
#include "QuestCategory.hpp"
#include "QuestType.hpp"

namespace GlobalNamespace {
    struct RotatingQuest : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RotatingQuest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsMovementQuest() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsMovementQuest"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GTZone GetRequiredZone() {
            static BNM::Method<::GlobalNamespace::GTZone> _method = GetClass().GetMethod(O("get_RequiredZone"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRequiredZone(::GlobalNamespace::GTZone value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RequiredZone"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::QuestCategory GetCategory() {
            static BNM::Field<::GlobalNamespace::QuestCategory> _field = GetClass().GetField(O("category"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsDailyQuest() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isDailyQuest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsQuestActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isQuestActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsQuestComplete() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isQuestComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastChange() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMoveDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("moveDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOccurenceCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("occurenceCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetQuestID() {
            static BNM::Field<int> _field = GetClass().GetField(O("questID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetQuestManager() {
            static BNM::Field<void*> _field = GetClass().GetField(O("questManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetQuestName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("questName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetQuestOccurenceFilter() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("questOccurenceFilter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::QuestType GetQuestType() {
            static BNM::Field<::GlobalNamespace::QuestType> _field = GetClass().GetField(O("questType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRequiredOccurenceCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("requiredOccurenceCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GTZone>* GetRequiredZones() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GTZone>*> _field = GetClass().GetField(O("requiredZones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("weight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCategory(::GlobalNamespace::QuestCategory value) {
            static BNM::Field<::GlobalNamespace::QuestCategory> _field = GetClass().GetField(O("category"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsDailyQuest(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isDailyQuest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsQuestActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isQuestActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsQuestComplete(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isQuestComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastChange(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMoveDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("moveDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOccurenceCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("occurenceCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("questID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestManager(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("questManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("questName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestOccurenceFilter(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("questOccurenceFilter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestType(::GlobalNamespace::QuestType value) {
            static BNM::Field<::GlobalNamespace::QuestType> _field = GetClass().GetField(O("questType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequiredOccurenceCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("requiredOccurenceCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequiredZones(::BNM::Structures::Mono::List<::GlobalNamespace::GTZone>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GTZone>*> _field = GetClass().GetField(O("requiredZones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("weight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddEventListener() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddEventListener"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ApplySavedProgress(int progress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplySavedProgress"), {"progress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(progress);
        }
        void Complete() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Complete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_IsMovementQuest() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsMovementQuest"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GTZone get_RequiredZone() {
            static BNM::Method<::GlobalNamespace::GTZone> _m = GetClass().GetMethod(O("get_RequiredZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetProgress() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetProgress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetProgressText() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetProgressText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetTextDescription() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetTextDescription"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnGameEventOccurence(::BNM::Structures::Mono::String* eventName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGameEventOccurence"), {"eventName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventName);
        }
        void OnGameEventOccurence(::BNM::Structures::Mono::String* eventName, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGameEventOccurence"), {"eventName", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventName, count);
        }
        void OnGameMoveEvent(float distance, float speed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGameMoveEvent"), {"distance", "speed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(distance, speed);
        }
        void RemoveEventListener() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveEventListener"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_RequiredZone(::GlobalNamespace::GTZone value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RequiredZone"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetProgress(int progress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetProgress"), {"progress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(progress);
        }
        void SetRequiredZone_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRequiredZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
