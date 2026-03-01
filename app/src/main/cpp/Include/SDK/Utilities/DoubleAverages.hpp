#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AverageCalculator$1.hpp"

namespace Utilities {
    struct DoubleAverages : ::Utilities::AverageCalculator$1<double> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Utilities", "DoubleAverages");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        double Divide(double value, int sampleCount) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("Divide"), {"value", "sampleCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value, sampleCount);
        }
        double MinusEquals(double value, double sample) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("MinusEquals"), {"value", "sample"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value, sample);
        }
        double Multiply(double value, int sampleCount) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("Multiply"), {"value", "sampleCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value, sampleCount);
        }
        double PlusEquals(double value, double sample) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("PlusEquals"), {"value", "sample"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value, sample);
        }
    };
}
