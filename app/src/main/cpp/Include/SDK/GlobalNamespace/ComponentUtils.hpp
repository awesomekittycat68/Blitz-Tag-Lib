#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ComponentUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ComponentUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Array<uint32_t>* GetKHashBits() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint32_t>*> _field = GetClass().GetField(O("kHashBits"));
            return _field.Get();
        }
        template <typename T>
        static T AddComponent(::Component* c) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("AddComponent"), {"c"});
            return _m.Call(c);
        }
        static void* ComputeStaticHash128(::Component* c, ::BNM::Structures::Mono::String* k) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ComputeStaticHash128"), {"c", "k"});
            return _m.Call(c, k);
        }
        static void* ComputeStaticHash128(::Component* c, int k) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ComputeStaticHash128"), {"c", "k"});
            return _m.Call(c, k);
        }
        template <typename T>
        static bool DisableIfNull(::Behaviour* c, T fieldRef, ::BNM::Structures::Mono::String* fieldName, ::BNM::Structures::Mono::String* fieldTypeName, ::BNM::Structures::Mono::String* caller) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DisableIfNull"), {"c", "fieldRef", "fieldName", "fieldTypeName", "caller"});
            return _m.Call(c, fieldRef, fieldName, fieldTypeName, caller);
        }
        template <typename T>
        static T EnsureComponent(::Component* ctx, T& target) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("EnsureComponent"), {"ctx", "target"});
            return _m.Call(ctx, &target);
        }
        template <typename T>
        static bool GetComponentAndSetFieldIfNullElseLog(::Behaviour* c, T& fieldRef, ::BNM::Structures::Mono::String* fieldName, ::BNM::Structures::Mono::String* fieldTypeName, ::BNM::Structures::Mono::String* msgSuffix, ::BNM::Structures::Mono::String* caller) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetComponentAndSetFieldIfNullElseLog"), {"c", "fieldRef", "fieldName", "fieldTypeName", "msgSuffix", "caller"});
            return _m.Call(c, &fieldRef, fieldName, fieldTypeName, msgSuffix, caller);
        }
        template <typename T>
        static bool GetComponentAndSetFieldIfNullElseLogAndDisable(::Behaviour* c, T& fieldRef, ::BNM::Structures::Mono::String* fieldName, ::BNM::Structures::Mono::String* fieldTypeName, ::BNM::Structures::Mono::String* msgSuffix, ::BNM::Structures::Mono::String* caller) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetComponentAndSetFieldIfNullElseLogAndDisable"), {"c", "fieldRef", "fieldName", "fieldTypeName", "msgSuffix", "caller"});
            return _m.Call(c, &fieldRef, fieldName, fieldTypeName, msgSuffix, caller);
        }
        template <typename T>
        static void GetOrAddComponent(::Component* c, T& result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetOrAddComponent"), {"c", "result"});
            _m.Call(c, &result);
        }
        template <typename T>
        static bool TryEnsureComponent(::Component* ctx, T& target) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryEnsureComponent"), {"ctx", "target"});
            return _m.Call(ctx, &target);
        }
    };
}
