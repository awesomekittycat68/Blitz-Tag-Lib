#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    struct PlayFabTitleDataCache : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "PlayFabTitleDataCache");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaNetworking::PlayFabTitleDataCache* get_Instance() {
            static BNM::Method<::GorillaNetworking::PlayFabTitleDataCache*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static constexpr const char* FileName = "TitleDataCache.json";
        ::BNM::Structures::Mono::String* GetFilePath() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_FilePath"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaNetworking::PlayFabTitleDataCache* GetInstance() {
            static BNM::Method<::GorillaNetworking::PlayFabTitleDataCache*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GorillaNetworking::PlayFabTitleDataCache* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsFirstLoad() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isFirstLoad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::GorillaNetworking::PlayFabTitleDataCache*>* GetKOnnLoaded() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GorillaNetworking::PlayFabTitleDataCache*>*> _field = GetClass().GetField(O("k_onnLoaded"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, bool>* GetLocalesUpdated() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, bool>*> _field = GetClass().GetField(O("localesUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*>* GetLocalizedTitleData() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*>*> _field = GetClass().GetField(O("localizedTitleData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::PlayFabTitleDataCache_DataUpdate* GetOnTitleDataUpdate() {
            static BNM::Field<::GorillaNetworking::PlayFabTitleDataCache_DataUpdate*> _field = GetClass().GetField(O("OnTitleDataUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>* GetRequests() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>*> _field = GetClass().GetField(O("requests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetUpdateDataCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("updateDataCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsFirstLoad(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isFirstLoad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetKOnnLoaded(::BNM::Structures::Mono::Action<::GorillaNetworking::PlayFabTitleDataCache*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GorillaNetworking::PlayFabTitleDataCache*>*> _field = GetClass().GetField(O("k_onnLoaded"));
            _field.Set(value);
        }
        void SetLocalesUpdated(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, bool>*> _field = GetClass().GetField(O("localesUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalizedTitleData(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*>*> _field = GetClass().GetField(O("localizedTitleData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTitleDataUpdate(::GorillaNetworking::PlayFabTitleDataCache_DataUpdate* value) {
            static BNM::Field<::GorillaNetworking::PlayFabTitleDataCache_DataUpdate*> _field = GetClass().GetField(O("OnTitleDataUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateDataCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("updateDataCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearRequestWithError(::PlayFab::PlayFabError* e) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearRequestWithError"), {"e"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(e);
        }
        static ::BNM::Structures::Mono::String* get_FilePath() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_FilePath"));
            return _m.Call();
        }
        static ::GorillaNetworking::PlayFabTitleDataCache* get_Instance_1() {
            static BNM::Method<::GorillaNetworking::PlayFabTitleDataCache*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        void GetTitleData(::BNM::Structures::Mono::String* name, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* callback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, bool ignoreCache) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTitleData"), {"name", "callback", "errorCallback", "ignoreCache"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(name, callback, errorCallback, ignoreCache);
        }
        ::GorillaNetworking::CacheImport* LoadDataFromFile() {
            static BNM::Method<::GorillaNetworking::CacheImport*> _m = GetClass().GetMethod(O("LoadDataFromFile"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* MD5(::BNM::Structures::Mono::String* value) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("MD5"), {"value"});
            return _m.Call(value);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void RegisterOnLoad(::BNM::Structures::Mono::Action<::GorillaNetworking::PlayFabTitleDataCache*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterOnLoad"), {"callback"});
            _m.Call(callback);
        }
        static void SaveDataToFile(::BNM::Structures::Mono::String* filepath, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*>* titleData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveDataToFile"), {"filepath", "titleData"});
            _m.Call(filepath, titleData);
        }
        static void set_Instance(::GorillaNetworking::PlayFabTitleDataCache* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Instance"), {"value"});
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TryUpdateData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryUpdateData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* UpdateDataCo() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("UpdateDataCo"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
