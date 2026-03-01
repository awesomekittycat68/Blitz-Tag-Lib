#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct GRBehaviors$1_BehaviorData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRBehaviors`1").GetInnerClass("BehaviorData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GRAbilityBase* GetAbility() {
            static BNM::Field<::GlobalNamespace::GRAbilityBase*> _field = GetClass().GetField(O("ability"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        T GetBehavior() {
            static BNM::Field<T> _field = GetClass().GetField(O("behavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAbility(::GlobalNamespace::GRAbilityBase* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityBase*> _field = GetClass().GetField(O("ability"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBehavior(T value) {
            static BNM::Field<T> _field = GetClass().GetField(O("behavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
