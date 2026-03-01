#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ColorUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ColorUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t kMaxByteForOverexposedColor = 191;
        static ::BNM::Structures::Unity::Color ComposeHDR(::BNM::Structures::Unity::Color baseColor, float intensity) {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("ComposeHDR"), {"baseColor", "intensity"});
            return _m.Call(baseColor, intensity);
        }
        static void* DecomposeHDR(::BNM::Structures::Unity::Color hdrColor) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DecomposeHDR"), {"hdrColor"});
            return _m.Call(hdrColor);
        }
        static ::BNM::Structures::Unity::Color WithAlpha(::BNM::Structures::Unity::Color c, float alpha) {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("WithAlpha"), {"c", "alpha"});
            return _m.Call(c, alpha);
        }
        template <typename TP0 = void*>
        static void* WithAlpha(TP0 c, uint8_t alpha) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("WithAlpha"), {"c", "alpha"});
            return _m.Call(c, alpha);
        }
    };
}
