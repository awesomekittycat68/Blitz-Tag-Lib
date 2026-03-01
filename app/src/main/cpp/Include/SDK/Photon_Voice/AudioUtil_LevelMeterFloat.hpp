#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AudioUtil_LevelMeter$1.hpp"

namespace Photon_Voice {
    struct AudioUtil_LevelMeterFloat : ::Photon_Voice::AudioUtil_LevelMeter$1<float> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "AudioUtil").GetInnerClass("LevelMeterFloat");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<float>* Process(::BNM::Structures::Mono::Array<float>* buf) {
            static BNM::Method<::BNM::Structures::Mono::Array<float>*> _m = GetClass().GetMethod(O("Process"), {"buf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buf);
        }
    };
}
