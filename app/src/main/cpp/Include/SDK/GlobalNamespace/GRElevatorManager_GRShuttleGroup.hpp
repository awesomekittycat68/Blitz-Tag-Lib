#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRShuttleGroupLoc.hpp"

namespace GlobalNamespace {
    struct GRElevatorManager_GRShuttleGroup : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRElevatorManager").GetInnerClass("GRShuttleGroup");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GRShuttle*>* GetGhostReactorStagingShuttles() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRShuttle*>*> _field = GetClass().GetField(O("ghostReactorStagingShuttles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRShuttleGroupLoc GetLocation() {
            static BNM::Field<::GlobalNamespace::GRShuttleGroupLoc> _field = GetClass().GetField(O("location"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGhostReactorStagingShuttles(::BNM::Structures::Mono::List<::GlobalNamespace::GRShuttle*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRShuttle*>*> _field = GetClass().GetField(O("ghostReactorStagingShuttles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocation(::GlobalNamespace::GRShuttleGroupLoc value) {
            static BNM::Field<::GlobalNamespace::GRShuttleGroupLoc> _field = GetClass().GetField(O("location"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
