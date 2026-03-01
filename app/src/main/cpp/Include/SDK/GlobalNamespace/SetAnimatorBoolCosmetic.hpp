#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SetAnimatorBoolCosmetic : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SetAnimatorBoolCosmetic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MAX_BOOLS = 5;
        static constexpr int MAX_INTS = 4;
        static constexpr int MAX_FLOATS = 4;
        ::Animator* GetAnimator() {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBool1Hash() {
            static BNM::Field<int> _field = GetClass().GetField(O("bool1Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBool2Hash() {
            static BNM::Field<int> _field = GetClass().GetField(O("bool2Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBool2ParameterName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("bool2ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBool3Hash() {
            static BNM::Field<int> _field = GetClass().GetField(O("bool3Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBool3ParameterName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("bool3ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBool4Hash() {
            static BNM::Field<int> _field = GetClass().GetField(O("bool4Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBool4ParameterName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("bool4ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBool5Hash() {
            static BNM::Field<int> _field = GetClass().GetField(O("bool5Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBool5ParameterName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("bool5ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBoolParameterName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("boolParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFloat1Hash() {
            static BNM::Field<int> _field = GetClass().GetField(O("float1Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFloat1ParameterName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("float1ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFloat2Hash() {
            static BNM::Field<int> _field = GetClass().GetField(O("float2Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFloat2ParameterName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("float2ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFloat3Hash() {
            static BNM::Field<int> _field = GetClass().GetField(O("float3Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFloat3ParameterName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("float3ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFloat4Hash() {
            static BNM::Field<int> _field = GetClass().GetField(O("float4Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFloat4ParameterName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("float4ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInt1Hash() {
            static BNM::Field<int> _field = GetClass().GetField(O("int1Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetInt1ParameterName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("int1ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInt2Hash() {
            static BNM::Field<int> _field = GetClass().GetField(O("int2Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetInt2ParameterName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("int2ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInt3Hash() {
            static BNM::Field<int> _field = GetClass().GetField(O("int3Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetInt3ParameterName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("int3ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInt4Hash() {
            static BNM::Field<int> _field = GetClass().GetField(O("int4Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetInt4ParameterName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("int4ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimator(::Animator* value) {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBool1Hash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bool1Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBool2Hash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bool2Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBool2ParameterName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("bool2ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBool3Hash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bool3Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBool3ParameterName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("bool3ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBool4Hash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bool4Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBool4ParameterName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("bool4ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBool5Hash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bool5Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBool5ParameterName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("bool5ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoolParameterName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("boolParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloat1Hash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("float1Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloat1ParameterName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("float1ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloat2Hash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("float2Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloat2ParameterName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("float2ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloat3Hash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("float3Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloat3ParameterName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("float3ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloat4Hash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("float4Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloat4ParameterName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("float4ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInt1Hash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("int1Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInt1ParameterName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("int1ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInt2Hash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("int2Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInt2ParameterName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("int2ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInt3Hash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("int3Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInt3ParameterName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("int3ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInt4Hash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("int4Hash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInt4ParameterName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("int4ParameterName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnAnimatorValueChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAnimatorValueChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetAnimatorBool(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAnimatorBool"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAnimatorBool2(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAnimatorBool2"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAnimatorBool3(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAnimatorBool3"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAnimatorBool4(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAnimatorBool4"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAnimatorBool5(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAnimatorBool5"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAnimatorFloat1(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAnimatorFloat1"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAnimatorFloat2(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAnimatorFloat2"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAnimatorFloat3(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAnimatorFloat3"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAnimatorFloat4(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAnimatorFloat4"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAnimatorInteger1(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAnimatorInteger1"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAnimatorInteger2(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAnimatorInteger2"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAnimatorInteger3(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAnimatorInteger3"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAnimatorInteger4(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAnimatorInteger4"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAnimatorTrigger(::BNM::Structures::Mono::String* triggerName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAnimatorTrigger"), {"triggerName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(triggerName);
        }
    };
}
