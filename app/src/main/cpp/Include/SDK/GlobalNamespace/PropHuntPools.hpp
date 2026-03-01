#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PropHuntPools_EState.hpp"

namespace GlobalNamespace {
    struct PropHuntPools : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PropHuntPools");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "PropHuntPools: ";
        static constexpr const char* preLogEd = "(editor only log) PropHuntPools: ";
        static constexpr const char* preLogBeta = "(beta only log) PropHuntPools: ";
        static constexpr const char* preErr = "ERROR!!!  PropHuntPools: ";
        static constexpr const char* preErrEd = "ERROR!!!  (editor only log) PropHuntPools: ";
        static constexpr const char* preErrBeta = "ERROR!!!  (beta only log) PropHuntPools: ";
        static constexpr const char* _k_titleDataKey = "PropHuntProps";
        static constexpr bool _k__GT_PROP_HUNT__USE_POOLING__ = true;
        static constexpr int _k_decoyInitialCountPerPropLine = 10;
        static constexpr int _k_initialCountPerTaggable = 2;
        static constexpr int _k_initialCountPerFollower = 1;
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetAllPropCosmeticIds() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _method = GetClass().GetMethod(O("get_AllPropCosmeticIds"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsReady() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsReady"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::PropHuntPools_EState GetState() {
            static BNM::Method<::GlobalNamespace::PropHuntPools_EState> _method = GetClass().GetMethod(O("get_State"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::PropPlacementRB*, ::BNM::Structures::Mono::String*>* GetActiveDecoyToCosmeticId() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::PropPlacementRB*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_activeDecoy_to_cosmeticId"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::PropHuntGrabbableProp*, ::BNM::Structures::Mono::String*>* GetActiveGrabbableToCosmeticId() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::PropHuntGrabbableProp*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_activeGrabbable_to_cosmeticId"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::PropHuntTaggableProp*, ::BNM::Structures::Mono::String*>* GetActiveTaggableToCosmeticId() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::PropHuntTaggableProp*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_activeTaggable_to_cosmeticId"));
            return _field.Get();
        }
        static ::GorillaTag_CosmeticSystem::AllCosmeticsArraySO* GetAllCosmeticsArraySO() {
            static BNM::Field<::GorillaTag_CosmeticSystem::AllCosmeticsArraySO*> _field = GetClass().GetField(O("_allCosmeticsArraySO"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetAllPropCosmeticIds_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_allPropCosmeticIds"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* GetCosmeticIdToDecoyInitialCount() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("_cosmeticId_to_decoyInitialCount"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::PropPlacementRB*>* GetCosmeticIdToDecoyTemplate() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::PropPlacementRB*>*> _field = GetClass().GetField(O("_cosmeticId_to_decoyTemplate"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::PropHuntGrabbableProp*>* GetCosmeticIdToGrabbableTemplate() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::PropHuntGrabbableProp*>*> _field = GetClass().GetField(O("_cosmeticId_to_grabbableTemplate"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetCosmeticIdToInactiveDecoys() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("_cosmeticId_to_inactiveDecoys"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetCosmeticIdToInactiveGrabbables() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("_cosmeticId_to_inactiveGrabbables"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetCosmeticIdToInactiveTaggables() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("_cosmeticId_to_inactiveTaggables"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::PropHuntTaggableProp*>* GetCosmeticIdToTaggableTemplate() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::PropHuntTaggableProp*>*> _field = GetClass().GetField(O("_cosmeticId_to_taggableTemplate"));
            return _field.Get();
        }
        static int GetDebugDecoyMaxCountPerProp() {
            static BNM::Field<int> _field = GetClass().GetField(O("_debug_decoyMaxCountPerProp"));
            return _field.Get();
        }
        static ::Transform* GetDecoyInactivePropsParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_decoyInactivePropsParent"));
            return _field.Get();
        }
        static ::Transform* GetDecoyTemplatesParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_decoyTemplatesParent"));
            return _field.Get();
        }
        static ::GameObject* GetFallbackPrefabInstance() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_fallbackPrefabInstance"));
            return _field.Get();
        }
        static ::GorillaTag_CosmeticSystem::CosmeticSO* GetFallbackPropCosmeticSO() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticSO*> _field = GetClass().GetField(O("_fallbackProp_cosmeticSO"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetGPhTitleDataSeparators() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_g_ph_titleDataSeparators"));
            return _field.Get();
        }
        static ::Transform* GetGrabbableInactivePropsParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_grabbableInactivePropsParent"));
            return _field.Get();
        }
        static ::Transform* GetGrabbableTemplatesParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_grabbableTemplatesParent"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetPropCosmeticIdsUniqueArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_propCosmeticIds_uniqueArray"));
            return _field.Get();
        }
        static void* GetPropCosmeticIdsWaitingToLoad() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_propCosmeticIdsWaitingToLoad"));
            return _field.Get();
        }
        static ::GlobalNamespace::PropHuntPools_EState GetState_f() {
            static BNM::Field<::GlobalNamespace::PropHuntPools_EState> _field = GetClass().GetField(O("_state"));
            return _field.Get();
        }
        static bool GetStateHasLocalPlayerVisitedBayou() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_state_hasLocalPlayerVisitedBayou"));
            return _field.Get();
        }
        static bool GetStateIsTitleDataLoaded() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_state_isTitleDataLoaded"));
            return _field.Get();
        }
        static ::Transform* GetTaggableInactivePropsParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_taggableInactivePropsParent"));
            return _field.Get();
        }
        static ::Transform* GetTaggableTemplatesParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_taggableTemplatesParent"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetTempMeshFilters() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_temp_meshFilters"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnReady() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnReady"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaTag_CosmeticSystem::CosmeticSO*>* GetPropCosmeticIdToCosmeticSO() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaTag_CosmeticSystem::CosmeticSO*>*> _field = GetClass().GetField(O("propCosmeticId_to_cosmeticSO"));
            return _field.Get();
        }
        static void SetAllCosmeticsArraySO(::GorillaTag_CosmeticSystem::AllCosmeticsArraySO* value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::AllCosmeticsArraySO*> _field = GetClass().GetField(O("_allCosmeticsArraySO"));
            _field.Set(value);
        }
        static void SetAllPropCosmeticIds(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_allPropCosmeticIds"));
            _field.Set(value);
        }
        static void SetDebugDecoyMaxCountPerProp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_debug_decoyMaxCountPerProp"));
            _field.Set(value);
        }
        static void SetDecoyInactivePropsParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_decoyInactivePropsParent"));
            _field.Set(value);
        }
        static void SetDecoyTemplatesParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_decoyTemplatesParent"));
            _field.Set(value);
        }
        static void SetFallbackPrefabInstance(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_fallbackPrefabInstance"));
            _field.Set(value);
        }
        static void SetFallbackPropCosmeticSO(::GorillaTag_CosmeticSystem::CosmeticSO* value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticSO*> _field = GetClass().GetField(O("_fallbackProp_cosmeticSO"));
            _field.Set(value);
        }
        static void SetGrabbableInactivePropsParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_grabbableInactivePropsParent"));
            _field.Set(value);
        }
        static void SetGrabbableTemplatesParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_grabbableTemplatesParent"));
            _field.Set(value);
        }
        static void SetPropCosmeticIdsUniqueArray(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_propCosmeticIds_uniqueArray"));
            _field.Set(value);
        }
        static void SetState(::GlobalNamespace::PropHuntPools_EState value) {
            static BNM::Field<::GlobalNamespace::PropHuntPools_EState> _field = GetClass().GetField(O("_state"));
            _field.Set(value);
        }
        static void SetStateHasLocalPlayerVisitedBayou(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_state_hasLocalPlayerVisitedBayou"));
            _field.Set(value);
        }
        static void SetStateIsTitleDataLoaded(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_state_isTitleDataLoaded"));
            _field.Set(value);
        }
        static void SetTaggableInactivePropsParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_taggableInactivePropsParent"));
            _field.Set(value);
        }
        static void SetTaggableTemplatesParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_taggableTemplatesParent"));
            _field.Set(value);
        }
        static void SetOnReady(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnReady"));
            _field.Set(value);
        }
        static void SetPropCosmeticIdToCosmeticSO(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaTag_CosmeticSystem::CosmeticSO*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaTag_CosmeticSystem::CosmeticSO*>*> _field = GetClass().GetField(O("propCosmeticId_to_cosmeticSO"));
            _field.Set(value);
        }
        static void _CreateInactivePropsParent(::Transform*& _inactivePropsParent, ::BNM::Structures::Mono::String* name) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_CreateInactivePropsParent"), {"_inactivePropsParent", "name"});
            _m.Call(&_inactivePropsParent, name);
        }
        template <typename TP0 = void*>
        static void _HandleOnPropTemplateLoaded(TP0 handle, ::BNM::Structures::Mono::String* cosmeticId, ::GorillaTag_CosmeticSystem::CosmeticSO* cosmeticSO) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_HandleOnPropTemplateLoaded"), {"handle", "cosmeticId", "cosmeticSO"});
            _m.Call(handle, cosmeticId, cosmeticSO);
        }
        static void _HandleOnTitleDataPropsListLoaded(::BNM::Structures::Mono::String* titleDataPropsString) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_HandleOnTitleDataPropsListLoaded"), {"titleDataPropsString"});
            _m.Call(titleDataPropsString);
        }
        template <typename T>
        static void _ResetPool(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, T>* cosmeticId_to_propTemplate, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* cosmeticId_to_inactiveProps, ::BNM::Structures::Mono::Dictionary<T, ::BNM::Structures::Mono::String*>* activeProp_to_cosmeticId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_ResetPool"), {"cosmeticId_to_propTemplate", "cosmeticId_to_inactiveProps", "activeProp_to_cosmeticId"});
            _m.Call(cosmeticId_to_propTemplate, cosmeticId_to_inactiveProps, activeProp_to_cosmeticId);
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* get_AllPropCosmeticIds() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("get_AllPropCosmeticIds"));
            return _m.Call();
        }
        static bool get_IsReady() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsReady"));
            return _m.Call();
        }
        static ::GlobalNamespace::PropHuntPools_EState get_State() {
            static BNM::Method<::GlobalNamespace::PropHuntPools_EState> _m = GetClass().GetMethod(O("get_State"));
            return _m.Call();
        }
        static void OnLocalPlayerEnteredBayou() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLocalPlayerEnteredBayou"));
            _m.Call();
        }
        static void ReturnDecoyProp(::GlobalNamespace::PropPlacementRB* prop) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnDecoyProp"), {"prop"});
            _m.Call(prop);
        }
        static void ReturnGrabbableProp(::GlobalNamespace::PropHuntGrabbableProp* prop) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnGrabbableProp"), {"prop"});
            _m.Call(prop);
        }
        static void ReturnTaggableProp(::GlobalNamespace::PropHuntTaggableProp* prop) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnTaggableProp"), {"prop"});
            _m.Call(prop);
        }
        static void StartCreatingPools() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartCreatingPools"));
            _m.Call();
        }
        static void StartInitializingPropsList(::GorillaTag_CosmeticSystem::AllCosmeticsArraySO* allCosmeticsArraySO, ::GorillaTag_CosmeticSystem::CosmeticSO* fallbackCosmeticSO) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartInitializingPropsList"), {"allCosmeticsArraySO", "fallbackCosmeticSO"});
            _m.Call(allCosmeticsArraySO, fallbackCosmeticSO);
        }
        static bool TryGetDecoyProp(::BNM::Structures::Mono::String* cosmeticId, ::GlobalNamespace::PropPlacementRB*& out_prop) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetDecoyProp"), {"cosmeticId", "out_prop"});
            return _m.Call(cosmeticId, &out_prop);
        }
        static bool TryGetGrabbableProp(::BNM::Structures::Mono::String* cosmeticId, ::GlobalNamespace::PropHuntGrabbableProp*& out_prop) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetGrabbableProp"), {"cosmeticId", "out_prop"});
            return _m.Call(cosmeticId, &out_prop);
        }
        static bool TryGetTaggableProp(::BNM::Structures::Mono::String* cosmeticId, ::GlobalNamespace::PropHuntTaggableProp*& out_prop) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetTaggableProp"), {"cosmeticId", "out_prop"});
            return _m.Call(cosmeticId, &out_prop);
        }
    };
}
