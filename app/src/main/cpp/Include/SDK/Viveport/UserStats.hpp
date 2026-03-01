#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Locale.hpp"
#include "UserStats_AchievementDisplayAttribute.hpp"
#include "UserStats_LeaderBoardDiaplayType.hpp"
#include "UserStats_LeaderBoardRequestType.hpp"
#include "UserStats_LeaderBoardSortMethod.hpp"
#include "UserStats_LeaderBoardTimeRange.hpp"

namespace Viveport {
    struct UserStats : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "UserStats");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Viveport_Internal::StatusCallback* GetDownloadLeaderboardScoresIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("downloadLeaderboardScoresIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::StatusCallback* GetDownloadStatsIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("downloadStatsIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::StatusCallback* GetIsReadyIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("isReadyIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::StatusCallback* GetUploadLeaderboardScoreIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("uploadLeaderboardScoreIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::StatusCallback* GetUploadStatsIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("uploadStatsIl2cppCallback"));
            return _field.Get();
        }
        static void SetDownloadLeaderboardScoresIl2cppCallback(::Viveport_Internal::StatusCallback* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("downloadLeaderboardScoresIl2cppCallback"));
            _field.Set(value);
        }
        static void SetDownloadStatsIl2cppCallback(::Viveport_Internal::StatusCallback* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("downloadStatsIl2cppCallback"));
            _field.Set(value);
        }
        static void SetIsReadyIl2cppCallback(::Viveport_Internal::StatusCallback* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("isReadyIl2cppCallback"));
            _field.Set(value);
        }
        static void SetUploadLeaderboardScoreIl2cppCallback(::Viveport_Internal::StatusCallback* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("uploadLeaderboardScoreIl2cppCallback"));
            _field.Set(value);
        }
        static void SetUploadStatsIl2cppCallback(::Viveport_Internal::StatusCallback* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("uploadStatsIl2cppCallback"));
            _field.Set(value);
        }
        static int ClearAchievement(::BNM::Structures::Mono::String* pchName) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ClearAchievement"), {"pchName"});
            return _m.Call(pchName);
        }
        static int DownloadLeaderboardScores(::Viveport::StatusCallback* callback, ::BNM::Structures::Mono::String* pchLeaderboardName, ::Viveport::UserStats_LeaderBoardRequestType eLeaderboardDataRequest, ::Viveport::UserStats_LeaderBoardTimeRange eLeaderboardDataTimeRange, int nRangeStart, int nRangeEnd) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("DownloadLeaderboardScores"), {"callback", "pchLeaderboardName", "eLeaderboardDataRequest", "eLeaderboardDataTimeRange", "nRangeStart", "nRangeEnd"});
            return _m.Call(callback, pchLeaderboardName, eLeaderboardDataRequest, eLeaderboardDataTimeRange, nRangeStart, nRangeEnd);
        }
        static void DownloadLeaderboardScoresIl2cppCallback(int errorCode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DownloadLeaderboardScoresIl2cppCallback"), {"errorCode"});
            _m.Call(errorCode);
        }
        static int DownloadStats(::Viveport::StatusCallback* callback) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("DownloadStats"), {"callback"});
            return _m.Call(callback);
        }
        static void DownloadStatsIl2cppCallback(int errorCode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DownloadStatsIl2cppCallback"), {"errorCode"});
            _m.Call(errorCode);
        }
        static bool GetAchievement(::BNM::Structures::Mono::String* pchName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetAchievement"), {"pchName"});
            return _m.Call(pchName);
        }
        static ::BNM::Structures::Mono::String* GetAchievementDisplayAttribute(::BNM::Structures::Mono::String* pchName, ::Viveport::UserStats_AchievementDisplayAttribute attr) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetAchievementDisplayAttribute"), {"pchName", "attr"});
            return _m.Call(pchName, attr);
        }
        static ::BNM::Structures::Mono::String* GetAchievementDisplayAttribute(::BNM::Structures::Mono::String* pchName, ::Viveport::UserStats_AchievementDisplayAttribute attr, ::Viveport::Locale locale) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetAchievementDisplayAttribute"), {"pchName", "attr", "locale"});
            return _m.Call(pchName, attr, locale);
        }
        static ::BNM::Structures::Mono::String* GetAchievementIcon(::BNM::Structures::Mono::String* pchName) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetAchievementIcon"), {"pchName"});
            return _m.Call(pchName);
        }
        static int GetAchievementUnlockTime(::BNM::Structures::Mono::String* pchName) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetAchievementUnlockTime"), {"pchName"});
            return _m.Call(pchName);
        }
        static ::Viveport::UserStats_LeaderBoardDiaplayType GetLeaderboardDisplayType() {
            static BNM::Method<::Viveport::UserStats_LeaderBoardDiaplayType> _m = GetClass().GetMethod(O("GetLeaderboardDisplayType"));
            return _m.Call();
        }
        static ::Viveport::Leaderboard* GetLeaderboardScore(int index) {
            static BNM::Method<::Viveport::Leaderboard*> _m = GetClass().GetMethod(O("GetLeaderboardScore"), {"index"});
            return _m.Call(index);
        }
        static int GetLeaderboardScoreCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetLeaderboardScoreCount"));
            return _m.Call();
        }
        static ::Viveport::UserStats_LeaderBoardSortMethod GetLeaderboardSortMethod() {
            static BNM::Method<::Viveport::UserStats_LeaderBoardSortMethod> _m = GetClass().GetMethod(O("GetLeaderboardSortMethod"));
            return _m.Call();
        }
        static int GetStat(::BNM::Structures::Mono::String* name, int defaultValue) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetStat"), {"name", "defaultValue"});
            return _m.Call(name, defaultValue);
        }
        static float GetStat(::BNM::Structures::Mono::String* name, float defaultValue) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetStat"), {"name", "defaultValue"});
            return _m.Call(name, defaultValue);
        }
        static int IsReady(::Viveport::StatusCallback* callback) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("IsReady"), {"callback"});
            return _m.Call(callback);
        }
        static void IsReadyIl2cppCallback(int errorCode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IsReadyIl2cppCallback"), {"errorCode"});
            _m.Call(errorCode);
        }
        static int SetAchievement(::BNM::Structures::Mono::String* pchName) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetAchievement"), {"pchName"});
            return _m.Call(pchName);
        }
        static void SetStat(::BNM::Structures::Mono::String* name, int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStat"), {"name", "value"});
            _m.Call(name, value);
        }
        static void SetStat(::BNM::Structures::Mono::String* name, float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStat"), {"name", "value"});
            _m.Call(name, value);
        }
        static int UploadLeaderboardScore(::Viveport::StatusCallback* callback, ::BNM::Structures::Mono::String* pchLeaderboardName, int nScore) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UploadLeaderboardScore"), {"callback", "pchLeaderboardName", "nScore"});
            return _m.Call(callback, pchLeaderboardName, nScore);
        }
        static void UploadLeaderboardScoreIl2cppCallback(int errorCode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UploadLeaderboardScoreIl2cppCallback"), {"errorCode"});
            _m.Call(errorCode);
        }
        static int UploadStats(::Viveport::StatusCallback* callback) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UploadStats"), {"callback"});
            return _m.Call(callback);
        }
        static void UploadStatsIl2cppCallback(int errorCode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UploadStatsIl2cppCallback"), {"errorCode"});
            _m.Call(errorCode);
        }
    };
}
