#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct StringExts : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "StringExts");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Array<char>* GetEscapeChars() {
            static BNM::Field<::BNM::Structures::Mono::Array<char>*> _field = GetClass().GetField(O("_escapeChars"));
            return _field.Get();
        }
        static void SetEscapeChars(::BNM::Structures::Mono::Array<char>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<char>*> _field = GetClass().GetField(O("_escapeChars"));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::String* EscapeCsv(::BNM::Structures::Mono::String* field) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("EscapeCsv"), {"field"});
            return _m.Call(field);
        }
    };
}
