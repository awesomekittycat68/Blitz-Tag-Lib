#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BoingKit {
    struct ConditionalFieldAttribute : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "ConditionalFieldAttribute");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetShowRange() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ShowRange"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void* GetCompareValue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("CompareValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCompareValue2() {
            static BNM::Field<void*> _field = GetClass().GetField(O("CompareValue2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCompareValue3() {
            static BNM::Field<void*> _field = GetClass().GetField(O("CompareValue3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCompareValue4() {
            static BNM::Field<void*> _field = GetClass().GetField(O("CompareValue4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCompareValue5() {
            static BNM::Field<void*> _field = GetClass().GetField(O("CompareValue5"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCompareValue6() {
            static BNM::Field<void*> _field = GetClass().GetField(O("CompareValue6"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLabel() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Label"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("Max"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMin() {
            static BNM::Field<float> _field = GetClass().GetField(O("Min"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPropertyToCheck() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PropertyToCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTooltip() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Tooltip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCompareValue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("CompareValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompareValue2(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("CompareValue2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompareValue3(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("CompareValue3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompareValue4(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("CompareValue4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompareValue5(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("CompareValue5"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompareValue6(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("CompareValue6"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLabel(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Label"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("Max"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMin(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("Min"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPropertyToCheck(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PropertyToCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTooltip(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Tooltip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_ShowRange() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ShowRange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
