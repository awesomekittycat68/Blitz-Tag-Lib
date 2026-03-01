#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VoiceInfo.hpp"

namespace Photon_Voice {
    struct RemoteVoiceOptions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "RemoteVoiceOptions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetLogPrefix() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_logPrefix"));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Action<>* GetOnRemoteVoiceRemoveAction() {
            static BNM::Method<::BNM::Structures::Mono::Action<>*> _method = GetClass().GetMethod(O("get_OnRemoteVoiceRemoveAction"));
            return _method.Call();
        }
        void SetOnRemoteVoiceRemoveAction(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_OnRemoteVoiceRemoveAction"));
            _method.Call(value);
        }
        void* GetLogger() {
            static BNM::Field<void*> _field = GetClass().GetField(O("logger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::VoiceInfo GetVoiceInfo() {
            static BNM::Field<::Photon_Voice::VoiceInfo> _field = GetClass().GetField(O("voiceInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* get_Decoder() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Decoder"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_logPrefix() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_logPrefix"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Action<>* get_OnRemoteVoiceRemoveAction() {
            static BNM::Method<::BNM::Structures::Mono::Action<>*> _m = GetClass().GetMethod(O("get_OnRemoteVoiceRemoveAction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void set_Decoder(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Decoder"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_OnRemoteVoiceRemoveAction(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_OnRemoteVoiceRemoveAction"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
