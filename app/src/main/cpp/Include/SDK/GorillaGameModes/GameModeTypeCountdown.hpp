#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameModeType.hpp"

namespace GorillaGameModes {
    struct GameModeTypeCountdown : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaGameModes", "GameModeTypeCountdown");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObjectScheduling::CountdownTextDate* GetCountdownTextDate() {
            static BNM::Field<::GameObjectScheduling::CountdownTextDate*> _field = GetClass().GetField(O("countdownTextDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaGameModes::GameModeType GetMode() {
            static BNM::Field<::GorillaGameModes::GameModeType> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCountdownTextDate(::GameObjectScheduling::CountdownTextDate* value) {
            static BNM::Field<::GameObjectScheduling::CountdownTextDate*> _field = GetClass().GetField(O("countdownTextDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMode(::GorillaGameModes::GameModeType value) {
            static BNM::Field<::GorillaGameModes::GameModeType> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
