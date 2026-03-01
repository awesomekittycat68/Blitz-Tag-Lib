#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Utilities {
    struct PathUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Utilities", "PathUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* kFwdSlash = "/";
        static ::BNM::Structures::Mono::Array<char>* GetKPathSeps() {
            static BNM::Field<::BNM::Structures::Mono::Array<char>*> _field = GetClass().GetField(O("kPathSeps"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* Resolve(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* subPaths) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Resolve"), {"subPaths"});
            return _m.Call(subPaths);
        }
    };
}
