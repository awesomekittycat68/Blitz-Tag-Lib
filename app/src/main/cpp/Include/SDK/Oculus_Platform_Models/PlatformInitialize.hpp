#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Oculus_Platform/PlatformInitializeResult.hpp"

namespace Oculus_Platform_Models {
    struct PlatformInitialize : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "PlatformInitialize");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform::PlatformInitializeResult GetResult() {
            static BNM::Field<::Oculus_Platform::PlatformInitializeResult> _field = GetClass().GetField(O("Result"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
