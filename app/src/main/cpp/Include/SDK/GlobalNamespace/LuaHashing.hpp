#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LuaHashing : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LuaHashing");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int k_enhancer = 1648465312;
        static constexpr int k_Seed = 352654597;
        static int ByteHash(uint8_t* bytes) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ByteHash"), {"bytes"});
            return _m.Call(bytes);
        }
        static int ByteHash(::BNM::Structures::Mono::String* bytes) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ByteHash"), {"bytes"});
            return _m.Call(bytes);
        }
        static int ByteHash(::BNM::Structures::Mono::Array<uint8_t>* bytes) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ByteHash"), {"bytes"});
            return _m.Call(bytes);
        }
        static int ByteHash(uint8_t* bytes, int len) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ByteHash"), {"bytes", "len"});
            return _m.Call(bytes, len);
        }
    };
}
