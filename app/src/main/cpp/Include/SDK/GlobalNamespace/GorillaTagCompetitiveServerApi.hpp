#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RankedMultiplayerScore_PlayerScore.hpp"

namespace GlobalNamespace {
    struct GorillaTagCompetitiveServerApi : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTagCompetitiveServerApi");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetCreateMatchIdInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("CreateMatchIdInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCreateMatchIdRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("CreateMatchIdRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGetRankInformationInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("GetRankInformationInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGetRankInformationRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("GetRankInformationRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::GorillaTagCompetitiveServerApi* GetInstance() {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveServerApi*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        int GetMAXSERVERRETRIES() {
            static BNM::Field<int> _field = GetClass().GetField(O("MAX_SERVER_RETRIES"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPingMatchInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("PingMatchInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPingMatchRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("PingMatchRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSetEloValueInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("SetEloValueInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSetEloValueRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("SetEloValueRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSubmitMatchScoresInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("SubmitMatchScoresInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSubmitMatchScoresRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("SubmitMatchScoresRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUnlockCompetitiveQueueInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UnlockCompetitiveQueueInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUnlockCompetitiveQueueRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("UnlockCompetitiveQueueRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetValidateMatchJoinInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ValidateMatchJoinInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetValidateMatchJoinRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("ValidateMatchJoinRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCreateMatchIdInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("CreateMatchIdInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreateMatchIdRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("CreateMatchIdRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGetRankInformationInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("GetRankInformationInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGetRankInformationRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("GetRankInformationRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::GorillaTagCompetitiveServerApi* value) {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveServerApi*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void SetMAXSERVERRETRIES(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MAX_SERVER_RETRIES"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPingMatchInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("PingMatchInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPingMatchRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("PingMatchRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetEloValueInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("SetEloValueInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetEloValueRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("SetEloValueRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubmitMatchScoresInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("SubmitMatchScoresInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubmitMatchScoresRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("SubmitMatchScoresRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockCompetitiveQueueInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("UnlockCompetitiveQueueInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockCompetitiveQueueRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("UnlockCompetitiveQueueRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValidateMatchJoinInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ValidateMatchJoinInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValidateMatchJoinRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ValidateMatchJoinRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* CreateMatchId(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed* data, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("CreateMatchId"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        ::BNM::Coroutine::IEnumerator* GetRankInformation(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData* data, ::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("GetRankInformation"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        void OnCompleteCreateMatchId(::BNM::Structures::Mono::String* response, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCompleteCreateMatchId"), {"response", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response, callback);
        }
        void OnCompleteGetRankInformation(::BNM::Structures::Mono::String* response, ::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCompleteGetRankInformation"), {"response", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response, callback);
        }
        void OnCompletePingRoom(::BNM::Structures::Mono::String* response, ::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCompletePingRoom"), {"response", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response, callback);
        }
        void OnCompleteSetEloValue(::BNM::Structures::Mono::String* response, ::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCompleteSetEloValue"), {"response", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response, callback);
        }
        void OnCompleteSubmitMatchScores(::BNM::Structures::Mono::String* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCompleteSubmitMatchScores"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void OnCompleteUnlockCompetitiveQueue(::BNM::Structures::Mono::String* response, ::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCompleteUnlockCompetitiveQueue"), {"response", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response, callback);
        }
        void OnCompleteValidateMatchJoin(::BNM::Structures::Mono::String* response, ::BNM::Structures::Mono::Action<bool>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCompleteValidateMatchJoin"), {"response", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response, callback);
        }
        ::BNM::Coroutine::IEnumerator* PingRoom(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId* data, ::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("PingRoom"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        void RequestCreateMatchId(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestCreateMatchId"), {"callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callback);
        }
        void RequestGetRankInformation(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* playfabs, ::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestGetRankInformation"), {"playfabs", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playfabs, callback);
        }
        void RequestPingRoom(::BNM::Structures::Mono::String* matchId, ::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPingRoom"), {"matchId", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(matchId, callback);
        }
        void RequestSetEloValue(float desiredElo, ::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSetEloValue"), {"desiredElo", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(desiredElo, callback);
        }
        void RequestSubmitMatchScores(::BNM::Structures::Mono::String* matchId, ::BNM::Structures::Mono::List<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>* finalScores) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSubmitMatchScores"), {"matchId", "finalScores"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(matchId, finalScores);
        }
        void RequestSubmitMatchScores(::BNM::Structures::Mono::String* matchId, ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>* playerScores) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSubmitMatchScores"), {"matchId", "playerScores"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(matchId, playerScores);
        }
        void RequestUnlockCompetitiveQueue(bool unlocked, ::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestUnlockCompetitiveQueue"), {"unlocked", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(unlocked, callback);
        }
        void RequestValidateMatchJoin(::BNM::Structures::Mono::String* matchId, ::BNM::Structures::Mono::Action<bool>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestValidateMatchJoin"), {"matchId", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(matchId, callback);
        }
        ::BNM::Coroutine::IEnumerator* SetEloValue(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData* data, ::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("SetEloValue"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        ::BNM::Coroutine::IEnumerator* SubmitMatchScores(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData* data) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("SubmitMatchScores"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data);
        }
        ::BNM::Coroutine::IEnumerator* UnlockCompetitiveQueue(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData* data, ::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("UnlockCompetitiveQueue"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        ::BNM::Coroutine::IEnumerator* ValidateMatchJoin(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataWithMatchId* data, ::BNM::Structures::Mono::Action<bool>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ValidateMatchJoin"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
    };
}
