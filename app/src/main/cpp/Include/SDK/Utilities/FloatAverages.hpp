#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AverageCalculator$1.hpp"

namespace Utilities {
    struct FloatAverages : ::Utilities::AverageCalculator$1<float> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Utilities", "FloatAverages");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float Divide(float value, int sampleCount) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Divide"), {"value", "sampleCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value, sampleCount);
        }
        float MinusEquals(float value, float sample) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("MinusEquals"), {"value", "sample"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value, sample);
        }
        float Multiply(float value, int sampleCount) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Multiply"), {"value", "sampleCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value, sampleCount);
        }
        float PlusEquals(float value, float sample) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("PlusEquals"), {"value", "sample"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value, sample);
        }
    };
}
