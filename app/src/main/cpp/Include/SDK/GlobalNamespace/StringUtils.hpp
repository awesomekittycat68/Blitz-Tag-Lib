#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct StringUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "StringUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* kForwardSlash = "/";
        static constexpr const char* kBackSlash = "/";
        static constexpr const char* kBackTick = "`";
        static constexpr const char* kMinusDash = "-";
        static constexpr const char* kPeriod = ".";
        static constexpr const char* kUnderScore = "_";
        static constexpr const char* kColon = ":";
        static ::BNM::Structures::Mono::String* Capitalize(::BNM::Structures::Mono::String* s) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Capitalize"), {"s"});
            return _m.Call(s);
        }
        static ::BNM::Structures::Mono::String* Combine(::BNM::Structures::Mono::String* separator, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* values) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Combine"), {"separator", "values"});
            return _m.Call(separator, values);
        }
        static ::BNM::Structures::Mono::String* ComputeSHV2(::BNM::Structures::Mono::String* s) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ComputeSHV2"), {"s"});
            return _m.Call(s);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::String* Concat(TP0 source) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Concat"), {"source"});
            return _m.Call(source);
        }
        static bool IsNullOrEmpty(::BNM::Structures::Mono::String* s) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsNullOrEmpty"), {"s"});
            return _m.Call(s);
        }
        static bool IsNullOrWhiteSpace(::BNM::Structures::Mono::String* s) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsNullOrWhiteSpace"), {"s"});
            return _m.Call(s);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::String* Join(TP0 source, ::BNM::Structures::Mono::String* separator) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Join"), {"source", "separator"});
            return _m.Call(source, separator);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::String* Join(TP0 source, char separator) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Join"), {"source", "separator"});
            return _m.Call(source, separator);
        }
        static ::BNM::Structures::Mono::String* RemoveAll(::BNM::Structures::Mono::String* s, ::BNM::Structures::Mono::String* value, int mode) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("RemoveAll"), {"s", "value", "mode"});
            return _m.Call(s, value, mode);
        }
        static ::BNM::Structures::Mono::String* RemoveAll(::BNM::Structures::Mono::String* s, char value, int mode) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("RemoveAll"), {"s", "value", "mode"});
            return _m.Call(s, value, mode);
        }
        static ::BNM::Structures::Mono::String* RemoveBothEnds(::BNM::Structures::Mono::String* s, ::BNM::Structures::Mono::String* value, int comparison) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("RemoveBothEnds"), {"s", "value", "comparison"});
            return _m.Call(s, value, comparison);
        }
        static ::BNM::Structures::Mono::String* RemoveEnd(::BNM::Structures::Mono::String* s, ::BNM::Structures::Mono::String* value, int comparison) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("RemoveEnd"), {"s", "value", "comparison"});
            return _m.Call(s, value, comparison);
        }
        static ::BNM::Structures::Mono::String* RemoveStart(::BNM::Structures::Mono::String* s, ::BNM::Structures::Mono::String* value, int comparison) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("RemoveStart"), {"s", "value", "comparison"});
            return _m.Call(s, value, comparison);
        }
        static ::BNM::Structures::Mono::String* ToAlphaNumeric(::BNM::Structures::Mono::String* s) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToAlphaNumeric"), {"s"});
            return _m.Call(s);
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* ToBytesASCII(::BNM::Structures::Mono::String* s) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("ToBytesASCII"), {"s"});
            return _m.Call(s);
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* ToBytesUnicode(::BNM::Structures::Mono::String* s) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("ToBytesUnicode"), {"s"});
            return _m.Call(s);
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* ToBytesUTF8(::BNM::Structures::Mono::String* s) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("ToBytesUTF8"), {"s"});
            return _m.Call(s);
        }
        static ::BNM::Structures::Mono::String* ToQueryString(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToQueryString"), {"d"});
            return _m.Call(d);
        }
        static ::BNM::Structures::Mono::String* ToUpperCamelCase(::BNM::Structures::Mono::String* input) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToUpperCamelCase"), {"input"});
            return _m.Call(input);
        }
        static ::BNM::Structures::Mono::String* ToUpperCaseFromCamelCase(::BNM::Structures::Mono::String* input) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToUpperCaseFromCamelCase"), {"input"});
            return _m.Call(input);
        }
        static ::BNM::Structures::Mono::String* TrailingSpace(::BNM::Structures::Mono::String* s) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("TrailingSpace"), {"s"});
            return _m.Call(s);
        }
    };
}
