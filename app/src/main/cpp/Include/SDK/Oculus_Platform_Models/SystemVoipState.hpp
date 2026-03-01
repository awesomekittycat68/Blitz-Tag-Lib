#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Oculus_Platform/SystemVoipStatus.hpp"
#include "../Oculus_Platform/VoipMuteState.hpp"

namespace Oculus_Platform_Models {
    struct SystemVoipState : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "SystemVoipState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform::VoipMuteState GetMicrophoneMuted() {
            static BNM::Field<::Oculus_Platform::VoipMuteState> _field = GetClass().GetField(O("MicrophoneMuted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform::SystemVoipStatus GetStatus() {
            static BNM::Field<::Oculus_Platform::SystemVoipStatus> _field = GetClass().GetField(O("Status"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
