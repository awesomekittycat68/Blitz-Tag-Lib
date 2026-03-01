#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PerSceneRenderData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PerSceneRenderData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetGAllScenesPopulatingLightmapsLoadCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_g_AllScenesPopulatingLightmapsLoadCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsLoadingLightmaps() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsLoadingLightmaps"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetLoadingLightmapsCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LoadingLightmapsCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetSceneIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_sceneIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetSceneName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_sceneName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static void* GetGAllScenesPopulateLightmapsRenderDatasHashSet() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_g_allScenesPopulateLightmaps_renderDatasHashSet"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<::Texture2D*>*>*>* GetMomentNameToCallbacks() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<::Texture2D*>*>*>*> _field = GetClass().GetField(O("_momentName_to_callbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetPopulateLightmapsFromMomentLightmap() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("_populateLightmaps_fromMomentLightmap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPopulateLightmapsFromMomentName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_populateLightmaps_fromMomentName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetPopulateLightmapsToMomentLightmap() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("_populateLightmaps_toMomentLightmap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPopulateLightmapsToMomentName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_populateLightmaps_toMomentName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetGOnAllScenesPopulateLightmapsCompleted() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("g_OnAllScenesPopulateLightmapsCompleted"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetGO() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("gO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastLightmapIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastLightmapIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::Texture2D*>* GetLightmapsCache() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::Texture2D*>*> _field = GetClass().GetField(O("lightmapsCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLightmapsResourcePath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("lightmapsResourcePath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMRendererIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("mRendererIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::MeshRenderer*>* GetMRenderers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::MeshRenderer*>*> _field = GetClass().GetField(O("mRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::PerSceneRenderData*>* GetOnPopulateToAndFromLightmapsCompleted() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::PerSceneRenderData*>*> _field = GetClass().GetField(O("OnPopulateToAndFromLightmapsCompleted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetRepresentativeRenderer() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("representativeRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>* GetResourceRequests() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("resourceRequests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetSingleLightmap() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("singleLightmap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMomentNameToCallbacks(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<::Texture2D*>*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<::Texture2D*>*>*>*> _field = GetClass().GetField(O("_momentName_to_callbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPopulateLightmapsFromMomentLightmap(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("_populateLightmaps_fromMomentLightmap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPopulateLightmapsFromMomentName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_populateLightmaps_fromMomentName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPopulateLightmapsToMomentLightmap(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("_populateLightmaps_toMomentLightmap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPopulateLightmapsToMomentName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_populateLightmaps_toMomentName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetGOnAllScenesPopulateLightmapsCompleted(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("g_OnAllScenesPopulateLightmapsCompleted"));
            _field.Set(value);
        }
        void SetGO(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("gO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastLightmapIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastLightmapIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLightmapsResourcePath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("lightmapsResourcePath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMRendererIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("mRendererIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMRenderers(::BNM::Structures::Mono::Array<::MeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::MeshRenderer*>*> _field = GetClass().GetField(O("mRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPopulateToAndFromLightmapsCompleted(::BNM::Structures::Mono::Action<::GlobalNamespace::PerSceneRenderData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::PerSceneRenderData*>*> _field = GetClass().GetField(O("OnPopulateToAndFromLightmapsCompleted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRepresentativeRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("representativeRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSingleLightmap(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("singleLightmap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void _g_AllScenesPopulateLightmaps_OnOneCompleted(::GlobalNamespace::PerSceneRenderData* perSceneRenderData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_g_AllScenesPopulateLightmaps_OnOneCompleted"), {"perSceneRenderData"});
            _m.Call(perSceneRenderData);
        }
        void _PopulateLightmaps_OnLoadLightmap(::Texture2D* lightmapTex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_PopulateLightmaps_OnLoadLightmap"), {"lightmapTex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(lightmapTex);
        }
        void AddMeshToList(::GameObject* _gO, ::MeshRenderer* mR) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddMeshToList"), {"_gO", "mR"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_gO, mR);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CheckShouldRepopulate() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckShouldRepopulate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void g_StartAllScenesPopulateLightmaps(::BNM::Structures::Mono::String* fromLightmapName, ::BNM::Structures::Mono::String* toLightmapName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("g_StartAllScenesPopulateLightmaps"), {"fromLightmapName", "toLightmapName"});
            _m.Call(fromLightmapName, toLightmapName);
        }
        static int get_g_AllScenesPopulatingLightmapsLoadCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_g_AllScenesPopulatingLightmapsLoadCount"));
            return _m.Call();
        }
        bool get_IsLoadingLightmaps() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsLoadingLightmaps"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LoadingLightmapsCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LoadingLightmapsCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_sceneIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_sceneIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_sceneName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_sceneName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetFromAndToLightmapNames(::BNM::Structures::Mono::String*& fromLightmapName, ::BNM::Structures::Mono::String*& toLightmapName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetFromAndToLightmapNames"), {"fromLightmapName", "toLightmapName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&fromLightmapName, &toLightmapName);
        }
        ::Texture2D* GetLightmap(::BNM::Structures::Mono::String* timeOfDay) {
            static BNM::Method<::Texture2D*> _m = GetClass().GetMethod(O("GetLightmap"), {"timeOfDay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(timeOfDay);
        }
        bool IsLightmapsWithNamesLoaded(::BNM::Structures::Mono::String* fromLightmapName, ::BNM::Structures::Mono::String* toLightmapName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLightmapsWithNamesLoaded"), {"fromLightmapName", "toLightmapName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(fromLightmapName, toLightmapName);
        }
        bool IsLightmapWithNameLoaded(::BNM::Structures::Mono::String* lightmapName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLightmapWithNameLoaded"), {"lightmapName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(lightmapName);
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
        void PopulateLightmaps(::BNM::Structures::Mono::String* fromTimeOfDay, ::BNM::Structures::Mono::String* toTimeOfDay, ::BNM::Structures::Mono::Array<::LightmapData*>* lightmaps) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateLightmaps"), {"fromTimeOfDay", "toTimeOfDay", "lightmaps"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fromTimeOfDay, toTimeOfDay, lightmaps);
        }
        void RefreshRenderer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshRenderer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReleaseLightmap(::BNM::Structures::Mono::String* oldTimeOfDay) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReleaseLightmap"), {"oldTimeOfDay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(oldTimeOfDay);
        }
        void StartPopulateLightmaps(::BNM::Structures::Mono::String* fromMomentName, ::BNM::Structures::Mono::String* toMomentName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartPopulateLightmaps"), {"fromMomentName", "toMomentName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fromMomentName, toMomentName);
        }
        void TryGetLightmapOrAsyncLoad(::BNM::Structures::Mono::String* momentName, ::BNM::Structures::Mono::Action<::Texture2D*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryGetLightmapOrAsyncLoad"), {"momentName", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(momentName, callback);
        }
    };
}
