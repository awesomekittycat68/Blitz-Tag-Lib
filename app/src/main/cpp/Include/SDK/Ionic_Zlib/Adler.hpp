#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Zlib {
    struct Adler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "Adler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static uint32_t GetBASE() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("BASE"));
            return _field.Get();
        }
        static int GetNMAX() {
            static BNM::Field<int> _field = GetClass().GetField(O("NMAX"));
            return _field.Get();
        }
        static uint32_t Adler32(uint32_t adler, ::BNM::Structures::Mono::Array<uint8_t>* buf, int index, int len) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("Adler32"), {"adler", "buf", "index", "len"});
            return _m.Call(adler, buf, index, len);
        }
    };
}
