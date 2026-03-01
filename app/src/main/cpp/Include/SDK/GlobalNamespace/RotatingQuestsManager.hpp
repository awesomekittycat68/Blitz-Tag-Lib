#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RotatingQuestsManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RotatingQuestsManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* kDailyQuestSetIDKey = "Rotating_Quest_Daily_SetID_Key";
        static constexpr const char* kDailyQuestSaveCountKey = "Rotating_Quest_Daily_SaveCount_Key";
        static constexpr const char* kDailyQuestIDKey = "Rotating_Quest_Daily_ID_Key";
        static constexpr const char* kDailyQuestProgressKey = "Rotating_Quest_Daily_Progress_Key";
        static constexpr const char* kWeeklyQuestSetIDKey = "Rotating_Quest_Weekly_SetID_Key";
        static constexpr const char* kWeeklyQuestSaveCountKey = "Rotating_Quest_Weekly_SaveCount_Key";
        static constexpr const char* kWeeklyQuestIDKey = "Rotating_Quest_Weekly_ID_Key";
        static constexpr const char* kWeeklyQuestProgressKey = "Rotating_Quest_Weekly_Progress_Key";
        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetPlayQuestSounds() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_playQuestSounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetQuestAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("_questAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDailyQuestSetID() {
            static BNM::Field<int> _field = GetClass().GetField(O("dailyQuestSetID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasQuest() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasQuest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetLastQuestChange() {
            static BNM::Field<int> _field = GetClass().GetField(O("LastQuestChange"));
            return _field.Get();
        }
        static int GetLastQuestDailyID() {
            static BNM::Field<int> _field = GetClass().GetField(O("LastQuestDailyID"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLocalQuestPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("localQuestPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetNextQuestUpdateTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("nextQuestUpdateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RotatingQuestsManager_RotatingQuestList* GetQuests() {
            static BNM::Field<::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*> _field = GetClass().GetField(O("quests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseTestLocalQuests() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useTestLocalQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWeeklyQuestSetID() {
            static BNM::Field<int> _field = GetClass().GetField(O("weeklyQuestSetID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPlayQuestSounds(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_playQuestSounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("_questAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDailyQuestSetID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("dailyQuestSetID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasQuest(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasQuest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLastQuestChange(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("LastQuestChange"));
            _field.Set(value);
        }
        static void SetLastQuestDailyID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("LastQuestDailyID"));
            _field.Set(value);
        }
        void SetLocalQuestPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("localQuestPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextQuestUpdateTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("nextQuestUpdateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuests(::GlobalNamespace::RotatingQuestsManager_RotatingQuestList* value) {
            static BNM::Field<::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*> _field = GetClass().GetField(O("quests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseTestLocalQuests(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useTestLocalQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeeklyQuestSetID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("weeklyQuestSetID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ClearAllQuestEventListeners() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearAllQuestEventListeners"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* get_DailyQuestCountdown() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_DailyQuestCountdown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_WeeklyQuestCountdown() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_WeeklyQuestCountdown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleQuestCompleted(int questID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleQuestCompleted"), {"questID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(questID);
        }
        void HandleQuestProgressChanged(bool initialLoad) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleQuestProgressChanged"), {"initialLoad"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(initialLoad);
        }
        void LoadQuestProgress() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadQuestProgress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LoadQuestsFromJson(::BNM::Structures::Mono::String* jsonString) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadQuestsFromJson"), {"jsonString"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(jsonString);
        }
        void LoadTestQuestsFromFile() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadTestQuestsFromFile"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void ProcessAllQuests(::BNM::Structures::Mono::Action<::GlobalNamespace::RotatingQuest*>* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessAllQuests"), {"action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action);
        }
        void QuestLoadPostProcess(::GlobalNamespace::RotatingQuest* quest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QuestLoadPostProcess"), {"quest"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(quest);
        }
        void QuestSavePreProcess(::GlobalNamespace::RotatingQuest* quest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QuestSavePreProcess"), {"quest"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(quest);
        }
        void RemoveDisabledQuests() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveDisabledQuests"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestQuestsFromTitleData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestQuestsFromTitleData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SaveQuestProgress() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveQuestProgress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SelectActiveQuests() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectActiveQuests"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void set_DailyQuestCountdown(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DailyQuestCountdown"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_WeeklyQuestCountdown(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_WeeklyQuestCountdown"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetupAllQuestEventListeners() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupAllQuestEventListeners"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetupQuests() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupQuests"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
