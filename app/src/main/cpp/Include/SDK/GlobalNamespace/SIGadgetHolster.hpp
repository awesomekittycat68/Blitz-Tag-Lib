#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIGadget.hpp"
#include "SIGadgetHolster_State.hpp"

namespace GlobalNamespace {
    struct SIGadgetHolster : ::GlobalNamespace::SIGadget {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetHolster");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaLocomotion::GTPlayer* GetGtPlayer() {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("gtPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetImageMask() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("imageMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SuperInfectionSnapPoint*>* GetSnapPoints() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SuperInfectionSnapPoint*>*> _field = GetClass().GetField(O("snapPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetHolster_State GetState() {
            static BNM::Field<::GlobalNamespace::SIGadgetHolster_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGtPlayer(::GorillaLocomotion::GTPlayer* value) {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("gtPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImageMask(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("imageMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapPoints(::BNM::Structures::Mono::List<::GlobalNamespace::SuperInfectionSnapPoint*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SuperInfectionSnapPoint*>*> _field = GetClass().GetField(O("snapPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::SIGadgetHolster_State value) {
            static BNM::Field<::GlobalNamespace::SIGadgetHolster_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Disrupt(float disruptTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Disrupt"), {"disruptTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disruptTime);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
