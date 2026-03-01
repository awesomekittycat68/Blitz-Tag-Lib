#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Audio {
    struct LoudSpeakerActivator : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Audio", "LoudSpeakerActivator");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsLocal() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Audio::LoudSpeakerNetwork* GetNetwork() {
            static BNM::Field<::GorillaTag_Audio::LoudSpeakerNetwork*> _field = GetClass().GetField(O("_network"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetNonlocalRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_nonlocalRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Audio::GTRecorder* GetRecorder() {
            static BNM::Field<::GorillaTag_Audio::GTRecorder*> _field = GetClass().GetField(O("_recorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsBroadcasting() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsBroadcasting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPitchAdjustment() {
            static BNM::Field<float> _field = GetClass().GetField(O("PitchAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVolumeAdjustment() {
            static BNM::Field<float> _field = GetClass().GetField(O("VolumeAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsLocal(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetwork(::GorillaTag_Audio::LoudSpeakerNetwork* value) {
            static BNM::Field<::GorillaTag_Audio::LoudSpeakerNetwork*> _field = GetClass().GetField(O("_network"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNonlocalRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_nonlocalRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecorder(::GorillaTag_Audio::GTRecorder* value) {
            static BNM::Field<::GorillaTag_Audio::GTRecorder*> _field = GetClass().GetField(O("_recorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsBroadcasting(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsBroadcasting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitchAdjustment(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PitchAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolumeAdjustment(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("VolumeAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsParentedToLocalRig() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsParentedToLocalRig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SetRecorder_1(::GorillaTag_Audio::GTRecorder* recorder) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRecorder"), {"recorder"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(recorder);
        }
        void StartLocalBroadcast() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartLocalBroadcast"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopLocalBroadcast() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopLocalBroadcast"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
