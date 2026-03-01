#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GorillaNot : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaNot");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GorillaNot* GetInstance() {
            static BNM::Field<::GlobalNamespace::GorillaNot*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr uint8_t ReportAssault = 8;
        static constexpr const char* InvalidRPC = "invalid RPC stuff";
        ::BNM::IL2CPP::Il2CppObject* GetRunner() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_runner"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetSendReport() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_sendReport"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSendReport(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_sendReport"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetSuspiciousPlayerId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_suspiciousPlayerId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSuspiciousPlayerId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_suspiciousPlayerId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetSuspiciousPlayerName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_suspiciousPlayerName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSuspiciousPlayerName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_suspiciousPlayerName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetSuspiciousReason() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_suspiciousReason"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSuspiciousReason(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_suspiciousReason"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetSendReport_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_sendReport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSuspiciousPlayerId_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_suspiciousPlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSuspiciousPlayerName_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_suspiciousPlayerName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSuspiciousReason_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_suspiciousReason"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>* GetCachedPlayerList() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("cachedPlayerList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCalls() {
            static BNM::Field<int> _field = GetClass().GetField(O("calls"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCloseDirty() {
            static BNM::Field<bool> _field = GetClass().GetField(O("closeDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetCurrentMasterClient() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("currentMasterClient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::Hashtable* GetHashTable() {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("hashTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::GorillaNot* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GorillaNot*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        float GetLastCheck() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastReportChecked() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastReportChecked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastServerTimestamp() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastServerTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLogErrorCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("logErrorCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLogErrorMax() {
            static BNM::Field<int> _field = GetClass().GetField(O("logErrorMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLowestActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("lowestActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::Hashtable* GetMPhotonHashTable() {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("m_photonHashTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CallLimiter*>* GetMPvSpamChecker() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CallLimiter*>*> _field = GetClass().GetField(O("m_pvSpamChecker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetMReusableIntList() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("m_reusableIntList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOutObj() {
            static BNM::Field<void*> _field = GetClass().GetField(O("outObj"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlayerID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playerID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlayerNick() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playerNick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetQueuedReports() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("queuedReports"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReportCheckCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("reportCheckCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetReportedPlayers() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("reportedPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetReportQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("reportQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRoomGameMode() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("roomGameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetRoomSize() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("roomSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRpcCallLimit() {
            static BNM::Field<int> _field = GetClass().GetField(O("rpcCallLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRpcErrorMax() {
            static BNM::Field<int> _field = GetClass().GetField(O("rpcErrorMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStringIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("stringIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetTargetActors() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("targetActors"));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetTempPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("tempPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTestAssault() {
            static BNM::Field<bool> _field = GetClass().GetField(O("testAssault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUserDecayTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("userDecayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::GorillaNot_RPCCallTracker*>*>* GetUserRPCCalls() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::GorillaNot_RPCCallTracker*>*>*> _field = GetClass().GetField(O("userRPCCalls"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSendReport_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_sendReport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuspiciousPlayerId_fs(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_suspiciousPlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuspiciousPlayerName_fs(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_suspiciousPlayerName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuspiciousReason_fs(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_suspiciousReason"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedPlayerList(::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("cachedPlayerList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCalls(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("calls"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCloseDirty(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("closeDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentMasterClient(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("currentMasterClient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHashTable(::ExitGames_Client_Photon::Hashtable* value) {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("hashTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::GorillaNot* value) {
            static BNM::Field<::GlobalNamespace::GorillaNot*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetLastCheck(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastReportChecked(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastReportChecked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastServerTimestamp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastServerTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogErrorCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("logErrorCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogErrorMax(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("logErrorMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowestActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lowestActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhotonHashTable(::ExitGames_Client_Photon::Hashtable* value) {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("m_photonHashTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPvSpamChecker(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CallLimiter*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CallLimiter*>*> _field = GetClass().GetField(O("m_pvSpamChecker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMReusableIntList(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("m_reusableIntList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutObj(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("outObj"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playerID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerNick(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playerNick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQueuedReports(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("queuedReports"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReportCheckCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("reportCheckCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReportedPlayers(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("reportedPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReportQueue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("reportQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomGameMode(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("roomGameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomSize(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("roomSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRpcCallLimit(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("rpcCallLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRpcErrorMax(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("rpcErrorMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStringIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("stringIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTargetActors(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("targetActors"));
            _field.Set(value);
        }
        void SetTempPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("tempPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestAssault(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("testAssault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUserDecayTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("userDecayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUserRPCCalls(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::GorillaNot_RPCCallTracker*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::GorillaNot_RPCCallTracker*>*>*> _field = GetClass().GetField(O("userRPCCalls"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CheckAndUpdateReportData(::GlobalNamespace::ReportInfo* newReport) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckAndUpdateReportData"), {"newReport"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newReport);
        }
        ::BNM::Coroutine::IEnumerator* CheckDirtyRoom() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("CheckDirtyRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CheckReports() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckReports"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CloseInvalidRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CloseInvalidRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DispatchReport() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DispatchReport"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* get_runner() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_runner"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_sendReport() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_sendReport"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_suspiciousPlayerId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_suspiciousPlayerId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_suspiciousPlayerName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_suspiciousPlayerName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_suspiciousReason() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_suspiciousReason"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GorillaNot_RPCCallTracker* GetRPCCallTracker(::BNM::Structures::Mono::String* userID, ::BNM::Structures::Mono::String* rpcFunction) {
            static BNM::Method<::GlobalNamespace::GorillaNot_RPCCallTracker*> _m = GetClass().GetMethod(O("GetRPCCallTracker"), {"userID", "rpcFunction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(userID, rpcFunction);
        }
        static void IncrementRPCCall(::Photon_Pun::PhotonMessageInfo info, ::BNM::Structures::Mono::String* callingMethod) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementRPCCall"), {"info", "callingMethod"});
            _m.Call(info, callingMethod);
        }
        static void IncrementRPCCall(::GlobalNamespace::PhotonMessageInfoWrapped infoWrapped, ::BNM::Structures::Mono::String* callingMethod) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementRPCCall"), {"infoWrapped", "callingMethod"});
            _m.Call(infoWrapped, callingMethod);
        }
        void IncrementRPCCallLocal(::GlobalNamespace::PhotonMessageInfoWrapped infoWrapped, ::BNM::Structures::Mono::String* rpcFunction) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementRPCCallLocal"), {"infoWrapped", "rpcFunction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(infoWrapped, rpcFunction);
        }
        bool IncrementRPCTracker(::GlobalNamespace::NetPlayer*& sender, ::BNM::Structures::Mono::String*& rpcFunction, int& callLimit) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IncrementRPCTracker"), {"sender", "rpcFunction", "callLimit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&sender, &rpcFunction, &callLimit);
        }
        bool IncrementRPCTracker(::Photon_Realtime::Player*& sender, ::BNM::Structures::Mono::String*& rpcFunction, int& callLimit) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IncrementRPCTracker"), {"sender", "rpcFunction", "callLimit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&sender, &rpcFunction, &callLimit);
        }
        bool IncrementRPCTracker(::BNM::Structures::Mono::String*& userId, ::BNM::Structures::Mono::String*& rpcFunction, int& callLimit) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IncrementRPCTracker"), {"userId", "rpcFunction", "callLimit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&userId, &rpcFunction, &callLimit);
        }
        bool IsInCustomMap() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInCustomMap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP2 = void*>
        void LogErrorCount(::BNM::Structures::Mono::String* logString, ::BNM::Structures::Mono::String* stackTrace, TP2 type) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogErrorCount"), {"logString", "stackTrace", "type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(logString, stackTrace, type);
        }
        int LowestActorNumber() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("LowestActorNumber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnApplicationPause(bool paused) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationPause"), {"paused"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(paused);
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
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer* newPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEnteredRoom"), {"newPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPlayer);
        }
        void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer* otherPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherPlayer);
        }
        ::BNM::Coroutine::IEnumerator* QuitDelay() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("QuitDelay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void RefreshRPCs() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshRPCs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendReport(::BNM::Structures::Mono::String* susReason, ::BNM::Structures::Mono::String* susId, ::BNM::Structures::Mono::String* susNick) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendReport"), {"susReason", "susId", "susNick"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(susReason, susId, susNick);
        }
        void SendReportImediately(::BNM::Structures::Mono::String* susReason, ::BNM::Structures::Mono::String* susId, ::BNM::Structures::Mono::String* susNick) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendReportImediately"), {"susReason", "susId", "susNick"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(susReason, susId, susNick);
        }
        void set_sendReport(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_sendReport"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_suspiciousPlayerId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_suspiciousPlayerId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_suspiciousPlayerName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_suspiciousPlayerName"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_suspiciousReason(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_suspiciousReason"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetToRoomCreatorIfHere() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetToRoomCreatorIfHere"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ShouldDisconnectFromRoom() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldDisconnectFromRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ShouldRoomBeClosed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldRoomBeClosed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ValidateRemoteVoiceLink(::Photon_Voice_Unity::RemoteVoiceLink* voiceLink) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateRemoteVoiceLink"), {"voiceLink"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(voiceLink);
        }
        bool ValidRoomName(bool customRoom) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidRoomName"), {"customRoom"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(customRoom);
        }
    };
}
