#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    struct VoiceClient_CreateOptions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "VoiceClient").GetInnerClass("CreateOptions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Photon_Voice::VoiceClient_CreateOptions GetDefault() {
            static BNM::Field<::Photon_Voice::VoiceClient_CreateOptions> _field = GetClass().GetField(O("Default"));
            return _field.Get();
        }
        uint8_t GetVoiceIDMax() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("VoiceIDMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetVoiceIDMin() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("VoiceIDMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetDefault(::Photon_Voice::VoiceClient_CreateOptions value) {
            static BNM::Field<::Photon_Voice::VoiceClient_CreateOptions> _field = GetClass().GetField(O("Default"));
            _field.Set(value);
        }
        void SetVoiceIDMax(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("VoiceIDMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceIDMin(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("VoiceIDMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
