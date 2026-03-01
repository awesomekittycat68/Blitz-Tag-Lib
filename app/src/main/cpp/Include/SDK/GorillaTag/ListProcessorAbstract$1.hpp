#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ListProcessor$1.hpp"

namespace GorillaTag {
    template <typename T>
    struct ListProcessorAbstract$1 : ::GorillaTag::ListProcessor$1<T> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "ListProcessorAbstract`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void ProcessItem(T& item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessItem"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&item);
        }
    };
}
