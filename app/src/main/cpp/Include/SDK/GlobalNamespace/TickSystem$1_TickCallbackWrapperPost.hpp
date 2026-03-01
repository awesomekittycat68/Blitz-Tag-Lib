#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TickSystem$1_TickCallbackWrapper$1.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct TickSystem$1_TickCallbackWrapperPost : ::GlobalNamespace::TickSystem$1_TickCallbackWrapper$1<T, void*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TickSystem`1").GetInnerClass("TickCallbackWrapperPost");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void CallBack() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CallBack"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
