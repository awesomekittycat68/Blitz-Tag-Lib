#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MonkeVoteController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MonkeVoteController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::MonkeVoteController* GetInstance() {
            static BNM::Method<::GlobalNamespace::MonkeVoteController*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GlobalNamespace::MonkeVoteController* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_OnCurrentPollEnded(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCurrentPollEnded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnCurrentPollEnded(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCurrentPollEnded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnPollsUpdated(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPollsUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnPollsUpdated(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPollsUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnVoteAccepted(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnVoteAccepted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnVoteAccepted(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnVoteAccepted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnVoteFailed(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnVoteFailed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnVoteFailed(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnVoteFailed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void* GetCurrentPollCompletionTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("currentPollCompletionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MonkeVoteController_FetchPollsResponse* GetCurrentPollData() {
            static BNM::Field<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*> _field = GetClass().GetField(O("currentPollData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFetchPollsRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("fetchPollsRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasCurrentPollCompleted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasCurrentPollCompleted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasPoll() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIncludeInactive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("includeInactive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsCurrentPollActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isCurrentPollActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsFetchingPoll() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isFetchingPoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsPrediction() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPrediction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsSendingVote() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSendingVote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MonkeVoteController_FetchPollsResponse* GetLastPollData() {
            static BNM::Field<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*> _field = GetClass().GetField(O("lastPollData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MonkeVoteController_VoteResponse* GetLastVoteData() {
            static BNM::Field<::GlobalNamespace::MonkeVoteController_VoteResponse*> _field = GetClass().GetField(O("lastVoteData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxRetriesOnFail() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxRetriesOnFail"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNonce() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Nonce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnCurrentPollEnded() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnCurrentPollEnded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnPollsUpdated() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPollsUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnVoteAccepted() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnVoteAccepted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnVoteFailed() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnVoteFailed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOption() {
            static BNM::Field<int> _field = GetClass().GetField(O("option"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPollId() {
            static BNM::Field<int> _field = GetClass().GetField(O("pollId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVoteRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("voteRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentPollCompletionTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("currentPollCompletionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentPollData(::GlobalNamespace::MonkeVoteController_FetchPollsResponse* value) {
            static BNM::Field<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*> _field = GetClass().GetField(O("currentPollData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFetchPollsRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fetchPollsRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasCurrentPollCompleted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasCurrentPollCompleted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasPoll(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncludeInactive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("includeInactive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsCurrentPollActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isCurrentPollActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsFetchingPoll(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isFetchingPoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsPrediction(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPrediction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsSendingVote(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSendingVote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPollData(::GlobalNamespace::MonkeVoteController_FetchPollsResponse* value) {
            static BNM::Field<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*> _field = GetClass().GetField(O("lastPollData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastVoteData(::GlobalNamespace::MonkeVoteController_VoteResponse* value) {
            static BNM::Field<::GlobalNamespace::MonkeVoteController_VoteResponse*> _field = GetClass().GetField(O("lastVoteData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxRetriesOnFail(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxRetriesOnFail"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNonce(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Nonce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCurrentPollEnded(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnCurrentPollEnded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPollsUpdated(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPollsUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnVoteAccepted(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnVoteAccepted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnVoteFailed(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnVoteFailed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOption(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("option"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPollId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pollId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoteRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("voteRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnCurrentPollEnded_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCurrentPollEnded"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnPollsUpdated_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPollsUpdated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnVoteAccepted_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnVoteAccepted"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnVoteFailed_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnVoteFailed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* DoFetchPolls(::GlobalNamespace::MonkeVoteController_FetchPollsRequest* data, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoFetchPolls"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        ::BNM::Coroutine::IEnumerator* DoVote(::GlobalNamespace::MonkeVoteController_VoteRequest* data, ::BNM::Structures::Mono::Action<::GlobalNamespace::MonkeVoteController_VoteResponse*>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoVote"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        void FetchPolls() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FetchPolls"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GlobalNamespace::MonkeVoteController* get_instance() {
            static BNM::Method<::GlobalNamespace::MonkeVoteController*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        void* GetCurrentPollCompletionTime_1() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetCurrentPollCompletionTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::MonkeVoteController_FetchPollsResponse* GetCurrentPollData_1() {
            static BNM::Method<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*> _m = GetClass().GetMethod(O("GetCurrentPollData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::MonkeVoteController_FetchPollsResponse* GetLastPollData_1() {
            static BNM::Method<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*> _m = GetClass().GetMethod(O("GetLastPollData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetLastVotePollId() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetLastVotePollId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetLastVoteSelectedOption() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetLastVoteSelectedOption"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool GetLastVoteWasPrediction() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetLastVoteWasPrediction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::MonkeVoteController_VoteResponse* GetVoteData() {
            static BNM::Method<::GlobalNamespace::MonkeVoteController_VoteResponse*> _m = GetClass().GetMethod(O("GetVoteData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void OnFetchPollsResponse(::BNM::Structures::Mono::List<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFetchPollsResponse"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void OnVoteSuccess(::GlobalNamespace::MonkeVoteController_VoteResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnVoteSuccess"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void remove_OnCurrentPollEnded_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCurrentPollEnded"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnPollsUpdated_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPollsUpdated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnVoteAccepted_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnVoteAccepted"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnVoteFailed_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnVoteFailed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void RequestPolls() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPolls"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendVote() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendVote"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void set_instance(::GlobalNamespace::MonkeVoteController* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_instance"), {"value"});
            _m.Call(value);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Vote(int pollId, int option, bool isPrediction) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Vote"), {"pollId", "option", "isPrediction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pollId, option, isPrediction);
        }
        ::BNM::IL2CPP::Il2CppObject* WaitForSessionToken() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("WaitForSessionToken"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
