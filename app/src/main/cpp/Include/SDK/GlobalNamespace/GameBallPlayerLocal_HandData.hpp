#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameBallId.hpp"
#include "GameBallPlayerLocal_HandGrabState.hpp"

namespace GlobalNamespace {
    struct GameBallPlayerLocal_HandData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameBallPlayerLocal").GetInnerClass("HandData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GameBallId GetGrabbedGameBallId() {
            static BNM::Field<::GlobalNamespace::GameBallId> _field = GetClass().GetField(O("grabbedGameBallId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameBallPlayerLocal_HandGrabState GetGrabState() {
            static BNM::Field<::GlobalNamespace::GameBallPlayerLocal_HandGrabState> _field = GetClass().GetField(O("grabState"));
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
        void SetGrabbedGameBallId(::GlobalNamespace::GameBallId value) {
            static BNM::Field<::GlobalNamespace::GameBallId> _field = GetClass().GetField(O("grabbedGameBallId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabState(::GlobalNamespace::GameBallPlayerLocal_HandGrabState value) {
            static BNM::Field<::GlobalNamespace::GameBallPlayerLocal_HandGrabState> _field = GetClass().GetField(O("grabState"));
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
    };
}
