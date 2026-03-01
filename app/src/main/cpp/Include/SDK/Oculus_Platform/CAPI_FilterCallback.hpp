#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct CAPI_FilterCallback : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "CAPI").GetInnerClass("FilterCallback");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP5 = void*>
        void* BeginInvoke(::BNM::Structures::Mono::Array<int16_t>* pcmData, ::BNM::Types::nuint pcmDataLength, int frequency, int numChannels, ::BNM::IL2CPP::Il2CppObject* callback, TP5 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"pcmData", "pcmDataLength", "frequency", "numChannels", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pcmData, pcmDataLength, frequency, numChannels, callback, object);
        }
        template <typename TP0 = void*>
        void EndInvoke(TP0 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void Invoke(::BNM::Structures::Mono::Array<int16_t>* pcmData, ::BNM::Types::nuint pcmDataLength, int frequency, int numChannels) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"pcmData", "pcmDataLength", "frequency", "numChannels"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pcmData, pcmDataLength, frequency, numChannels);
        }
    };
}
