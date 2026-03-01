#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaClimbable.hpp"

namespace GorillaLocomotion_Climbing {
    struct GorillaClimbableRef : ::GorillaLocomotion_Climbing::GorillaClimbable {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Climbing", "GorillaClimbableRef");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaLocomotion_Climbing::GorillaClimbable* GetClimb() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaClimbable*> _field = GetClass().GetField(O("climb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetClimb(::GorillaLocomotion_Climbing::GorillaClimbable* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaClimbable*> _field = GetClass().GetField(O("climb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
