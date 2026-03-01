#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "UnityTag.hpp"

namespace GlobalNamespace {
    struct UnityTagsExt : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "UnityTagsExt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static bool CompareTag(::GameObject* g, ::GlobalNamespace::UnityTag tag) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CompareTag"), {"g", "tag"});
            return _m.Call(g, tag);
        }
        static bool CompareTag(::Component* c, ::GlobalNamespace::UnityTag tag) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CompareTag"), {"c", "tag"});
            return _m.Call(c, tag);
        }
        static void SetTag(::Component* c, ::GlobalNamespace::UnityTag tag) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTag"), {"c", "tag"});
            _m.Call(c, tag);
        }
        static void SetTag(::GameObject* g, ::GlobalNamespace::UnityTag tag) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTag"), {"g", "tag"});
            _m.Call(g, tag);
        }
        static ::GlobalNamespace::UnityTag ToTag(::BNM::Structures::Mono::String* s) {
            static BNM::Method<::GlobalNamespace::UnityTag> _m = GetClass().GetMethod(O("ToTag"), {"s"});
            return _m.Call(s);
        }
        static bool TryGetTag(::GameObject* g, ::GlobalNamespace::UnityTag& tag) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetTag"), {"g", "tag"});
            return _m.Call(g, &tag);
        }
        static bool TryGetTag(::Component* c, ::GlobalNamespace::UnityTag& tag) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetTag"), {"c", "tag"});
            return _m.Call(c, &tag);
        }
    };
}
