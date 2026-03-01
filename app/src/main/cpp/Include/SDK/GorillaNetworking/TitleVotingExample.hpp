#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    struct TitleVotingExample : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "TitleVotingExample");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetFetchPollsRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("fetchPollsRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIncludeInactive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("includeInactive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsPrediction() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPrediction"));
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
        int GetOption() {
            static BNM::Field<int> _field = GetClass().GetField(O("Option"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPollId() {
            static BNM::Field<int> _field = GetClass().GetField(O("PollId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVoteRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("voteRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFetchPollsRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fetchPollsRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncludeInactive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("includeInactive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsPrediction(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPrediction"));
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
        void SetOption(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Option"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPollId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("PollId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoteRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("voteRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Coroutine::IEnumerator* DoFetchPolls(::GorillaNetworking::TitleVotingExample_FetchPollsRequest* data, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GorillaNetworking::TitleVotingExample_FetchPollsResponse*>*>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoFetchPolls"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        ::BNM::Coroutine::IEnumerator* DoVote(::GorillaNetworking::TitleVotingExample_VoteRequest* data, ::BNM::Structures::Mono::Action<::GorillaNetworking::TitleVotingExample_VoteResponse*>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoVote"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        void FetchPollsAndVote() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FetchPollsAndVote"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnFetchPollsResponse(::BNM::Structures::Mono::List<::GorillaNetworking::TitleVotingExample_FetchPollsResponse*>* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFetchPollsResponse"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void OnVoteSuccess(::GorillaNetworking::TitleVotingExample_VoteResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnVoteSuccess"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Vote() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Vote"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* WaitForSessionToken() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("WaitForSessionToken"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
