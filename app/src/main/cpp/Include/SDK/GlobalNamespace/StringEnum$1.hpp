#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename TEnum>
    struct StringEnum$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "StringEnum`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        TEnum GetValue() {
            static BNM::Method<TEnum> _method = GetClass().GetMethod(O("get_Value"));
            return _method.Call();
        }
        TEnum GetMEnumValue() {
            static BNM::Field<TEnum> _field = GetClass().GetField(O("m_EnumValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMEnumValue(TEnum value) {
            static BNM::Field<TEnum> _field = GetClass().GetField(O("m_EnumValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        bool Equals_1(TP0 obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        TEnum get_Value() {
            static BNM::Method<TEnum> _m = GetClass().GetMethod(O("get_Value"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
