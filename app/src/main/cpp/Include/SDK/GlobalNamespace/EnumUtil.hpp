#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct EnumUtil : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "EnumUtil");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TEnum>
        static int EnumToIndex(TEnum e) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("EnumToIndex"), {"e"});
            return _m.Call(e);
        }
        template <typename TEnum>
        static int64_t EnumToLong(TEnum e) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("EnumToLong"), {"e"});
            return _m.Call(e);
        }
        template <typename TEnum>
        static ::BNM::Structures::Mono::String* EnumToName(TEnum e) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("EnumToName"), {"e"});
            return _m.Call(e);
        }
        template <typename TEnum>
        static int GetIndex(TEnum value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetIndex"), {"value"});
            return _m.Call(value);
        }
        template <typename TEnum>
        static int64_t GetLongValue(TEnum value) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("GetLongValue"), {"value"});
            return _m.Call(value);
        }
        template <typename TEnum>
        static ::BNM::Structures::Mono::Array<int64_t>* GetLongValues() {
            static BNM::Method<::BNM::Structures::Mono::Array<int64_t>*> _m = GetClass().GetMethod(O("GetLongValues"));
            return _m.Call();
        }
        template <typename TEnum>
        static ::BNM::Structures::Mono::String* GetName(TEnum value) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetName"), {"value"});
            return _m.Call(value);
        }
        template <typename TEnum>
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetNames() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("GetNames"));
            return _m.Call();
        }
        template <typename TEnum>
        static TEnum GetValue(int index) {
            static BNM::Method<TEnum> _m = GetClass().GetMethod(O("GetValue"), {"index"});
            return _m.Call(index);
        }
        template <typename TEnum>
        static TEnum GetValue(::BNM::Structures::Mono::String* name) {
            static BNM::Method<TEnum> _m = GetClass().GetMethod(O("GetValue"), {"name"});
            return _m.Call(name);
        }
        template <typename TEnum>
        static TEnum GetValue(int64_t longValue) {
            static BNM::Method<TEnum> _m = GetClass().GetMethod(O("GetValue"), {"longValue"});
            return _m.Call(longValue);
        }
        template <typename TEnum>
        static ::BNM::Structures::Mono::Array<TEnum>* GetValues() {
            static BNM::Method<::BNM::Structures::Mono::Array<TEnum>*> _m = GetClass().GetMethod(O("GetValues"));
            return _m.Call();
        }
        template <typename TEnum>
        static TEnum IndexToEnum(int i) {
            static BNM::Method<TEnum> _m = GetClass().GetMethod(O("IndexToEnum"), {"i"});
            return _m.Call(i);
        }
        template <typename TEnum>
        static TEnum LongToEnum(int64_t l) {
            static BNM::Method<TEnum> _m = GetClass().GetMethod(O("LongToEnum"), {"l"});
            return _m.Call(l);
        }
        template <typename TEnum>
        static TEnum NameToEnum(::BNM::Structures::Mono::String* n) {
            static BNM::Method<TEnum> _m = GetClass().GetMethod(O("NameToEnum"), {"n"});
            return _m.Call(n);
        }
        template <typename TEnum>
        static ::BNM::Structures::Mono::Array<TEnum>* SplitBitmask(TEnum bitmask) {
            static BNM::Method<::BNM::Structures::Mono::Array<TEnum>*> _m = GetClass().GetMethod(O("SplitBitmask"), {"bitmask"});
            return _m.Call(bitmask);
        }
        template <typename TEnum>
        static ::BNM::Structures::Mono::Array<TEnum>* SplitBitmask(int64_t bitmaskLong) {
            static BNM::Method<::BNM::Structures::Mono::Array<TEnum>*> _m = GetClass().GetMethod(O("SplitBitmask"), {"bitmaskLong"});
            return _m.Call(bitmaskLong);
        }
    };
}
