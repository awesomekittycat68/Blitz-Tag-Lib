#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Audio {
    struct LoudSpeakerTrigger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Audio", "LoudSpeakerTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag_Audio::LoudSpeakerNetwork* GetNetwork() {
            static BNM::Field<::GorillaTag_Audio::LoudSpeakerNetwork*> _field = GetClass().GetField(O("_network"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Audio::GTRecorder* GetRecorder() {
            static BNM::Field<::GorillaTag_Audio::GTRecorder*> _field = GetClass().GetField(O("_recorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPitchAdjustment() {
            static BNM::Field<float> _field = GetClass().GetField(O("PitchAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNetwork(::GorillaTag_Audio::LoudSpeakerNetwork* value) {
            static BNM::Field<::GorillaTag_Audio::LoudSpeakerNetwork*> _field = GetClass().GetField(O("_network"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecorder(::GorillaTag_Audio::GTRecorder* value) {
            static BNM::Field<::GorillaTag_Audio::GTRecorder*> _field = GetClass().GetField(O("_recorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitchAdjustment(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PitchAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnPlayerEnter(::GlobalNamespace::VRRig* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEnter"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void OnPlayerExit(::GlobalNamespace::VRRig* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerExit"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void SetRecorder_1(::GorillaTag_Audio::GTRecorder* recorder) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRecorder"), {"recorder"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(recorder);
        }
    };
}
