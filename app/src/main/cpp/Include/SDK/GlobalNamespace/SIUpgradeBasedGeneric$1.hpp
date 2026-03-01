#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIUpgradeBasedGenericEntry$1.hpp"
#include "SIUpgradeSet.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct SIUpgradeBasedGeneric$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIUpgradeBasedGeneric`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool TryGetActiveValue(::GlobalNamespace::SIUpgradeSet withUpgrades, T& out_value) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetActiveValue"), {"withUpgrades", "out_value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(withUpgrades, &out_value);
        }
    };
}
