#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIUpgradeType.hpp"

namespace GlobalNamespace {
    struct GadgetNode_$$c__DisplayClass23_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GadgetNode").GetInnerClass("<>c__DisplayClass23_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SIUpgradeType GetId() {
            static BNM::Field<::GlobalNamespace::SIUpgradeType> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetId(::GlobalNamespace::SIUpgradeType value) {
            static BNM::Field<::GlobalNamespace::SIUpgradeType> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
