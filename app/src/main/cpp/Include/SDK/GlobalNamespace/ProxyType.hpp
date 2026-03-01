#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ProxyType : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProxyType");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetAssembly() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_Assembly"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetAssemblyQualifiedName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_AssemblyQualifiedName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::MonoType* GetBaseType() {
            static BNM::Method<::BNM::MonoType*> _method = GetClass().GetMethod(O("get_BaseType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetFullName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_FullName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* GetModule() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_Module"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_Name"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetNamespace() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_Namespace"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::MonoType* GetUnderlyingSystemType() {
            static BNM::Method<::BNM::MonoType*> _method = GetClass().GetMethod(O("get_UnderlyingSystemType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::MonoType* GetSelf() {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("_self"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTypeName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_typeName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::InvalidType* GetKInvalidType() {
            static BNM::Field<::GlobalNamespace::InvalidType*> _field = GetClass().GetField(O("kInvalidType"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetKPrefix() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("kPrefix"));
            return _field.Get();
        }
        void SetSelf(::BNM::MonoType* value) {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("_self"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetKInvalidType(::GlobalNamespace::InvalidType* value) {
            static BNM::Field<::GlobalNamespace::InvalidType*> _field = GetClass().GetField(O("kInvalidType"));
            _field.Set(value);
        }
        ::BNM::IL2CPP::Il2CppObject* get_Assembly() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_Assembly"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_AssemblyQualifiedName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_AssemblyQualifiedName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::MonoType* get_BaseType() {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("get_BaseType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_FullName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_FullName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_GUID() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_GUID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* get_Module() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_Module"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_Name() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_Name"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_Namespace() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_Namespace"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::MonoType* get_UnderlyingSystemType() {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("get_UnderlyingSystemType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* GetAttributeFlagsImpl() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetAttributeFlagsImpl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*, typename TP2 = void*>
        ::BNM::IL2CPP::Il2CppObject* GetConstructorImpl(TP0 bindingAttr, ::BNM::IL2CPP::Il2CppObject* binder, TP2 callConvention, ::BNM::Structures::Mono::Array<::BNM::MonoType*>* types, ::BNM::Structures::Mono::Array<void*>* modifiers) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetConstructorImpl"), {"bindingAttr", "binder", "callConvention", "types", "modifiers"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(bindingAttr, binder, callConvention, types, modifiers);
        }
        template <typename TP0 = void*>
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetConstructors(TP0 bindingAttr) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("GetConstructors"), {"bindingAttr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(bindingAttr);
        }
        ::BNM::Structures::Mono::Array<void*>* GetCustomAttributes(bool inherit) {
            static BNM::Method<::BNM::Structures::Mono::Array<void*>*> _m = GetClass().GetMethod(O("GetCustomAttributes"), {"inherit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(inherit);
        }
        ::BNM::Structures::Mono::Array<void*>* GetCustomAttributes(::BNM::MonoType* attributeType, bool inherit) {
            static BNM::Method<::BNM::Structures::Mono::Array<void*>*> _m = GetClass().GetMethod(O("GetCustomAttributes"), {"attributeType", "inherit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(attributeType, inherit);
        }
        ::BNM::MonoType* GetElementType() {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("GetElementType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP1 = void*>
        ::BNM::IL2CPP::Il2CppObject* GetEvent(::BNM::Structures::Mono::String* name, TP1 bindingAttr) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetEvent"), {"name", "bindingAttr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(name, bindingAttr);
        }
        template <typename TP0 = void*>
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetEvents(TP0 bindingAttr) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("GetEvents"), {"bindingAttr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(bindingAttr);
        }
        template <typename TP1 = void*>
        ::BNM::IL2CPP::Il2CppObject* GetField(::BNM::Structures::Mono::String* name, TP1 bindingAttr) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetField"), {"name", "bindingAttr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(name, bindingAttr);
        }
        template <typename TP0 = void*>
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetFields(TP0 bindingAttr) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("GetFields"), {"bindingAttr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(bindingAttr);
        }
        ::BNM::MonoType* GetInterface(::BNM::Structures::Mono::String* name, bool ignoreCase) {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("GetInterface"), {"name", "ignoreCase"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(name, ignoreCase);
        }
        ::BNM::Structures::Mono::Array<::BNM::MonoType*>* GetInterfaces() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _m = GetClass().GetMethod(O("GetInterfaces"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetMembers(TP0 bindingAttr) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("GetMembers"), {"bindingAttr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(bindingAttr);
        }
        template <typename TP1 = void*, typename TP3 = void*>
        ::BNM::IL2CPP::Il2CppObject* GetMethodImpl(::BNM::Structures::Mono::String* name, TP1 bindingAttr, ::BNM::IL2CPP::Il2CppObject* binder, TP3 callConvention, ::BNM::Structures::Mono::Array<::BNM::MonoType*>* types, ::BNM::Structures::Mono::Array<void*>* modifiers) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetMethodImpl"), {"name", "bindingAttr", "binder", "callConvention", "types", "modifiers"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(name, bindingAttr, binder, callConvention, types, modifiers);
        }
        template <typename TP0 = void*>
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetMethods(TP0 bindingAttr) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("GetMethods"), {"bindingAttr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(bindingAttr);
        }
        template <typename TP1 = void*>
        ::BNM::MonoType* GetNestedType(::BNM::Structures::Mono::String* name, TP1 bindingAttr) {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("GetNestedType"), {"name", "bindingAttr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(name, bindingAttr);
        }
        template <typename TP0 = void*>
        ::BNM::Structures::Mono::Array<::BNM::MonoType*>* GetNestedTypes(TP0 bindingAttr) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _m = GetClass().GetMethod(O("GetNestedTypes"), {"bindingAttr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(bindingAttr);
        }
        template <typename TP0 = void*>
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetProperties(TP0 bindingAttr) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("GetProperties"), {"bindingAttr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(bindingAttr);
        }
        template <typename TP1 = void*>
        ::BNM::IL2CPP::Il2CppObject* GetPropertyImpl(::BNM::Structures::Mono::String* name, TP1 bindingAttr, ::BNM::IL2CPP::Il2CppObject* binder, ::BNM::MonoType* returnType, ::BNM::Structures::Mono::Array<::BNM::MonoType*>* types, ::BNM::Structures::Mono::Array<void*>* modifiers) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetPropertyImpl"), {"name", "bindingAttr", "binder", "returnType", "types", "modifiers"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(name, bindingAttr, binder, returnType, types, modifiers);
        }
        bool HasElementTypeImpl() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasElementTypeImpl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP1 = void*, typename TP3 = void*>
        void* InvokeMember(::BNM::Structures::Mono::String* name, TP1 invokeAttr, ::BNM::IL2CPP::Il2CppObject* binder, TP3 target, ::BNM::Structures::Mono::Array<void*>* args, ::BNM::Structures::Mono::Array<void*>* modifiers, ::BNM::IL2CPP::Il2CppObject* culture, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* namedParameters) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("InvokeMember"), {"name", "invokeAttr", "binder", "target", "args", "modifiers", "culture", "namedParameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(name, invokeAttr, binder, target, args, modifiers, culture, namedParameters);
        }
        bool IsArrayImpl() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsArrayImpl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsByRefImpl() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsByRefImpl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsCOMObjectImpl() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsCOMObjectImpl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsDefined(::BNM::MonoType* attributeType, bool inherit) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsDefined"), {"attributeType", "inherit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(attributeType, inherit);
        }
        bool IsPointerImpl() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPointerImpl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsPrimitiveImpl() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPrimitiveImpl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::ProxyType* Parse(::BNM::Structures::Mono::String* input) {
            static BNM::Method<::GlobalNamespace::ProxyType*> _m = GetClass().GetMethod(O("Parse"), {"input"});
            return _m.Call(input);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
