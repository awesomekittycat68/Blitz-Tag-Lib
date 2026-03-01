#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Oculus_Platform/LivestreamingStartStatus.hpp"

namespace Oculus_Platform_Models {
    struct LivestreamingStartResult : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "LivestreamingStartResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform::LivestreamingStartStatus GetStreamingResult() {
            static BNM::Field<::Oculus_Platform::LivestreamingStartStatus> _field = GetClass().GetField(O("StreamingResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
