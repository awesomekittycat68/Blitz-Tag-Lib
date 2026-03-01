#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DelegateListProcessorPlusMinus$2.hpp"

namespace GorillaTag {
    template <typename T>
    struct InDelegateListProcessor$1 : ::GorillaTag::DelegateListProcessorPlusMinus$2<::GorillaTag::InDelegateListProcessor$1<T>*, ::GorillaTag::InAction$1<T>*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "InDelegateListProcessor`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        T GetMData() {
            static BNM::Field<T> _field = GetClass().GetField(O("m_data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMData(T value) {
            static BNM::Field<T> _field = GetClass().GetField(O("m_data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Invoke(T& data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&data);
        }
        void InvokeSafe(T& data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeSafe"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&data);
        }
    };
}
