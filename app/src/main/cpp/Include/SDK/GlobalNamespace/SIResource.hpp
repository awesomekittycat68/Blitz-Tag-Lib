#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIResource_LimitedDepositType.hpp"
#include "SIResource_ResourceCost.hpp"
#include "SIResource_ResourceType.hpp"

namespace GlobalNamespace {
    struct SIResource : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIResource");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Rigidbody* GetRb() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("_rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsSleeping() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSleeping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIPlayer* GetLastPlayerHeld() {
            static BNM::Field<::GlobalNamespace::SIPlayer*> _field = GetClass().GetField(O("lastPlayerHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIResource_LimitedDepositType GetLimitedDepositType() {
            static BNM::Field<::GlobalNamespace::SIResource_LimitedDepositType> _field = GetClass().GetField(O("limitedDepositType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLocalDeposited() {
            static BNM::Field<bool> _field = GetClass().GetField(O("localDeposited"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLocalEverGrabbed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("localEverGrabbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetMyGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("myGameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldSleep() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldSleep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSleepTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("sleepTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpawnPitchVariance() {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnPitchVariance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeReleased() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIResource_ResourceType GetType_f() {
            static BNM::Field<::GlobalNamespace::SIResource_ResourceType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRb(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("_rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsSleeping(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSleeping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPlayerHeld(::GlobalNamespace::SIPlayer* value) {
            static BNM::Field<::GlobalNamespace::SIPlayer*> _field = GetClass().GetField(O("lastPlayerHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLimitedDepositType(::GlobalNamespace::SIResource_LimitedDepositType value) {
            static BNM::Field<::GlobalNamespace::SIResource_LimitedDepositType> _field = GetClass().GetField(O("limitedDepositType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalDeposited(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("localDeposited"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalEverGrabbed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("localEverGrabbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("myGameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldSleep(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldSleep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSleepTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sleepTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnPitchVariance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnPitchVariance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeReleased(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetType(::GlobalNamespace::SIResource_ResourceType value) {
            static BNM::Field<::GlobalNamespace::SIResource_ResourceType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanDeposit() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanDeposit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*, typename TP1 = void*>
        static bool CategoryCostsMatch(TP0 cost1, TP1 cost2) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CategoryCostsMatch"), {"cost1", "cost2"});
            return _m.Call(cost1, cost2);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        static bool CostsAreEqual(TP0 cost1, TP1 cost2, bool matchOrder) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CostsAreEqual"), {"cost1", "cost2", "matchOrder"});
            return _m.Call(cost1, cost2, matchOrder);
        }
        static ::BNM::Structures::Mono::Array<::GlobalNamespace::SIResource_ResourceCost>* GenerateCostsFrom(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SIResource_ResourceType, int>* costDictionary) {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::SIResource_ResourceCost>*> _m = GetClass().GetMethod(O("GenerateCostsFrom"), {"costDictionary"});
            return _m.Call(costDictionary);
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::SIResource_ResourceCost>* GetMax(::BNM::Structures::Mono::Array<void*>* costs) {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::SIResource_ResourceCost>*> _m = GetClass().GetMethod(O("GetMax"), {"costs"});
            return _m.Call(costs);
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::SIResource_ResourceCost>* GetSum(::BNM::Structures::Mono::Array<void*>* costs) {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::SIResource_ResourceCost>*> _m = GetClass().GetMethod(O("GetSum"), {"costs"});
            return _m.Call(costs);
        }
        void GrabInitialization() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabInitialization"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleDepositAuth(::GlobalNamespace::SIPlayer* depositingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleDepositAuth"), {"depositingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(depositingPlayer);
        }
        void HandleDepositLocal(::GlobalNamespace::SIPlayer* depositingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleDepositLocal"), {"depositingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(depositingPlayer);
        }
        void HandleOnDestroyed(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnDestroyed"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity);
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
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::String* PrintCost(TP0 costs) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("PrintCost"), {"costs"});
            return _m.Call(costs);
        }
        void ReleaseInitialization() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReleaseInitialization"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetLastGrabbed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLastGrabbed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
