#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Json {
    struct ReflectionUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Json", "ReflectionUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Array<void*>* Get1ObjArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("_1ObjArray"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetEmptyObjects() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("EmptyObjects"));
            return _field.Get();
        }
        static void Set1ObjArray(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("_1ObjArray"));
            _field.Set(value);
        }
        static ::BNM::IL2CPP::Il2CppObject* GetAttribute(::BNM::IL2CPP::Il2CppObject* info, ::BNM::MonoType* type) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetAttribute"), {"info", "type"});
            return _m.Call(info, type);
        }
        static ::BNM::IL2CPP::Il2CppObject* GetAttribute(::BNM::MonoType* objectType, ::BNM::MonoType* attributeType) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetAttribute"), {"objectType", "attributeType"});
            return _m.Call(objectType, attributeType);
        }
        static ::PlayFab_Json::ReflectionUtils_ConstructorDelegate* GetConstructorByReflection(::BNM::IL2CPP::Il2CppObject* constructorInfo) {
            static BNM::Method<::PlayFab_Json::ReflectionUtils_ConstructorDelegate*> _m = GetClass().GetMethod(O("GetConstructorByReflection"), {"constructorInfo"});
            return _m.Call(constructorInfo);
        }
        static ::PlayFab_Json::ReflectionUtils_ConstructorDelegate* GetConstructorByReflection(::BNM::MonoType* type, ::BNM::Structures::Mono::Array<::BNM::MonoType*>* argsType) {
            static BNM::Method<::PlayFab_Json::ReflectionUtils_ConstructorDelegate*> _m = GetClass().GetMethod(O("GetConstructorByReflection"), {"type", "argsType"});
            return _m.Call(type, argsType);
        }
        static ::BNM::IL2CPP::Il2CppObject* GetConstructorInfo(::BNM::MonoType* type, ::BNM::Structures::Mono::Array<::BNM::MonoType*>* argsType) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetConstructorInfo"), {"type", "argsType"});
            return _m.Call(type, argsType);
        }
        static void* GetConstructors(::BNM::MonoType* type) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetConstructors"), {"type"});
            return _m.Call(type);
        }
        static ::PlayFab_Json::ReflectionUtils_ConstructorDelegate* GetContructor(::BNM::IL2CPP::Il2CppObject* constructorInfo) {
            static BNM::Method<::PlayFab_Json::ReflectionUtils_ConstructorDelegate*> _m = GetClass().GetMethod(O("GetContructor"), {"constructorInfo"});
            return _m.Call(constructorInfo);
        }
        static ::PlayFab_Json::ReflectionUtils_ConstructorDelegate* GetContructor(::BNM::MonoType* type, ::BNM::Structures::Mono::Array<::BNM::MonoType*>* argsType) {
            static BNM::Method<::PlayFab_Json::ReflectionUtils_ConstructorDelegate*> _m = GetClass().GetMethod(O("GetContructor"), {"type", "argsType"});
            return _m.Call(type, argsType);
        }
        static void* GetFields(::BNM::MonoType* type) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetFields"), {"type"});
            return _m.Call(type);
        }
        static ::BNM::MonoType* GetGenericListElementType(::BNM::MonoType* type) {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("GetGenericListElementType"), {"type"});
            return _m.Call(type);
        }
        static ::BNM::Structures::Mono::Array<::BNM::MonoType*>* GetGenericTypeArguments(::BNM::MonoType* type) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _m = GetClass().GetMethod(O("GetGenericTypeArguments"), {"type"});
            return _m.Call(type);
        }
        static ::PlayFab_Json::ReflectionUtils_GetDelegate* GetGetMethod(::BNM::IL2CPP::Il2CppObject* propertyInfo) {
            static BNM::Method<::PlayFab_Json::ReflectionUtils_GetDelegate*> _m = GetClass().GetMethod(O("GetGetMethod"), {"propertyInfo"});
            return _m.Call(propertyInfo);
        }
        static ::PlayFab_Json::ReflectionUtils_GetDelegate* GetGetMethod_1(::BNM::IL2CPP::Il2CppObject* fieldInfo) {
            static BNM::Method<::PlayFab_Json::ReflectionUtils_GetDelegate*> _m = GetClass().GetMethod(O("GetGetMethod"), {"fieldInfo"});
            return _m.Call(fieldInfo);
        }
        static ::PlayFab_Json::ReflectionUtils_GetDelegate* GetGetMethodByReflection(::BNM::IL2CPP::Il2CppObject* propertyInfo) {
            static BNM::Method<::PlayFab_Json::ReflectionUtils_GetDelegate*> _m = GetClass().GetMethod(O("GetGetMethodByReflection"), {"propertyInfo"});
            return _m.Call(propertyInfo);
        }
        static ::PlayFab_Json::ReflectionUtils_GetDelegate* GetGetMethodByReflection_1(::BNM::IL2CPP::Il2CppObject* fieldInfo) {
            static BNM::Method<::PlayFab_Json::ReflectionUtils_GetDelegate*> _m = GetClass().GetMethod(O("GetGetMethodByReflection"), {"fieldInfo"});
            return _m.Call(fieldInfo);
        }
        static ::BNM::IL2CPP::Il2CppObject* GetGetterMethodInfo(::BNM::IL2CPP::Il2CppObject* propertyInfo) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetGetterMethodInfo"), {"propertyInfo"});
            return _m.Call(propertyInfo);
        }
        static void* GetProperties(::BNM::MonoType* type) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetProperties"), {"type"});
            return _m.Call(type);
        }
        static ::PlayFab_Json::ReflectionUtils_SetDelegate* GetSetMethod(::BNM::IL2CPP::Il2CppObject* propertyInfo) {
            static BNM::Method<::PlayFab_Json::ReflectionUtils_SetDelegate*> _m = GetClass().GetMethod(O("GetSetMethod"), {"propertyInfo"});
            return _m.Call(propertyInfo);
        }
        static ::PlayFab_Json::ReflectionUtils_SetDelegate* GetSetMethod_1(::BNM::IL2CPP::Il2CppObject* fieldInfo) {
            static BNM::Method<::PlayFab_Json::ReflectionUtils_SetDelegate*> _m = GetClass().GetMethod(O("GetSetMethod"), {"fieldInfo"});
            return _m.Call(fieldInfo);
        }
        static ::PlayFab_Json::ReflectionUtils_SetDelegate* GetSetMethodByReflection(::BNM::IL2CPP::Il2CppObject* propertyInfo) {
            static BNM::Method<::PlayFab_Json::ReflectionUtils_SetDelegate*> _m = GetClass().GetMethod(O("GetSetMethodByReflection"), {"propertyInfo"});
            return _m.Call(propertyInfo);
        }
        static ::PlayFab_Json::ReflectionUtils_SetDelegate* GetSetMethodByReflection_1(::BNM::IL2CPP::Il2CppObject* fieldInfo) {
            static BNM::Method<::PlayFab_Json::ReflectionUtils_SetDelegate*> _m = GetClass().GetMethod(O("GetSetMethodByReflection"), {"fieldInfo"});
            return _m.Call(fieldInfo);
        }
        static ::BNM::IL2CPP::Il2CppObject* GetSetterMethodInfo(::BNM::IL2CPP::Il2CppObject* propertyInfo) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetSetterMethodInfo"), {"propertyInfo"});
            return _m.Call(propertyInfo);
        }
        static ::BNM::MonoType* GetTypeInfo(::BNM::MonoType* type) {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("GetTypeInfo"), {"type"});
            return _m.Call(type);
        }
        static bool IsAssignableFrom(::BNM::MonoType* type1, ::BNM::MonoType* type2) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAssignableFrom"), {"type1", "type2"});
            return _m.Call(type1, type2);
        }
        static bool IsNullableType(::BNM::MonoType* type) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsNullableType"), {"type"});
            return _m.Call(type);
        }
        static bool IsTypeDictionary(::BNM::MonoType* type) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTypeDictionary"), {"type"});
            return _m.Call(type);
        }
        static bool IsTypeGeneric(::BNM::MonoType* type) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTypeGeneric"), {"type"});
            return _m.Call(type);
        }
        static bool IsTypeGenericeCollectionInterface(::BNM::MonoType* type) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTypeGenericeCollectionInterface"), {"type"});
            return _m.Call(type);
        }
        static bool IsValueType(::BNM::MonoType* type) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValueType"), {"type"});
            return _m.Call(type);
        }
        template <typename TP0 = void*>
        static void* ToNullableType(TP0 obj, ::BNM::MonoType* nullableType) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ToNullableType"), {"obj", "nullableType"});
            return _m.Call(obj, nullableType);
        }
    };
}
