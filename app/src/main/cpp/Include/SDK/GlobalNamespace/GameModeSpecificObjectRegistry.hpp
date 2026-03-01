#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaGameModes/GameModeType.hpp"

namespace GlobalNamespace {
    struct GameModeSpecificObjectRegistry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameModeSpecificObjectRegistry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaGameModes::GameModeType GetCurrentGameType() {
            static BNM::Field<::GorillaGameModes::GameModeType> _field = GetClass().GetField(O("currentGameType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GorillaGameModes::GameModeType, ::BNM::Structures::Mono::List<::GlobalNamespace::GameModeSpecificObject*>*>* GetGameModeSpecificObjects() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaGameModes::GameModeType, ::BNM::Structures::Mono::List<::GlobalNamespace::GameModeSpecificObject*>*>*> _field = GetClass().GetField(O("gameModeSpecificObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentGameType(::GorillaGameModes::GameModeType value) {
            static BNM::Field<::GorillaGameModes::GameModeType> _field = GetClass().GetField(O("currentGameType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameModeSpecificObjects(::BNM::Structures::Mono::Dictionary<::GorillaGameModes::GameModeType, ::BNM::Structures::Mono::List<::GlobalNamespace::GameModeSpecificObject*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaGameModes::GameModeType, ::BNM::Structures::Mono::List<::GlobalNamespace::GameModeSpecificObject*>*>*> _field = GetClass().GetField(O("gameModeSpecificObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void GameMode_OnStartGameMode(::GorillaGameModes::GameModeType newGameModeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GameMode_OnStartGameMode"), {"newGameModeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newGameModeType);
        }
        void GameModeSpecificObject_OnAwake(::GlobalNamespace::GameModeSpecificObject* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GameModeSpecificObject_OnAwake"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void GameModeSpecificObject_OnDestroyed(::GlobalNamespace::GameModeSpecificObject* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GameModeSpecificObject_OnDestroyed"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
