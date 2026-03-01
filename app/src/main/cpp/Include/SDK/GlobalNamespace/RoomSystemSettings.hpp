#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTZone.hpp"
#include "RoomSystem_PlayerEffectConfig.hpp"
#include "../GorillaGameModes/GameModeType.hpp"

namespace GlobalNamespace {
    struct RoomSystemSettings : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RoomSystemSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag::ExpectedUsersDecayTimer* GetExpectedUsersTimer() {
            static BNM::Method<::GorillaTag::ExpectedUsersDecayTimer*> _method = GetClass().GetMethod(O("get_ExpectedUsersTimer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetPausedDCTimer() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PausedDCTimer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::CallLimiterWithCooldown* GetPlayerEffectLimiter() {
            static BNM::Method<::GlobalNamespace::CallLimiterWithCooldown*> _method = GetClass().GetMethod(O("get_PlayerEffectLimiter"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::RoomSystem_PlayerEffectConfig>* GetPlayerEffects() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::RoomSystem_PlayerEffectConfig>*> _method = GetClass().GetMethod(O("get_PlayerEffects"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GameObject* GetPlayerImpactEffect() {
            static BNM::Method<::GameObject*> _method = GetClass().GetMethod(O("get_PlayerImpactEffect"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaTag::TickSystemTimer* GetResyncNetworkTimeTimer() {
            static BNM::Method<::GorillaTag::TickSystemTimer*> _method = GetClass().GetMethod(O("get_ResyncNetworkTimeTimer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::CallLimiterWithCooldown* GetSoundEffectLimiter() {
            static BNM::Method<::GlobalNamespace::CallLimiterWithCooldown*> _method = GetClass().GetMethod(O("get_SoundEffectLimiter"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::CallLimiterWithCooldown* GetSoundEffectOtherLimiter() {
            static BNM::Method<::GlobalNamespace::CallLimiterWithCooldown*> _method = GetClass().GetMethod(O("get_SoundEffectOtherLimiter"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::CallLimiterWithCooldown* GetStatusEffectLimiter() {
            static BNM::Method<::GlobalNamespace::CallLimiterWithCooldown*> _method = GetClass().GetMethod(O("get_StatusEffectLimiter"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaTag::ExpectedUsersDecayTimer* GetExpectedUsersTimer_f() {
            static BNM::Field<::GorillaTag::ExpectedUsersDecayTimer*> _field = GetClass().GetField(O("expectedUsersTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPausedDCTimer_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("pausedDCTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiterWithCooldown* GetPlayerEffectLimiter_f() {
            static BNM::Field<::GlobalNamespace::CallLimiterWithCooldown*> _field = GetClass().GetField(O("playerEffectLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::RoomSystem_PlayerEffectConfig>* GetPlayerEffects_f() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RoomSystem_PlayerEffectConfig>*> _field = GetClass().GetField(O("playerEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPlayerImpactEffect_f() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("playerImpactEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PrivateRoomCount* GetPrivateRoomCountZoneModeMapping() {
            static BNM::Field<::GlobalNamespace::PrivateRoomCount*> _field = GetClass().GetField(O("privateRoomCountZoneModeMapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RoomCount* GetPublicRoomCountZoneModeMapping() {
            static BNM::Field<::GlobalNamespace::RoomCount*> _field = GetClass().GetField(O("publicRoomCountZoneModeMapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::TickSystemTimer* GetResyncNetworkTimeTimer_f() {
            static BNM::Field<::GorillaTag::TickSystemTimer*> _field = GetClass().GetField(O("resyncNetworkTimeTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiterWithCooldown* GetSoundEffectLimiter_f() {
            static BNM::Field<::GlobalNamespace::CallLimiterWithCooldown*> _field = GetClass().GetField(O("soundEffectLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiterWithCooldown* GetSoundEffectOtherLimiter_f() {
            static BNM::Field<::GlobalNamespace::CallLimiterWithCooldown*> _field = GetClass().GetField(O("soundEffectOtherLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiterWithCooldown* GetStatusEffectLimiter_f() {
            static BNM::Field<::GlobalNamespace::CallLimiterWithCooldown*> _field = GetClass().GetField(O("statusEffectLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PrivateRoomCount* GetSubsPrivateRoomCountZoneModeMapping() {
            static BNM::Field<::GlobalNamespace::PrivateRoomCount*> _field = GetClass().GetField(O("subsPrivateRoomCountZoneModeMapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RoomCount* GetSubsPublicRoomCountZoneModeMapping() {
            static BNM::Field<::GlobalNamespace::RoomCount*> _field = GetClass().GetField(O("subsPublicRoomCountZoneModeMapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetExpectedUsersTimer(::GorillaTag::ExpectedUsersDecayTimer* value) {
            static BNM::Field<::GorillaTag::ExpectedUsersDecayTimer*> _field = GetClass().GetField(O("expectedUsersTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPausedDCTimer(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pausedDCTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerEffectLimiter(::GlobalNamespace::CallLimiterWithCooldown* value) {
            static BNM::Field<::GlobalNamespace::CallLimiterWithCooldown*> _field = GetClass().GetField(O("playerEffectLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerEffects(::BNM::Structures::Mono::List<::GlobalNamespace::RoomSystem_PlayerEffectConfig>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RoomSystem_PlayerEffectConfig>*> _field = GetClass().GetField(O("playerEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerImpactEffect(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("playerImpactEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrivateRoomCountZoneModeMapping(::GlobalNamespace::PrivateRoomCount* value) {
            static BNM::Field<::GlobalNamespace::PrivateRoomCount*> _field = GetClass().GetField(O("privateRoomCountZoneModeMapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPublicRoomCountZoneModeMapping(::GlobalNamespace::RoomCount* value) {
            static BNM::Field<::GlobalNamespace::RoomCount*> _field = GetClass().GetField(O("publicRoomCountZoneModeMapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResyncNetworkTimeTimer(::GorillaTag::TickSystemTimer* value) {
            static BNM::Field<::GorillaTag::TickSystemTimer*> _field = GetClass().GetField(O("resyncNetworkTimeTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundEffectLimiter(::GlobalNamespace::CallLimiterWithCooldown* value) {
            static BNM::Field<::GlobalNamespace::CallLimiterWithCooldown*> _field = GetClass().GetField(O("soundEffectLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundEffectOtherLimiter(::GlobalNamespace::CallLimiterWithCooldown* value) {
            static BNM::Field<::GlobalNamespace::CallLimiterWithCooldown*> _field = GetClass().GetField(O("soundEffectOtherLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatusEffectLimiter(::GlobalNamespace::CallLimiterWithCooldown* value) {
            static BNM::Field<::GlobalNamespace::CallLimiterWithCooldown*> _field = GetClass().GetField(O("statusEffectLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubsPrivateRoomCountZoneModeMapping(::GlobalNamespace::PrivateRoomCount* value) {
            static BNM::Field<::GlobalNamespace::PrivateRoomCount*> _field = GetClass().GetField(O("subsPrivateRoomCountZoneModeMapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubsPublicRoomCountZoneModeMapping(::GlobalNamespace::RoomCount* value) {
            static BNM::Field<::GlobalNamespace::RoomCount*> _field = GetClass().GetField(O("subsPublicRoomCountZoneModeMapping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GorillaTag::ExpectedUsersDecayTimer* get_ExpectedUsersTimer() {
            static BNM::Method<::GorillaTag::ExpectedUsersDecayTimer*> _m = GetClass().GetMethod(O("get_ExpectedUsersTimer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PausedDCTimer() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PausedDCTimer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::CallLimiterWithCooldown* get_PlayerEffectLimiter() {
            static BNM::Method<::GlobalNamespace::CallLimiterWithCooldown*> _m = GetClass().GetMethod(O("get_PlayerEffectLimiter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::RoomSystem_PlayerEffectConfig>* get_PlayerEffects() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::RoomSystem_PlayerEffectConfig>*> _m = GetClass().GetMethod(O("get_PlayerEffects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GameObject* get_PlayerImpactEffect() {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("get_PlayerImpactEffect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTag::TickSystemTimer* get_ResyncNetworkTimeTimer() {
            static BNM::Method<::GorillaTag::TickSystemTimer*> _m = GetClass().GetMethod(O("get_ResyncNetworkTimeTimer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::CallLimiterWithCooldown* get_SoundEffectLimiter() {
            static BNM::Method<::GlobalNamespace::CallLimiterWithCooldown*> _m = GetClass().GetMethod(O("get_SoundEffectLimiter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::CallLimiterWithCooldown* get_SoundEffectOtherLimiter() {
            static BNM::Method<::GlobalNamespace::CallLimiterWithCooldown*> _m = GetClass().GetMethod(O("get_SoundEffectOtherLimiter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::CallLimiterWithCooldown* get_StatusEffectLimiter() {
            static BNM::Method<::GlobalNamespace::CallLimiterWithCooldown*> _m = GetClass().GetMethod(O("get_StatusEffectLimiter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetRoomCount(bool privateRoom, bool sub) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRoomCount"), {"privateRoom", "sub"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(privateRoom, sub);
        }
        int GetRoomCount(::GlobalNamespace::GTZone zone, ::GorillaGameModes::GameModeType mode, bool privateRoom, bool sub) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRoomCount"), {"zone", "mode", "privateRoom", "sub"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zone, mode, privateRoom, sub);
        }
    };
}
