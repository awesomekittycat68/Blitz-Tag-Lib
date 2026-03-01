#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NetworkComponent.hpp"
#include "RandomTimedSeedManager_RandomTimedSeedManagerData.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct RandomTimedSeedManager : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RandomTimedSeedManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int SeedMin = -1000000;
        static constexpr int SeedMax = -1000000;
        static constexpr float MaxSyncTime = 1e+09f;
        float GetCurrentSyncTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_currentSyncTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentSyncTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_currentSyncTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData GetData() {
            static BNM::Method<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData> _method = GetClass().GetMethod(O("get_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetData(::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::RandomTimedSeedManager* GetInstance() {
            static BNM::Method<::GlobalNamespace::RandomTimedSeedManager*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GlobalNamespace::RandomTimedSeedManager* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetSeed() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_seed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSeed(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_seed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData GetData_f() {
            static BNM::Field<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCachedSeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("cachedSeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<>*>* GetCallbacksOnSeedChanged() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<>*>*> _field = GetClass().GetField(O("callbacksOnSeedChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetIdealSyncTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("idealSyncTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData_fs(::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData value) {
            static BNM::Field<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedSeed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("cachedSeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCallbacksOnSeedChanged(::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<>*>*> _field = GetClass().GetField(O("callbacksOnSeedChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdealSyncTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("idealSyncTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddCallbackOnSeedChanged(::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCallbackOnSeedChanged"), {"callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callback);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyBackingFieldsToState(bool ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyBackingFieldsToState"), {""});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyStateToBackingFields() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyStateToBackingFields"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float get_currentSyncTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_currentSyncTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData get_Data() {
            static BNM::Method<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData> _m = GetClass().GetMethod(O("get_Data"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::RandomTimedSeedManager* get_instance() {
            static BNM::Method<::GlobalNamespace::RandomTimedSeedManager*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        int get_seed() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_seed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ReadDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReadDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void ReadDataShared(int seedVal, float testTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataShared"), {"seedVal", "testTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seedVal, testTime);
        }
        void RemoveCallbackOnSeedChanged(::BNM::Structures::Mono::Action<>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCallbackOnSeedChanged"), {"callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callback);
        }
        void set_currentSyncTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_currentSyncTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Data(::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Data"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void set_instance(::GlobalNamespace::RandomTimedSeedManager* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_instance"), {"value"});
            _m.Call(value);
        }
        void set_seed(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_seed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void WriteDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
    };
}
