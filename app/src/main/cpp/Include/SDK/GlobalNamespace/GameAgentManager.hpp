#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameAgentManager_RPC.hpp"
#include "GameEntityId.hpp"
#include "NetworkComponent.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GameAgentManager : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameAgentManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float MAX_JUMP_DISTANCE = 25.0f;
        static constexpr int MAX_UPDATES_PER_FRAME = 4;
        static constexpr int MAX_THINK_PER_FRAME = 1;
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
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameAgent*>* GetAgents() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameAgent*>*> _field = GetClass().GetField(O("agents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBehaviorCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("behaviorCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<uint8_t>* GetBehaviorsForBehavior() {
            static BNM::Field<::BNM::Structures::Mono::List<uint8_t>*> _field = GetClass().GetField(O("behaviorsForBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDestinationCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("destinationCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* GetDestinationsForDestination() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("destinationsForDestination"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntityManager* GetEntityManager() {
            static BNM::Field<::GlobalNamespace::GameEntityManager*> _field = GetClass().GetField(O("entityManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastBehaviorSentTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastBehaviorSentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastDestinationSentTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastDestinationSentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastStateSentTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastStateSentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetNetIdsForBehavior() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("netIdsForBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetNetIdsForDestination() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("netIdsForDestination"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetNetIdsForState() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("netIdsForState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextAgentIndexThink() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextAgentIndexThink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextAgentIndexUpdate() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextAgentIndexUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetPhotonView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStateCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("stateCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<uint8_t>* GetStatesForState() {
            static BNM::Field<::BNM::Structures::Mono::List<uint8_t>*> _field = GetClass().GetField(O("statesForState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAgents(::BNM::Structures::Mono::List<::GlobalNamespace::GameAgent*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameAgent*>*> _field = GetClass().GetField(O("agents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBehaviorCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("behaviorCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBehaviorsForBehavior(::BNM::Structures::Mono::List<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<uint8_t>*> _field = GetClass().GetField(O("behaviorsForBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestinationCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("destinationCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestinationsForDestination(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("destinationsForDestination"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntityManager(::GlobalNamespace::GameEntityManager* value) {
            static BNM::Field<::GlobalNamespace::GameEntityManager*> _field = GetClass().GetField(O("entityManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastBehaviorSentTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastBehaviorSentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastDestinationSentTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastDestinationSentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastStateSentTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastStateSentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetIdsForBehavior(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("netIdsForBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetIdsForDestination(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("netIdsForDestination"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetIdsForState(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("netIdsForState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextAgentIndexThink(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextAgentIndexThink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextAgentIndexUpdate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextAgentIndexUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stateCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatesForState(::BNM::Structures::Mono::List<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<uint8_t>*> _field = GetClass().GetField(O("statesForState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddGameAgent(::GlobalNamespace::GameAgent* gameAgent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddGameAgent"), {"gameAgent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameAgent);
        }
        void ApplyBehaviorRPC(::BNM::Structures::Mono::Array<int>* netEntityId, ::BNM::Structures::Mono::Array<uint8_t>* behavior, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyBehaviorRPC"), {"netEntityId", "behavior", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netEntityId, behavior, info);
        }
        void ApplyDestinationRPC(::BNM::Structures::Mono::Array<int>* netEntityId, ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* dest, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyDestinationRPC"), {"netEntityId", "dest", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netEntityId, dest, info);
        }
        void ApplyJumpRPC(int agentNetId, ::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3 end, float heightScale, float speedScale, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyJumpRPC"), {"agentNetId", "start", "end", "heightScale", "speedScale", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(agentNetId, start, end, heightScale, speedScale, info);
        }
        void ApplyStateRPC(::BNM::Structures::Mono::Array<int>* netEntityId, ::BNM::Structures::Mono::Array<uint8_t>* state, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyStateRPC"), {"netEntityId", "state", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netEntityId, state, info);
        }
        void ApplyTargetRPC(int agentNetId, ::Photon_Realtime::Player* player, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyTargetRPC"), {"agentNetId", "player", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(agentNetId, player, info);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyBackingFieldsToState(bool ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyBackingFieldsToState"), {""});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyStateToBackingFields() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyStateToBackingFields"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GlobalNamespace::GameAgentManager* Get(::GlobalNamespace::GameEntity* gameEntity) {
            static BNM::Method<::GlobalNamespace::GameAgentManager*> _m = GetClass().GetMethod(O("Get"), {"gameEntity"});
            return _m.Call(gameEntity);
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameAgent*>* GetAgents_1() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::GameAgent*>*> _m = GetClass().GetMethod(O("GetAgents"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::Player* GetAuthorityPlayer() {
            static BNM::Method<::Photon_Realtime::Player*> _m = GetClass().GetMethod(O("GetAuthorityPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GameAgent* GetGameAgent(::GlobalNamespace::GameEntityId id) {
            static BNM::Method<::GlobalNamespace::GameAgent*> _m = GetClass().GetMethod(O("GetGameAgent"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id);
        }
        int GetGameAgentCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetGameAgentCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsAuthority() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsAuthorityPlayer(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAuthorityPlayer"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool IsAuthorityPlayer(::Photon_Realtime::Player* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAuthorityPlayer"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool IsPositionInZone(::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPositionInZone"), {"pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pos);
        }
        bool IsValidAuthorityRPC(::Photon_Realtime::Player* sender) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidAuthorityRPC"), {"sender"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sender);
        }
        bool IsValidAuthorityRPC(::Photon_Realtime::Player* sender, int entityNetId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidAuthorityRPC"), {"sender", "entityNetId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sender, entityNetId);
        }
        bool IsValidAuthorityRPC(::Photon_Realtime::Player* sender, ::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidAuthorityRPC"), {"sender", "pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sender, pos);
        }
        bool IsValidAuthorityRPC(::Photon_Realtime::Player* sender, int entityNetId, ::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidAuthorityRPC"), {"sender", "entityNetId", "pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sender, entityNetId, pos);
        }
        bool IsValidClientRPC(::Photon_Realtime::Player* sender) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidClientRPC"), {"sender"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sender);
        }
        bool IsValidClientRPC(::Photon_Realtime::Player* sender, int entityNetId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidClientRPC"), {"sender", "entityNetId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sender, entityNetId);
        }
        bool IsValidClientRPC(::Photon_Realtime::Player* sender, ::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidClientRPC"), {"sender", "pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sender, pos);
        }
        bool IsValidClientRPC(::Photon_Realtime::Player* sender, int entityNetId, ::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidClientRPC"), {"sender", "entityNetId", "pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sender, entityNetId, pos);
        }
        bool IsZoneActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsZoneActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void ReadDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReadDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void RemoveGameAgent(::GlobalNamespace::GameAgent* gameAgent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveGameAgent"), {"gameAgent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameAgent);
        }
        void RequestBehavior(::GlobalNamespace::GameAgent* agent, uint8_t behavior) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestBehavior"), {"agent", "behavior"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(agent, behavior);
        }
        void RequestDestination(::GlobalNamespace::GameAgent* agent, ::BNM::Structures::Unity::Vector3 dest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestDestination"), {"agent", "dest"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(agent, dest);
        }
        void RequestJump(::GlobalNamespace::GameAgent* agent, ::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3 end, float heightScale, float speedScale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestJump"), {"agent", "start", "end", "heightScale", "speedScale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(agent, start, end, heightScale, speedScale);
        }
        void RequestState(::GlobalNamespace::GameAgent* agent, uint8_t state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestState"), {"agent", "state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(agent, state);
        }
        void RequestTarget(::GlobalNamespace::GameAgent* agent, ::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestTarget"), {"agent", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(agent, player);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
    };
}
