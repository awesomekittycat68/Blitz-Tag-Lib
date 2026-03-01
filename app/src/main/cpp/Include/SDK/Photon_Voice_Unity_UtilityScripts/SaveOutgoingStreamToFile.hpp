#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Voice_Unity/VoiceComponent.hpp"

namespace Photon_Voice_Unity_UtilityScripts {
    struct SaveOutgoingStreamToFile : ::Photon_Voice_Unity::VoiceComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity.UtilityScripts", "SaveOutgoingStreamToFile");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::CSCore_Codecs_WAV::WaveWriter* GetWavWriter() {
            static BNM::Field<::CSCore_Codecs_WAV::WaveWriter*> _field = GetClass().GetField(O("wavWriter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetWavWriter(::CSCore_Codecs_WAV::WaveWriter* value) {
            static BNM::Field<::CSCore_Codecs_WAV::WaveWriter*> _field = GetClass().GetField(O("wavWriter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::String* GetFilePath() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetFilePath"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void PhotonVoiceCreated(::Photon_Voice_Unity::PhotonVoiceCreatedParams* photonVoiceCreatedParams) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PhotonVoiceCreated"), {"photonVoiceCreatedParams"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(photonVoiceCreatedParams);
        }
        void PhotonVoiceRemoved() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PhotonVoiceRemoved"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
