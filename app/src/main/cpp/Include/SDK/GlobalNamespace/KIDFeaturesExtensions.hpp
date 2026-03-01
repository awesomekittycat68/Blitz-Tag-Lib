#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EKIDFeatures.hpp"

namespace GlobalNamespace {
    struct KIDFeaturesExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDFeaturesExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void* FromString(::BNM::Structures::Mono::String* name) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("FromString"), {"name"});
            return _m.Call(name);
        }
        static ::BNM::Structures::Mono::String* ToStandardisedString(::GlobalNamespace::EKIDFeatures feature) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToStandardisedString"), {"feature"});
            return _m.Call(feature);
        }
        static bool TryGetFromString(::BNM::Structures::Mono::String* name, ::GlobalNamespace::EKIDFeatures& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetFromString"), {"name", "result"});
            return _m.Call(name, &result);
        }
    };
}
