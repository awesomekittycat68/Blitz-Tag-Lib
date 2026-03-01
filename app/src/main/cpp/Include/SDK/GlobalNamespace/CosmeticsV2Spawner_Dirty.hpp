#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticsV2Spawner_Dirty_LoadOpInfo.hpp"
#include "CosmeticsV2Spawner_Dirty_VRRigData.hpp"
#include "../GorillaTag_CosmeticSystem/CosmeticInfoV2.hpp"
#include "../GorillaTag_CosmeticSystem/CosmeticPart.hpp"

namespace GlobalNamespace {
    struct CosmeticsV2Spawner_Dirty : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticsV2Spawner_Dirty");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::CosmeticsV2Spawner_Dirty* GetInstance() {
            static BNM::Field<::GlobalNamespace::CosmeticsV2Spawner_Dirty*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        static constexpr int _k_maxActiveLoadOps = 60;
        static constexpr int _k_maxTotalLoadOps = 1000000;
        static constexpr int _k_delayedStatusCheckContextId = -100;
        bool GetAllPartsInstantiated() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_allPartsInstantiated"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAllPartsInstantiated(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_allPartsInstantiated"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetCompleted() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_completed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCompleted(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_completed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetStartedAllPartsInstantiated() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_startedAllPartsInstantiated"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetStartedAllPartsInstantiated(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_startedAllPartsInstantiated"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::BNM::Structures::Mono::Dictionary<void*, int>* GetGLoadOpToIndex() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<void*, int>*> _field = GetClass().GetField(O("_g_loadOp_to_index"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>* GetGLoadOpInfos() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>*> _field = GetClass().GetField(O("_g_loadOpInfos"));
            return _field.Get();
        }
        static int GetGLoadOpsCountCompleted() {
            static BNM::Field<int> _field = GetClass().GetField(O("_g_loadOpsCountCompleted"));
            return _field.Get();
        }
        static ::Transform* GetGDeactivatedSpawnParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_gDeactivatedSpawnParent"));
            return _field.Get();
        }
        static ::GlobalNamespace::SnowballMaker* GetGSnowballMakerLeft() {
            static BNM::Field<::GlobalNamespace::SnowballMaker*> _field = GetClass().GetField(O("_gSnowballMakerLeft"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::SnowballThrowable*>* GetGSnowballMakerLeftThrowables() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SnowballThrowable*>*> _field = GetClass().GetField(O("_gSnowballMakerLeft_throwables"));
            return _field.Get();
        }
        static ::GlobalNamespace::SnowballMaker* GetGSnowballMakerRight() {
            static BNM::Field<::GlobalNamespace::SnowballMaker*> _field = GetClass().GetField(O("_gSnowballMakerRight"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::SnowballThrowable*>* GetGSnowballMakerRightThrowables() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SnowballThrowable*>*> _field = GetClass().GetField(O("_gSnowballMakerRight_throwables"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData>* GetGVRRigDatas() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData>*> _field = GetClass().GetField(O("_gVRRigDatas"));
            return _field.Get();
        }
        static ::GlobalNamespace::CosmeticsV2Spawner_Dirty* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::CosmeticsV2Spawner_Dirty*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        bool GetShouldTick() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_shouldTick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::Transform*>* GetGAllInstantiatedParts() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("g_allInstantiatedParts"));
            return _field.Get();
        }
        static ::GorillaLocomotion::GTPlayer* GetGGorillaPlayer() {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("g_gorillaPlayer"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetKStopwatch() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("k_stopwatch"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnPostInstantiateAllPrefabs() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPostInstantiateAllPrefabs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnPostInstantiateAllPrefabs2() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPostInstantiateAllPrefabs2"));
            return _field.Get();
        }
        static void SetGLoadOpsCountCompleted(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_g_loadOpsCountCompleted"));
            _field.Set(value);
        }
        static void SetGDeactivatedSpawnParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_gDeactivatedSpawnParent"));
            _field.Set(value);
        }
        static void SetGSnowballMakerLeft(::GlobalNamespace::SnowballMaker* value) {
            static BNM::Field<::GlobalNamespace::SnowballMaker*> _field = GetClass().GetField(O("_gSnowballMakerLeft"));
            _field.Set(value);
        }
        static void SetGSnowballMakerRight(::GlobalNamespace::SnowballMaker* value) {
            static BNM::Field<::GlobalNamespace::SnowballMaker*> _field = GetClass().GetField(O("_gSnowballMakerRight"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::CosmeticsV2Spawner_Dirty* value) {
            static BNM::Field<::GlobalNamespace::CosmeticsV2Spawner_Dirty*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetShouldTick(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_shouldTick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetGAllInstantiatedParts(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("g_allInstantiatedParts"));
            _field.Set(value);
        }
        static void SetGGorillaPlayer(::GorillaLocomotion::GTPlayer* value) {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("g_gorillaPlayer"));
            _field.Set(value);
        }
        static void SetKStopwatch(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("k_stopwatch"));
            _field.Set(value);
        }
        static void SetOnPostInstantiateAllPrefabs(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPostInstantiateAllPrefabs"));
            _field.Set(value);
        }
        static void SetOnPostInstantiateAllPrefabs2(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPostInstantiateAllPrefabs2"));
            _field.Set(value);
        }
        void _DelayedStatusCheck() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_DelayedStatusCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void _RetryDownload(int loadOpIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_RetryDownload"), {"loadOpIndex"});
            _m.Call(loadOpIndex);
        }
        static void _Step2_UpdateLoadOpStarting() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_Step2_UpdateLoadOpStarting"));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void _Step3_HandleLoadOpCompleted(TP0 loadOp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_Step3_HandleLoadOpCompleted"), {"loadOp"});
            _m.Call(loadOp);
        }
        static void _Step4_PopulateAllArrays() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_Step4_PopulateAllArrays"));
            _m.Call();
        }
        static void _Step5_InitializeVRRigsAndCosmeticsControllerFinalize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_Step5_InitializeVRRigsAndCosmeticsControllerFinalize"));
            _m.Call();
        }
        static void AddEachAttachInfoToLoadOpInfosList(::GorillaTag_CosmeticSystem::CosmeticPart part, int partIndex, ::GorillaTag_CosmeticSystem::CosmeticInfoV2 cosmeticInfo, int vrRigIndex, int& partCount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddEachAttachInfoToLoadOpInfosList"), {"part", "partIndex", "cosmeticInfo", "vrRigIndex", "partCount"});
            _m.Call(part, partIndex, cosmeticInfo, vrRigIndex, &partCount);
        }
        static void AddPartToThrowableLists(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo loadOpInfo, ::GlobalNamespace::SnowballThrowable* throwable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPartToThrowableLists"), {"loadOpInfo", "throwable"});
            _m.Call(loadOpInfo, throwable);
        }
        static bool get_allPartsInstantiated() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_allPartsInstantiated"));
            return _m.Call();
        }
        static bool get_completed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_completed"));
            return _m.Call();
        }
        static bool get_startedAllPartsInstantiated() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_startedAllPartsInstantiated"));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename T>
        static void ResizeAndSetAtIndex(::BNM::Structures::Mono::List<T>* list, T item, int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResizeAndSetAtIndex"), {"list", "item", "index"});
            _m.Call(list, item, index);
        }
        static void set_allPartsInstantiated(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_allPartsInstantiated"), {"value"});
            _m.Call(value);
        }
        static void set_completed(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_completed"), {"value"});
            _m.Call(value);
        }
        static void set_startedAllPartsInstantiated(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_startedAllPartsInstantiated"), {"value"});
            _m.Call(value);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void StartInstantiatingPrefabs() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartInstantiatingPrefabs"));
            _m.Call();
        }
    };
}
