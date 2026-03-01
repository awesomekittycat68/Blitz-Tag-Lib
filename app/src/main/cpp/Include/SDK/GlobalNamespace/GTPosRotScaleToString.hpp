#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GTPosRotScaleToString : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTPosRotScaleToString");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* k_LocalPRSLabel = "LocalPRS";
        static constexpr const char* k_WorldPRSLabel = "WorldPRS";
        static bool ParseIsWorldSpace(::BNM::Structures::Mono::String* input) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ParseIsWorldSpace"), {"input"});
            return _m.Call(input);
        }
        static ::BNM::Structures::Mono::String* ParseParentPath(::BNM::Structures::Mono::String* input) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ParseParentPath"), {"input"});
            return _m.Call(input);
        }
        static ::BNM::Structures::Unity::Vector3 StringToVector3(::BNM::IL2CPP::Il2CppObject* match) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("StringToVector3"), {"match"});
            return _m.Call(match);
        }
        static ::BNM::Structures::Mono::String* ToString_1(::BNM::Structures::Unity::Vector3 pos, ::BNM::Structures::Unity::Vector3 rot, ::BNM::Structures::Unity::Vector3 scale, bool isWorldSpace, ::BNM::Structures::Mono::String* parentPath) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"), {"pos", "rot", "scale", "isWorldSpace", "parentPath"});
            return _m.Call(pos, rot, scale, isWorldSpace, parentPath);
        }
        static bool TryParsePos(::BNM::Structures::Mono::String* input, ::BNM::Structures::Unity::Vector3& v) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParsePos"), {"input", "v"});
            return _m.Call(input, &v);
        }
        static bool TryParseRot(::BNM::Structures::Mono::String* input, ::BNM::Structures::Unity::Vector3& v) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseRot"), {"input", "v"});
            return _m.Call(input, &v);
        }
        static bool TryParseScale(::BNM::Structures::Mono::String* input, ::BNM::Structures::Unity::Vector3& v) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseScale"), {"input", "v"});
            return _m.Call(input, &v);
        }
        static bool TryParseVec3(::BNM::Structures::Mono::String* input, ::BNM::Structures::Unity::Vector3& v) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseVec3"), {"input", "v"});
            return _m.Call(input, &v);
        }
        static bool TryParseVec3_internal(::BNM::IL2CPP::Il2CppObject* regex, ::BNM::Structures::Mono::String* input, ::BNM::Structures::Unity::Vector3& v) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseVec3_internal"), {"regex", "input", "v"});
            return _m.Call(regex, input, &v);
        }
        static ::BNM::Structures::Mono::String* ValToStr(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ValToStr"), {"v"});
            return _m.Call(v);
        }
    };
}
