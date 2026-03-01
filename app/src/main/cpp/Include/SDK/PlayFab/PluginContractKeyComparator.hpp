#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PluginContractKey.hpp"

namespace PlayFab {
    struct PluginContractKeyComparator : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab", "PluginContractKeyComparator");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool Equals_1(::PlayFab::PluginContractKey x, ::PlayFab::PluginContractKey y) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"x", "y"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(x, y);
        }
        int GetHashCode_1(::PlayFab::PluginContractKey obj) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
    };
}
