#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIQuestBoard_RoomFXDurationState.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct SIQuestBoard : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIQuestBoard");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BoxCollider* GetBonusPointArea() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("bonusPointArea"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetBounds() {
            static BNM::Field<void*> _field = GetClass().GetField(O("bounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetCelebrateParticle() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("celebrateParticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIQuestBoard_RoomFXDurationState GetCurrentDuration() {
            static BNM::Field<::GlobalNamespace::SIQuestBoard_RoomFXDurationState> _field = GetClass().GetField(O("currentDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastHours() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastHours"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastMinutes() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastMinutes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastSeconds() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SIUIPlayerQuestDisplay*>* GetQuestDisplays() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIUIPlayerQuestDisplay*>*> _field = GetClass().GetField(O("questDisplays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetRoomFXDurationReadout() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("RoomFXDurationReadout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIQuestBoard_RoomFXDurationState, float>* GetRoomFXDurations() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIQuestBoard_RoomFXDurationState, float>*> _field = GetClass().GetField(O("roomFXDurations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SuperInfection* GetSuperInfection() {
            static BNM::Field<::GlobalNamespace::SuperInfection*> _field = GetClass().GetField(O("superInfection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTimeToNewQuests() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("timeToNewQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBonusPointArea(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("bonusPointArea"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBounds(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("bounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCelebrateParticle(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("celebrateParticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentDuration(::GlobalNamespace::SIQuestBoard_RoomFXDurationState value) {
            static BNM::Field<::GlobalNamespace::SIQuestBoard_RoomFXDurationState> _field = GetClass().GetField(O("currentDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHours(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastHours"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastMinutes(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastMinutes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastSeconds(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestDisplays(::BNM::Structures::Mono::List<::GlobalNamespace::SIUIPlayerQuestDisplay*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIUIPlayerQuestDisplay*>*> _field = GetClass().GetField(O("questDisplays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomFXDurationReadout(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("RoomFXDurationReadout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomFXDurations(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIQuestBoard_RoomFXDurationState, float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIQuestBoard_RoomFXDurationState, float>*> _field = GetClass().GetField(O("roomFXDurations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuperInfection(::GlobalNamespace::SuperInfection* value) {
            static BNM::Field<::GlobalNamespace::SuperInfection*> _field = GetClass().GetField(O("superInfection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeToNewQuests(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("timeToNewQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AuthorityUpdateScreenAssignments() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthorityUpdateScreenAssignments"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheatAddBonusPoints(int points) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheatAddBonusPoints"), {"points"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(points);
        }
        void CheatAddPoints(int points) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheatAddPoints"), {"points"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(points);
        }
        void CheatRoomFX_Underwater() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheatRoomFX_Underwater"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheatRoomFXDurationMinus() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheatRoomFXDurationMinus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheatRoomFXDurationPlus() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheatRoomFXDurationPlus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ForceCompleteQuest(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceCompleteQuest"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        void GrantBonusPointProgress() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrantBonusPointProgress"));
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
        void ReadDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void StartRoomFX(float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartRoomFX"), {"duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(duration);
        }
        void WriteDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
    };
}
