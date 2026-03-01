#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTColor_HSVRanges.hpp"

namespace GorillaTag {
    struct GTColor : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "GTColor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Unity::Color RandomHSV(::GorillaTag::GTColor_HSVRanges ranges) {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("RandomHSV"), {"ranges"});
            return _m.Call(ranges);
        }
    };
}
