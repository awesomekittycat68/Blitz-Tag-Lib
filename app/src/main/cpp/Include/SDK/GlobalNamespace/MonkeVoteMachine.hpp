#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonkeVoteMachine_VotingState.hpp"

namespace GlobalNamespace {
    struct MonkeVoteMachine : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MonkeVoteMachine");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* kVoteCurrentIdKey = "Vote_Current_Id";
        static constexpr const char* kVoteCurrentOptionKey = "Vote_Current_Option";
        static constexpr const char* kVoteCurrentPredictionKey = "Vote_Current_Prediction";
        static constexpr const char* kVoteCurrentStreak = "Vote_Current_Streak";
        static constexpr const char* kVotePreviousIdKey = "Vote_Previous_Id";
        static constexpr const char* kVotePreviousOptionKey = "Vote_Previous_Option";
        static constexpr const char* kVotePreviousPredictionKey = "Vote_Previous_Prediction";
        static constexpr const char* kVotePreviousStreak = "Vote_Previous_Streak";
        ::AudioSource* GetAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("_audio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCompleteTitle() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_completeTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MonkeVoteMachine_PollEntry* GetCurrentPoll() {
            static BNM::Field<::GlobalNamespace::MonkeVoteMachine_PollEntry*> _field = GetClass().GetField(O("_currentPoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDefaultQuestion() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_defaultQuestion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDefaultResultsTitle() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_defaultResultsTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDefaultTitle() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_defaultTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsTestingPoll() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isTestingPoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetNextPollUpdate() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_nextPollUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPollsClosedText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_pollsClosedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPredictQuestion() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_predictQuestion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPredictTitle() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_predictTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MonkeVoteMachine_PollEntry* GetPreviousPoll() {
            static BNM::Field<::GlobalNamespace::MonkeVoteMachine_PollEntry*> _field = GetClass().GetField(O("_previousPoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MonkeVoteProximityTrigger* GetProximityTrigger() {
            static BNM::Field<::GlobalNamespace::MonkeVoteProximityTrigger*> _field = GetClass().GetField(O("_proximityTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetQuestionText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_questionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::MonkeVoteResult*>* GetResults() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MonkeVoteResult*>*> _field = GetClass().GetField(O("_results"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetResultsQuestionText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_resultsQuestionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetResultsStreakText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_resultsStreakText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetResultsTitleText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_resultsTitleText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MonkeVoteMachine_VotingState GetState() {
            static BNM::Field<::GlobalNamespace::MonkeVoteMachine_VotingState> _field = GetClass().GetField(O("_state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetStreakBlurb() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_streakBlurb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetStreakLostBlurb() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_streakLostBlurb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObjectScheduling::CountdownText* GetTimerText() {
            static BNM::Field<::GameObjectScheduling::CountdownText*> _field = GetClass().GetField(O("_timerText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetTitleText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_titleText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVoteCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("_voteCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVoteCooldownEnd() {
            static BNM::Field<float> _field = GetClass().GetField(O("_voteCooldownEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetVoteFailSound() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("_voteFailSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetVoteProcessingSound() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("_voteProcessingSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetVoteSuccessDing() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("_voteSuccessDing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetVoteTitle() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_voteTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetVoteTubeAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("_voteTubeAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::MonkeVoteOption*>* GetVotingOptions() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MonkeVoteOption*>*> _field = GetClass().GetField(O("_votingOptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWaitingOnVote() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_waitingOnVote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("_audio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompleteTitle(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_completeTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentPoll(::GlobalNamespace::MonkeVoteMachine_PollEntry* value) {
            static BNM::Field<::GlobalNamespace::MonkeVoteMachine_PollEntry*> _field = GetClass().GetField(O("_currentPoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultQuestion(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_defaultQuestion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultResultsTitle(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_defaultResultsTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultTitle(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_defaultTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsTestingPoll(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isTestingPoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextPollUpdate(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_nextPollUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPollsClosedText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_pollsClosedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPredictQuestion(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_predictQuestion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPredictTitle(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_predictTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousPoll(::GlobalNamespace::MonkeVoteMachine_PollEntry* value) {
            static BNM::Field<::GlobalNamespace::MonkeVoteMachine_PollEntry*> _field = GetClass().GetField(O("_previousPoll"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProximityTrigger(::GlobalNamespace::MonkeVoteProximityTrigger* value) {
            static BNM::Field<::GlobalNamespace::MonkeVoteProximityTrigger*> _field = GetClass().GetField(O("_proximityTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestionText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_questionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResults(::BNM::Structures::Mono::Array<::GlobalNamespace::MonkeVoteResult*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MonkeVoteResult*>*> _field = GetClass().GetField(O("_results"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResultsQuestionText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_resultsQuestionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResultsStreakText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_resultsStreakText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResultsTitleText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_resultsTitleText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::MonkeVoteMachine_VotingState value) {
            static BNM::Field<::GlobalNamespace::MonkeVoteMachine_VotingState> _field = GetClass().GetField(O("_state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStreakBlurb(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_streakBlurb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStreakLostBlurb(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_streakLostBlurb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimerText(::GameObjectScheduling::CountdownText* value) {
            static BNM::Field<::GameObjectScheduling::CountdownText*> _field = GetClass().GetField(O("_timerText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_titleText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoteCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_voteCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoteCooldownEnd(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_voteCooldownEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoteFailSound(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("_voteFailSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoteProcessingSound(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("_voteProcessingSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoteSuccessDing(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("_voteSuccessDing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoteTitle(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_voteTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoteTubeAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("_voteTubeAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVotingOptions(::BNM::Structures::Mono::Array<::GlobalNamespace::MonkeVoteOption*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MonkeVoteOption*>*> _field = GetClass().GetField(O("_votingOptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitingOnVote(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_waitingOnVote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearLocalData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearLocalData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearLocalVoteAndPredictionData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearLocalVoteAndPredictionData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Configure() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Configure"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::List<int>* ConvertToPercentages(::BNM::Structures::Mono::Array<int>* votes) {
            static BNM::Method<::BNM::Structures::Mono::List<int>*> _m = GetClass().GetMethod(O("ConvertToPercentages"), {"votes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(votes);
        }
        void CreateNextDummyPoll() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateNextDummyPoll"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int GetPostPollStreak(::GlobalNamespace::MonkeVoteMachine_PollEntry* entry) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPostPollStreak"), {"entry"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(entry);
        }
        int GetPrePollStreak(int id) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPrePollStreak"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id);
        }
        void* GetVote(int voteId) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetVote"), {"voteId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(voteId);
        }
        void HandleCurrentPollEnded() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleCurrentPollEnded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleOnPollsUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnPollsUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleOnVoteAccepted() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnVoteAccepted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleOnVoteFailed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnVoteFailed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HideDynamicMeshes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HideDynamicMeshes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPlayerEnteredVoteProximity() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEnteredVoteProximity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnVoteEntered(::GlobalNamespace::MonkeVoteOption* option, ::Collider* votingCollider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnVoteEntered"), {"option", "votingCollider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(option, votingCollider);
        }
        void OnVoteResponseReceived(int id, int option, bool isPrediction, bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnVoteResponseReceived"), {"id", "option", "isPrediction", "success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id, option, isPrediction, success);
        }
        void PlayVoteFailEffects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayVoteFailEffects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayVoteSuccessEffects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayVoteSuccessEffects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SavePrePollStreak(int id, int streak) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SavePrePollStreak"), {"id", "streak"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id, streak);
        }
        void SaveVote(int id, int voteOption, int predictionOption) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveVote"), {"id", "voteOption", "predictionOption"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id, voteOption, predictionOption);
        }
        void SetDynamicMeshesVisible(bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDynamicMeshesVisible"), {"enabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enabled);
        }
        void SetState_1(::GlobalNamespace::MonkeVoteMachine_VotingState newState, bool instant) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState", "instant"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, instant);
        }
        void ShowDynamicMeshes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowDynamicMeshes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ShowResults(::GlobalNamespace::MonkeVoteMachine_PollEntry* entry) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowResults"), {"entry"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entry);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePollDisplays() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePollDisplays"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Vote(int id, int option, bool isPrediction) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Vote"), {"id", "option", "isPrediction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id, option, isPrediction);
        }
        void VoteLeft() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VoteLeft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void VoteRight() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VoteRight"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void VoteWinner() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VoteWinner"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
