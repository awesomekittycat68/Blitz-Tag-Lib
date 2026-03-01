#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity {
    struct VoiceConnection_ValidateRemoteLinkDelegate : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "VoiceConnection").GetInnerClass("ValidateRemoteLinkDelegate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP2 = void*>
        void* BeginInvoke(::Photon_Voice_Unity::RemoteVoiceLink* link, ::BNM::IL2CPP::Il2CppObject* callback, TP2 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"link", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(link, callback, object);
        }
        template <typename TP0 = void*>
        bool EndInvoke(TP0 result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(result);
        }
        bool Invoke(::Photon_Voice_Unity::RemoteVoiceLink* link) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Invoke"), {"link"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(link);
        }
    };
}
