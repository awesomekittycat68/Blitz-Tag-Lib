#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GorillaTriggerBox.hpp"
#include "../GlobalNamespace/GroupJoinZoneA.hpp"
#include "../GlobalNamespace/GroupJoinZoneAB.hpp"
#include "../GlobalNamespace/GroupJoinZoneB.hpp"
#include "../GlobalNamespace/GTZone.hpp"
#include "AdditionalCustomProperty.hpp"

namespace GorillaNetworking {
    struct GorillaNetworkJoinTrigger : ::GlobalNamespace::GorillaTriggerBox {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "GorillaNetworkJoinTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GroupJoinZoneAB GetGroupJoinRequiredZonesAB() {
            static BNM::Method<::GlobalNamespace::GroupJoinZoneAB> _method = GetClass().GetMethod(O("get_groupJoinRequiredZonesAB"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::GorillaNetworking::AdditionalCustomProperty>* GetAdditionalJoinCustomProperties() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking::AdditionalCustomProperty>*> _field = GetClass().GetField(O("additionalJoinCustomProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetComponentTarget() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("componentTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetComponentTypeToAdd() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("componentTypeToAdd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDidRegisterForCallbacks() {
            static BNM::Field<bool> _field = GetClass().GetField(O("didRegisterForCallbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GroupJoinZoneA GetGroupJoinRequiredZones() {
            static BNM::Field<::GlobalNamespace::GroupJoinZoneA> _field = GetClass().GetField(O("groupJoinRequiredZones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GroupJoinZoneB GetGroupJoinRequiredZonesB() {
            static BNM::Field<::GlobalNamespace::GroupJoinZoneB> _field = GetClass().GetField(O("groupJoinRequiredZonesB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIgnoredIfInParty() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ignoredIfInParty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetMakeSureThisIsDisabled() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("makeSureThisIsDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetMakeSureThisIsEnabled() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("makeSureThisIsEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaFriendCollider* GetMyCollider() {
            static BNM::Field<::GlobalNamespace::GorillaFriendCollider*> _field = GetClass().GetField(O("myCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNetworkZone() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("networkZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::GorillaNetworkJoinTrigger* GetPrimaryTriggerForMyZone() {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("primaryTriggerForMyZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetTriggerJoinsDisabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerJoinsDisabled"));
            return _field.Get();
        }
        ::GlobalNamespace::JoinTriggerUI* GetUi() {
            static BNM::Field<::GlobalNamespace::JoinTriggerUI*> _field = GetClass().GetField(O("ui"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetZone() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAdditionalJoinCustomProperties(::BNM::Structures::Mono::Array<::GorillaNetworking::AdditionalCustomProperty>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking::AdditionalCustomProperty>*> _field = GetClass().GetField(O("additionalJoinCustomProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComponentTarget(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("componentTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComponentTypeToAdd(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("componentTypeToAdd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDidRegisterForCallbacks(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("didRegisterForCallbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroupJoinRequiredZones(::GlobalNamespace::GroupJoinZoneA value) {
            static BNM::Field<::GlobalNamespace::GroupJoinZoneA> _field = GetClass().GetField(O("groupJoinRequiredZones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroupJoinRequiredZonesB(::GlobalNamespace::GroupJoinZoneB value) {
            static BNM::Field<::GlobalNamespace::GroupJoinZoneB> _field = GetClass().GetField(O("groupJoinRequiredZonesB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIgnoredIfInParty(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ignoredIfInParty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMakeSureThisIsDisabled(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("makeSureThisIsDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMakeSureThisIsEnabled(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("makeSureThisIsEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyCollider(::GlobalNamespace::GorillaFriendCollider* value) {
            static BNM::Field<::GlobalNamespace::GorillaFriendCollider*> _field = GetClass().GetField(O("myCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkZone(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("networkZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrimaryTriggerForMyZone(::GorillaNetworking::GorillaNetworkJoinTrigger* value) {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("primaryTriggerForMyZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTriggerJoinsDisabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerJoinsDisabled"));
            _field.Set(value);
        }
        void SetUi(::GlobalNamespace::JoinTriggerUI* value) {
            static BNM::Field<::GlobalNamespace::JoinTriggerUI*> _field = GetClass().GetField(O("ui"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZone(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CanPartyJoin() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanPartyJoin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CanPartyJoin(::GlobalNamespace::GroupJoinZoneAB zone) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanPartyJoin"), {"zone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zone);
        }
        static void DisableTriggerJoins() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableTriggerJoins"));
            _m.Call();
        }
        static void EnableTriggerJoins() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableTriggerJoins"));
            _m.Call();
        }
        ::GlobalNamespace::GroupJoinZoneAB get_groupJoinRequiredZonesAB() {
            static BNM::Method<::GlobalNamespace::GroupJoinZoneAB> _m = GetClass().GetMethod(O("get_groupJoinRequiredZonesAB"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetActiveGameType() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetActiveGameType"));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetActiveNetworkZone() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetActiveNetworkZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetDesiredGameType() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetDesiredGameType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetDesiredGameTypeLocalized() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetDesiredGameTypeLocalized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetDesiredNetworkZone() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetDesiredNetworkZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetFullDesiredGameModeString() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetFullDesiredGameModeString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t GetRoomSize(bool subscribed) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("GetRoomSize"), {"subscribed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(subscribed);
        }
        void OnBoxTriggered() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBoxTriggered"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGroupPositionsChanged(::GlobalNamespace::GroupJoinZoneAB groupZone) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGroupPositionsChanged"), {"groupZone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(groupZone);
        }
        void RegisterUI(::GlobalNamespace::JoinTriggerUI* ui) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterUI"), {"ui"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ui);
        }
        bool SameZoneAsOverride() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SameZoneAsOverride"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SubsPublicJoin() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SubsPublicJoin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UnregisterUI(::GlobalNamespace::JoinTriggerUI* ui) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterUI"), {"ui"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ui);
        }
        void UpdateUI() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateUI"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
