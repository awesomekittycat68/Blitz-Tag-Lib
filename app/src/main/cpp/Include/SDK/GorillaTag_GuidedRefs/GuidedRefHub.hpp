#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GuidedRefReceiverArrayInfo.hpp"
#include "GuidedRefReceiverFieldInfo.hpp"
#include "GuidedRefTryResolveInfo.hpp"
#include "RegisteredReceiverFieldInfo.hpp"

namespace GorillaTag_GuidedRefs {
    struct GuidedRefHub : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.GuidedRefs", "GuidedRefHub");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* kUnsuppliedCallerName = "UNSUPPLIED_CALLER_NAME";
        static ::BNM::Structures::Mono::List<::GorillaTag_GuidedRefs::GuidedRefHub*>* GetGlobalHubsTransientList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_GuidedRefs::GuidedRefHub*>*> _field = GetClass().GetField(O("globalHubsTransientList"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GorillaTag_GuidedRefs::GuidedRefHub*>*>* GetGlobalLookupHubsThatHaveRegisteredInstId() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GorillaTag_GuidedRefs::GuidedRefHub*>*>*> _field = GetClass().GetField(O("globalLookupHubsThatHaveRegisteredInstId"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GorillaTag_GuidedRefs::GuidedRefHub*, ::BNM::Structures::Mono::List<int>*>* GetGlobalLookupRefInstIDsByHub() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaTag_GuidedRefs::GuidedRefHub*, ::BNM::Structures::Mono::List<int>*>*> _field = GetClass().GetField(O("globalLookupRefInstIDsByHub"));
            return _field.Get();
        }
        static bool GetHasRootInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasRootInstance"));
            return _field.Get();
        }
        ::GorillaTag_GuidedRefs::GuidedRefHubIdSO* GetHubId() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefHubIdSO*> _field = GetClass().GetField(O("hubId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsRootInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRootInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetKReceiversFullyRegistered() {
            static BNM::Field<void*> _field = GetClass().GetField(O("kReceiversFullyRegistered"));
            return _field.Get();
        }
        static void* GetKReceiversWaitingToFullyResolve() {
            static BNM::Field<void*> _field = GetClass().GetField(O("kReceiversWaitingToFullyResolve"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GorillaTag_GuidedRefs::GuidedRefTargetIdSO*, ::GorillaTag_GuidedRefs_Internal::RelayInfo*>* GetLookupRelayInfoByTargetId() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaTag_GuidedRefs::GuidedRefTargetIdSO*, ::GorillaTag_GuidedRefs_Internal::RelayInfo*>*> _field = GetClass().GetField(O("lookupRelayInfoByTargetId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaTag_GuidedRefs::GuidedRefHub* GetRootInstance() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefHub*> _field = GetClass().GetField(O("rootInstance"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GorillaTag_GuidedRefs_Internal::RelayInfo*, ::GorillaTag_GuidedRefs::GuidedRefTargetIdSO*>* GetStaticRelayInfoToTargetId() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaTag_GuidedRefs_Internal::RelayInfo*, ::GorillaTag_GuidedRefs::GuidedRefTargetIdSO*>*> _field = GetClass().GetField(O("static_relayInfo_to_targetId"));
            return _field.Get();
        }
        static void SetHasRootInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasRootInstance"));
            _field.Set(value);
        }
        void SetHubId(::GorillaTag_GuidedRefs::GuidedRefHubIdSO* value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefHubIdSO*> _field = GetClass().GetField(O("hubId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsRootInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRootInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRootInstance(::GorillaTag_GuidedRefs::GuidedRefHub* value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefHub*> _field = GetClass().GetField(O("rootInstance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TIGuidedRefReceiverMono>
        static void CheckAndNotifyIfReceiverFullyResolved(TIGuidedRefReceiverMono receiverMono) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckAndNotifyIfReceiverFullyResolved"), {"receiverMono"});
            _m.Call(receiverMono);
        }
        static ::BNM::Structures::Mono::String* GetFieldNameByID(int fieldId) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetFieldNameByID"), {"fieldId"});
            return _m.Call(fieldId);
        }
        static ::BNM::Structures::Mono::List<::GorillaTag_GuidedRefs::GuidedRefHub*>* GetHubsThatHaveRegisteredInstId(int instanceId) {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaTag_GuidedRefs::GuidedRefHub*>*> _m = GetClass().GetMethod(O("GetHubsThatHaveRegisteredInstId"), {"instanceId"});
            return _m.Call(instanceId);
        }
        ::GorillaTag_GuidedRefs_Internal::RelayInfo* GetOrAddRelayInfoByTargetId(::GorillaTag_GuidedRefs::GuidedRefTargetIdSO* targetId) {
            static BNM::Method<::GorillaTag_GuidedRefs_Internal::RelayInfo*> _m = GetClass().GetMethod(O("GetOrAddRelayInfoByTargetId"), {"targetId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(targetId);
        }
        void GuidedRefInitialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GuidedRefInitialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool IsInstanceIDRegisteredWithAnyHub(int instanceID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInstanceIDRegisteredWithAnyHub"), {"instanceID"});
            return _m.Call(instanceID);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TIGuidedRefReceiverMono>
        static void ReceiverFullyRegistered(TIGuidedRefReceiverMono receiverMono) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReceiverFullyRegistered"), {"receiverMono"});
            _m.Call(receiverMono);
        }
        template <typename TIGuidedRefReceiverMono, typename T>
        static void RegisterReceiverArray(TIGuidedRefReceiverMono receiverMono, ::BNM::Structures::Mono::String* fieldIdName, T& receiverArray, ::GorillaTag_GuidedRefs::GuidedRefReceiverArrayInfo& arrayInfo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterReceiverArray"), {"receiverMono", "fieldIdName", "receiverArray", "arrayInfo"});
            _m.Call(receiverMono, fieldIdName, &receiverArray, &arrayInfo);
        }
        void RegisterReceiverField(::GorillaTag_GuidedRefs::RegisteredReceiverFieldInfo registeredReceiverFieldInfo, ::GorillaTag_GuidedRefs::GuidedRefTargetIdSO* targetId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterReceiverField"), {"registeredReceiverFieldInfo", "targetId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(registeredReceiverFieldInfo, targetId);
        }
        template <typename TIGuidedRefReceiverMono>
        static void RegisterReceiverField(TIGuidedRefReceiverMono receiverMono, ::BNM::Structures::Mono::String* fieldIdName, ::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo& fieldInfo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterReceiverField"), {"receiverMono", "fieldIdName", "fieldInfo"});
            _m.Call(receiverMono, fieldIdName, &fieldInfo);
        }
        template <typename TIGuidedRefReceiverMono>
        static void RegisterReceiverField_Internal(::GorillaTag_GuidedRefs::GuidedRefHubIdSO* hubId, TIGuidedRefReceiverMono receiverMono, int fieldId, ::GorillaTag_GuidedRefs::GuidedRefTargetIdSO* targetId, int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterReceiverField_Internal"), {"hubId", "receiverMono", "fieldId", "targetId", "index"});
            _m.Call(hubId, receiverMono, fieldId, targetId, index);
        }
        template <typename TIGuidedRefTargetMono>
        static void RegisterTarget(TIGuidedRefTargetMono targetMono, ::BNM::Structures::Mono::Array<::GorillaTag_GuidedRefs::GuidedRefHubIdSO*>* hubIds, ::Component* debugCaller) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterTarget"), {"targetMono", "hubIds", "debugCaller"});
            _m.Call(targetMono, hubIds, debugCaller);
        }
        template <typename TIGuidedRefTargetMono>
        void RegisterTarget_Internal(TIGuidedRefTargetMono targetMono) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterTarget_Internal"), {"targetMono"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetMono);
        }
        static void ResolveReferences(::GorillaTag_GuidedRefs_Internal::RelayInfo* relayInfo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResolveReferences"), {"relayInfo"});
            _m.Call(relayInfo);
        }
        template <typename TIGuidedRefReceiverMono, typename T, typename TP1 = void*>
        static bool TryResolveArrayItem(TIGuidedRefReceiverMono receiverMono, TP1 receivingArray, ::GorillaTag_GuidedRefs::GuidedRefReceiverArrayInfo receiverArrayInfo, ::GorillaTag_GuidedRefs::GuidedRefTryResolveInfo tryResolveInfo) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryResolveArrayItem"), {"receiverMono", "receivingArray", "receiverArrayInfo", "tryResolveInfo"});
            return _m.Call(receiverMono, receivingArray, receiverArrayInfo, tryResolveInfo);
        }
        template <typename TIGuidedRefReceiverMono, typename T, typename TP1 = void*>
        static bool TryResolveArrayItem(TIGuidedRefReceiverMono receiverMono, TP1 receivingArray, ::GorillaTag_GuidedRefs::GuidedRefReceiverArrayInfo receiverArrayInfo, ::GorillaTag_GuidedRefs::GuidedRefTryResolveInfo tryResolveInfo, bool& arrayResolved) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryResolveArrayItem"), {"receiverMono", "receivingArray", "receiverArrayInfo", "tryResolveInfo", "arrayResolved"});
            return _m.Call(receiverMono, receivingArray, receiverArrayInfo, tryResolveInfo, &arrayResolved);
        }
        template <typename TIGuidedRefReceiverMono, typename T>
        static bool TryResolveField(TIGuidedRefReceiverMono receiverMono, T& refReceiverObj, ::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo receiverFieldInfo, ::GorillaTag_GuidedRefs::GuidedRefTryResolveInfo tryResolveInfo) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryResolveField"), {"receiverMono", "refReceiverObj", "receiverFieldInfo", "tryResolveInfo"});
            return _m.Call(receiverMono, &refReceiverObj, receiverFieldInfo, tryResolveInfo);
        }
        template <typename TIGuidedRefReceiverMono>
        static void UnregisterReceiver(TIGuidedRefReceiverMono receiverMono) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterReceiver"), {"receiverMono"});
            _m.Call(receiverMono);
        }
        template <typename TIGuidedRefTargetMono>
        static void UnregisterTarget(TIGuidedRefTargetMono targetMono, bool destroyed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterTarget"), {"targetMono", "destroyed"});
            _m.Call(targetMono, destroyed);
        }
    };
}
