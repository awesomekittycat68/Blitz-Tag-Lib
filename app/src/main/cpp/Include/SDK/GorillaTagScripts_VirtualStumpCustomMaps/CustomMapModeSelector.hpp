#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GameModeSelectorButtonLayout.hpp"
#include "../GorillaGameModes/GameModeType.hpp"

namespace GorillaTagScripts_VirtualStumpCustomMaps {
    struct CustomMapModeSelector : ::GlobalNamespace::GameModeSelectorButtonLayout {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapModeSelector");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaGameModes::GameModeType GetDefaultGamemodeForLoadedMap() {
            static BNM::Field<::GorillaGameModes::GameModeType> _field = GetClass().GetField(O("defaultGamemodeForLoadedMap"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>* GetGamemodes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("gamemodes"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapModeSelector*>* GetInstances() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapModeSelector*>*> _field = GetClass().GetField(O("instances"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNotInRoomHostString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("notInRoomHostString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetReusableString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("reusableString"));
            return _field.Get();
        }
        ::GameObject* GetRoomHostDescriptionText() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("roomHostDescriptionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRoomHostLabel() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("roomHostLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetRoomHostText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("roomHostText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetDefaultGamemodeForLoadedMap(::GorillaGameModes::GameModeType value) {
            static BNM::Field<::GorillaGameModes::GameModeType> _field = GetClass().GetField(O("defaultGamemodeForLoadedMap"));
            _field.Set(value);
        }
        static void SetGamemodes(::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("gamemodes"));
            _field.Set(value);
        }
        static void SetInstances(::BNM::Structures::Mono::List<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapModeSelector*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapModeSelector*>*> _field = GetClass().GetField(O("instances"));
            _field.Set(value);
        }
        void SetNotInRoomHostString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("notInRoomHostString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetReusableString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("reusableString"));
            _field.Set(value);
        }
        void SetRoomHostDescriptionText(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("roomHostDescriptionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomHostLabel(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("roomHostLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomHostText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("roomHostText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisconnected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisconnected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnRoomHostSwitched(::GlobalNamespace::NetPlayer* newRoomHost) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRoomHostSwitched"), {"newRoomHost"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newRoomHost);
        }
        static void RefreshHostName() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshHostName"));
            _m.Call();
        }
        static void ResetButtons() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetButtons"));
            _m.Call();
        }
        static void SetAvailableGameModes(::BNM::Structures::Mono::Array<int>* availableModes, int defaultMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAvailableGameModes"), {"availableModes", "defaultMode"});
            _m.Call(availableModes, defaultMode);
        }
        void SetupButtons() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupButtons"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
