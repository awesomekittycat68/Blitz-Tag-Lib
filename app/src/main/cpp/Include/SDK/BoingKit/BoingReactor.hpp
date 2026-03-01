#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BoingBehavior.hpp"

namespace BoingKit {
    struct BoingReactor : ::BoingKit::BoingBehavior {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingReactor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void PrepareExecute() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PrepareExecute"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Register() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Unregister() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
