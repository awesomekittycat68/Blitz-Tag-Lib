#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaScoreboardTotalUpdater_PlayerReports.hpp"

namespace GlobalNamespace {
    struct GorillaScoreboardTotalUpdater : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaScoreboardTotalUpdater");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GorillaScoreboardTotalUpdater* GetInstance() {
            static BNM::Field<::GlobalNamespace::GorillaScoreboardTotalUpdater*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr float maxHD = 0.5f;
        static constexpr float gracePeriod = 30.0f;
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaPlayerScoreboardLine*>* GetAllScoreboardLines() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaPlayerScoreboardLine*>*> _field = GetClass().GetField(O("allScoreboardLines"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaScoreBoard*>* GetAllScoreboards() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaScoreBoard*>*> _field = GetClass().GetField(O("allScoreboards"));
            return _field.Get();
        }
        static int GetBoardIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("boardIndex"));
            return _field.Get();
        }
        bool GetForOverlay() {
            static BNM::Field<bool> _field = GetClass().GetField(O("forOverlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GlobalNamespace::GorillaScoreboardTotalUpdater* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GorillaScoreboardTotalUpdater*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        bool GetJoinedRoom() {
            static BNM::Field<bool> _field = GetClass().GetField(O("joinedRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetLineIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lineIndex"));
            return _field.Get();
        }
        static int GetLinesPerFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("linesPerFrame"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::GorillaTag::ReportMuteTimer*>* GetMReportMuteTimerDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GorillaTag::ReportMuteTimer*>*> _field = GetClass().GetField(O("m_reportMuteTimerDict"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOfflineTextErrorString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("offlineTextErrorString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* GetPlayersInRoom() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("playersInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>* GetReportDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>*> _field = GetClass().GetField(O("reportDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasGameManagerNull() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasGameManagerNull"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetAllScoreboardLines(::BNM::Structures::Mono::List<::GlobalNamespace::GorillaPlayerScoreboardLine*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaPlayerScoreboardLine*>*> _field = GetClass().GetField(O("allScoreboardLines"));
            _field.Set(value);
        }
        static void SetAllScoreboards(::BNM::Structures::Mono::List<::GlobalNamespace::GorillaScoreBoard*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaScoreBoard*>*> _field = GetClass().GetField(O("allScoreboards"));
            _field.Set(value);
        }
        static void SetBoardIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("boardIndex"));
            _field.Set(value);
        }
        void SetForOverlay(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("forOverlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::GorillaScoreboardTotalUpdater* value) {
            static BNM::Field<::GlobalNamespace::GorillaScoreboardTotalUpdater*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetJoinedRoom(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("joinedRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLineIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lineIndex"));
            _field.Set(value);
        }
        static void SetLinesPerFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("linesPerFrame"));
            _field.Set(value);
        }
        void SetOfflineTextErrorString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("offlineTextErrorString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayersInRoom(::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("playersInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReportDict(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>*> _field = GetClass().GetField(O("reportDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasGameManagerNull(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasGameManagerNull"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearOfflineFailureText() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearOfflineFailureText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CreateManager() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateManager"));
            _m.Call();
        }
        void JoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JoinedRoom"));
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
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer* netPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEnteredRoom"), {"netPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netPlayer);
        }
        void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer* netPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"netPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netPlayer);
        }
        static void RegisterScoreboard(::GlobalNamespace::GorillaScoreBoard* sB) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterScoreboard"), {"sB"});
            _m.Call(sB);
        }
        static void RegisterSL(::GlobalNamespace::GorillaPlayerScoreboardLine* sL) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterSL"), {"sL"});
            _m.Call(sL);
        }
        static void ReportMute(::GlobalNamespace::NetPlayer* player, int muted) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportMute"), {"player", "muted"});
            _m.Call(player, muted);
        }
        static void SetInstance_1(::GlobalNamespace::GorillaScoreboardTotalUpdater* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInstance"), {"manager"});
            _m.Call(manager);
        }
        void SetOfflineFailureText(::BNM::Structures::Mono::String* failureText) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetOfflineFailureText"), {"failureText"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(failureText);
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
        static void UnregisterScoreboard(::GlobalNamespace::GorillaScoreBoard* sB) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterScoreboard"), {"sB"});
            _m.Call(sB);
        }
        static void UnregisterSL(::GlobalNamespace::GorillaPlayerScoreboardLine* sL) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterSL"), {"sL"});
            _m.Call(sL);
        }
        void UpdateActiveScoreboards() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateActiveScoreboards"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateLineState(::GlobalNamespace::GorillaPlayerScoreboardLine* line) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateLineState"), {"line"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(line);
        }
        void UpdateScoreboard(::GlobalNamespace::GorillaScoreBoard* sB) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateScoreboard"), {"sB"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sB);
        }
    };
}
