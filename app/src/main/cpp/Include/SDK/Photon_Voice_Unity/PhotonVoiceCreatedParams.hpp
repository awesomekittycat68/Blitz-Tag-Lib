#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity {
    struct PhotonVoiceCreatedParams : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "PhotonVoiceCreatedParams");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Voice::LocalVoice* GetVoice() {
            static BNM::Method<::Photon_Voice::LocalVoice*> _method = GetClass().GetMethod(O("get_Voice"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetVoice(::Photon_Voice::LocalVoice* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Voice"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void* get_AudioDesc() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_AudioDesc"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice::LocalVoice* get_Voice() {
            static BNM::Method<::Photon_Voice::LocalVoice*> _m = GetClass().GetMethod(O("get_Voice"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void set_AudioDesc(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AudioDesc"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Voice(::Photon_Voice::LocalVoice* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Voice"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
