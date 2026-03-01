#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct BurstClassInfo_ClassList_MetatableNames$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BurstClassInfo").GetInnerClass("ClassList").GetInnerClass("MetatableNames`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void* GetName() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Name"));
            return _field.Get();
        }
        static void SetName(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Name"));
            _field.Set(value);
        }
    };
}
