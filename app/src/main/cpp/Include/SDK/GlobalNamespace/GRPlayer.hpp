#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityId.hpp"
#include "GRPlayer_DamageOverlayValues.hpp"
#include "GRPlayer_GRPlayerState.hpp"
#include "GRPlayer_ProgressionData.hpp"
#include "GRPlayer_SynchronizedSessionStat.hpp"
#include "MonoBehaviourTick.hpp"
#include "ZoneClearReason.hpp"

namespace GlobalNamespace {
    struct GRPlayer : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRPlayer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MAX_CURRENCY = 500;
        ::GlobalNamespace::GRPlayer_ProgressionData GetCurrentProgression() {
            static BNM::Method<::GlobalNamespace::GRPlayer_ProgressionData> _method = GetClass().GetMethod(O("get_CurrentProgression"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentProgression(::GlobalNamespace::GRPlayer_ProgressionData value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentProgression"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetHp() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Hp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetInStealthMode() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InStealthMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetJuice() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Juice"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetLastShiftCut() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LastShiftCut"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLastShiftCut(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LastShiftCut"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetMaxHp() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_MaxHp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetMaxShieldHp() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_MaxShieldHp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::VRRig* GetMyRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _method = GetClass().GetMethod(O("get_MyRig"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetShieldFlags() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ShieldFlags"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetShieldHp() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ShieldHp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetShiftCreditCapIncreases() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ShiftCreditCapIncreases"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetShiftCreditCapIncreases(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ShiftCreditCapIncreases"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetShiftCreditCapIncreasesMax() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ShiftCreditCapIncreasesMax"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetShiftCreditCapIncreasesMax(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ShiftCreditCapIncreasesMax"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetShiftCredits() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ShiftCredits"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetShiftPlayTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_ShiftPlayTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetShiftPlayTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ShiftPlayTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GRPlayer_GRPlayerState GetState() {
            static BNM::Method<::GlobalNamespace::GRPlayer_GRPlayerState> _method = GetClass().GetMethod(O("get_State"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::CallLimiter* GetApplyEnemyHitLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("applyEnemyHitLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetAttachEnemy() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("attachEnemy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBadge* GetBadge() {
            static BNM::Field<::GlobalNamespace::GRBadge*> _field = GetClass().GetField(O("badge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetBadgeBodyAnchor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("badgeBodyAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetBadgeBodyStringAttach() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("badgeBodyStringAttach"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetBodyCenter() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("bodyCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCaughtByAnomaly() {
            static BNM::Field<bool> _field = GetClass().GetField(O("caughtByAnomaly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCoresCollectedByGroup() {
            static BNM::Field<int> _field = GetClass().GetField(O("coresCollectedByGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCoresCollectedByPlayer() {
            static BNM::Field<int> _field = GetClass().GetField(O("coresCollectedByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCoresSpentByGroup() {
            static BNM::Field<int> _field = GetClass().GetField(O("coresSpentByGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCoresSpentByPlayer() {
            static BNM::Field<int> _field = GetClass().GetField(O("coresSpentByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentHealthVisualValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentHealthVisualValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRPlayer_ProgressionData GetCurrentProgression_f() {
            static BNM::Field<::GlobalNamespace::GRPlayer_ProgressionData> _field = GetClass().GetField(O("currentProgression"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRPlayerDamageEffects* GetDamageEffects() {
            static BNM::Field<::GlobalNamespace::GRPlayerDamageEffects*> _field = GetClass().GetField(O("damageEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDamageOverlayMaxHp() {
            static BNM::Field<int> _field = GetClass().GetField(O("damageOverlayMaxHp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRPlayer_DamageOverlayValues>* GetDamageOverlayValues() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRPlayer_DamageOverlayValues>*> _field = GetClass().GetField(O("damageOverlayValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetDeathAmbientLightColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("deathAmbientLightColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDeaths() {
            static BNM::Field<int> _field = GetClass().GetField(O("deaths"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetDeathTintColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("deathTintColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDropPodChasisLevel() {
            static BNM::Field<int> _field = GetClass().GetField(O("dropPodChasisLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDropPodLevel() {
            static BNM::Field<int> _field = GetClass().GetField(O("dropPodLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetFireShieldLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("fireShieldLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFreezeDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("freezeDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetGameId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("gameId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GamePlayer* GetGamePlayer() {
            static BNM::Field<::GlobalNamespace::GamePlayer*> _field = GetClass().GetField(O("gamePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGameStartTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("gameStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGatesUnlocked() {
            static BNM::Field<int> _field = GetClass().GetField(O("gatesUnlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasPulledEquipment() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPulledEquipment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHp_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("hp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInStealthMode_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inStealthMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsEmployee() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEmployee"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsFirstShift() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isFirstShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetItemsHeldThisShift() {
            static BNM::Field<void*> _field = GetClass().GetField(O("itemsHeldThisShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetItemsPurchased() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("itemsPurchased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* GetItemTypesHeldThisShift() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("itemTypesHeldThisShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastLeftWithBadgeAttachedTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastLeftWithBadgeAttachedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastPlayerPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPlayerPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastShiftCut_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastShiftCut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetLevelsUnlocked() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("levelsUnlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLowHealthTintPropertyId() {
            static BNM::Field<int> _field = GetClass().GetField(O("lowHealthTintPropertyId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLowHealthVisualPropertyBlock() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lowHealthVisualPropertyBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLowHeathVisualCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lowHeathVisualCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxHp_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxHp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxNumberOfPlayersIngame() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxNumberOfPlayersIngame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxNumberOfPlayersInShift() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxNumberOfPlayersInShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxShieldHp_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxShieldHp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMothershipId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mothershipId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumShiftsPlayed() {
            static BNM::Field<int> _field = GetClass().GetField(O("numShiftsPlayed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetPlayerDamageAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("playerDamageAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetPlayerDamageEffect() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("playerDamageEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayerDamageOffsetDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("playerDamageOffsetDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetPlayerDamageSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("playerDamageSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayerDamageVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("playerDamageVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetPlayerFrozenSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("playerFrozenSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayerJuice() {
            static BNM::Field<int> _field = GetClass().GetField(O("playerJuice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetPlayerRevivedEffect() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("playerRevivedEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetPlayerRevivedSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("playerRevivedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayerRevivedVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("playerRevivedVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetPlayerStateChangeLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("playerStateChangeLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetPlayerTurnedGhostEffect() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("playerTurnedGhostEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetPlayerTurnedGhostSoundBank() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("playerTurnedGhostSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetProgressionBroadcastLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("progressionBroadcastLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetPromotionBotLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("promotionBotLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetReportBreakableBrokenLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("reportBreakableBrokenLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetReportLocalHitLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("reportLocalHitLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetRequestChargeToolLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("requestChargeToolLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetRequestCollectItemLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("requestCollectItemLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetRequestDepositCurrencyLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("requestDepositCurrencyLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetRequestShiftStartLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("requestShiftStartLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetRequestToolPurchaseStationLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("requestToolPurchaseStationLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRevives() {
            static BNM::Field<int> _field = GetClass().GetField(O("revives"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSaveEquipmentInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("saveEquipmentInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetScoreboardPageLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("scoreboardPageLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSentientCoresCollected() {
            static BNM::Field<int> _field = GetClass().GetField(O("sentientCoresCollected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetShieldActivatedSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("shieldActivatedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShieldActivatedVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("shieldActivatedVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetShieldBodyVisual() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shieldBodyVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetShieldColorHeal() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("shieldColorHeal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetShieldColorLight() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("shieldColorLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetShieldColorNormal() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("shieldColorNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetShieldColorStealth() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("shieldColorStealth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetShieldDamagedEffect() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("shieldDamagedEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetShieldDamagedSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("shieldDamagedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShieldDamagedVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("shieldDamagedVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetShieldDestroyedEffect() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("shieldDestroyedEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetShieldDestroyedSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("shieldDestroyedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShieldDestroyedVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("shieldDestroyedVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShieldFlags_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("shieldFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameLight* GetShieldGameLight() {
            static BNM::Field<::GlobalNamespace::GameLight*> _field = GetClass().GetField(O("shieldGameLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetShieldHeadVisual() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shieldHeadVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShieldHp_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("shieldHp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShieldStealthModeDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("shieldStealthModeDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetShieldStealthModeEndTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("shieldStealthModeEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShiftCreditCache() {
            static BNM::Field<int> _field = GetClass().GetField(O("shiftCreditCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetShiftJoinTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("shiftJoinTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShiftPlayTime_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("shiftPlayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRPlayer_ShuttleData* GetShuttleData() {
            static BNM::Field<::GlobalNamespace::GRPlayer_ShuttleData*> _field = GetClass().GetField(O("shuttleData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorSoak* GetSoak() {
            static BNM::Field<::GlobalNamespace::GhostReactorSoak*> _field = GetClass().GetField(O("soak"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStartingShiftCreditCache() {
            static BNM::Field<int> _field = GetClass().GetField(O("startingShiftCreditCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRPlayer_GRPlayerState GetState_f() {
            static BNM::Field<::GlobalNamespace::GRPlayer_GRPlayerState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetSynchronizedSessionStats() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("synchronizedSessionStats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetTempRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            return _field.Get();
        }
        float GetTimeIntoGameAtJoin() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeIntoGameAtJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeIntoShiftAtJoin() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeIntoShiftAtJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalCoresCollectedByGroup() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalCoresCollectedByGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalCoresCollectedByPlayer() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalCoresCollectedByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalCoresSpentByGroup() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalCoresSpentByGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalCoresSpentByPlayer() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalCoresSpentByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalDeaths() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalDeaths"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalGatesUnlocked() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalGatesUnlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTotalItemsHeldThisShift() {
            static BNM::Field<void*> _field = GetClass().GetField(O("totalItemsHeldThisShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetTotalItemsPurchased() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("totalItemsPurchased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* GetTotalItemTypesHeldThisShift() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("totalItemTypesHeldThisShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalRevives() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalRevives"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetVrRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("vrRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetVrRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("vrRigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasPlayerInAtGameStart() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasPlayerInAtGameStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasPlayerInAtShiftStart() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasPlayerInAtShiftStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetXRayVisionRefCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("xRayVisionRefCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetApplyEnemyHitLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("applyEnemyHitLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachEnemy(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("attachEnemy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBadge(::GlobalNamespace::GRBadge* value) {
            static BNM::Field<::GlobalNamespace::GRBadge*> _field = GetClass().GetField(O("badge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBadgeBodyAnchor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("badgeBodyAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBadgeBodyStringAttach(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("badgeBodyStringAttach"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyCenter(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("bodyCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCaughtByAnomaly(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("caughtByAnomaly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoresCollectedByGroup(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("coresCollectedByGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoresCollectedByPlayer(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("coresCollectedByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoresSpentByGroup(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("coresSpentByGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoresSpentByPlayer(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("coresSpentByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentHealthVisualValue(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentHealthVisualValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentProgression_fs(::GlobalNamespace::GRPlayer_ProgressionData value) {
            static BNM::Field<::GlobalNamespace::GRPlayer_ProgressionData> _field = GetClass().GetField(O("currentProgression"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamageEffects(::GlobalNamespace::GRPlayerDamageEffects* value) {
            static BNM::Field<::GlobalNamespace::GRPlayerDamageEffects*> _field = GetClass().GetField(O("damageEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamageOverlayMaxHp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("damageOverlayMaxHp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamageOverlayValues(::BNM::Structures::Mono::List<::GlobalNamespace::GRPlayer_DamageOverlayValues>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRPlayer_DamageOverlayValues>*> _field = GetClass().GetField(O("damageOverlayValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeathAmbientLightColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("deathAmbientLightColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeaths(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("deaths"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeathTintColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("deathTintColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDropPodChasisLevel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("dropPodChasisLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDropPodLevel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("dropPodLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireShieldLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("fireShieldLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFreezeDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("freezeDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("gameId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGamePlayer(::GlobalNamespace::GamePlayer* value) {
            static BNM::Field<::GlobalNamespace::GamePlayer*> _field = GetClass().GetField(O("gamePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameStartTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gameStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGatesUnlocked(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("gatesUnlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasPulledEquipment(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPulledEquipment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("hp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInStealthMode(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inStealthMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsEmployee(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEmployee"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsFirstShift(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isFirstShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemsHeldThisShift(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("itemsHeldThisShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemsPurchased(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("itemsPurchased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemTypesHeldThisShift(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("itemTypesHeldThisShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastLeftWithBadgeAttachedTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastLeftWithBadgeAttachedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPlayerPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPlayerPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastShiftCut_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastShiftCut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelsUnlocked(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("levelsUnlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowHealthTintPropertyId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lowHealthTintPropertyId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowHealthVisualPropertyBlock(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lowHealthVisualPropertyBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLowHeathVisualCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lowHeathVisualCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxHp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxHp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxNumberOfPlayersIngame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxNumberOfPlayersIngame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxNumberOfPlayersInShift(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxNumberOfPlayersInShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxShieldHp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxShieldHp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMothershipId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mothershipId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumShiftsPlayed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numShiftsPlayed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerDamageAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("playerDamageAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerDamageEffect(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("playerDamageEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerDamageOffsetDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playerDamageOffsetDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerDamageSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("playerDamageSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerDamageVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playerDamageVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerFrozenSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("playerFrozenSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerJuice(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playerJuice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerRevivedEffect(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("playerRevivedEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerRevivedSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("playerRevivedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerRevivedVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playerRevivedVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerStateChangeLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("playerStateChangeLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerTurnedGhostEffect(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("playerTurnedGhostEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerTurnedGhostSoundBank(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("playerTurnedGhostSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgressionBroadcastLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("progressionBroadcastLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPromotionBotLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("promotionBotLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReportBreakableBrokenLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("reportBreakableBrokenLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReportLocalHitLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("reportLocalHitLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestChargeToolLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("requestChargeToolLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestCollectItemLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("requestCollectItemLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestDepositCurrencyLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("requestDepositCurrencyLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestShiftStartLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("requestShiftStartLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestToolPurchaseStationLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("requestToolPurchaseStationLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRevives(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("revives"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSaveEquipmentInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("saveEquipmentInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreboardPageLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("scoreboardPageLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSentientCoresCollected(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sentientCoresCollected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldActivatedSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("shieldActivatedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldActivatedVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shieldActivatedVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldBodyVisual(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shieldBodyVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldColorHeal(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("shieldColorHeal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldColorLight(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("shieldColorLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldColorNormal(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("shieldColorNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldColorStealth(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("shieldColorStealth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldDamagedEffect(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("shieldDamagedEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldDamagedSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("shieldDamagedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldDamagedVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shieldDamagedVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldDestroyedEffect(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("shieldDestroyedEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldDestroyedSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("shieldDestroyedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldDestroyedVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shieldDestroyedVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldFlags(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shieldFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldGameLight(::GlobalNamespace::GameLight* value) {
            static BNM::Field<::GlobalNamespace::GameLight*> _field = GetClass().GetField(O("shieldGameLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldHeadVisual(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shieldHeadVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldHp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shieldHp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldStealthModeDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shieldStealthModeDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldStealthModeEndTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("shieldStealthModeEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftCreditCache(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shiftCreditCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftJoinTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("shiftJoinTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftPlayTime_fs(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shiftPlayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShuttleData(::GlobalNamespace::GRPlayer_ShuttleData* value) {
            static BNM::Field<::GlobalNamespace::GRPlayer_ShuttleData*> _field = GetClass().GetField(O("shuttleData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoak(::GlobalNamespace::GhostReactorSoak* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorSoak*> _field = GetClass().GetField(O("soak"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingShiftCreditCache(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("startingShiftCreditCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::GRPlayer_GRPlayerState value) {
            static BNM::Field<::GlobalNamespace::GRPlayer_GRPlayerState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSynchronizedSessionStats(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("synchronizedSessionStats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTempRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            _field.Set(value);
        }
        void SetTimeIntoGameAtJoin(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeIntoGameAtJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeIntoShiftAtJoin(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeIntoShiftAtJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalCoresCollectedByGroup(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalCoresCollectedByGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalCoresCollectedByPlayer(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalCoresCollectedByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalCoresSpentByGroup(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalCoresSpentByGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalCoresSpentByPlayer(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalCoresSpentByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalDeaths(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalDeaths"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalGatesUnlocked(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalGatesUnlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalItemsHeldThisShift(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("totalItemsHeldThisShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalItemsPurchased(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("totalItemsPurchased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalItemTypesHeldThisShift(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("totalItemTypesHeldThisShift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalRevives(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalRevives"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("vrRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("vrRigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasPlayerInAtGameStart(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasPlayerInAtGameStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasPlayerInAtShiftStart(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasPlayerInAtShiftStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetXRayVisionRefCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("xRayVisionRefCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddItemPurchased(::BNM::Structures::Mono::String* newItemPurchased) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddItemPurchased"), {"newItemPurchased"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newItemPurchased);
        }
        void AttachBadge(::GlobalNamespace::GRBadge* grBadge) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachBadge"), {"grBadge"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grBadge);
        }
        bool AttemptPromotion() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AttemptPromotion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanActivateShield(int shieldHitPoints) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanActivateShield"), {"shieldHitPoints"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(shieldHitPoints);
        }
        void ChangePlayerState(::GlobalNamespace::GRPlayer_GRPlayerState newState, ::GlobalNamespace::GhostReactorManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangePlayerState"), {"newState", "manager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, manager);
        }
        void ClearStealthMode() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearStealthMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CollectShiftCut() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CollectShiftCut"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void DeserializeNetworkStateAndBurn(::BNM::IL2CPP::Il2CppObject* reader, ::GlobalNamespace::GRPlayer* player, ::GlobalNamespace::GhostReactorManager* grManager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeNetworkStateAndBurn"), {"reader", "player", "grManager"});
            _m.Call(reader, player, grManager);
        }
        static ::GlobalNamespace::GRPlayer* Get(int actorNumber) {
            static BNM::Method<::GlobalNamespace::GRPlayer*> _m = GetClass().GetMethod(O("Get"), {"actorNumber"});
            return _m.Call(actorNumber);
        }
        static ::GlobalNamespace::GRPlayer* Get(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<::GlobalNamespace::GRPlayer*> _m = GetClass().GetMethod(O("Get"), {"player"});
            return _m.Call(player);
        }
        static ::GlobalNamespace::GRPlayer* Get(::GlobalNamespace::VRRig* vrRig) {
            static BNM::Method<::GlobalNamespace::GRPlayer*> _m = GetClass().GetMethod(O("Get"), {"vrRig"});
            return _m.Call(vrRig);
        }
        ::GlobalNamespace::GRPlayer_ProgressionData get_CurrentProgression() {
            static BNM::Method<::GlobalNamespace::GRPlayer_ProgressionData> _m = GetClass().GetMethod(O("get_CurrentProgression"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Hp() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Hp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_InStealthMode() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InStealthMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Juice() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Juice"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LastShiftCut() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LastShiftCut"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_MaxHp() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_MaxHp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_MaxShieldHp() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_MaxShieldHp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::VRRig* get_MyRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("get_MyRig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ShieldFlags() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ShieldFlags"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ShieldHp() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ShieldHp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ShiftCreditCapIncreases() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ShiftCreditCapIncreases"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ShiftCreditCapIncreasesMax() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ShiftCreditCapIncreasesMax"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ShiftCredits() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ShiftCredits"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_ShiftPlayTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_ShiftPlayTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GRPlayer_GRPlayerState get_State() {
            static BNM::Method<::GlobalNamespace::GRPlayer_GRPlayerState> _m = GetClass().GetMethod(O("get_State"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GRShuttle* GetAssignedShuttle(bool isOnDrillovator) {
            static BNM::Method<::GlobalNamespace::GRShuttle*> _m = GetClass().GetMethod(O("GetAssignedShuttle"), {"isOnDrillovator"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isOnDrillovator);
        }
        static ::GlobalNamespace::GRPlayer* GetFromUserId(::BNM::Structures::Mono::String* userId) {
            static BNM::Method<::GlobalNamespace::GRPlayer*> _m = GetClass().GetMethod(O("GetFromUserId"), {"userId"});
            return _m.Call(userId);
        }
        static ::GlobalNamespace::GRPlayer* GetLocal() {
            static BNM::Method<::GlobalNamespace::GRPlayer*> _m = GetClass().GetMethod(O("GetLocal"));
            return _m.Call();
        }
        int GetMaxDropFloor() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetMaxDropFloor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GrabbedItem(::GlobalNamespace::GameEntityId id, ::BNM::Structures::Mono::String* itemName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabbedItem"), {"id", "itemName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id, itemName);
        }
        bool HasXRayVision() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasXRayVision"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void IncrementChaosSeedsCollected(int numSeeds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementChaosSeedsCollected"), {"numSeeds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(numSeeds);
        }
        void IncrementCoresCollectedGroup(int coreValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementCoresCollectedGroup"), {"coreValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(coreValue);
        }
        void IncrementCoresCollectedPlayer(int coreValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementCoresCollectedPlayer"), {"coreValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(coreValue);
        }
        void IncrementCoresSpentGroup(int coreValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementCoresSpentGroup"), {"coreValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(coreValue);
        }
        void IncrementCoresSpentPlayer(int coreValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementCoresSpentPlayer"), {"coreValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(coreValue);
        }
        void IncrementDeaths(int numDeaths) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementDeaths"), {"numDeaths"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(numDeaths);
        }
        void IncrementGatesUnlocked(int numGatesUnlocked) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementGatesUnlocked"), {"numGatesUnlocked"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(numGatesUnlocked);
        }
        void IncrementRevives(int numRevives) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementRevives"), {"numRevives"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(numRevives);
        }
        void IncrementShiftsPlayed(int numShifts) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementShiftsPlayed"), {"numShifts"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(numShifts);
        }
        void IncrementSynchronizedSessionStat(::GlobalNamespace::GRPlayer_SynchronizedSessionStat stat, float amt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementSynchronizedSessionStat"), {"stat", "amt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stat, amt);
        }
        bool IsDropPodUnlocked() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsDropPodUnlocked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LoadMyProgression() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadMyProgression"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* LowHeathVisualCoroutine() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("LowHeathVisualCoroutine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGetMothershipFetchUserDataFail(::GlobalNamespace::MothershipError* error, int status) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetMothershipFetchUserDataFail"), {"error", "status"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error, status);
        }
        void OnGetMothershipFetchUserDataSuccess(::GlobalNamespace::MothershipUserData* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetMothershipFetchUserDataSuccess"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void OnPlayerHit(::BNM::Structures::Unity::Vector3 hitPosition, ::BNM::Structures::Unity::Vector3 hitImpulse, ::GlobalNamespace::GhostReactorManager* manager, ::GlobalNamespace::GameEntityId hitByEntityId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerHit"), {"hitPosition", "hitImpulse", "manager", "hitByEntityId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitPosition, hitImpulse, manager, hitByEntityId);
        }
        void OnPlayerRevive(::GlobalNamespace::GhostReactorManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerRevive"), {"manager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(manager);
        }
        void OnSetMothershipDataComplete(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSetMothershipDataComplete"), {"success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success);
        }
        void OnSetMothershipUserDataFail(::GlobalNamespace::MothershipError* error, int status) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSetMothershipUserDataFail"), {"error", "status"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error, status);
        }
        void OnSetMothershipUserDataSuccess(::GlobalNamespace::SetUserDataResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSetMothershipUserDataSuccess"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void OnShiftCreditCapChanged(::BNM::Structures::Mono::String* targetMothershipId, int newCap, int newCapMax) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnShiftCreditCapChanged"), {"targetMothershipId", "newCap", "newCapMax"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetMothershipId, newCap, newCapMax);
        }
        void OnShiftCreditCapData(::BNM::Structures::Mono::String* targetMothershipId, int shiftCreditCapNumberOfIncreases, int shiftCreditMaxNumberOfIncreases) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnShiftCreditCapData"), {"targetMothershipId", "shiftCreditCapNumberOfIncreases", "shiftCreditMaxNumberOfIncreases"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetMothershipId, shiftCreditCapNumberOfIncreases, shiftCreditMaxNumberOfIncreases);
        }
        void OnShiftCreditChanged(::BNM::Structures::Mono::String* targetMothershipId, int newShiftCredits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnShiftCreditChanged"), {"targetMothershipId", "newShiftCredits"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetMothershipId, newShiftCredits);
        }
        void PlayHitFx(::BNM::Structures::Unity::Vector3 attackLocation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHitFx"), {"attackLocation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(attackLocation);
        }
        void RefreshDamageVignetteVisual() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshDamageVignetteVisual"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshPlayerVisuals() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshPlayerVisuals"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshShuttles() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshShuttles"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemoveFrozen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveFrozen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestFetchMothershipUserData(::BNM::Structures::Mono::String* key) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestFetchMothershipUserData"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key);
        }
        void RequestSetMothershipUserData(::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSetMothershipUserData"), {"keyName", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(keyName, value);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetGameTelemetryTracking() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetGameTelemetryTracking"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetSynchronizedSessionStats() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetSynchronizedSessionStats"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetTelemetryTracking(::BNM::Structures::Mono::String* newGameId, float timeSinceShiftStart) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetTelemetryTracking"), {"newGameId", "timeSinceShiftStart"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newGameId, timeSinceShiftStart);
        }
        void SaveMyProgression() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveMyProgression"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendCreditsRefilledTelemetry(int shinyRocksSpent, int finalCredits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendCreditsRefilledTelemetry"), {"shinyRocksSpent", "finalCredits"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shinyRocksSpent, finalCredits);
        }
        void SendFloorEndedTelemetry(bool isShiftActuallyEnding, float shiftStartTime, ::GlobalNamespace::ZoneClearReason zoneClearReason, int currentFloor, ::BNM::Structures::Mono::String* floorPreset, ::BNM::Structures::Mono::String* floorModifier, bool objectivesCompleted, ::BNM::Structures::Mono::String* section, int xpGained) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendFloorEndedTelemetry"), {"isShiftActuallyEnding", "shiftStartTime", "zoneClearReason", "currentFloor", "floorPreset", "floorModifier", "objectivesCompleted", "section", "xpGained"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isShiftActuallyEnding, shiftStartTime, zoneClearReason, currentFloor, floorPreset, floorModifier, objectivesCompleted, section, xpGained);
        }
        void SendFloorStartedTelemetry(float timeIntoShift, bool wasPlayerInAtStart, int currentFloor, ::BNM::Structures::Mono::String* floorPreset, ::BNM::Structures::Mono::String* floorModifier) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendFloorStartedTelemetry"), {"timeIntoShift", "wasPlayerInAtStart", "currentFloor", "floorPreset", "floorModifier"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(timeIntoShift, wasPlayerInAtStart, currentFloor, floorPreset, floorModifier);
        }
        void SendGameEndedTelemetry(bool isShiftActuallyEnding, ::GlobalNamespace::ZoneClearReason zoneClearReason) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendGameEndedTelemetry"), {"isShiftActuallyEnding", "zoneClearReason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isShiftActuallyEnding, zoneClearReason);
        }
        void SendGameStartedTelemetry(float timeIntoShift, bool wasPlayerInAtStart, int currentFloor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendGameStartedTelemetry"), {"timeIntoShift", "wasPlayerInAtStart", "currentFloor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(timeIntoShift, wasPlayerInAtStart, currentFloor);
        }
        void SendJuiceCollectedTelemetry(int juiceCollected, int coresProcessedByOverdrive) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendJuiceCollectedTelemetry"), {"juiceCollected", "coresProcessedByOverdrive"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(juiceCollected, coresProcessedByOverdrive);
        }
        void SendOverdrivePurchasedTelemetry(int shinyRocksUsed, int seedsInQueue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendOverdrivePurchasedTelemetry"), {"shinyRocksUsed", "seedsInQueue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shinyRocksUsed, seedsInQueue);
        }
        void SendPodUpgradeTelemetry(::BNM::Structures::Mono::String* toolName, int level, int shinyRocksSpent, int juiceSpent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendPodUpgradeTelemetry"), {"toolName", "level", "shinyRocksSpent", "juiceSpent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toolName, level, shinyRocksSpent, juiceSpent);
        }
        void SendRankUpTelemetry(::BNM::Structures::Mono::String* newRank) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendRankUpTelemetry"), {"newRank"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newRank);
        }
        void SendSeedDepositedTelemetry(::BNM::Structures::Mono::String* unlockTime, int seedsInQueue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendSeedDepositedTelemetry"), {"unlockTime", "seedsInQueue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(unlockTime, seedsInQueue);
        }
        void SendToolPurchasedTelemetry(::BNM::Structures::Mono::String* toolName, int toolLevel, int coresSpent, int shinyRocksSpent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendToolPurchasedTelemetry"), {"toolName", "toolLevel", "coresSpent", "shinyRocksSpent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toolName, toolLevel, coresSpent, shinyRocksSpent);
        }
        void SendToolUpgradeTelemetry(::BNM::Structures::Mono::String* upgradeType, ::BNM::Structures::Mono::String* toolName, int newLevel, int juiceSpent, int griftSpent, int coresSpent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendToolUpgradeTelemetry"), {"upgradeType", "toolName", "newLevel", "juiceSpent", "griftSpent", "coresSpent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(upgradeType, toolName, newLevel, juiceSpent, griftSpent, coresSpent);
        }
        void SerializeNetworkState(::BNM::IL2CPP::Il2CppObject* writer, ::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeNetworkState"), {"writer", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer, player);
        }
        void set_CurrentProgression(::GlobalNamespace::GRPlayer_ProgressionData value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentProgression"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LastShiftCut(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LastShiftCut"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ShiftCreditCapIncreases(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ShiftCreditCapIncreases"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ShiftCreditCapIncreasesMax(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ShiftCreditCapIncreasesMax"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ShiftPlayTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ShiftPlayTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAsFrozen(float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAsFrozen"), {"duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(duration);
        }
        void SetGooParticleSystemEnabled(bool bIsLeftHand, bool newEnableState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGooParticleSystemEnabled"), {"bIsLeftHand", "newEnableState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bIsLeftHand, newEnableState);
        }
        void SetHp_1(int newHp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHp"), {"newHp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newHp);
        }
        void SetProgressionData(int _points, int _redeemedPoints, bool saveProgression) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetProgressionData"), {"_points", "_redeemedPoints", "saveProgression"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_points, _redeemedPoints, saveProgression);
        }
        void SetShieldHp_1(int newShieldHp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetShieldHp"), {"newShieldHp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newShieldHp);
        }
        void SetSynchronizedSessionStat(::GlobalNamespace::GRPlayer_SynchronizedSessionStat stat, float amt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSynchronizedSessionStat"), {"stat", "amt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stat, amt);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SubtractShiftCredit(int shiftCreditDelta) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SubtractShiftCredit"), {"shiftCreditDelta"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shiftCreditDelta);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool TryActivateShield(int shieldHitpoints, int shieldFlags) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryActivateShield"), {"shieldHitpoints", "shieldFlags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(shieldHitpoints, shieldFlags);
        }
    };
}
