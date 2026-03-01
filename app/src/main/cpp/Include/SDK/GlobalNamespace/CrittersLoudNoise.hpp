#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActor.hpp"

namespace GlobalNamespace {
    struct CrittersLoudNoise : ::GlobalNamespace::CrittersActor {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersLoudNoise");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetDisableWhenSoundDisabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableWhenSoundDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSoundDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("soundDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSoundEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("soundEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("soundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetTimeSoundEnabled() {
            static BNM::Field<double> _field = GetClass().GetField(O("timeSoundEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVolumeFearAttractionMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("volumeFearAttractionMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasSoundEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasSoundEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDisableWhenSoundDisabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableWhenSoundDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("soundDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("soundEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("soundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeSoundEnabled(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("timeSoundEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolumeFearAttractionMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("volumeFearAttractionMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasSoundEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasSoundEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int AddActorDataToList(::BNM::IL2CPP::Il2CppObject*& objList) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("AddActorDataToList"), {"objList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&objList);
        }
        void CalculateAttraction(::GlobalNamespace::CrittersPawn* critter, float multiplier) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalculateAttraction"), {"critter", "multiplier"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter, multiplier);
        }
        void CalculateFear(::GlobalNamespace::CrittersPawn* critter, float multiplier) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalculateFear"), {"critter", "multiplier"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter, multiplier);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayHandTapLocal(bool isLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHandTapLocal"), {"isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeft);
        }
        void PlayHandTapRemote(double serverTime, bool isLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHandTapRemote"), {"serverTime", "isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(serverTime, isLeft);
        }
        void PlayVoiceSpeechLocal(double serverTime, float duration, float volume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayVoiceSpeechLocal"), {"serverTime", "duration", "volume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(serverTime, duration, volume);
        }
        bool ProcessLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ProcessLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ProcessRemote() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessRemote"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendDataByCrittersActorType(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendDataByCrittersActorType"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream);
        }
        void SetTimeEnabled() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTimeEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SpawnData(float _soundVolume, float _soundDuration, float _soundMultiplier, bool _soundEnabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnData"), {"_soundVolume", "_soundDuration", "_soundMultiplier", "_soundEnabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_soundVolume, _soundDuration, _soundMultiplier, _soundEnabled);
        }
        int TotalActorDataLength() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("TotalActorDataLength"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int UpdateFromRPC(::BNM::Structures::Mono::Array<void*>* data, int startingIndex) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UpdateFromRPC"), {"data", "startingIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, startingIndex);
        }
        bool UpdateSpecificActor(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateSpecificActor"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
    };
}
