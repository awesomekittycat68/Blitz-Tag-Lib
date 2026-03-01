#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DelegateListProcessorPlusMinus$2.hpp"

namespace GorillaTag {
    struct DelegateListProcessor : ::GorillaTag::DelegateListProcessorPlusMinus$2<::GorillaTag::DelegateListProcessor*, ::BNM::Structures::Mono::Action<>*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "DelegateListProcessor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void Invoke() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InvokeSafe() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeSafe"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProcessItem(::BNM::Structures::Mono::Action<>*& del) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessItem"), {"del"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&del);
        }
    };
}
