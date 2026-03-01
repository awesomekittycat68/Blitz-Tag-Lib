#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "OpusCodec_Encoder$1.hpp"

namespace Photon_Voice {
    struct OpusCodec_EncoderShort : ::Photon_Voice::OpusCodec_Encoder$1<int16_t> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "OpusCodec").GetInnerClass("EncoderShort");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* encodeTyped(::BNM::Structures::Mono::Array<int16_t>* buf) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("encodeTyped"), {"buf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buf);
        }
    };
}
