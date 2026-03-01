#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    struct OpusCodec_Util : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "OpusCodec").GetInnerClass("Util");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int bestEncoderSampleRate(int f) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("bestEncoderSampleRate"), {"f"});
            return _m.Call(f);
        }
    };
}
