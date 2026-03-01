#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    struct ContinuousPropertyArray : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "ContinuousPropertyArray");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Count"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetCachedRigIsLocal() {
            static BNM::Field<bool> _field = GetClass().GetField(O("cachedRigIsLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInstant() {
            static BNM::Field<bool> _field = GetClass().GetField(O("instant"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInverseMaximum() {
            static BNM::Field<float> _field = GetClass().GetField(O("inverseMaximum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastApplyTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastApplyTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::ContinuousProperty*>* GetList() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::ContinuousProperty*>*> _field = GetClass().GetField(O("list"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxExpectedValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxExpectedValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMpb() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("mpb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetResponsiveness() {
            static BNM::Field<float> _field = GetClass().GetField(O("responsiveness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetUniqueShaderPropertyIndices() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("uniqueShaderPropertyIndices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCachedRigIsLocal(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("cachedRigIsLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstant(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("instant"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInverseMaximum(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("inverseMaximum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastApplyTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastApplyTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetList(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::ContinuousProperty*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::ContinuousProperty*>*> _field = GetClass().GetField(O("list"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxExpectedValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxExpectedValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMpb(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("mpb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResponsiveness(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("responsiveness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUniqueShaderPropertyIndices(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("uniqueShaderPropertyIndices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyAll(float f) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyAll"), {"f"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(f);
        }
        void ApplyAll(bool leftHand, float f) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyAll"), {"leftHand", "f"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(leftHand, f);
        }
        int get_Count() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Count"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitIfNeeded() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitIfNeeded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
