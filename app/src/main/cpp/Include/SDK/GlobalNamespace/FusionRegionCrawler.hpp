#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct FusionRegionCrawler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FusionRegionCrawler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetPlayerCountGlobal() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PlayerCountGlobal"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetGlobalPlayerCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("globalPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated* GetOnPlayerCountUpdated() {
            static BNM::Field<::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*> _field = GetClass().GetField(O("OnPlayerCountUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRefreshPlayerCountAutomatically() {
            static BNM::Field<bool> _field = GetClass().GetField(O("refreshPlayerCountAutomatically"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetRegionRunner() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("regionRunner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetSessionInfoCache() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("sessionInfoCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTempSessionPlayerCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("tempSessionPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUpdateFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("UpdateFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWaitingForSessionListUpdate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForSessionListUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGlobalPlayerCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("globalPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPlayerCountUpdated(::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated* value) {
            static BNM::Field<::GlobalNamespace::FusionRegionCrawler_PlayerCountUpdated*> _field = GetClass().GetField(O("OnPlayerCountUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRefreshPlayerCountAutomatically(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("refreshPlayerCountAutomatically"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRegionRunner(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("regionRunner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSessionInfoCache(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("sessionInfoCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempSessionPlayerCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("tempSessionPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("UpdateFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitingForSessionListUpdate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForSessionListUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int get_PlayerCountGlobal() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PlayerCountGlobal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* OccasionalUpdate() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("OccasionalUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP1 = void*>
        void OnDisconnectedFromServer(::BNM::IL2CPP::Il2CppObject* runner, TP1 reason) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisconnectedFromServer"), {"runner", "reason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, reason);
        }
        template <typename TP2 = void*>
        void OnObjectEnterAOI(::BNM::IL2CPP::Il2CppObject* runner, ::BNM::IL2CPP::Il2CppObject* obj, TP2 player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnObjectEnterAOI"), {"runner", "obj", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, obj, player);
        }
        template <typename TP2 = void*>
        void OnObjectExitAOI(::BNM::IL2CPP::Il2CppObject* runner, ::BNM::IL2CPP::Il2CppObject* obj, TP2 player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnObjectExitAOI"), {"runner", "obj", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, obj, player);
        }
        template <typename TP1 = void*, typename TP2 = void*>
        void OnReliableDataProgress(::BNM::IL2CPP::Il2CppObject* runner, TP1 player, TP2 key, float progress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReliableDataProgress"), {"runner", "player", "key", "progress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, player, key, progress);
        }
        template <typename TP1 = void*, typename TP2 = void*, typename TP3 = void*>
        void OnReliableDataReceived(::BNM::IL2CPP::Il2CppObject* runner, TP1 player, TP2 key, TP3 data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReliableDataReceived"), {"runner", "player", "key", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, player, key, data);
        }
        void OnSessionListUpdated(::BNM::IL2CPP::Il2CppObject* runner, ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* sessionList) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSessionListUpdated"), {"runner", "sessionList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, sessionList);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* UpdatePlayerCount() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("UpdatePlayerCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
