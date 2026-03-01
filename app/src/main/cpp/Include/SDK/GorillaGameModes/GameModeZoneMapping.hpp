#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GTZone.hpp"
#include "GameModeNameOverrides.hpp"
#include "GameModeType.hpp"
#include "GameModeTypeCountdown.hpp"
#include "ZoneGameModes.hpp"

namespace GorillaGameModes {
    struct GameModeZoneMapping : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaGameModes", "GameModeZoneMapping");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetAllModes() {
            static BNM::Field<void*> _field = GetClass().GetField(O("allModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>* GetBigRoomGameModes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("bigRoomGameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, void*>* GetBigRoomZoneGameModesLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, void*>*> _field = GetClass().GetField(O("bigRoomZoneGameModesLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>* GetDefaultGameModes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("defaultGameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeNameOverrides>* GetGameModeNameOverrides() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeNameOverrides>*> _field = GetClass().GetField(O("gameModeNameOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeTypeCountdown>* GetGameModeTypeCountdowns() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeTypeCountdown>*> _field = GetClass().GetField(O("gameModeTypeCountdowns"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GorillaGameModes::GameModeType, ::GameObjectScheduling::CountdownTextDate*>* GetGameModeTypeCountdownsLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaGameModes::GameModeType, ::GameObjectScheduling::CountdownTextDate*>*> _field = GetClass().GetField(O("gameModeTypeCountdownsLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetIsNewLookup() {
            static BNM::Field<void*> _field = GetClass().GetField(O("isNewLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GorillaGameModes::GameModeType, ::BNM::Structures::Mono::String*>* GetModeNameLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaGameModes::GameModeType, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("modeNameLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>* GetNewThisUpdate() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("newThisUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNotes() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("notes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, void*>* GetPrivateZoneGameModesLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, void*>*> _field = GetClass().GetField(O("privateZoneGameModesLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, void*>* GetPublicZoneGameModesLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, void*>*> _field = GetClass().GetField(O("publicZoneGameModesLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaGameModes::ZoneGameModes>* GetZoneGameModes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::ZoneGameModes>*> _field = GetClass().GetField(O("zoneGameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllModes(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("allModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBigRoomGameModes(::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("bigRoomGameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBigRoomZoneGameModesLookup(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, void*>*> _field = GetClass().GetField(O("bigRoomZoneGameModesLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultGameModes(::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("defaultGameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameModeNameOverrides(::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeNameOverrides>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeNameOverrides>*> _field = GetClass().GetField(O("gameModeNameOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameModeTypeCountdowns(::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeTypeCountdown>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeTypeCountdown>*> _field = GetClass().GetField(O("gameModeTypeCountdowns"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameModeTypeCountdownsLookup(::BNM::Structures::Mono::Dictionary<::GorillaGameModes::GameModeType, ::GameObjectScheduling::CountdownTextDate*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaGameModes::GameModeType, ::GameObjectScheduling::CountdownTextDate*>*> _field = GetClass().GetField(O("gameModeTypeCountdownsLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsNewLookup(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("isNewLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModeNameLookup(::BNM::Structures::Mono::Dictionary<::GorillaGameModes::GameModeType, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaGameModes::GameModeType, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("modeNameLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewThisUpdate(::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("newThisUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNotes(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("notes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrivateZoneGameModesLookup(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, void*>*> _field = GetClass().GetField(O("privateZoneGameModesLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPublicZoneGameModesLookup(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, void*>*> _field = GetClass().GetField(O("publicZoneGameModesLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneGameModes(::BNM::Structures::Mono::Array<::GorillaGameModes::ZoneGameModes>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::ZoneGameModes>*> _field = GetClass().GetField(O("zoneGameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* get_AllModes() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_AllModes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GameObjectScheduling::CountdownTextDate* GetCountdown(::GorillaGameModes::GameModeType mode) {
            static BNM::Method<::GameObjectScheduling::CountdownTextDate*> _m = GetClass().GetMethod(O("GetCountdown"), {"mode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(mode);
        }
        ::BNM::Structures::Mono::String* GetModeName(::GorillaGameModes::GameModeType mode) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetModeName"), {"mode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(mode);
        }
        void* GetModesForZone(::GlobalNamespace::GTZone zone, bool isPrivate) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetModesForZone"), {"zone", "isPrivate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zone, isPrivate);
        }
        void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsBigRoomMode(::GorillaGameModes::GameModeType gameModeType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsBigRoomMode"), {"gameModeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameModeType);
        }
        bool IsNew(::GorillaGameModes::GameModeType mode) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsNew"), {"mode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(mode);
        }
        ::GorillaGameModes::GameModeType VerifyModeForZone(::GlobalNamespace::GTZone zone, ::GorillaGameModes::GameModeType mode, bool isPrivate) {
            static BNM::Method<::GorillaGameModes::GameModeType> _m = GetClass().GetMethod(O("VerifyModeForZone"), {"zone", "mode", "isPrivate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zone, mode, isPrivate);
        }
    };
}
