#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TimeSince.hpp"

namespace GlobalNamespace {
    struct PlayerCosmeticsSystem : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PlayerCosmeticsSystem");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::PlayerCosmeticsSystem* GetInstance() {
            static BNM::Field<::GlobalNamespace::PlayerCosmeticsSystem*> field = GetClass().GetField("instance");
            return field.Get();
        }
        bool GetNullInstance() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_nullInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetTempUnlockCosmeticString() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _method = GetClass().GetMethod(O("get_TempUnlockCosmeticString"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTempUnlockCosmeticString(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TempUnlockCosmeticString"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetTempUnlocksEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TempUnlocksEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTempUnlocksEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TempUnlocksEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetGetSharedGroupDataCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("getSharedGroupDataCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::PlayerCosmeticsSystem* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::PlayerCosmeticsSystem*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetInventory() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("inventory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLookingUp() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLookingUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLookingUpNew() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLookingUpNew"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* GetKTempUnlockedCosmetics() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("k_tempUnlockedCosmetics"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetPlayerActorNumberList() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("playerActorNumberList"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetPlayerIDsList() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("playerIDsList"));
            return _field.Get();
        }
        float GetPlayerLookUpCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("playerLookUpCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetPlayersToLookUp() {
            static BNM::Field<void*> _field = GetClass().GetField(O("playersToLookUp"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetPlayersWaiting() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("playersWaiting"));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetPlayerTemp() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("playerTemp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::TimeSince GetSinceLastTryOnEvent() {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("sinceLastTryOnEvent"));
            return _field.Get();
        }
        float GetStartSearchingTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("startSearchingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetSubscriptionKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("subscriptionKey"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTempCosmetics() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("tempCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RigContainer* GetTempRC() {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("tempRC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, void*>* GetUserCosmeticCallback() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, void*>*> _field = GetClass().GetField(O("userCosmeticCallback"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::String*>* GetUserCosmeticsWaiting() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("userCosmeticsWaiting"));
            return _field.Get();
        }
        void SetGetSharedGroupDataCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("getSharedGroupDataCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::PlayerCosmeticsSystem* value) {
            static BNM::Field<::GlobalNamespace::PlayerCosmeticsSystem*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetInventory(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("inventory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLookingUp(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLookingUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLookingUpNew(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLookingUpNew"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPlayerActorNumberList(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("playerActorNumberList"));
            _field.Set(value);
        }
        static void SetPlayerIDsList(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("playerIDsList"));
            _field.Set(value);
        }
        void SetPlayerLookUpCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playerLookUpCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPlayersToLookUp(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("playersToLookUp"));
            _field.Set(value);
        }
        static void SetPlayersWaiting(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("playersWaiting"));
            _field.Set(value);
        }
        void SetPlayerTemp(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("playerTemp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSinceLastTryOnEvent(::GlobalNamespace::TimeSince value) {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("sinceLastTryOnEvent"));
            _field.Set(value);
        }
        void SetStartSearchingTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startSearchingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempCosmetics(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("tempCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempRC(::GlobalNamespace::RigContainer* value) {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("tempRC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetUserCosmeticCallback(::BNM::Structures::Mono::Dictionary<int, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, void*>*> _field = GetClass().GetField(O("userCosmeticCallback"));
            _field.Set(value);
        }
        static void SetUserCosmeticsWaiting(::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("userCosmeticsWaiting"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool get_nullInstance() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_nullInstance"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* get_TempUnlockCosmeticString() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("get_TempUnlockCosmeticString"));
            return _m.Call();
        }
        static bool get_TempUnlocksEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TempUnlocksEnabled"));
            return _m.Call();
        }
        static bool IsTemporaryCosmeticAllowed(::GlobalNamespace::VRRig* rigRef, ::BNM::Structures::Mono::String* cosmeticId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTemporaryCosmeticAllowed"), {"rigRef", "cosmeticId"});
            return _m.Call(rigRef, cosmeticId);
        }
        static bool LocalIsTemporaryCosmetic(::BNM::Structures::Mono::String* cosmeticId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LocalIsTemporaryCosmetic"), {"cosmeticId"});
            return _m.Call(cosmeticId);
        }
        static bool LocalPlayerInTemporaryCosmeticSpace() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LocalPlayerInTemporaryCosmeticSpace"));
            return _m.Call();
        }
        static void LockTemporaryCosmeticGlobal(::BNM::Structures::Mono::String* cosmeticId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LockTemporaryCosmeticGlobal"), {"cosmeticId"});
            _m.Call(cosmeticId);
        }
        static void LockTemporaryCosmeticsForPlayer(::GlobalNamespace::RigContainer* rigRef) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LockTemporaryCosmeticsForPlayer"), {"rigRef"});
            _m.Call(rigRef);
        }
        template <typename TP1 = void*>
        static void LockTemporaryCosmeticsForPlayer(::GlobalNamespace::RigContainer* rigRef, TP1 cosmeticIds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LockTemporaryCosmeticsForPlayer"), {"rigRef", "cosmeticIds"});
            _m.Call(rigRef, cosmeticIds);
        }
        template <typename TP0 = void*>
        static void LockTemporaryCosmeticsGlobal(TP0 cosmeticIds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LockTemporaryCosmeticsGlobal"), {"cosmeticIds"});
            _m.Call(cosmeticIds);
        }
        void LookUpPlayerCosmetics(bool wait) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LookUpPlayerCosmetics"), {"wait"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wait);
        }
        void NewCosmeticsPath() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NewCosmeticsPath"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* NewCosmeticsPathCoroutine() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("NewCosmeticsPathCoroutine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGetsharedGroupData(::PlayFab_ClientModels::GetSharedGroupDataResult* result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetsharedGroupData"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        template <typename TP1 = void*>
        void OnNetEvent(uint8_t code, TP1 data, int source) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnNetEvent"), {"code", "data", "source"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, data, source);
        }
        void PreTick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PreTick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP1 = void*>
        static void RegisterCosmeticCallback(int playerID, TP1 callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterCosmeticCallback"), {"playerID", "callback"});
            _m.Call(playerID, callback);
        }
        static void RemoveCosmeticCallback(int playerID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCosmeticCallback"), {"playerID"});
            _m.Call(playerID);
        }
        static void set_TempUnlockCosmeticString(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TempUnlockCosmeticString"), {"value"});
            _m.Call(value);
        }
        static void set_TempUnlocksEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TempUnlocksEnabled"), {"value"});
            _m.Call(value);
        }
        template <typename TP2 = void*>
        static void SetRigTemporarySpace(bool enteringSpace, ::GlobalNamespace::RigContainer* rigRef, TP2 cosmeticIds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRigTemporarySpace"), {"enteringSpace", "rigRef", "cosmeticIds"});
            _m.Call(enteringSpace, rigRef, cosmeticIds);
        }
        static void SetRigTryOn(bool inTryon, ::GlobalNamespace::RigContainer* rigRefg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRigTryOn"), {"inTryon", "rigRefg"});
            _m.Call(inTryon, rigRefg);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void StaticReset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StaticReset"));
            _m.Call();
        }
        static void UnlockTemporaryCosmeticGlobal(::BNM::Structures::Mono::String* cosmeticId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlockTemporaryCosmeticGlobal"), {"cosmeticId"});
            _m.Call(cosmeticId);
        }
        static void UnlockTemporaryCosmeticsForPlayer(::GlobalNamespace::RigContainer* rigRef) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlockTemporaryCosmeticsForPlayer"), {"rigRef"});
            _m.Call(rigRef);
        }
        template <typename TP1 = void*>
        static void UnlockTemporaryCosmeticsForPlayer(::GlobalNamespace::RigContainer* rigRef, TP1 cosmeticIds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlockTemporaryCosmeticsForPlayer"), {"rigRef", "cosmeticIds"});
            _m.Call(rigRef, cosmeticIds);
        }
        template <typename TP0 = void*>
        static void UnlockTemporaryCosmeticsGlobal(TP0 cosmeticIds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlockTemporaryCosmeticsGlobal"), {"cosmeticIds"});
            _m.Call(cosmeticIds);
        }
        static void UpdatePlayerCosmetics(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayerCosmetics"), {"player"});
            _m.Call(player);
        }
        static void UpdatePlayerCosmetics(::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* players) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayerCosmetics"), {"players"});
            _m.Call(players);
        }
        void UpdatePlayersWaitingAndDoLookup(bool retrying) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayersWaitingAndDoLookup"), {"retrying"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(retrying);
        }
    };
}
