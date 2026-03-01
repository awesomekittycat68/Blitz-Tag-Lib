#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VoiceInfo.hpp"

namespace Photon_Voice {
    struct OpusCodec_Factory : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "OpusCodec").GetInnerClass("Factory");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename B, typename TP1 = void*>
        static void* CreateEncoder(::Photon_Voice::VoiceInfo i, TP1 logger) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("CreateEncoder"), {"i", "logger"});
            return _m.Call(i, logger);
        }
    };
}
