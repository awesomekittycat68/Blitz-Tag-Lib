#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AppAgeCategory.hpp"

namespace Oculus_Platform {
    struct UserAgeCategory : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "UserAgeCategory");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Oculus_Platform::Request* Report(::Oculus_Platform::AppAgeCategory age_category) {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("Report"), {"age_category"});
            return _m.Call(age_category);
        }
    };
}
