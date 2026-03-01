#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ProgressionController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* kUnclaimedPointKey = "Claimed_Points_Key";
        static constexpr const char* kQueuedDailyQuestSetIDKey = "Queued_Quest_Daily_SetID_Key";
        static constexpr const char* kQueuedDailyQuestSaveCountKey = "Queued_Quest_Daily_SaveCount_Key";
        static constexpr const char* kQueuedDailyQuestIDKey = "Queued_Quest_Daily_ID_Key";
        static constexpr const char* kQueuedWeeklyQuestSetIDKey = "Queued_Quest_Weekly_SetID_Key";
        static constexpr const char* kQueuedWeeklyQuestSaveCountKey = "Queued_Quest_Weekly_SaveCount_Key";
        static constexpr const char* kQueuedWeeklyQuestIDKey = "Queued_Quest_Weekly_ID_Key";
        int GetTotalPoints() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TotalPoints"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetWeeklyCap() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_WeeklyCap"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetWeeklyCap(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_WeeklyCap"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_OnProgressEvent(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnProgressEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnProgressEvent(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnProgressEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnQuestSelectionChanged(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnQuestSelectionChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnQuestSelectionChanged(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnQuestSelectionChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        int GetCurrentlyProcessingQuest() {
            static BNM::Field<int> _field = GetClass().GetField(O("_currentlyProcessingQuest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFetchStatusRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_fetchStatusRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::ProgressionController* GetGInstance() {
            static BNM::Field<::GlobalNamespace::ProgressionController*> _field = GetClass().GetField(O("_gInstance"));
            return _field.Get();
        }
        bool GetIsFetchingStatus() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isFetchingStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsSendingQuestComplete() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isSendingQuestComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLastProgressReport() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_lastProgressReport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxRetriesOnFail() {
            static BNM::Field<int> _field = GetClass().GetField(O("_maxRetriesOnFail"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetProgressReportPending() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_progressReportPending"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RotatingQuestsManager* GetQuestManager() {
            static BNM::Field<::GlobalNamespace::RotatingQuestsManager*> _field = GetClass().GetField(O("_questManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetQueuedDailyCompletedQuests() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("_queuedDailyCompletedQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetQueuedWeeklyCompletedQuests() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("_queuedWeeklyCompletedQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSendQuestCompleteRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_sendQuestCompleteRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStatusReceived() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_statusReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnProgressEvent() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnProgressEvent"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnQuestSelectionChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnQuestSelectionChanged"));
            return _field.Get();
        }
        int GetTotalPointsRaw() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalPointsRaw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUnclaimedPoints() {
            static BNM::Field<int> _field = GetClass().GetField(O("unclaimedPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWeeklyPoints() {
            static BNM::Field<int> _field = GetClass().GetField(O("weeklyPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentlyProcessingQuest(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_currentlyProcessingQuest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFetchStatusRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_fetchStatusRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetGInstance(::GlobalNamespace::ProgressionController* value) {
            static BNM::Field<::GlobalNamespace::ProgressionController*> _field = GetClass().GetField(O("_gInstance"));
            _field.Set(value);
        }
        void SetIsFetchingStatus(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isFetchingStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsSendingQuestComplete(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isSendingQuestComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastProgressReport(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_lastProgressReport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxRetriesOnFail(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_maxRetriesOnFail"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgressReportPending(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_progressReportPending"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestManager(::GlobalNamespace::RotatingQuestsManager* value) {
            static BNM::Field<::GlobalNamespace::RotatingQuestsManager*> _field = GetClass().GetField(O("_questManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQueuedDailyCompletedQuests(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("_queuedDailyCompletedQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQueuedWeeklyCompletedQuests(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("_queuedWeeklyCompletedQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendQuestCompleteRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_sendQuestCompleteRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatusReceived(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_statusReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnProgressEvent(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnProgressEvent"));
            _field.Set(value);
        }
        static void SetOnQuestSelectionChanged(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnQuestSelectionChanged"));
            _field.Set(value);
        }
        void SetTotalPointsRaw(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalPointsRaw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnclaimedPoints(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("unclaimedPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeeklyPoints(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("weeklyPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void add_OnProgressEvent_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnProgressEvent"), {"value"});
            _m.Call(value);
        }
        static void add_OnQuestSelectionChanged_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnQuestSelectionChanged"), {"value"});
            _m.Call(value);
        }
        void AddPoints(int points) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPoints"), {"points"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(points);
        }
        bool AreCompletedQuestsQueued() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AreCompletedQuestsQueued"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearQuestQueue() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearQuestQueue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* DoFetchStatus(::GlobalNamespace::ProgressionController_GetQuestsStatusRequest* data, ::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoFetchStatus"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        ::BNM::Coroutine::IEnumerator* DoSendQuestComplete(::GlobalNamespace::ProgressionController_SetQuestCompleteRequest* data, ::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoSendQuestComplete"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        void FetchStatus() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FetchStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static int get_TotalPoints() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TotalPoints"));
            return _m.Call();
        }
        static int get_WeeklyCap() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_WeeklyCap"));
            return _m.Call();
        }
        void* GetProgress() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetProgress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* GetProgressionData() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetProgressionData"));
            return _m.Call();
        }
        void LoadCompletedQuestQueue() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadCompletedQuestQueue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnFetchStatusResponse(::GlobalNamespace::ProgressionController_GetQuestStatusResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFetchStatusResponse"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void OnProgressRedeemed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProgressRedeemed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnQuestComplete(int questId, bool isDaily) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnQuestComplete"), {"questId", "isDaily"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(questId, isDaily);
        }
        void OnQuestProgressChanged(bool initialLoad) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnQuestProgressChanged"), {"initialLoad"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(initialLoad);
        }
        void OnSendQuestCompleteSuccess(::GlobalNamespace::ProgressionController_SetQuestCompleteResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSendQuestCompleteSuccess"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void ProcessQuestSubmittedFail() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessQuestSubmittedFail"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProcessQuestSubmittedSuccess() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessQuestSubmittedSuccess"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void QueueQuestCompletion(int questId, bool isDaily) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QueueQuestCompletion"), {"questId", "isDaily"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(questId, isDaily);
        }
        static void RedeemProgress() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RedeemProgress"));
            _m.Call();
        }
        static void remove_OnProgressEvent_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnProgressEvent"), {"value"});
            _m.Call(value);
        }
        static void remove_OnQuestSelectionChanged_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnQuestSelectionChanged"), {"value"});
            _m.Call(value);
        }
        void ReportProgress() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportProgress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void ReportQuestChanged(bool initialLoad) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportQuestChanged"), {"initialLoad"});
            _m.Call(initialLoad);
        }
        static void ReportQuestComplete(int questId, bool isDaily) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportQuestComplete"), {"questId", "isDaily"});
            _m.Call(questId, isDaily);
        }
        static void ReportQuestSelectionChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportQuestSelectionChanged"));
            _m.Call();
        }
        void ReportScoreChange() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportScoreChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestProgressRedemption(::BNM::Structures::Mono::Action<>* onComplete) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestProgressRedemption"), {"onComplete"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(onComplete);
        }
        static void RequestProgressUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestProgressUpdate"));
            _m.Call();
        }
        void RequestStatus() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SaveCompletedQuestQueue() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveCompletedQuestQueue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendQuestCompleted(int questId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendQuestCompleted"), {"questId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(questId);
        }
        static void set_WeeklyCap(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_WeeklyCap"), {"value"});
            _m.Call(value);
        }
        void SetProgressionValues(int weekly, int unclaimed, int totalRaw) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetProgressionValues"), {"weekly", "unclaimed", "totalRaw"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(weekly, unclaimed, totalRaw);
        }
        void StartSendQuestComplete(int questId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartSendQuestComplete"), {"questId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(questId);
        }
        void SubmitNextQuestInQueue() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SubmitNextQuestInQueue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateProgressionValues(int weekly, int totalRaw) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateProgressionValues"), {"weekly", "totalRaw"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(weekly, totalRaw);
        }
        ::BNM::IL2CPP::Il2CppObject* WaitForSessionToken() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("WaitForSessionToken"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
