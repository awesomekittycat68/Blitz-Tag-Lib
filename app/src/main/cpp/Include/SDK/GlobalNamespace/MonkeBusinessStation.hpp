#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/MonoBehaviourPunCallbacks.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct MonkeBusinessStation : ::Photon_Pun::MonoBehaviourPunCallbacks {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MonkeBusinessStation");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("_audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetBadgeMount() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_badgeMount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetClaimablePointsBadgePosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_claimablePointsBadgePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetClaimablePointsObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_claimablePointsObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetClaimButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("_claimButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetClaimDelayPerPoint() {
            static BNM::Field<float> _field = GetClass().GetField(O("_claimDelayPerPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetClaimPointDefaultSFX() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("_claimPointDefaultSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetClaimPointFinalSFX() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("_claimPointFinalSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObjectScheduling::CountdownText* GetDailyCountdown() {
            static BNM::Field<::GameObjectScheduling::CountdownText*> _field = GetClass().GetField(O("_dailyCountdown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::RectTransform* GetDailyQuestContainer() {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("_dailyQuestContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasBuiltQuestList() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasBuiltQuestList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsUpdatingPointCount() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isUpdatingPointCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastQuestChange() {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastQuestChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastQuestDailyID() {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastQuestDailyID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetNoClaimablePointsBadgePosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_noClaimablePointsBadgePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNoClaimablePointsObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_noClaimablePointsObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::RectTransform* GetQuestContainerParent() {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("_questContainerParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::QuestDisplay* GetQuestDisplayPrefab() {
            static BNM::Field<::GlobalNamespace::QuestDisplay*> _field = GetClass().GetField(O("_questDisplayPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RotatingQuestsManager* GetQuestManager() {
            static BNM::Field<::GlobalNamespace::RotatingQuestsManager*> _field = GetClass().GetField(O("_questManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::QuestDisplay*>* GetQuests() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::QuestDisplay*>*> _field = GetClass().GetField(O("_quests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTempTotalPoints() {
            static BNM::Field<int> _field = GetClass().GetField(O("_tempTotalPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTempUnclaimedPoints() {
            static BNM::Field<int> _field = GetClass().GetField(O("_tempUnclaimedPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetUnclaimedPoints() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_unclaimedPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObjectScheduling::CountdownText* GetWeeklyCountdown() {
            static BNM::Field<::GameObjectScheduling::CountdownText*> _field = GetClass().GetField(O("_weeklyCountdown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ProgressDisplay* GetWeeklyProgress() {
            static BNM::Field<::GlobalNamespace::ProgressDisplay*> _field = GetClass().GetField(O("_weeklyProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::RectTransform* GetWeeklyQuestContainer() {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("_weeklyQuestContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::BNM::IL2CPP::Il2CppObject*>* GetPerPlayerRedemptionSequence() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("perPlayerRedemptionSequence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("_audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBadgeMount(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_badgeMount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClaimablePointsBadgePosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_claimablePointsBadgePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClaimablePointsObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_claimablePointsObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClaimButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("_claimButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClaimDelayPerPoint(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_claimDelayPerPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClaimPointDefaultSFX(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("_claimPointDefaultSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClaimPointFinalSFX(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("_claimPointFinalSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDailyCountdown(::GameObjectScheduling::CountdownText* value) {
            static BNM::Field<::GameObjectScheduling::CountdownText*> _field = GetClass().GetField(O("_dailyCountdown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDailyQuestContainer(::RectTransform* value) {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("_dailyQuestContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasBuiltQuestList(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasBuiltQuestList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsUpdatingPointCount(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isUpdatingPointCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastQuestChange(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastQuestChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastQuestDailyID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastQuestDailyID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoClaimablePointsBadgePosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_noClaimablePointsBadgePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoClaimablePointsObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_noClaimablePointsObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestContainerParent(::RectTransform* value) {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("_questContainerParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestDisplayPrefab(::GlobalNamespace::QuestDisplay* value) {
            static BNM::Field<::GlobalNamespace::QuestDisplay*> _field = GetClass().GetField(O("_questDisplayPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestManager(::GlobalNamespace::RotatingQuestsManager* value) {
            static BNM::Field<::GlobalNamespace::RotatingQuestsManager*> _field = GetClass().GetField(O("_questManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuests(::BNM::Structures::Mono::List<::GlobalNamespace::QuestDisplay*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::QuestDisplay*>*> _field = GetClass().GetField(O("_quests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempTotalPoints(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_tempTotalPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempUnclaimedPoints(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_tempUnclaimedPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnclaimedPoints(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_unclaimedPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeeklyCountdown(::GameObjectScheduling::CountdownText* value) {
            static BNM::Field<::GameObjectScheduling::CountdownText*> _field = GetClass().GetField(O("_weeklyCountdown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeeklyProgress(::GlobalNamespace::ProgressDisplay* value) {
            static BNM::Field<::GlobalNamespace::ProgressDisplay*> _field = GetClass().GetField(O("_weeklyProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeeklyQuestContainer(::RectTransform* value) {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("_weeklyQuestContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerPlayerRedemptionSequence(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("perPlayerRedemptionSequence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void BroadcastRedeemQuestPoints(int redeemedPointCount, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BroadcastRedeemQuestPoints"), {"redeemedPointCount", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(redeemedPointCount, info);
        }
        void BuildQuestList() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildQuestList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DestroyQuestList() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyQuestList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FindQuestManager() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FindQuestManager"));
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
        void OnProgress() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProgress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnQuestSelectionChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnQuestSelectionChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* PerformPointRedemptionSequence() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("PerformPointRedemptionSequence"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* PerformRemotePointRedemptionSequence(::GlobalNamespace::NetPlayer* player, int redeemedPointCount) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("PerformRemotePointRedemptionSequence"), {"player", "redeemedPointCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, redeemedPointCount);
        }
        void RedeemProgress() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RedeemProgress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateCountdownTimers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCountdownTimers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateProgressDisplays() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateProgressDisplays"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateQuestStatus() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateQuestStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
