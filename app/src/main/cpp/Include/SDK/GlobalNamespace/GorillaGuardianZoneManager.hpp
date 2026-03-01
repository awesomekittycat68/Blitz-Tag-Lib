#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTZone.hpp"
#include "../Photon_Pun/MonoBehaviourPunCallbacks.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GorillaGuardianZoneManager : ::Photon_Pun::MonoBehaviourPunCallbacks {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaGuardianZoneManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::NetPlayer* GetCurrentGuardian() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _method = GetClass().GetMethod(O("get_CurrentGuardian"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetCurrentActivationTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentActivationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetIdolActivationDisplay() {
            static BNM::Field<float> _field = GetClass().GetField(O("_idolActivationDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastTappedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_lastTappedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetPreviousGuardian() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("_previousGuardian"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetProgressing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_progressing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetSortedIdolPositions() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("_sortedIdolPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetZoneIsActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_zoneIsActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetZoneStateChanged() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_zoneStateChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetActivationTimePerTap() {
            static BNM::Field<float> _field = GetClass().GetField(O("activationTimePerTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentIdol() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentIdol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetGuardianPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("guardianPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SizeChanger* GetGuardianSizeChanger() {
            static BNM::Field<::GlobalNamespace::SizeChanger*> _field = GetClass().GetField(O("guardianSizeChanger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TappableGuardianIdol* GetIdol() {
            static BNM::Field<::GlobalNamespace::TappableGuardianIdol*> _field = GetClass().GetField(O("idol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetIdolKnockbackRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("idolKnockbackRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetIdolKnockbackStrengthHoriz() {
            static BNM::Field<float> _field = GetClass().GetField(O("idolKnockbackStrengthHoriz"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetIdolKnockbackStrengthVert() {
            static BNM::Field<float> _field = GetClass().GetField(O("idolKnockbackStrengthVert"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIdolMoveCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("idolMoveCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetIdolPositions() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("idolPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetKnockbackIncludesGuardian() {
            static BNM::Field<bool> _field = GetClass().GetField(O("knockbackIncludesGuardian"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetObserverGainGuardianSFX() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("ObserverGainGuardianSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetPlayerGainGuardianSFX() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("PlayerGainGuardianSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetPlayerLostGuardianSFX() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("PlayerLostGuardianSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRequiredActivationTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("requiredActivationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetZone() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGuardianZoneManager*>* GetZoneManagers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGuardianZoneManager*>*> _field = GetClass().GetField(O("zoneManagers"));
            return _field.Get();
        }
        void SetCurrentActivationTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentActivationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdolActivationDisplay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_idolActivationDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTappedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_lastTappedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousGuardian(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("_previousGuardian"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgressing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_progressing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSortedIdolPositions(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("_sortedIdolPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneIsActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_zoneIsActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneStateChanged(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_zoneStateChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivationTimePerTap(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("activationTimePerTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentIdol(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentIdol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuardianPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("guardianPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuardianSizeChanger(::GlobalNamespace::SizeChanger* value) {
            static BNM::Field<::GlobalNamespace::SizeChanger*> _field = GetClass().GetField(O("guardianSizeChanger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdol(::GlobalNamespace::TappableGuardianIdol* value) {
            static BNM::Field<::GlobalNamespace::TappableGuardianIdol*> _field = GetClass().GetField(O("idol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdolKnockbackRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("idolKnockbackRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdolKnockbackStrengthHoriz(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("idolKnockbackStrengthHoriz"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdolKnockbackStrengthVert(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("idolKnockbackStrengthVert"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdolMoveCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("idolMoveCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdolPositions(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("idolPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKnockbackIncludesGuardian(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("knockbackIncludesGuardian"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObserverGainGuardianSFX(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("ObserverGainGuardianSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerGainGuardianSFX(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("PlayerGainGuardianSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerLostGuardianSFX(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("PlayerLostGuardianSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequiredActivationTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("requiredActivationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZone(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetZoneManagers(::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGuardianZoneManager*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGuardianZoneManager*>*> _field = GetClass().GetField(O("zoneManagers"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::NetPlayer* get_CurrentGuardian() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("get_CurrentGuardian"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void IdolActivated(::GlobalNamespace::NetPlayer* activater) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IdolActivated"), {"activater"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(activater);
        }
        void IdolWasTapped(::GlobalNamespace::NetPlayer* tapper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IdolWasTapped"), {"tapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tapper);
        }
        bool IsPlayerGuardian(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerGuardian"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool IsZoneValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsZoneValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void MoveIdolPosition(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveIdolPosition"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
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
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPhotonSerializeView(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPhotonSerializeView"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void OnPlayerLeftRoom(::Photon_Realtime::Player* otherPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherPlayer);
        }
        void OnZoneChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int SelectFarFromNearestPlayer() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SelectFarFromNearestPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int SelectFarthestFromGuardian() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SelectFarthestFromGuardian"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int SelectNextIdol() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SelectNextIdol"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int SelectRandomIdol() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SelectRandomIdol"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SetGuardian(::GlobalNamespace::NetPlayer* newGuardian) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGuardian"), {"newGuardian"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newGuardian);
        }
        void SetIdolPosition(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetIdolPosition"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        void SetScaleCenterPoint(::Transform* scaleCenterPoint) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetScaleCenterPoint"), {"scaleCenterPoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(scaleCenterPoint);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::List<::Transform*>* SortByDistanceToNearestPlayer() {
            static BNM::Method<::BNM::Structures::Mono::List<::Transform*>*> _m = GetClass().GetMethod(O("SortByDistanceToNearestPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
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
        void TriggerIdolKnockback() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerIdolKnockback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool UpdateTapCount(::GlobalNamespace::NetPlayer* tapper) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateTapCount"), {"tapper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(tapper);
        }
    };
}
