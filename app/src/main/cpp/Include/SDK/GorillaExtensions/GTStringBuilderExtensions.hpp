#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaExtensions {
    struct GTStringBuilderExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaExtensions", "GTStringBuilderExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*>
        static void* GetSegmentsOfMem(TP0 sb, int maxCharsPerSegment) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetSegmentsOfMem"), {"sb", "maxCharsPerSegment"});
            return _m.Call(sb, maxCharsPerSegment);
        }
        template <typename TP0 = void*>
        static void GTAddPath(TP0 stringBuilderToAddTo, ::GameObject* gameObject) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTAddPath"), {"stringBuilderToAddTo", "gameObject"});
            _m.Call(stringBuilderToAddTo, gameObject);
        }
        template <typename TP0 = void*>
        static void GTAddPath(TP0 stringBuilderToAddTo, ::Transform* transform) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTAddPath"), {"stringBuilderToAddTo", "transform"});
            _m.Call(stringBuilderToAddTo, transform);
        }
        template <typename TP0 = void*>
        static void GTMany(TP0 sb, ::BNM::Structures::Mono::String* a, ::BNM::Structures::Mono::String* b) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTMany"), {"sb", "a", "b"});
            _m.Call(sb, a, b);
        }
        template <typename TP0 = void*>
        static void GTMany(TP0 sb, ::BNM::Structures::Mono::String* a, ::BNM::Structures::Mono::String* b, ::BNM::Structures::Mono::String* c) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTMany"), {"sb", "a", "b", "c"});
            _m.Call(sb, a, b, c);
        }
        template <typename TP0 = void*>
        static void GTMany(TP0 sb, ::BNM::Structures::Mono::String* a, ::BNM::Structures::Mono::String* b, ::BNM::Structures::Mono::String* c, ::BNM::Structures::Mono::String* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTMany"), {"sb", "a", "b", "c", "d"});
            _m.Call(sb, a, b, c, d);
        }
        template <typename TP0 = void*>
        static void GTMany(TP0 sb, ::BNM::Structures::Mono::String* a, ::BNM::Structures::Mono::String* b, ::BNM::Structures::Mono::String* c, ::BNM::Structures::Mono::String* d, ::BNM::Structures::Mono::String* e) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTMany"), {"sb", "a", "b", "c", "d", "e"});
            _m.Call(sb, a, b, c, d, e);
        }
        template <typename TP0 = void*>
        static void GTMany(TP0 sb, ::BNM::Structures::Mono::String* a, ::BNM::Structures::Mono::String* b, ::BNM::Structures::Mono::String* c, ::BNM::Structures::Mono::String* d, ::BNM::Structures::Mono::String* e, ::BNM::Structures::Mono::String* f) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTMany"), {"sb", "a", "b", "c", "d", "e", "f"});
            _m.Call(sb, a, b, c, d, e, f);
        }
        template <typename TP0 = void*>
        static void GTMany(TP0 sb, ::BNM::Structures::Mono::String* a, ::BNM::Structures::Mono::String* b, ::BNM::Structures::Mono::String* c, ::BNM::Structures::Mono::String* d, ::BNM::Structures::Mono::String* e, ::BNM::Structures::Mono::String* f, ::BNM::Structures::Mono::String* g) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTMany"), {"sb", "a", "b", "c", "d", "e", "f", "g"});
            _m.Call(sb, a, b, c, d, e, f, g);
        }
        template <typename TP0 = void*>
        static void GTMany(TP0 sb, ::BNM::Structures::Mono::String* a, ::BNM::Structures::Mono::String* b, ::BNM::Structures::Mono::String* c, ::BNM::Structures::Mono::String* d, ::BNM::Structures::Mono::String* e, ::BNM::Structures::Mono::String* f, ::BNM::Structures::Mono::String* g, ::BNM::Structures::Mono::String* h) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTMany"), {"sb", "a", "b", "c", "d", "e", "f", "g", "h"});
            _m.Call(sb, a, b, c, d, e, f, g, h);
        }
        template <typename TP0 = void*>
        static void GTMany(TP0 sb, ::BNM::Structures::Mono::String* a, ::BNM::Structures::Mono::String* b, ::BNM::Structures::Mono::String* c, ::BNM::Structures::Mono::String* d, ::BNM::Structures::Mono::String* e, ::BNM::Structures::Mono::String* f, ::BNM::Structures::Mono::String* g, ::BNM::Structures::Mono::String* h, ::BNM::Structures::Mono::String* i) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTMany"), {"sb", "a", "b", "c", "d", "e", "f", "g", "h", "i"});
            _m.Call(sb, a, b, c, d, e, f, g, h, i);
        }
        template <typename TP0 = void*>
        static void GTMany(TP0 sb, ::BNM::Structures::Mono::String* a, ::BNM::Structures::Mono::String* b, ::BNM::Structures::Mono::String* c, ::BNM::Structures::Mono::String* d, ::BNM::Structures::Mono::String* e, ::BNM::Structures::Mono::String* f, ::BNM::Structures::Mono::String* g, ::BNM::Structures::Mono::String* h, ::BNM::Structures::Mono::String* i, ::BNM::Structures::Mono::String* j) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTMany"), {"sb", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j"});
            _m.Call(sb, a, b, c, d, e, f, g, h, i, j);
        }
        template <typename TP0 = void*>
        static void Q(TP0 sb, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Q"), {"sb", "value"});
            _m.Call(sb, value);
        }
    };
}
