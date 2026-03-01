#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTEnumValueMap$1_EnumValueToUnityObject.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct GTEnumValueMap$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTEnumValueMap`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<int64_t, T>* GetEnumValueToUnityObject() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int64_t, T>*> _field = GetClass().GetField(O("_enumValue_to_unityObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMEnumScriptGuid() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("m_enumScriptGuid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnumValueToUnityObject(::BNM::Structures::Mono::Dictionary<int64_t, T>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int64_t, T>*> _field = GetClass().GetField(O("_enumValue_to_unityObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMEnumScriptGuid(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("m_enumScriptGuid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* get_Values() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Values"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool TryGet(int64_t i, T& o) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGet"), {"i", "o"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(i, &o);
        }
    };
}
