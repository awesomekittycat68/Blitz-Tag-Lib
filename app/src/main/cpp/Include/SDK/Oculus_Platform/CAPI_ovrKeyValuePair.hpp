#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "KeyValuePairType.hpp"

namespace Oculus_Platform {
    struct CAPI_ovrKeyValuePair : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "CAPI").GetInnerClass("ovrKeyValuePair");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        double GetDoubleValue() {
            static BNM::Field<double> _field = GetClass().GetField(O("doubleValue_"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIntValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("intValue_"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("key_"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetStringValue() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("stringValue_"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform::KeyValuePairType GetValueType() {
            static BNM::Field<::Oculus_Platform::KeyValuePairType> _field = GetClass().GetField(O("valueType_"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDoubleValue(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("doubleValue_"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIntValue(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("intValue_"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKey(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("key_"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStringValue(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("stringValue_"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValueType(::Oculus_Platform::KeyValuePairType value) {
            static BNM::Field<::Oculus_Platform::KeyValuePairType> _field = GetClass().GetField(O("valueType_"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
