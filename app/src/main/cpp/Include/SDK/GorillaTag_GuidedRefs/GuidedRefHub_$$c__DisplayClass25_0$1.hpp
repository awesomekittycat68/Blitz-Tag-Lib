#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_GuidedRefs {
    template <typename TIGuidedRefReceiverMono>
    struct GuidedRefHub_$$c__DisplayClass25_0$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.GuidedRefs", "GuidedRefHub").GetInnerClass("<>c__DisplayClass25_0`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetIReceiverMono() {
            static BNM::Field<void*> _field = GetClass().GetField(O("iReceiverMono"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIReceiverMono(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("iReceiverMono"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
