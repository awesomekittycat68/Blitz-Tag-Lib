#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AudioUtil_LevelMeter$1.hpp"

namespace Photon_Voice {
    struct AudioUtil_LevelMeterShort : ::Photon_Voice::AudioUtil_LevelMeter$1<int16_t> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "AudioUtil").GetInnerClass("LevelMeterShort");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<int16_t>* Process(::BNM::Structures::Mono::Array<int16_t>* buf) {
            static BNM::Method<::BNM::Structures::Mono::Array<int16_t>*> _m = GetClass().GetMethod(O("Process"), {"buf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buf);
        }
    };
}
