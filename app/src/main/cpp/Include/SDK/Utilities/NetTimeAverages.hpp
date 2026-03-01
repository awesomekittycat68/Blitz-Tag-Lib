#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DoubleAverages.hpp"

namespace Utilities {
    struct NetTimeAverages : ::Utilities::DoubleAverages {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Utilities", "NetTimeAverages");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        double DefaultTypeValue() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("DefaultTypeValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
