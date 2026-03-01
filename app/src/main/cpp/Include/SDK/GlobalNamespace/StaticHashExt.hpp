#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct StaticHashExt : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "StaticHashExt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int GetStaticHash(int i) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetStaticHash"), {"i"});
            return _m.Call(i);
        }
        static int GetStaticHash(uint32_t u) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetStaticHash"), {"u"});
            return _m.Call(u);
        }
        static int GetStaticHash(float f) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetStaticHash"), {"f"});
            return _m.Call(f);
        }
        static int GetStaticHash(int64_t l) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetStaticHash"), {"l"});
            return _m.Call(l);
        }
        static int GetStaticHash(double d) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetStaticHash"), {"d"});
            return _m.Call(d);
        }
        static int GetStaticHash(bool b) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetStaticHash"), {"b"});
            return _m.Call(b);
        }
        template <typename TP0 = void*>
        static int GetStaticHash(TP0 dt) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetStaticHash"), {"dt"});
            return _m.Call(dt);
        }
        static int GetStaticHash(::BNM::Structures::Mono::String* s) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetStaticHash"), {"s"});
            return _m.Call(s);
        }
        static int GetStaticHash(::BNM::Structures::Mono::Array<uint8_t>* bytes) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetStaticHash"), {"bytes"});
            return _m.Call(bytes);
        }
    };
}
