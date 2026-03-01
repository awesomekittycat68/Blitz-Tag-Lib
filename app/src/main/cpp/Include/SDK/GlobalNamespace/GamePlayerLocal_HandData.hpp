#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityId.hpp"
#include "GamePlayerLocal_HandGrabState.hpp"

namespace GlobalNamespace {
    struct GamePlayerLocal_HandData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GamePlayerLocal").GetInnerClass("HandData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GameEntityId GetGrabbedGameBallId() {
            static BNM::Field<::GlobalNamespace::GameEntityId> _field = GetClass().GetField(O("grabbedGameBallId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GamePlayerLocal_HandGrabState GetGrabState() {
            static BNM::Field<::GlobalNamespace::GamePlayerLocal_HandGrabState> _field = GetClass().GetField(O("grabState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetGripPressedTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("gripPressedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGripWasHeld() {
            static BNM::Field<bool> _field = GetClass().GetField(O("gripWasHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetTriggerPressedTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("triggerPressedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTriggerWasHeld() {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerWasHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGrabbedGameBallId(::GlobalNamespace::GameEntityId value) {
            static BNM::Field<::GlobalNamespace::GameEntityId> _field = GetClass().GetField(O("grabbedGameBallId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabState(::GlobalNamespace::GamePlayerLocal_HandGrabState value) {
            static BNM::Field<::GlobalNamespace::GamePlayerLocal_HandGrabState> _field = GetClass().GetField(O("grabState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGripPressedTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("gripPressedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGripWasHeld(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("gripWasHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerPressedTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("triggerPressedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerWasHeld(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerWasHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
