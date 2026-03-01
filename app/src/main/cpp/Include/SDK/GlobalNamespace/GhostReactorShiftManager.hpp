#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GhostReactorShiftManager_State.hpp"
#include "GREnemyCount.hpp"
#include "MonoBehaviourTick.hpp"
#include "ZoneClearReason.hpp"

namespace GlobalNamespace {
    struct GhostReactorShiftManager : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactorShiftManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* EVENT_GOOD_KD = "GRShiftGoodKD";
        bool GetLocalPlayerInside() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_LocalPlayerInside"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetShiftActive() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ShiftActive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetShiftId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ShiftId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        double GetShiftStartNetworkTime() {
            static BNM::Method<double> _method = GetClass().GetMethod(O("get_ShiftStartNetworkTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GhostReactorShiftManager_State GetShiftState() {
            static BNM::Method<::GlobalNamespace::GhostReactorShiftManager_State> _method = GetClass().GetMethod(O("get_ShiftState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetShiftState(::GlobalNamespace::GhostReactorShiftManager_State value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ShiftState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetShiftTotalEarned() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ShiftTotalEarned"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetTotalPlayTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_TotalPlayTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::AudioSource* GetAnnounceAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("announceAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetAnnounceBell() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("announceBell"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAnnounceBellAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("announceBellAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetAnnounceCompleteShift() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("announceCompleteShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetAnnounceFailShift() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("announceFailShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetAnnouncePrepareDrill() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("announcePrepareDrill"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetAnnouncePrepareShift() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("announcePrepareShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetAnnounceStartShift() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("announceStartShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetAnnounceTip() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("announceTip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAnomalyAlert() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("anomalyAlert"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAnomalyAlertCountdownTimeToStartPlayingInMinutes() {
            static BNM::Field<float> _field = GetClass().GetField(O("anomalyAlertCountdownTimeToStartPlayingInMinutes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAnomalyLoop1() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("anomalyLoop1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAnomalyLoop2() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("anomalyLoop2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAnomalyLoop3() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("anomalyLoop3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAuthorizedToDelveDeeper() {
            static BNM::Field<bool> _field = GetClass().GetField(O("authorizedToDelveDeeper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBIsStartingFloorAuthorityOnly() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bIsStartingFloorAuthorityOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCachedStringBuilder() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("cachedStringBuilder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCoresRequiredToDelveDeeper() {
            static BNM::Field<int> _field = GetClass().GetField(O("coresRequiredToDelveDeeper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugFastForwarding() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugFastForwarding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDebugFastForwardRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("debugFastForwardRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorShiftDepthDisplay* GetDepthDisplay() {
            static BNM::Field<::GlobalNamespace::GhostReactorShiftDepthDisplay*> _field = GetClass().GetField(O("depthDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDrillDuration() {
            static BNM::Field<int> _field = GetClass().GetField(O("drillDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRMetalEnergyGate* GetFrontGate() {
            static BNM::Field<::GlobalNamespace::GRMetalEnergyGate*> _field = GetClass().GetField(O("frontGate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetGameIdGuid() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("gameIdGuid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetGateBlockerTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gateBlockerTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetGatePlaneTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gatePlaneTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorManager* GetGrManager() {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("grManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsPlayingLogoAnimation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPlayingLogoAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsRoomClosed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRoomClosed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyCount>* GetKillsRequiredToDelveDeeper() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyCount>*> _field = GetClass().GetField(O("killsRequiredToDelveDeeper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastLeaderboardRefreshTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastLeaderboardRefreshTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastReactorDisplayUpdate() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastReactorDisplayUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastReactorLogoAnimationTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastReactorLogoAnimationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastReactorLogoAnimFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastReactorLogoAnimFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLeaderboardDisplay() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("leaderboardDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLeaderboardUpdateFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("leaderboardUpdateFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLocalPlayerInside_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("localPlayerInside"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLocalPlayerOverlapping() {
            static BNM::Field<bool> _field = GetClass().GetField(O("localPlayerOverlapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxPlayerDeaths() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxPlayerDeaths"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetNextRefreshLeaderboardSafety() {
            static BNM::Field<bool> _field = GetClass().GetField(O("nextRefreshLeaderboardSafety"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetPlayerTeleportTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("playerTeleportTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPostShiftDuration() {
            static BNM::Field<int> _field = GetClass().GetField(O("postShiftDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPreShiftDuration() {
            static BNM::Field<int> _field = GetClass().GetField(O("preShiftDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPreShiftDurationFirstArrive() {
            static BNM::Field<int> _field = GetClass().GetField(O("preShiftDurationFirstArrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPrevCountDownTotal() {
            static BNM::Field<float> _field = GetClass().GetField(O("prevCountDownTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetReactorTextMain() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("reactorTextMain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRingClosingDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("ringClosingDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRingClosingMaxRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("ringClosingMaxRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRingClosingMinRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("ringClosingMinRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRingTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("ringTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRoomCloseTimeSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("roomCloseTimeSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSentientCoresRequiredToDelveDeeper() {
            static BNM::Field<int> _field = GetClass().GetField(O("sentientCoresRequiredToDelveDeeper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShiftDurationMinutes() {
            static BNM::Field<float> _field = GetClass().GetField(O("shiftDurationMinutes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetShiftEndNetworkTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("shiftEndNetworkTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetShiftJugmentText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("shiftJugmentText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShiftJustStarted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shiftJustStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetShiftLeaderboardEfficiency() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("shiftLeaderboardEfficiency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetShiftLeaderboardSafety() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("shiftLeaderboardSafety"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShiftRewardCoresForMothership() {
            static BNM::Field<int> _field = GetClass().GetField(O("shiftRewardCoresForMothership"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShiftRewardCredits() {
            static BNM::Field<int> _field = GetClass().GetField(O("shiftRewardCredits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShiftSanityMaximumEarned() {
            static BNM::Field<int> _field = GetClass().GetField(O("shiftSanityMaximumEarned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShiftStarted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shiftStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetShiftStartNetworkTime_f() {
            static BNM::Field<double> _field = GetClass().GetField(O("shiftStartNetworkTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRShiftStat* GetShiftStats() {
            static BNM::Field<::GlobalNamespace::GRShiftStat*> _field = GetClass().GetField(O("shiftStats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetShiftStatsText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("shiftStatsText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetShiftTimerText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("shiftTimerText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShiftTotalEarned_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("shiftTotalEarned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetStartShiftButton() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("startShiftButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetStateStartTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTotalPlayTime_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("totalPlayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetWarningAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("warningAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetWarningClipPlayTimes() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("warningClipPlayTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorShiftManager_WarningPres*>* GetWarnings() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorShiftManager_WarningPres*>*> _field = GetClass().GetField(O("warnings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWrongStumpGoo() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("wrongStumpGoo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnnounceAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("announceAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnnounceBell(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("announceBell"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnnounceBellAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("announceBellAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnnounceCompleteShift(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("announceCompleteShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnnounceFailShift(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("announceFailShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnnouncePrepareDrill(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("announcePrepareDrill"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnnouncePrepareShift(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("announcePrepareShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnnounceStartShift(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("announceStartShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnnounceTip(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("announceTip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnomalyAlert(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("anomalyAlert"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnomalyAlertCountdownTimeToStartPlayingInMinutes(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("anomalyAlertCountdownTimeToStartPlayingInMinutes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnomalyLoop1(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("anomalyLoop1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnomalyLoop2(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("anomalyLoop2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnomalyLoop3(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("anomalyLoop3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAuthorizedToDelveDeeper(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("authorizedToDelveDeeper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBIsStartingFloorAuthorityOnly(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bIsStartingFloorAuthorityOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedStringBuilder(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("cachedStringBuilder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoresRequiredToDelveDeeper(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("coresRequiredToDelveDeeper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugFastForwarding(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugFastForwarding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugFastForwardRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("debugFastForwardRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepthDisplay(::GlobalNamespace::GhostReactorShiftDepthDisplay* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorShiftDepthDisplay*> _field = GetClass().GetField(O("depthDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrillDuration(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("drillDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrontGate(::GlobalNamespace::GRMetalEnergyGate* value) {
            static BNM::Field<::GlobalNamespace::GRMetalEnergyGate*> _field = GetClass().GetField(O("frontGate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameIdGuid(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("gameIdGuid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGateBlockerTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gateBlockerTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGatePlaneTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gatePlaneTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrManager(::GlobalNamespace::GhostReactorManager* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("grManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsPlayingLogoAnimation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPlayingLogoAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsRoomClosed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRoomClosed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKillsRequiredToDelveDeeper(::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyCount>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyCount>*> _field = GetClass().GetField(O("killsRequiredToDelveDeeper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastLeaderboardRefreshTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastLeaderboardRefreshTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastReactorDisplayUpdate(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastReactorDisplayUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastReactorLogoAnimationTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastReactorLogoAnimationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastReactorLogoAnimFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastReactorLogoAnimFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeaderboardDisplay(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("leaderboardDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeaderboardUpdateFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("leaderboardUpdateFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPlayerInside(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("localPlayerInside"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPlayerOverlapping(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("localPlayerOverlapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxPlayerDeaths(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxPlayerDeaths"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextRefreshLeaderboardSafety(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("nextRefreshLeaderboardSafety"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerTeleportTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("playerTeleportTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPostShiftDuration(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("postShiftDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreShiftDuration(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("preShiftDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreShiftDurationFirstArrive(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("preShiftDurationFirstArrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevCountDownTotal(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("prevCountDownTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactorTextMain(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("reactorTextMain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRingClosingDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ringClosingDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRingClosingMaxRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ringClosingMaxRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRingClosingMinRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ringClosingMinRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRingTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("ringTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomCloseTimeSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("roomCloseTimeSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSentientCoresRequiredToDelveDeeper(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sentientCoresRequiredToDelveDeeper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftDurationMinutes(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shiftDurationMinutes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftEndNetworkTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("shiftEndNetworkTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftJugmentText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("shiftJugmentText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftJustStarted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shiftJustStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftLeaderboardEfficiency(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("shiftLeaderboardEfficiency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftLeaderboardSafety(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("shiftLeaderboardSafety"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftRewardCoresForMothership(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shiftRewardCoresForMothership"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftRewardCredits(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shiftRewardCredits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftSanityMaximumEarned(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shiftSanityMaximumEarned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftStarted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shiftStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftStartNetworkTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("shiftStartNetworkTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftStats(::GlobalNamespace::GRShiftStat* value) {
            static BNM::Field<::GlobalNamespace::GRShiftStat*> _field = GetClass().GetField(O("shiftStats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftStatsText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("shiftStatsText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftTimerText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("shiftTimerText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftTotalEarned(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shiftTotalEarned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartShiftButton(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("startShiftButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateStartTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalPlayTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("totalPlayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWarningAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("warningAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWarningClipPlayTimes(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("warningClipPlayTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWarnings(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorShiftManager_WarningPres*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorShiftManager_WarningPres*>*> _field = GetClass().GetField(O("warnings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWrongStumpGoo(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("wrongStumpGoo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AuthorityUpdate(float countDownTotal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthorityUpdate"), {"countDownTotal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(countDownTotal);
        }
        void CalculatePlayerPercentages() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalculatePlayerPercentages"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CalculateShiftTotal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalculateShiftTotal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearEntities() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearEntities"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EndShift() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndShift"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_LocalPlayerInside() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_LocalPlayerInside"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ShiftActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ShiftActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_ShiftId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ShiftId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        double get_ShiftStartNetworkTime() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("get_ShiftStartNetworkTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GhostReactorShiftManager_State get_ShiftState() {
            static BNM::Method<::GlobalNamespace::GhostReactorShiftManager_State> _m = GetClass().GetMethod(O("get_ShiftState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ShiftTotalEarned() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ShiftTotalEarned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_TotalPlayTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_TotalPlayTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetDrillingDuration() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetDrillingDuration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetPostShiftDuration_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPostShiftDuration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetPreparingToDrillDuration() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPreparingToDrillDuration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetPreShiftDuration_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPreShiftDuration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetPreShiftDurationFirstArrive_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPreShiftDurationFirstArrive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GhostReactorShiftManager_State GetState() {
            static BNM::Method<::GlobalNamespace::GhostReactorShiftManager_State> _m = GetClass().GetMethod(O("GetState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Init(::GlobalNamespace::GhostReactorManager* grManager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"grManager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grManager);
        }
        bool IsSoaking() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSoaking"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnButtonDEBUGDelveDeeper() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonDEBUGDelveDeeper"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonDEBUGDelveShallower() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonDEBUGDelveShallower"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonDEBUGResetDepth() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonDEBUGResetDepth"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonDelveDeeper() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonDelveDeeper"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnShiftEnded(double shiftEndTime, bool isShiftActuallyEnding, ::GlobalNamespace::ZoneClearReason zoneClearReason) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnShiftEnded"), {"shiftEndTime", "isShiftActuallyEnding", "zoneClearReason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shiftEndTime, isShiftActuallyEnding, zoneClearReason);
        }
        void OnShiftStarted(::BNM::Structures::Mono::String* gameId, double shiftStartTime, bool wasPlayerInAtStart, bool isFirstShift) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnShiftStarted"), {"gameId", "shiftStartTime", "wasPlayerInAtStart", "isFirstShift"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameId, shiftStartTime, wasPlayerInAtStart, isFirstShift);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void RefreshDepthDisplay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshDepthDisplay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshShiftLeaderboard() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshShiftLeaderboard"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshShiftLeaderboard_Efficiency() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshShiftLeaderboard_Efficiency"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshShiftLeaderboard_Safety() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshShiftLeaderboard_Safety"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshShiftStatsDisplay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshShiftStatsDisplay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshShiftTimer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshShiftTimer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestShiftStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestShiftStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestState(::GlobalNamespace::GhostReactorShiftManager_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void ResetJoinTimes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetJoinTimes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetJudgment() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetJudgment"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RevealJudgment(int evaluation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RevealJudgment"), {"evaluation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(evaluation);
        }
        void set_ShiftState(::GlobalNamespace::GhostReactorShiftManager_State value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ShiftState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetShiftId(::BNM::Structures::Mono::String* shiftId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetShiftId"), {"shiftId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shiftId);
        }
        void SetState(::GlobalNamespace::GhostReactorShiftManager_State newState, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, force);
        }
        void SharedUpdate(float countDownTotal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SharedUpdate"), {"countDownTotal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(countDownTotal);
        }
        void StartShiftButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartShiftButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TeleportLocalPlayerIfOutOfBounds() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TeleportLocalPlayerIfOutOfBounds"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateLogoAnimations(::BNM::Structures::Mono::List<::TMP_Text*>* frames) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateLogoAnimations"), {"frames"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(frames);
        }
        void UpdateReactorDisplayMainShared(float countDownTotal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateReactorDisplayMainShared"), {"countDownTotal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(countDownTotal);
        }
        void UpdateStateAuthority() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStateAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateStateShared() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStateShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
