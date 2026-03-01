#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_Compression_HalfFloat {
    struct HalfUtilities_FloatToUint : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("emotitron.Compression.HalfFloat", "HalfUtilities").GetInnerClass("FloatToUint");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetFloatValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("floatValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetUintValue() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("uintValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFloatValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("floatValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUintValue(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("uintValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
