#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename TEnum>
    struct EnumData$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "EnumData`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<TEnum, int>* GetEnumToIndex() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<TEnum, int>*> _field = GetClass().GetField(O("EnumToIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<TEnum, int64_t>* GetEnumToLong() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<TEnum, int64_t>*> _field = GetClass().GetField(O("EnumToLong"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<TEnum, ::BNM::Structures::Mono::String*>* GetEnumToName() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<TEnum, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("EnumToName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, TEnum>* GetIndexToEnum() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, TEnum>*> _field = GetClass().GetField(O("IndexToEnum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsBitMaskCompatible() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsBitMaskCompatible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int64_t, TEnum>* GetLongToEnum() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int64_t, TEnum>*> _field = GetClass().GetField(O("LongToEnum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int64_t>* GetLongValues() {
            static BNM::Field<::BNM::Structures::Mono::Array<int64_t>*> _field = GetClass().GetField(O("LongValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxInt() {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxInt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetMaxLong() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("MaxLong"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        TEnum GetMaxValue() {
            static BNM::Field<TEnum> _field = GetClass().GetField(O("MaxValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMinInt() {
            static BNM::Field<int> _field = GetClass().GetField(O("MinInt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetMinLong() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("MinLong"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        TEnum GetMinValue() {
            static BNM::Field<TEnum> _field = GetClass().GetField(O("MinValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetNames() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("Names"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, TEnum>* GetNameToEnum() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, TEnum>*> _field = GetClass().GetField(O("NameToEnum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<TEnum>* GetValues() {
            static BNM::Field<::BNM::Structures::Mono::Array<TEnum>*> _field = GetClass().GetField(O("Values"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
