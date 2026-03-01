#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity_UtilityScripts {
    struct SaveIncomingStreamToFile_$$c__DisplayClass5_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity.UtilityScripts", "SaveIncomingStreamToFile").GetInnerClass("<>c__DisplayClass5_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::CSCore_Codecs_WAV::WaveWriter* GetWaveWriter() {
            static BNM::Field<::CSCore_Codecs_WAV::WaveWriter*> _field = GetClass().GetField(O("waveWriter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetWaveWriter(::CSCore_Codecs_WAV::WaveWriter* value) {
            static BNM::Field<::CSCore_Codecs_WAV::WaveWriter*> _field = GetClass().GetField(O("waveWriter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
