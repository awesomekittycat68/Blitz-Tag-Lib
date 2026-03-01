#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Utilities {
    template <typename T>
    struct AverageCalculator$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Utilities", "AverageCalculator`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        T GetAverage() {
            static BNM::Method<T> _method = GetClass().GetMethod(O("get_Average"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        T GetMAverage() {
            static BNM::Field<T> _field = GetClass().GetField(O("m_average"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<T>* GetMSamples() {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("m_samples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        T GetMTotal() {
            static BNM::Field<T> _field = GetClass().GetField(O("m_total"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMAverage(T value) {
            static BNM::Field<T> _field = GetClass().GetField(O("m_average"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSamples(::BNM::Structures::Mono::Array<T>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("m_samples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTotal(T value) {
            static BNM::Field<T> _field = GetClass().GetField(O("m_total"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddSample(T sample) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddSample"), {"sample"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sample);
        }
        T DefaultTypeValue() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("DefaultTypeValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        T Divide(T value, int sampleCount) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("Divide"), {"value", "sampleCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value, sampleCount);
        }
        T get_Average() {
            static BNM::Method<T> _m = GetClass().GetMethod(O("get_Average"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        T MinusEquals(T value, T sample) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("MinusEquals"), {"value", "sample"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value, sample);
        }
        T Multiply(T value, int sampleCount) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("Multiply"), {"value", "sampleCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value, sampleCount);
        }
        T PlusEquals(T value, T sample) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("PlusEquals"), {"value", "sample"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value, sample);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
