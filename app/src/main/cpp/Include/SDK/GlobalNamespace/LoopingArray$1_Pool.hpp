#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTag/ObjectPool$1.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct LoopingArray$1_Pool : ::GorillaTag::ObjectPool$1<::GlobalNamespace::LoopingArray$1<T>*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LoopingArray`1").GetInnerClass("Pool");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetMSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
