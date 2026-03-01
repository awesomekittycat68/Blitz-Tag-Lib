#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AudioSessionParameters.hpp"

namespace Photon_Voice_IOS {
    struct AudioSessionParametersPresets : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.IOS", "AudioSessionParametersPresets");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Photon_Voice_IOS::AudioSessionParameters GetGame() {
            static BNM::Field<::Photon_Voice_IOS::AudioSessionParameters> _field = GetClass().GetField(O("Game"));
            return _field.Get();
        }
        static ::Photon_Voice_IOS::AudioSessionParameters GetVoIP() {
            static BNM::Field<::Photon_Voice_IOS::AudioSessionParameters> _field = GetClass().GetField(O("VoIP"));
            return _field.Get();
        }
        static void SetGame(::Photon_Voice_IOS::AudioSessionParameters value) {
            static BNM::Field<::Photon_Voice_IOS::AudioSessionParameters> _field = GetClass().GetField(O("Game"));
            _field.Set(value);
        }
        static void SetVoIP(::Photon_Voice_IOS::AudioSessionParameters value) {
            static BNM::Field<::Photon_Voice_IOS::AudioSessionParameters> _field = GetClass().GetField(O("VoIP"));
            _field.Set(value);
        }
    };
}
