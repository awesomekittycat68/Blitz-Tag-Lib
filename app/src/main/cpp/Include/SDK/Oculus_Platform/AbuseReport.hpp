#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ReportRequestResponse.hpp"

namespace Oculus_Platform {
    struct AbuseReport : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "AbuseReport");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Oculus_Platform::Request* ReportRequestHandled(::Oculus_Platform::ReportRequestResponse response) {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("ReportRequestHandled"), {"response"});
            return _m.Call(response);
        }
    };
}
