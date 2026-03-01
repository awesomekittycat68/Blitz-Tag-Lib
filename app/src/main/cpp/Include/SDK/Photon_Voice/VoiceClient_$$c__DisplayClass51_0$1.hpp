#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VoiceInfo.hpp"

namespace Photon_Voice {
    template <typename T>
    struct VoiceClient_$$c__DisplayClass51_0$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "VoiceClient").GetInnerClass("<>c__DisplayClass51_0`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetAudioSourceDesc() {
            static BNM::Field<void*> _field = GetClass().GetField(O("audioSourceDesc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetEncoder() {
            static BNM::Field<void*> _field = GetClass().GetField(O("encoder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::VoiceInfo GetVoiceInfo() {
            static BNM::Field<::Photon_Voice::VoiceInfo> _field = GetClass().GetField(O("voiceInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSourceDesc(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("audioSourceDesc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEncoder(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("encoder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceInfo(::Photon_Voice::VoiceInfo value) {
            static BNM::Field<::Photon_Voice::VoiceInfo> _field = GetClass().GetField(O("voiceInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
