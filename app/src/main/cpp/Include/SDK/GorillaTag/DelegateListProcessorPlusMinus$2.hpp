#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ListProcessorAbstract$1.hpp"

namespace GorillaTag {
    template <typename T1, typename T2>
    struct DelegateListProcessorPlusMinus$2 : ::GorillaTag::ListProcessorAbstract$1<T2> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "DelegateListProcessorPlusMinus`2");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
