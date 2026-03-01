#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SharedBlocksManager_LocalPublishInfo.hpp"
#include "SharedBlocksManager_StartingMapConfig.hpp"

namespace GorillaTagScripts_Builder {
    struct SharedBlocksManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "SharedBlocksManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaTagScripts_Builder::SharedBlocksManager* GetInstance() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr int MAP_ID_LENGTH = 8;
        static constexpr const char* MAP_ID_PATTERN = "^[CFGHKMNPRTWXZ256789]+$";
        static constexpr float MINIMUM_REFRESH_DELAY = 60.0f;
        static constexpr int VOTE_HISTORY_LENGTH = 10;
        static constexpr int NUM_CACHED_MAP_RESULTS = 5;
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetBuildData() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _method = GetClass().GetMethod(O("get_BuildData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>* GetLatestPopularMaps() {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>*> _method = GetClass().GetMethod(O("get_LatestPopularMaps"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnFetchPrivateScanComplete(::BNM::Structures::Mono::Action<int, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnFetchPrivateScanComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnFetchPrivateScanComplete(::BNM::Structures::Mono::Action<int, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnFetchPrivateScanComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnFoundDefaultSharedBlocksMap(::BNM::Structures::Mono::Action<bool, ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnFoundDefaultSharedBlocksMap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnFoundDefaultSharedBlocksMap(::BNM::Structures::Mono::Action<bool, ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnFoundDefaultSharedBlocksMap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnGetPopularMapsComplete(::BNM::Structures::Mono::Action<bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGetPopularMapsComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnGetPopularMapsComplete(::BNM::Structures::Mono::Action<bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGetPopularMapsComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnGetTableConfiguration(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGetTableConfiguration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnGetTableConfiguration(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGetTableConfiguration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnGetTitleDataBuildComplete(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGetTitleDataBuildComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnGetTitleDataBuildComplete(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGetTitleDataBuildComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnRecentMapIdsUpdated(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnRecentMapIdsUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnRecentMapIdsUpdated(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnRecentMapIdsUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnSavePrivateScanFailed(::BNM::Structures::Mono::Action<int, ::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnSavePrivateScanFailed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnSavePrivateScanFailed(::BNM::Structures::Mono::Action<int, ::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnSavePrivateScanFailed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnSavePrivateScanSuccess(::BNM::Structures::Mono::Action<int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnSavePrivateScanSuccess"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnSavePrivateScanSuccess(::BNM::Structures::Mono::Action<int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnSavePrivateScanSuccess"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnSaveTimeUpdated(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnSaveTimeUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnSaveTimeUpdated(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnSaveTimeUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        int GetCurrentGetScanIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentGetScanIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCurrentSaveScanData() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentSaveScanData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentSaveScanIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentSaveScanIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* GetDefaultMap() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*> _field = GetClass().GetField(O("defaultMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetDefaultMapCacheTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("defaultMapCacheTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDevScanDataCache() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("devScanDataCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFetchedTableConfig() {
            static BNM::Field<bool> _field = GetClass().GetField(O("fetchedTableConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFetchPlayfabBuildsRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("fetchPlayfabBuildsRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFetchTableConfigRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("fetchTableConfigRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFetchTitleDataBuildComplete() {
            static BNM::Field<bool> _field = GetClass().GetField(O("fetchTitleDataBuildComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFetchTitleDataBuildInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("fetchTitleDataBuildInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFetchTitleDataRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("fetchTitleDataRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGetDefaultMapInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("getDefaultMapInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGetMapDataFromIDInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("getMapDataFromIDInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGetMapDataFromIDRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("getMapDataFromIDRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGetScanInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("getScanInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGetTopMapsInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("getTopMapsInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGetTopMapsRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("getTopMapsRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasCachedTopMaps() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasCachedTopMaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasDefaultMap() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasDefaultMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasPulledDevScan() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPulledDevScan"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<bool>* GetHasPulledPrivateScanMothership() {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("hasPulledPrivateScanMothership"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<bool>* GetHasPulledPrivateScanPlayfab() {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("hasPulledPrivateScanPlayfab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasQueriedSaveTime() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasQueriedSaveTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaTagScripts_Builder::SharedBlocksManager* GetInstance_f() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        double GetLastGetTopMapsTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastGetTopMapsTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>* GetLatestPopularMaps_f() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>*> _field = GetClass().GetField(O("latestPopularMaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetLocalMapIds() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("localMapIds"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::GorillaTagScripts_Builder::SharedBlocksManager_LocalPublishInfo>* GetLocalPublishData() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GorillaTagScripts_Builder::SharedBlocksManager_LocalPublishInfo>*> _field = GetClass().GetField(O("localPublishData"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>* GetMapResponseCache() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>*> _field = GetClass().GetField(O("mapResponseCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxRetriesOnFail() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxRetriesOnFail"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<int, bool>* GetOnFetchPrivateScanComplete() {
            static BNM::Field<::BNM::Structures::Mono::Action<int, bool>*> _field = GetClass().GetField(O("OnFetchPrivateScanComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<bool, ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>* GetOnFoundDefaultSharedBlocksMap() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>*> _field = GetClass().GetField(O("OnFoundDefaultSharedBlocksMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<bool>* GetOnGetPopularMapsComplete() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnGetPopularMapsComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnGetTableConfiguration() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnGetTableConfiguration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnGetTitleDataBuildComplete() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnGetTitleDataBuildComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnRecentMapIdsUpdated() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnRecentMapIdsUpdated"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<int, ::BNM::Structures::Mono::String*>* GetOnSavePrivateScanFailed() {
            static BNM::Field<::BNM::Structures::Mono::Action<int, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnSavePrivateScanFailed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<int>* GetOnSavePrivateScanSuccess() {
            static BNM::Field<::BNM::Structures::Mono::Action<int>*> _field = GetClass().GetField(O("OnSavePrivateScanSuccess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnSaveTimeUpdated() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnSaveTimeUpdated"));
            return _field.Get();
        }
        int GetPostPublishMapRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("postPublishMapRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetPrivateScanDataCache() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("privateScanDataCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPublicSlotIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("publicSlotIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPublishRequestInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("publishRequestInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetRecentUpVotes() {
            static BNM::Field<void*> _field = GetClass().GetField(O("recentUpVotes"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetSaveDateKeys() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("saveDateKeys"));
            return _field.Get();
        }
        bool GetSaveScanInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("saveScanInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderTableSerializationConfig* GetSerializationConfig() {
            static BNM::Field<::GlobalNamespace::BuilderTableSerializationConfig*> _field = GetClass().GetField(O("serializationConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::SharedBlocksManager_StartingMapConfig GetStartingMapConfig() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_StartingMapConfig> _field = GetClass().GetField(O("startingMapConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTableConfigResponse() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("tableConfigResponse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTitleDataBuildCache() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("titleDataBuildCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUpdateMapActiveInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("updateMapActiveInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUpdateMapActiveRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("updateMapActiveRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetVoteInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("voteInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVoteRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("voteRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentGetScanIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentGetScanIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSaveScanData(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentSaveScanData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSaveScanIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentSaveScanIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultMap(::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*> _field = GetClass().GetField(O("defaultMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultMapCacheTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("defaultMapCacheTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDevScanDataCache(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("devScanDataCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFetchedTableConfig(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("fetchedTableConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFetchPlayfabBuildsRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fetchPlayfabBuildsRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFetchTableConfigRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fetchTableConfigRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFetchTitleDataBuildComplete(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("fetchTitleDataBuildComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFetchTitleDataBuildInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("fetchTitleDataBuildInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFetchTitleDataRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fetchTitleDataRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGetDefaultMapInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("getDefaultMapInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGetMapDataFromIDInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("getMapDataFromIDInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGetMapDataFromIDRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("getMapDataFromIDRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGetScanInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("getScanInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGetTopMapsInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("getTopMapsInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGetTopMapsRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("getTopMapsRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasCachedTopMaps(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasCachedTopMaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasDefaultMap(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasDefaultMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasPulledDevScan(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPulledDevScan"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasPulledPrivateScanMothership(::BNM::Structures::Mono::Array<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("hasPulledPrivateScanMothership"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasPulledPrivateScanPlayfab(::BNM::Structures::Mono::Array<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("hasPulledPrivateScanPlayfab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasQueriedSaveTime(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasQueriedSaveTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaTagScripts_Builder::SharedBlocksManager* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetLastGetTopMapsTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastGetTopMapsTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLatestPopularMaps(::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>*> _field = GetClass().GetField(O("latestPopularMaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLocalMapIds(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("localMapIds"));
            _field.Set(value);
        }
        static void SetLocalPublishData(::BNM::Structures::Mono::Dictionary<int, ::GorillaTagScripts_Builder::SharedBlocksManager_LocalPublishInfo>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GorillaTagScripts_Builder::SharedBlocksManager_LocalPublishInfo>*> _field = GetClass().GetField(O("localPublishData"));
            _field.Set(value);
        }
        void SetMapResponseCache(::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>*> _field = GetClass().GetField(O("mapResponseCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxRetriesOnFail(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxRetriesOnFail"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnFetchPrivateScanComplete(::BNM::Structures::Mono::Action<int, bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<int, bool>*> _field = GetClass().GetField(O("OnFetchPrivateScanComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnFoundDefaultSharedBlocksMap(::BNM::Structures::Mono::Action<bool, ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>*> _field = GetClass().GetField(O("OnFoundDefaultSharedBlocksMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGetPopularMapsComplete(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnGetPopularMapsComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGetTableConfiguration(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnGetTableConfiguration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGetTitleDataBuildComplete(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnGetTitleDataBuildComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnRecentMapIdsUpdated(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnRecentMapIdsUpdated"));
            _field.Set(value);
        }
        void SetOnSavePrivateScanFailed(::BNM::Structures::Mono::Action<int, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<int, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnSavePrivateScanFailed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnSavePrivateScanSuccess(::BNM::Structures::Mono::Action<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<int>*> _field = GetClass().GetField(O("OnSavePrivateScanSuccess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnSaveTimeUpdated(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnSaveTimeUpdated"));
            _field.Set(value);
        }
        void SetPostPublishMapRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("postPublishMapRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrivateScanDataCache(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("privateScanDataCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPublishRequestInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("publishRequestInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRecentUpVotes(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("recentUpVotes"));
            _field.Set(value);
        }
        static void SetSaveDateKeys(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("saveDateKeys"));
            _field.Set(value);
        }
        void SetSaveScanInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("saveScanInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializationConfig(::GlobalNamespace::BuilderTableSerializationConfig* value) {
            static BNM::Field<::GlobalNamespace::BuilderTableSerializationConfig*> _field = GetClass().GetField(O("serializationConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingMapConfig(::GorillaTagScripts_Builder::SharedBlocksManager_StartingMapConfig value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_StartingMapConfig> _field = GetClass().GetField(O("startingMapConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTableConfigResponse(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("tableConfigResponse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleDataBuildCache(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("titleDataBuildCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateMapActiveInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("updateMapActiveInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateMapActiveRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("updateMapActiveRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoteInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("voteInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoteRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("voteRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnFetchPrivateScanComplete_1(::BNM::Structures::Mono::Action<int, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnFetchPrivateScanComplete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnFoundDefaultSharedBlocksMap_1(::BNM::Structures::Mono::Action<bool, ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnFoundDefaultSharedBlocksMap"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnGetPopularMapsComplete_1(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGetPopularMapsComplete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnGetTableConfiguration_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGetTableConfiguration"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnGetTitleDataBuildComplete_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGetTitleDataBuildComplete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void add_OnRecentMapIdsUpdated_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnRecentMapIdsUpdated"), {"value"});
            _m.Call(value);
        }
        void add_OnSavePrivateScanFailed_1(::BNM::Structures::Mono::Action<int, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnSavePrivateScanFailed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnSavePrivateScanSuccess_1(::BNM::Structures::Mono::Action<int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnSavePrivateScanSuccess"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void add_OnSaveTimeUpdated_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnSaveTimeUpdated"), {"value"});
            _m.Call(value);
        }
        void AddMapToResponseCache(::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* map) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddMapToResponseCache"), {"map"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(map);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FetchBuildFromPlayfab() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FetchBuildFromPlayfab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FetchConfigurationFromTitleData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FetchConfigurationFromTitleData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FetchTitleDataBuild() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FetchTitleDataBuild"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* get_BuildData() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("get_BuildData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>* get_LatestPopularMaps() {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>*> _m = GetClass().GetMethod(O("get_LatestPopularMaps"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetLocalMapIDs() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("GetLocalMapIDs"));
            return _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* GetMapDataFromID(::GorillaTagScripts_Builder::SharedBlocksManager_GetMapDataFromIDRequest* data, ::GorillaTagScripts_Builder::SharedBlocksManager_BlocksMapRequestCallback* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("GetMapDataFromID"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        void GetMapDataFromIDComplete(::BNM::Structures::Mono::String* mapID, ::BNM::Structures::Mono::String* response, ::GorillaTagScripts_Builder::SharedBlocksManager_BlocksMapRequestCallback* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetMapDataFromIDComplete"), {"mapID", "response", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mapID, response, callback);
        }
        ::BNM::Structures::Mono::String* GetPlayfabKeyForSlot(int slot) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPlayfabKeyForSlot"), {"slot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(slot);
        }
        void GetPlayfabLastSaveTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayfabLastSaveTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* GetPlayfabSlotTimeKey(int slot) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPlayfabSlotTimeKey"), {"slot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(slot);
        }
        static ::GorillaTagScripts_Builder::SharedBlocksManager_LocalPublishInfo GetPublishInfoForSlot(int slot) {
            static BNM::Method<::GorillaTagScripts_Builder::SharedBlocksManager_LocalPublishInfo> _m = GetClass().GetMethod(O("GetPublishInfoForSlot"), {"slot"});
            return _m.Call(slot);
        }
        static void* GetRecentUpVotes_1() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetRecentUpVotes"));
            return _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* GetTopMaps(::GorillaTagScripts_Builder::SharedBlocksManager_GetMapsRequest* data, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("GetTopMaps"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        void GetTopMapsComplete(::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMapMetaData*>* maps) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTopMapsComplete"), {"maps"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(maps);
        }
        static bool IsMapIDValid(::BNM::Structures::Mono::String* mapID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMapIDValid"), {"mapID"});
            return _m.Call(mapID);
        }
        bool IsWaitingOnRequest() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsWaitingOnRequest"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LoadPlayerPrefs() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadPlayerPrefs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnFetchBuildFromPlayfabFail(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFetchBuildFromPlayfabFail"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void OnFetchBuildFromPlayfabSuccess(::PlayFab_ClientModels::GetUserDataResult* result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFetchBuildFromPlayfabSuccess"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void OnGetConfigurationFail(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetConfigurationFail"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void OnGetConfigurationSuccess(::PlayFab_ClientModels::GetTitleDataResult* result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetConfigurationSuccess"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void OnGetLastSaveTimeFailure(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetLastSaveTimeFailure"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void OnGetLastSaveTimeSuccess(::PlayFab_ClientModels::GetUserDataResult* result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetLastSaveTimeSuccess"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void OnGetMothershipPrivateScanFail(::GlobalNamespace::MothershipError* error, int status) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetMothershipPrivateScanFail"), {"error", "status"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error, status);
        }
        void OnGetMothershipPrivateScanSuccess(::GlobalNamespace::MothershipUserData* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetMothershipPrivateScanSuccess"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void OnGetTitleDataBuildFail(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetTitleDataBuildFail"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void OnGetTitleDataBuildSuccess(::PlayFab_ClientModels::GetTitleDataResult* result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetTitleDataBuildSuccess"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void OnSetMothershipDataComplete(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSetMothershipDataComplete"), {"success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success);
        }
        void OnSetMothershipUserDataFail(::GlobalNamespace::MothershipError* error, int status) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSetMothershipUserDataFail"), {"error", "status"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error, status);
        }
        void OnSetMothershipUserDataSuccess(::GlobalNamespace::SetUserDataResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSetMothershipUserDataSuccess"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void OnUpdatedMapActiveComplete(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdatedMapActiveComplete"), {"success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success);
        }
        ::BNM::Coroutine::IEnumerator* PostPublishMapRequest(::GorillaTagScripts_Builder::SharedBlocksManager_PublishMapRequestData* data, ::GorillaTagScripts_Builder::SharedBlocksManager_PublishMapRequestCallback* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("PostPublishMapRequest"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        ::BNM::Coroutine::IEnumerator* PostUpdateMapActive(::GorillaTagScripts_Builder::SharedBlocksManager_UpdateMapActiveRequest* data, ::BNM::Structures::Mono::Action<bool>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("PostUpdateMapActive"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        ::BNM::Coroutine::IEnumerator* PostVote(::GorillaTagScripts_Builder::SharedBlocksManager_VoteRequest* data, ::BNM::Structures::Mono::Action<bool, ::BNM::Structures::Mono::String*>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("PostVote"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        void PublishMapComplete(bool success, ::BNM::Structures::Mono::String* key, ::BNM::Structures::Mono::String* mapID, int64_t response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PublishMapComplete"), {"success", "key", "mapID", "response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success, key, mapID, response);
        }
        void PullMothershipPrivateScanThenPush(int scanIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PullMothershipPrivateScanThenPush"), {"scanIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(scanIndex);
        }
        void PushMothershipPrivateScan(int scan, bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PushMothershipPrivateScan"), {"scan", "success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(scan, success);
        }
        void remove_OnFetchPrivateScanComplete_1(::BNM::Structures::Mono::Action<int, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnFetchPrivateScanComplete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnFoundDefaultSharedBlocksMap_1(::BNM::Structures::Mono::Action<bool, ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnFoundDefaultSharedBlocksMap"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnGetPopularMapsComplete_1(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGetPopularMapsComplete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnGetTableConfiguration_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGetTableConfiguration"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnGetTitleDataBuildComplete_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGetTitleDataBuildComplete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void remove_OnRecentMapIdsUpdated_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnRecentMapIdsUpdated"), {"value"});
            _m.Call(value);
        }
        void remove_OnSavePrivateScanFailed_1(::BNM::Structures::Mono::Action<int, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnSavePrivateScanFailed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnSavePrivateScanSuccess_1(::BNM::Structures::Mono::Action<int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnSavePrivateScanSuccess"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void remove_OnSaveTimeUpdated_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnSaveTimeUpdated"), {"value"});
            _m.Call(value);
        }
        void RequestFetchPrivateScan(int slot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestFetchPrivateScan"), {"slot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(slot);
        }
        bool RequestGetTopMaps(int pageNum, int pageSize, ::BNM::Structures::Mono::String* sort) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RequestGetTopMaps"), {"pageNum", "pageSize", "sort"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pageNum, pageSize, sort);
        }
        void RequestMapDataFromID(::BNM::Structures::Mono::String* mapID, ::GorillaTagScripts_Builder::SharedBlocksManager_BlocksMapRequestCallback* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestMapDataFromID"), {"mapID", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mapID, callback);
        }
        void RequestPublishMap(::BNM::Structures::Mono::String* userMetadataKey) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPublishMap"), {"userMetadataKey"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(userMetadataKey);
        }
        void RequestSavePrivateScan(int scanIndex, ::BNM::Structures::Mono::String* scanData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSavePrivateScan"), {"scanIndex", "scanData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(scanIndex, scanData);
        }
        void RequestSetMothershipUserData(::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSetMothershipUserData"), {"keyName", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(keyName, value);
        }
        void RequestTableConfiguration() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestTableConfiguration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestUpdateMapActive(::BNM::Structures::Mono::String* userMetadataKey, bool active) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestUpdateMapActive"), {"userMetadataKey", "active"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(userMetadataKey, active);
        }
        void RequestVote(::BNM::Structures::Mono::String* mapID, bool up, ::BNM::Structures::Mono::Action<bool, ::BNM::Structures::Mono::String*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestVote"), {"mapID", "up", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mapID, up, callback);
        }
        ::BNM::Coroutine::IEnumerator* RetryAfterWaitTime(float waitTime, ::BNM::Structures::Mono::Action<>* function) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("RetryAfterWaitTime"), {"waitTime", "function"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(waitTime, function);
        }
        void SaveLocalMapIdsToPlayerPrefs() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveLocalMapIdsToPlayerPrefs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SaveRecentVotesToPlayerPrefs() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveRecentVotesToPlayerPrefs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* SendPlayfabUserDataRequest(::PlayFab_ClientModels::GetUserDataRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetUserDataResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("SendPlayfabUserDataRequest"), {"request", "resultCallback", "errorCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(request, resultCallback, errorCallback);
        }
        ::BNM::Coroutine::IEnumerator* SendTitleDataRequest(::PlayFab_ClientModels::GetTitleDataRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetTitleDataResult*>* successCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* failCallback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("SendTitleDataRequest"), {"request", "successCallback", "failCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(request, successCallback, failCallback);
        }
        template <typename TP2 = void*>
        static void SetMapIDAndPublishTimeForSlot(int slotID, ::BNM::Structures::Mono::String* mapID, TP2 time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMapIDAndPublishTimeForSlot"), {"slotID", "mapID", "time"});
            _m.Call(slotID, mapID, time);
        }
        template <typename TP1 = void*>
        static void SetPublishTimeForSlot(int slotID, TP1 time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPublishTimeForSlot"), {"slotID", "time"});
            _m.Call(slotID, time);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool TryGetCachedSharedBlocksMapByMapID(::BNM::Structures::Mono::String* mapID, ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetCachedSharedBlocksMapByMapID"), {"mapID", "result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(mapID, &result);
        }
        bool TryGetPrivateScanResponse(int scanSlot, ::BNM::Structures::Mono::String*& scanData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetPrivateScanResponse"), {"scanSlot", "scanData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(scanSlot, &scanData);
        }
        ::BNM::IL2CPP::Il2CppObject* WaitForMothership() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("WaitForMothership"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* WaitForPlayfabSessionToken() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("WaitForPlayfabSessionToken"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
