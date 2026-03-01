#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIPlayer_ProgressionData.hpp"
#include "SIResource_LimitedDepositType.hpp"
#include "SIResource_ResourceType.hpp"
#include "SITechTreePageId.hpp"
#include "SIUpgradeSet.hpp"
#include "SIUpgradeType.hpp"

namespace GlobalNamespace {
    struct SIPlayer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIPlayer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[SIPlayer]  ";
        static constexpr const char* preErr = "[SIPlayer]  ERROR!!!  ";
        int GetActorNr() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ActorNr"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::SIPlayer_ProgressionData GetCurrentProgression() {
            static BNM::Method<::GlobalNamespace::SIPlayer_ProgressionData> _method = GetClass().GetMethod(O("get_CurrentProgression"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::SIPlayer* GetLocalPlayer() {
            static BNM::Method<::GlobalNamespace::SIPlayer*> _method = GetClass().GetMethod(O("get_LocalPlayer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_OnBlasterHit(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnBlasterHit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnBlasterHit(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnBlasterHit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnBlasterSplashHit(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnBlasterSplashHit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnBlasterSplashHit(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnBlasterSplashHit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnKnockback(::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Vector3>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnKnockback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnKnockback(::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Vector3>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnKnockback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::Structures::Mono::List<int>* GetActivePlayerGadgets() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("activePlayerGadgets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetAuthorityToClientRPCLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("authorityToClientRPCLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetBonusProgressionCelebrate() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("bonusProgressionCelebrate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetClientToAuthorityRPCLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("clientToAuthorityRPCLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetClientToClientRPCLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("clientToClientRPCLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIPlayer_ProgressionData GetCurrentProgression_f() {
            static BNM::Field<::GlobalNamespace::SIPlayer_ProgressionData> _field = GetClass().GetField(O("currentProgression"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetExclusionZoneCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("exclusionZoneCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GamePlayer* GetGamePlayer() {
            static BNM::Field<::GlobalNamespace::GamePlayer*> _field = GetClass().GetField(O("gamePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastQuestsAvailableToClaim() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastQuestsAvailableToClaim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMonkeIdolDepositCelebrate() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("monkeIdolDepositCelebrate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetNetInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("netInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnBlasterHit() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnBlasterHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnBlasterSplashHit() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnBlasterSplashHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Vector3>* GetOnKnockback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("OnKnockback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::SITechTreeSO* GetProgressionSO() {
            static BNM::Field<::GlobalNamespace::SITechTreeSO*> _field = GetClass().GetField(O("progressionSO"));
            return _field.Get();
        }
        ::GlobalNamespace::SITechTreeSO* GetProgressionSORef() {
            static BNM::Field<::GlobalNamespace::SITechTreeSO*> _field = GetClass().GetField(O("progressionSORef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetQuestCompleteCelebrate() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("questCompleteCelebrate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::SIPlayer*>* GetSiPlayerByActorNr() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::SIPlayer*>*> _field = GetClass().GetField(O("siPlayerByActorNr"));
            return _field.Get();
        }
        ::GameObject* GetTechPointGainedCelebrate() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("techPointGainedCelebrate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalGadgetLimit() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalGadgetLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetTpParticleSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("tpParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivePlayerGadgets(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("activePlayerGadgets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAuthorityToClientRPCLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("authorityToClientRPCLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBonusProgressionCelebrate(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("bonusProgressionCelebrate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClientToAuthorityRPCLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("clientToAuthorityRPCLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClientToClientRPCLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("clientToClientRPCLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentProgression(::GlobalNamespace::SIPlayer_ProgressionData value) {
            static BNM::Field<::GlobalNamespace::SIPlayer_ProgressionData> _field = GetClass().GetField(O("currentProgression"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExclusionZoneCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("exclusionZoneCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGamePlayer(::GlobalNamespace::GamePlayer* value) {
            static BNM::Field<::GlobalNamespace::GamePlayer*> _field = GetClass().GetField(O("gamePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastQuestsAvailableToClaim(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastQuestsAvailableToClaim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMonkeIdolDepositCelebrate(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("monkeIdolDepositCelebrate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("netInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnBlasterHit(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnBlasterHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnBlasterSplashHit(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnBlasterSplashHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnKnockback(::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("OnKnockback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetProgressionSO(::GlobalNamespace::SITechTreeSO* value) {
            static BNM::Field<::GlobalNamespace::SITechTreeSO*> _field = GetClass().GetField(O("progressionSO"));
            _field.Set(value);
        }
        void SetProgressionSORef(::GlobalNamespace::SITechTreeSO* value) {
            static BNM::Field<::GlobalNamespace::SITechTreeSO*> _field = GetClass().GetField(O("progressionSORef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestCompleteCelebrate(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("questCompleteCelebrate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSiPlayerByActorNr(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::SIPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::SIPlayer*>*> _field = GetClass().GetField(O("siPlayerByActorNr"));
            _field.Set(value);
        }
        void SetTechPointGainedCelebrate(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("techPointGainedCelebrate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalGadgetLimit(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalGadgetLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTpParticleSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("tpParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnBlasterHit_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnBlasterHit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnBlasterSplashHit_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnBlasterSplashHit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnKnockback_1(::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnKnockback"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool AttemptUnlockNode(::GlobalNamespace::SIUpgradeType upgrade, ::GlobalNamespace::SuperInfectionManager* manager) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AttemptUnlockNode"), {"upgrade", "manager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(upgrade, manager);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BonusProgressCelebrate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BonusProgressCelebrate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanLimitedResourceBeDeposited(::GlobalNamespace::SIResource_LimitedDepositType limitedDepositType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanLimitedResourceBeDeposited"), {"limitedDepositType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(limitedDepositType);
        }
        void CelebrateIfQuestProgressMade(::GlobalNamespace::SIPlayer_ProgressionData newProgression) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CelebrateIfQuestProgressMade"), {"newProgression"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newProgression);
        }
        void ClearGadgetsOnLeaveZone() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearGadgetsOnLeaveZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void ClearPlayerCache() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearPlayerCache"));
            _m.Call();
        }
        static void DeserializeNetworkStateAndBurn(::BNM::IL2CPP::Il2CppObject* reader, ::GlobalNamespace::SIPlayer* player, ::GlobalNamespace::SuperInfectionManager* siManager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeNetworkStateAndBurn"), {"reader", "player", "siManager"});
            _m.Call(reader, player, siManager);
        }
        void GatherResource(::GlobalNamespace::SIResource_ResourceType type, ::GlobalNamespace::SIResource_LimitedDepositType limitedDepositType, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GatherResource"), {"type", "limitedDepositType", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type, limitedDepositType, count);
        }
        static ::GlobalNamespace::SIPlayer* Get(int actorNumber) {
            static BNM::Method<::GlobalNamespace::SIPlayer*> _m = GetClass().GetMethod(O("Get"), {"actorNumber"});
            return _m.Call(actorNumber);
        }
        static ::GlobalNamespace::SIPlayer* Get(::GlobalNamespace::VRRig* vrRig) {
            static BNM::Method<::GlobalNamespace::SIPlayer*> _m = GetClass().GetMethod(O("Get"), {"vrRig"});
            return _m.Call(vrRig);
        }
        int get_ActorNr() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ActorNr"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::SIPlayer_ProgressionData get_CurrentProgression() {
            static BNM::Method<::GlobalNamespace::SIPlayer_ProgressionData> _m = GetClass().GetMethod(O("get_CurrentProgression"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::SIPlayer* get_LocalPlayer() {
            static BNM::Method<::GlobalNamespace::SIPlayer*> _m = GetClass().GetMethod(O("get_LocalPlayer"));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetBonusProgress(::GlobalNamespace::SuperInfectionManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetBonusProgress"), {"manager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(manager);
        }
        int GetResourceAmount(::GlobalNamespace::SIResource_ResourceType type) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetResourceAmount"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(type);
        }
        ::GlobalNamespace::SIUpgradeSet GetUpgrades(::GlobalNamespace::SITechTreePageId pageId) {
            static BNM::Method<::GlobalNamespace::SIUpgradeSet> _m = GetClass().GetMethod(O("GetUpgrades"), {"pageId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pageId);
        }
        bool HasLimitedResourceBeenDeposited(::GlobalNamespace::SIResource_LimitedDepositType limitedDepositType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasLimitedResourceBeenDeposited"), {"limitedDepositType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(limitedDepositType);
        }
        bool NodeParentsUnlocked(::GlobalNamespace::SIUpgradeType upgrade) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("NodeParentsUnlocked"), {"upgrade"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(upgrade);
        }
        bool NodeResearched(::GlobalNamespace::SIUpgradeType upgrade) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("NodeResearched"), {"upgrade"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(upgrade);
        }
        void NotifyBlasterHit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NotifyBlasterHit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void NotifyBlasterSplashHit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NotifyBlasterSplashHit"));
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
        bool PlayerCanAffordNode(::GlobalNamespace::SITechTreeNode* node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PlayerCanAffordNode"), {"node"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(node);
        }
        void PlayerHandHaptic(bool isLeft, float hapticStrength, float hapticDuration, bool applyExclusionZone) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerHandHaptic"), {"isLeft", "hapticStrength", "hapticDuration", "applyExclusionZone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeft, hapticStrength, hapticDuration, applyExclusionZone);
        }
        void PlayerKnockback(::BNM::Structures::Unity::Vector3 directionAndMagnitude, bool forceOffGround, bool applyExclusionZone) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerKnockback"), {"directionAndMagnitude", "forceOffGround", "applyExclusionZone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(directionAndMagnitude, forceOffGround, applyExclusionZone);
        }
        void ProcessHandRecharge(int handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessHandRecharge"), {"handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handIndex);
        }
        void PurchaseNode(::GlobalNamespace::SITechTreeNode* node) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseNode"), {"node"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(node);
        }
        bool QuestAvailableToClaim(int questIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("QuestAvailableToClaim"), {"questIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(questIndex);
        }
        int QuestsAvailableToClaim() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("QuestsAvailableToClaim"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void remove_OnBlasterHit_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnBlasterHit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnBlasterSplashHit_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnBlasterSplashHit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnKnockback_1(::BNM::Structures::Mono::Action<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnKnockback"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetResources() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetResources"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetTechTree() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetTechTree"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SerializeNetworkState(::BNM::IL2CPP::Il2CppObject* writer, ::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeNetworkState"), {"writer", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer, player);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void SetAndBroadcastProgression() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAndBroadcastProgression"));
            _m.Call();
        }
        void SetAndBroadcastProgressionLocal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAndBroadcastProgressionLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetProgressionLocal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetProgressionLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TechPointGrantedCelebrate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TechPointGrantedCelebrate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TriggerIdolDepositedCelebration(::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerIdolDepositedCelebration"), {"position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position);
        }
        void UpdateProgression(::BNM::Structures::Mono::Array<int>* resourceArray, ::BNM::Structures::Mono::Array<int>* limitedDepositTimeArray, ::BNM::Structures::Mono::Array<bool>* techTreeData, int _stashedQuests, int _stashedBonusPoints, int _bonusProgress, ::BNM::Structures::Mono::Array<int>* _currentQuestIds, ::BNM::Structures::Mono::Array<int>* _currentQuestProgresses) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateProgression"), {"resourceArray", "limitedDepositTimeArray", "techTreeData", "_stashedQuests", "_stashedBonusPoints", "_bonusProgress", "_currentQuestIds", "_currentQuestProgresses"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(resourceArray, limitedDepositTimeArray, techTreeData, _stashedQuests, _stashedBonusPoints, _bonusProgress, _currentQuestIds, _currentQuestProgresses);
        }
        void UpdateVisualsForAvailableQuestRedemption() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateVisualsForAvailableQuestRedemption"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
