#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Json {
    struct PocoJsonSerializerStrategy : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Json", "PocoJsonSerializerStrategy");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Array<::BNM::MonoType*>* GetArrayConstructorParameterTypes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("ArrayConstructorParameterTypes"));
            return _field.Get();
        }
        void* GetConstructorCache() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ConstructorCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::MonoType*>* GetEmptyTypes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("EmptyTypes"));
            return _field.Get();
        }
        void* GetGetCache() {
            static BNM::Field<void*> _field = GetClass().GetField(O("GetCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetIso8601Format() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("Iso8601Format"));
            return _field.Get();
        }
        void* GetSetCache() {
            static BNM::Field<void*> _field = GetClass().GetField(O("SetCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetConstructorCache(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ConstructorCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGetCache(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("GetCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetCache(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("SetCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::PlayFab_Json::ReflectionUtils_ConstructorDelegate* ContructorDelegateFactory(::BNM::MonoType* key) {
            static BNM::Method<::PlayFab_Json::ReflectionUtils_ConstructorDelegate*> _m = GetClass().GetMethod(O("ContructorDelegateFactory"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        template <typename TP0 = void*>
        void* DeserializeObject(TP0 value, ::BNM::MonoType* type) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DeserializeObject"), {"value", "type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value, type);
        }
        void* GetterValueFactory(::BNM::MonoType* type) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetterValueFactory"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(type);
        }
        ::BNM::Structures::Mono::String* MapClrMemberNameToJsonFieldName(::BNM::IL2CPP::Il2CppObject* memberInfo) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("MapClrMemberNameToJsonFieldName"), {"memberInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(memberInfo);
        }
        void MapClrMemberNameToJsonFieldName(::BNM::IL2CPP::Il2CppObject* memberInfo, ::BNM::Structures::Mono::String*& jsonName, ::PlayFab_Json::JsonProperty*& jsonProp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MapClrMemberNameToJsonFieldName"), {"memberInfo", "jsonName", "jsonProp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(memberInfo, &jsonName, &jsonProp);
        }
        void* SerializeEnum(::BNM::IL2CPP::Il2CppObject* p) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("SerializeEnum"), {"p"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(p);
        }
        void* SetterValueFactory(::BNM::MonoType* type) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("SetterValueFactory"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(type);
        }
        template <typename TP0 = void*>
        bool TrySerializeKnownTypes(TP0 input, void*& output) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TrySerializeKnownTypes"), {"input", "output"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(input, &output);
        }
        template <typename TP0 = void*>
        bool TrySerializeNonPrimitiveObject(TP0 input, void*& output) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TrySerializeNonPrimitiveObject"), {"input", "output"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(input, &output);
        }
        template <typename TP0 = void*>
        bool TrySerializeUnknownTypes(TP0 input, void*& output) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TrySerializeUnknownTypes"), {"input", "output"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(input, &output);
        }
    };
}
