#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BurstClassInfo_ClassInfo.hpp"

namespace GlobalNamespace {
    struct BurstClassInfo_ClassList : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BurstClassInfo").GetInnerClass("ClassList");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void* GetInfoFields() {
            static BNM::Field<void*> _field = GetClass().GetField(O("InfoFields"));
            return _field.Get();
        }
    };
}
