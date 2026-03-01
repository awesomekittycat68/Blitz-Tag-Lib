#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct JsonUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "JsonUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename T>
        static T FromJson(::BNM::Structures::Mono::String* s) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("FromJson"), {"s"});
            return _m.Call(s);
        }
        template <typename T>
        static T JsonDeserializeEventData(::BNM::Structures::Mono::String* s) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("JsonDeserializeEventData"), {"s"});
            return _m.Call(s);
        }
        template <typename T>
        static ::BNM::Structures::Mono::String* JsonSerializeEventData(T obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("JsonSerializeEventData"), {"obj"});
            return _m.Call(obj);
        }
        template <typename T>
        static ::BNM::Structures::Mono::String* ToJson(T obj, bool indent) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToJson"), {"obj", "indent"});
            return _m.Call(obj, indent);
        }
    };
}
