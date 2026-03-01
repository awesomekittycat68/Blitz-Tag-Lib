#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AnimHashId.hpp"
#include "FortuneResults_FortuneCategoryType.hpp"
#include "FortuneResults_FortuneResult.hpp"
#include "FortuneTeller_FortuneTellerResultFanfare.hpp"
#include "FXType.hpp"
#include "../Photon_Pun/MonoBehaviourPunCallbacks.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct FortuneTeller : ::Photon_Pun::MonoBehaviourPunCallbacks {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FortuneTeller");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Animator* GetAnimator() {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetAttractModeMonitor() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("attractModeMonitor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetBeardDefaultMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("beardDefaultMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetBeardGreyZoneMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("beardGreyZoneMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetBeardRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("beardRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetBoothDefaultMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("boothDefaultMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetBoothGreyZoneMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("boothGreyZoneMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetBoothRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("boothRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FortuneTellerButton* GetButton() {
            static BNM::Field<::GlobalNamespace::FortuneTellerButton*> _field = GetClass().GetField(O("button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetChangeMaterialsInGreyZone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("changeMaterialsInGreyZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FortuneResults_FortuneResult GetLatestFortune() {
            static BNM::Field<::GlobalNamespace::FortuneResults_FortuneResult> _field = GetClass().GetField(O("latestFortune"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FXType GetLimiterType() {
            static BNM::Field<::GlobalNamespace::FXType> _field = GetClass().GetField(O("limiterType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextAttractAnimTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("nextAttractAnimTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPlayable() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("playable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare>* GetResultFanfares() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare>*> _field = GetClass().GetField(O("resultFanfares"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FortuneResults* GetResults() {
            static BNM::Field<::GlobalNamespace::FortuneResults*> _field = GetClass().GetField(O("results"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Material*>* GetTellerDefaultMaterials() {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("tellerDefaultMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Material*>* GetTellerGreyZoneMaterials() {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("tellerGreyZoneMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::SkinnedMeshRenderer* GetTellerRenderer() {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("tellerRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AnimHashId GetTriggerAttract() {
            static BNM::Field<::GlobalNamespace::AnimHashId> _field = GetClass().GetField(O("trigger_attract"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AnimHashId GetTriggerPrediction() {
            static BNM::Field<::GlobalNamespace::AnimHashId> _field = GetClass().GetField(O("trigger_prediction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetTriggerNewFortuneLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("triggerNewFortuneLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetTriggerUpdateFortuneLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("triggerUpdateFortuneLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWaitDurationBeforeAttractAnim() {
            static BNM::Field<float> _field = GetClass().GetField(O("waitDurationBeforeAttractAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimator(::Animator* value) {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttractModeMonitor(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("attractModeMonitor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBeardDefaultMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("beardDefaultMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBeardGreyZoneMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("beardGreyZoneMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBeardRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("beardRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoothDefaultMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("boothDefaultMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoothGreyZoneMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("boothGreyZoneMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoothRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("boothRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButton(::GlobalNamespace::FortuneTellerButton* value) {
            static BNM::Field<::GlobalNamespace::FortuneTellerButton*> _field = GetClass().GetField(O("button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChangeMaterialsInGreyZone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("changeMaterialsInGreyZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLatestFortune(::GlobalNamespace::FortuneResults_FortuneResult value) {
            static BNM::Field<::GlobalNamespace::FortuneResults_FortuneResult> _field = GetClass().GetField(O("latestFortune"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLimiterType(::GlobalNamespace::FXType value) {
            static BNM::Field<::GlobalNamespace::FXType> _field = GetClass().GetField(O("limiterType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextAttractAnimTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nextAttractAnimTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayable(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("playable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResultFanfares(::BNM::Structures::Mono::Array<::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare>*> _field = GetClass().GetField(O("resultFanfares"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResults(::GlobalNamespace::FortuneResults* value) {
            static BNM::Field<::GlobalNamespace::FortuneResults*> _field = GetClass().GetField(O("results"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTellerDefaultMaterials(::BNM::Structures::Mono::List<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("tellerDefaultMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTellerGreyZoneMaterials(::BNM::Structures::Mono::List<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("tellerGreyZoneMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTellerRenderer(::SkinnedMeshRenderer* value) {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("tellerRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerAttract(::GlobalNamespace::AnimHashId value) {
            static BNM::Field<::GlobalNamespace::AnimHashId> _field = GetClass().GetField(O("trigger_attract"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerPrediction(::GlobalNamespace::AnimHashId value) {
            static BNM::Field<::GlobalNamespace::AnimHashId> _field = GetClass().GetField(O("trigger_prediction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerNewFortuneLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("triggerNewFortuneLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerUpdateFortuneLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("triggerUpdateFortuneLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitDurationBeforeAttractAnim(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("waitDurationBeforeAttractAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyFortuneText() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyFortuneText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* AttractModeMonitor() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("AttractModeMonitor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* GetResultFanfare(::GlobalNamespace::FortuneResults_FortuneCategoryType fortuneType) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetResultFanfare"), {"fortuneType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(fortuneType);
        }
        void GreyZoneActivated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GreyZoneActivated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GreyZoneDeactivated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GreyZoneDeactivated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandlePressedButton(::GlobalNamespace::GorillaPressableButton* button, bool isLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandlePressedButton"), {"button", "isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(button, isLeft);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
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
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnMasterClientSwitched(::Photon_Realtime::Player* newMasterClient) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMasterClientSwitched"), {"newMasterClient"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newMasterClient);
        }
        void OnPlayerEnteredRoom(::Photon_Realtime::Player* newPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEnteredRoom"), {"newPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPlayer);
        }
        void RequestFortuneRPC(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestFortuneRPC"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void SendAttractAnim() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendAttractAnim"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendNewFortune() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendNewFortune"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartAttractModeMonitor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartAttractModeMonitor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TriggerAttractAnimRPC(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerAttractAnimRPC"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void TriggerNewFortuneRPC(int fortuneType, int resultIndex, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerNewFortuneRPC"), {"fortuneType", "resultIndex", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fortuneType, resultIndex, info);
        }
        void TriggerUpdateFortuneRPC(int fortuneType, int resultIndex, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerUpdateFortuneRPC"), {"fortuneType", "resultIndex", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fortuneType, resultIndex, info);
        }
        void UpdateFortune(::GlobalNamespace::FortuneResults_FortuneResult result, bool newFortune) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFortune"), {"result", "newFortune"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result, newFortune);
        }
    };
}
