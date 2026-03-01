#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    struct ContinuousPropertyArray_PropertyComparer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "ContinuousPropertyArray").GetInnerClass("PropertyComparer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int Compare(::GorillaTag_Cosmetics::ContinuousProperty* x, ::GorillaTag_Cosmetics::ContinuousProperty* y) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compare"), {"x", "y"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(x, y);
        }
    };
}
