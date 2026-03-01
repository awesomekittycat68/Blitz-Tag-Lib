#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity_UtilityScripts {
    struct SaveOutgoingStreamToFile_OutgoingStreamSaverShort : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity.UtilityScripts", "SaveOutgoingStreamToFile").GetInnerClass("OutgoingStreamSaverShort");
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
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::Array<int16_t>* Process(::BNM::Structures::Mono::Array<int16_t>* buf) {
            static BNM::Method<::BNM::Structures::Mono::Array<int16_t>*> _m = GetClass().GetMethod(O("Process"), {"buf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buf);
        }
    };
}
