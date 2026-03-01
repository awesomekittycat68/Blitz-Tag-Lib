#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct m4x4_$data_h$e__FixedBuffer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "m4x4").GetInnerClass("<data_h>e__FixedBuffer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint16_t GetFixedElementField() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("FixedElementField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFixedElementField(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("FixedElementField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
