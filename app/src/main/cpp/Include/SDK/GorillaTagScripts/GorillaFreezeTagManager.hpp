#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GorillaTagManager.hpp"
#include "../GorillaGameModes/GameModeType.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GorillaTagScripts {
    struct GorillaFreezeTagManager : ::GlobalNamespace::GorillaTagManager {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "GorillaFreezeTagManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, float>* GetCurrentFrozen() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, float>*> _field = GetClass().GetField(O("currentFrozen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* GetCurrentRoundInfectedPlayers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("currentRoundInfectedPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFastJumpLimitCached() {
            static BNM::Field<float> _field = GetClass().GetField(O("fastJumpLimitCached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFastJumpMultiplierCached() {
            static BNM::Field<float> _field = GetClass().GetField(O("fastJumpMultiplierCached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFreezeDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("freezeDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetFrozenHandTapIndices() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("frozenHandTapIndices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFrozenPlayerFastJumpLimit() {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenPlayerFastJumpLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFrozenPlayerFastJumpMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenPlayerFastJumpMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFrozenPlayerSlowJumpLimit() {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenPlayerSlowJumpLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFrozenPlayerSlowJumpMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenPlayerSlowJumpMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHapticStrength() {
            static BNM::Field<int> _field = GetClass().GetField(O("hapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInfectMorePlayerLowerThreshold() {
            static BNM::Field<int> _field = GetClass().GetField(O("infectMorePlayerLowerThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInfectMorePlayerUpperThreshold() {
            static BNM::Field<int> _field = GetClass().GetField(O("infectMorePlayerUpperThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* GetLastRoundInfectedPlayers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("lastRoundInfectedPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetLocalVRRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("localVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlowJumpLimitCached() {
            static BNM::Field<float> _field = GetClass().GetField(O("slowJumpLimitCached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlowJumpMultiplierCached() {
            static BNM::Field<float> _field = GetClass().GetField(O("slowJumpMultiplierCached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentFrozen(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, float>*> _field = GetClass().GetField(O("currentFrozen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentRoundInfectedPlayers(::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("currentRoundInfectedPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFastJumpLimitCached(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fastJumpLimitCached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFastJumpMultiplierCached(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fastJumpMultiplierCached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFreezeDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("freezeDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrozenHandTapIndices(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("frozenHandTapIndices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrozenPlayerFastJumpLimit(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenPlayerFastJumpLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrozenPlayerFastJumpMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenPlayerFastJumpMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrozenPlayerSlowJumpLimit(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenPlayerSlowJumpLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrozenPlayerSlowJumpMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("frozenPlayerSlowJumpMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticStrength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("hapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInfectMorePlayerLowerThreshold(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("infectMorePlayerLowerThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInfectMorePlayerUpperThreshold(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("infectMorePlayerUpperThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRoundInfectedPlayers(::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("lastRoundInfectedPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalVRRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("localVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlowJumpLimitCached(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slowJumpLimitCached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlowJumpMultiplierCached(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slowJumpMultiplierCached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddFrozenPlayer(::GlobalNamespace::NetPlayer* taggedPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddFrozenPlayer"), {"taggedPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer);
        }
        void AddInfectedPlayer(::GlobalNamespace::NetPlayer* infectedPlayer, bool withTagStop) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddInfectedPlayer"), {"infectedPlayer", "withTagStop"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(infectedPlayer, withTagStop);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* GameModeName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GameModeName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GameModeNameRoomLabel() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GameModeNameRoomLabel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaGameModes::GameModeType GameType() {
            static BNM::Method<::GorillaGameModes::GameModeType> _m = GetClass().GetMethod(O("GameType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetFrozenHandTapAudioIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetFrozenHandTapAudioIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* InfectionRoundEndingCoroutine() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("InfectionRoundEndingCoroutine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsFrozen(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsFrozen"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool LocalCanTag(::GlobalNamespace::NetPlayer* myPlayer, ::GlobalNamespace::NetPlayer* otherPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LocalCanTag"), {"myPlayer", "otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(myPlayer, otherPlayer);
        }
        bool LocalIsTagged(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LocalIsTagged"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        ::BNM::Structures::Mono::Array<float>* LocalPlayerSpeed() {
            static BNM::Method<::BNM::Structures::Mono::Array<float>*> _m = GetClass().GetMethod(O("LocalPlayerSpeed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int MyMatIndex(::GlobalNamespace::NetPlayer* forPlayer) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("MyMatIndex"), {"forPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(forPlayer);
        }
        void NewVRRig(::GlobalNamespace::NetPlayer* player, int vrrigPhotonViewID, bool didTutorial) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NewVRRig"), {"player", "vrrigPhotonViewID", "didTutorial"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, vrrigPhotonViewID, didTutorial);
        }
        void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer* otherPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherPlayer);
        }
        void OnSerializeRead(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSerializeRead"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void OnSerializeWrite(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSerializeWrite"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void ReportTag(::GlobalNamespace::NetPlayer* taggedPlayer, ::GlobalNamespace::NetPlayer* taggingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportTag"), {"taggedPlayer", "taggingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, taggingPlayer);
        }
        void ResetGame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetGame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartPlaying() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopPlaying() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TryAddNewInfectedPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryAddNewInfectedPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UnfreezePlayer(::GlobalNamespace::NetPlayer* taggedPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnfreezePlayer"), {"taggedPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer);
        }
        void UpdatePlayerAppearance(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayerAppearance"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        void UpdateState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
