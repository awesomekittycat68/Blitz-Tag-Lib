#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Utilities {
    struct GTProfiler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Utilities", "GTProfiler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Utilities::GTProfiler* BeginSample(::BNM::Structures::Mono::String* sampleName) {
            static BNM::Method<::Utilities::GTProfiler*> _m = GetClass().GetMethod(O("BeginSample"), {"sampleName"});
            return _m.Call(sampleName);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
