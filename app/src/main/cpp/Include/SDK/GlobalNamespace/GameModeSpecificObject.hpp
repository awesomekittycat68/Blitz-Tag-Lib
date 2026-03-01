#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameModeSpecificObject_ValidationMethod.hpp"
#include "../GorillaGameModes/GameModeType.hpp"

namespace GlobalNamespace {
    struct GameModeSpecificObject : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameModeSpecificObject");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>* GetGameModes() {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>*> _method = GetClass().GetMethod(O("get_GameModes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GameModeSpecificObject_ValidationMethod GetValidation() {
            static BNM::Method<::GlobalNamespace::GameModeSpecificObject_ValidationMethod> _method = GetClass().GetMethod(O("get_Validation"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnAwake(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnAwake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnAwake(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnAwake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnDestroyed(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDestroyed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnDestroyed(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDestroyed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>* GetGameModes_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("_gameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>* GetGameModes_f_f() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("gameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* GetOnAwake() {
            static BNM::Field<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*> _field = GetClass().GetField(O("OnAwake"));
            return _field.Get();
        }
        static ::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* GetOnDestroyed() {
            static BNM::Field<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*> _field = GetClass().GetField(O("OnDestroyed"));
            return _field.Get();
        }
        ::GlobalNamespace::GameModeSpecificObject_ValidationMethod GetValidationMethod() {
            static BNM::Field<::GlobalNamespace::GameModeSpecificObject_ValidationMethod> _field = GetClass().GetField(O("validationMethod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameModes(::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("_gameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameModes_fs(::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("gameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnAwake(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* value) {
            static BNM::Field<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*> _field = GetClass().GetField(O("OnAwake"));
            _field.Set(value);
        }
        static void SetOnDestroyed(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* value) {
            static BNM::Field<::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate*> _field = GetClass().GetField(O("OnDestroyed"));
            _field.Set(value);
        }
        void SetValidationMethod(::GlobalNamespace::GameModeSpecificObject_ValidationMethod value) {
            static BNM::Field<::GlobalNamespace::GameModeSpecificObject_ValidationMethod> _field = GetClass().GetField(O("validationMethod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void add_OnAwake_1(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnAwake"), {"value"});
            _m.Call(value);
        }
        static void add_OnDestroyed_1(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDestroyed"), {"value"});
            _m.Call(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CheckValid(::GorillaGameModes::GameModeType gameMode) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckValid"), {"gameMode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameMode);
        }
        ::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>* get_GameModes() {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>*> _m = GetClass().GetMethod(O("get_GameModes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GameModeSpecificObject_ValidationMethod get_Validation() {
            static BNM::Method<::GlobalNamespace::GameModeSpecificObject_ValidationMethod> _m = GetClass().GetMethod(O("get_Validation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void remove_OnAwake_1(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnAwake"), {"value"});
            _m.Call(value);
        }
        static void remove_OnDestroyed_1(::GlobalNamespace::GameModeSpecificObject_GameModeSpecificObjectDelegate* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDestroyed"), {"value"});
            _m.Call(value);
        }
    };
}
