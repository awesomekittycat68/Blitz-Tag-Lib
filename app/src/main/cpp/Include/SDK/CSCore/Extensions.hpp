#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace CSCore {
    struct Extensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CSCore", "Extensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static bool IsIeeeFloat(::CSCore::WaveFormat* waveFormat) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsIeeeFloat"), {"waveFormat"});
            return _m.Call(waveFormat);
        }
        static bool IsPCM(::CSCore::WaveFormat* waveFormat) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPCM"), {"waveFormat"});
            return _m.Call(waveFormat);
        }
    };
}
