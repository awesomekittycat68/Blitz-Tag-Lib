#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaExtensions {
    struct GTTextMeshProExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaExtensions", "GTTextMeshProExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP1 = void*>
        static void SetTextToZString(::TMP_Text* textMono, TP1 zStringBuilder) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTextToZString"), {"textMono", "zStringBuilder"});
            _m.Call(textMono, zStringBuilder);
        }
    };
}
