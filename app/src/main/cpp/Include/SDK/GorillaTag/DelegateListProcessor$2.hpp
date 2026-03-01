#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DelegateListProcessorPlusMinus$2.hpp"

namespace GorillaTag {
    template <typename T1, typename T2>
    struct DelegateListProcessor$2 : ::GorillaTag::DelegateListProcessorPlusMinus$2<::GorillaTag::DelegateListProcessor$2<T1, T2>*, ::BNM::Structures::Mono::Action<T1, T2>*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "DelegateListProcessor`2");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        T1 GetMData1() {
            static BNM::Field<T1> _field = GetClass().GetField(O("m_data1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        T2 GetMData2() {
            static BNM::Field<T2> _field = GetClass().GetField(O("m_data2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMData1(T1 value) {
            static BNM::Field<T1> _field = GetClass().GetField(O("m_data1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMData2(T2 value) {
            static BNM::Field<T2> _field = GetClass().GetField(O("m_data2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Invoke(T1& data1, T2& data2) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"data1", "data2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&data1, &data2);
        }
        void InvokeSafe(T1& data1, T2& data2) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeSafe"), {"data1", "data2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&data1, &data2);
        }
        void ProcessItem(::BNM::IL2CPP::Il2CppObject*& item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessItem"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&item);
        }
        void ResetData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetData(T1& data1, T2& data2) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetData"), {"data1", "data2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&data1, &data2);
        }
    };
}
