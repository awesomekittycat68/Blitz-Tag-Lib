#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct AprilFools : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AprilFools");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int changeIntervalSeconds = 300;
        static constexpr int lerpIntervalSeconds = 120;
        static constexpr float minRange = 0.5f;
        static constexpr float maxRange = 2.0f;
        static constexpr float excludeRangeStart = 0.75f;
        static constexpr float excludeRangeEnd = 1.25f;
        static float GenerateSmoothTarget(::BNM::Structures::Mono::String* username, ::BNM::Structures::Mono::String* roomName, ::BNM::Structures::Mono::String* areaName) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GenerateSmoothTarget"), {"username", "roomName", "areaName"});
            return _m.Call(username, roomName, areaName);
        }
        static float GenerateTarget(::BNM::Structures::Mono::String* username, ::BNM::Structures::Mono::String* roomName, ::BNM::Structures::Mono::String* areaName, int startTime) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GenerateTarget"), {"username", "roomName", "areaName", "startTime"});
            return _m.Call(username, roomName, areaName, startTime);
        }
        static int mod(int x, int m) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("mod"), {"x", "m"});
            return _m.Call(x, m);
        }
        static float Slerp(float a, float b, float t) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Slerp"), {"a", "b", "t"});
            return _m.Call(a, b, t);
        }
        static float SmoothSlerp(float a, float b, float t) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("SmoothSlerp"), {"a", "b", "t"});
            return _m.Call(a, b, t);
        }
    };
}
