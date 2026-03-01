#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EAchievementDisplayAttribute.hpp"
#include "ELeaderboardDataRequest.hpp"
#include "ELeaderboardDataTimeRange.hpp"
#include "ELeaderboardDisplayType.hpp"
#include "ELeaderboardSortMethod.hpp"
#include "ELocale.hpp"

namespace Viveport_Internal {
    struct UserStats : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport.Internal", "UserStats");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int ClearAchievement(::BNM::Structures::Mono::String* pchName) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ClearAchievement"), {"pchName"});
            return _m.Call(pchName);
        }
        static int DownloadLeaderboardScores(::Viveport_Internal::StatusCallback* callback, ::BNM::Structures::Mono::String* pchLeaderboardName, ::Viveport_Internal::ELeaderboardDataRequest nDataRequest, ::Viveport_Internal::ELeaderboardDataTimeRange nTimeRange, int nRangeStart, int nRangeEnd) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("DownloadLeaderboardScores"), {"callback", "pchLeaderboardName", "nDataRequest", "nTimeRange", "nRangeStart", "nRangeEnd"});
            return _m.Call(callback, pchLeaderboardName, nDataRequest, nTimeRange, nRangeStart, nRangeEnd);
        }
        static int DownloadStats(::Viveport_Internal::StatusCallback* callback) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("DownloadStats"), {"callback"});
            return _m.Call(callback);
        }
        static bool GetAchievement(::BNM::Structures::Mono::String* pchName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetAchievement"), {"pchName"});
            return _m.Call(pchName);
        }
        static ::BNM::Structures::Mono::String* GetAchievementDisplayAttribute(::BNM::Structures::Mono::String* pchName, ::Viveport_Internal::EAchievementDisplayAttribute attr) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetAchievementDisplayAttribute"), {"pchName", "attr"});
            return _m.Call(pchName, attr);
        }
        static ::BNM::Structures::Mono::String* GetAchievementDisplayAttribute(::BNM::Structures::Mono::String* pchName, ::Viveport_Internal::EAchievementDisplayAttribute attr, ::Viveport_Internal::ELocale locale) {
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
        static ::Viveport_Internal::ELeaderboardDisplayType GetLeaderboardDisplayType() {
            static BNM::Method<::Viveport_Internal::ELeaderboardDisplayType> _m = GetClass().GetMethod(O("GetLeaderboardDisplayType"));
            return _m.Call();
        }
        static ::Viveport::Leaderboard* GetLeaderboardScore(int nIndex) {
            static BNM::Method<::Viveport::Leaderboard*> _m = GetClass().GetMethod(O("GetLeaderboardScore"), {"nIndex"});
            return _m.Call(nIndex);
        }
        static int GetLeaderboardScoreCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetLeaderboardScoreCount"));
            return _m.Call();
        }
        static ::Viveport_Internal::ELeaderboardSortMethod GetLeaderboardSortMethod() {
            static BNM::Method<::Viveport_Internal::ELeaderboardSortMethod> _m = GetClass().GetMethod(O("GetLeaderboardSortMethod"));
            return _m.Call();
        }
        static int GetStat(::BNM::Structures::Mono::String* pchName, int nData) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetStat"), {"pchName", "nData"});
            return _m.Call(pchName, nData);
        }
        static float GetStat(::BNM::Structures::Mono::String* pchName, float fData) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetStat"), {"pchName", "fData"});
            return _m.Call(pchName, fData);
        }
        static int IsReady(::Viveport_Internal::StatusCallback* callback) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("IsReady"), {"callback"});
            return _m.Call(callback);
        }
        static int SetAchievement(::BNM::Structures::Mono::String* pchName) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetAchievement"), {"pchName"});
            return _m.Call(pchName);
        }
        static int SetStat(::BNM::Structures::Mono::String* pchName, int nData) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetStat"), {"pchName", "nData"});
            return _m.Call(pchName, nData);
        }
        static int SetStat(::BNM::Structures::Mono::String* pchName, float fData) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetStat"), {"pchName", "fData"});
            return _m.Call(pchName, fData);
        }
        static int UploadLeaderboardScore(::Viveport_Internal::StatusCallback* callback, ::BNM::Structures::Mono::String* pchLeaderboardName, int nScores) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UploadLeaderboardScore"), {"callback", "pchLeaderboardName", "nScores"});
            return _m.Call(callback, pchLeaderboardName, nScores);
        }
        static int UploadStats(::Viveport_Internal::StatusCallback* callback) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UploadStats"), {"callback"});
            return _m.Call(callback);
        }
    };
}
