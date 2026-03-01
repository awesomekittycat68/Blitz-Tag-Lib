#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct EnumUtilExt : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "EnumUtilExt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TEnum>
        static int GetIndex(TEnum e) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetIndex"), {"e"});
            return _m.Call(e);
        }
        template <typename TEnum>
        static int64_t GetLongValue(TEnum e) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("GetLongValue"), {"e"});
            return _m.Call(e);
        }
        template <typename TEnum>
        static ::BNM::Structures::Mono::String* GetName(TEnum e) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetName"), {"e"});
            return _m.Call(e);
        }
        template <typename TEnum>
        static TEnum GetNextValue(TEnum e) {
            static BNM::Method<TEnum> _m = GetClass().GetMethod(O("GetNextValue"), {"e"});
            return _m.Call(e);
        }
    };
}
