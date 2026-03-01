#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct VRRigCache : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VRRigCache");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::VRRigCache* get_Instance() {
            static BNM::Method<::GlobalNamespace::VRRigCache*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static constexpr const char* preLog = "[GT/VRRigCache] ";
        static constexpr const char* preErr = "[GT/VRRigCache]  ERROR!!!  ";
        static constexpr const char* preErrBeta = "[GT/VRRigCache]  ERROR!!!  (beta only log) ";
        static constexpr const char* preErrEd = "[GT/VRRigCache]  ERROR!!!  (editor only log) ";
        ::GlobalNamespace::VRRigCache* GetInstance() {
            static BNM::Method<::GlobalNamespace::VRRigCache*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GlobalNamespace::VRRigCache* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isInitialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsInitialized(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_isInitialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Transform* GetNetworkParent() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_NetworkParent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnActiveRigsChanged(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnActiveRigsChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnActiveRigsChanged(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnActiveRigsChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnPostInitialize(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPostInitialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnPostInitialize(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPostInitialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnPostSpawnRig(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPostSpawnRig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnPostSpawnRig(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPostSpawnRig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnRigActivated(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnRigActivated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnRigActivated(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnRigActivated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnRigDeactivated(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnRigDeactivated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnRigDeactivated(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnRigDeactivated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnRigNameChanged(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnRigNameChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnRigNameChanged(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnRigNameChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        static void* GetFreeRigs() {
            static BNM::Field<void*> _field = GetClass().GetField(O("freeRigs"));
            return _field.Get();
        }
        ::GlobalNamespace::RigContainer* GetLocalRig() {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("localRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::TickSystemTimer* GetMEnsureNetworkObjectTimer() {
            static BNM::Field<::GorillaTag::TickSystemTimer*> _field = GetClass().GetField(O("m_ensureNetworkObjectTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetNetworkParent_f() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("networkParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnActiveRigsChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnActiveRigsChanged"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnPostInitialize() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPostInitialize"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnPostSpawnRig() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPostSpawnRig"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* GetOnRigActivated() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>*> _field = GetClass().GetField(O("OnRigActivated"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* GetOnRigDeactivated() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>*> _field = GetClass().GetField(O("OnRigDeactivated"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* GetOnRigNameChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>*> _field = GetClass().GetField(O("OnRigNameChanged"));
            return _field.Get();
        }
        int GetRigAmount() {
            static BNM::Field<int> _field = GetClass().GetField(O("rigAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRigParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rigParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetRigRGBData() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("rigRGBData"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::RigContainer*>* GetRigsInUse() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::RigContainer*>*> _field = GetClass().GetField(O("rigsInUse"));
            return _field.Get();
        }
        ::GameObject* GetRigTemplate() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rigTemplate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetFreeRigs(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("freeRigs"));
            _field.Set(value);
        }
        void SetLocalRig(::GlobalNamespace::RigContainer* value) {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("localRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMEnsureNetworkObjectTimer(::GorillaTag::TickSystemTimer* value) {
            static BNM::Field<::GorillaTag::TickSystemTimer*> _field = GetClass().GetField(O("m_ensureNetworkObjectTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("networkParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnActiveRigsChanged(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnActiveRigsChanged"));
            _field.Set(value);
        }
        static void SetOnPostInitialize(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPostInitialize"));
            _field.Set(value);
        }
        static void SetOnPostSpawnRig(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPostSpawnRig"));
            _field.Set(value);
        }
        static void SetOnRigActivated(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>*> _field = GetClass().GetField(O("OnRigActivated"));
            _field.Set(value);
        }
        static void SetOnRigDeactivated(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>*> _field = GetClass().GetField(O("OnRigDeactivated"));
            _field.Set(value);
        }
        static void SetOnRigNameChanged(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>*> _field = GetClass().GetField(O("OnRigNameChanged"));
            _field.Set(value);
        }
        void SetRigAmount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("rigAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rigParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRigRGBData(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("rigRGBData"));
            _field.Set(value);
        }
        static void SetRigsInUse(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::RigContainer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::RigContainer*>*> _field = GetClass().GetField(O("rigsInUse"));
            _field.Set(value);
        }
        void SetRigTemplate(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rigTemplate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void add_OnActiveRigsChanged_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnActiveRigsChanged"), {"value"});
            _m.Call(value);
        }
        static void add_OnPostInitialize_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPostInitialize"), {"value"});
            _m.Call(value);
        }
        static void add_OnPostSpawnRig_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPostSpawnRig"), {"value"});
            _m.Call(value);
        }
        static void add_OnRigActivated_1(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnRigActivated"), {"value"});
            _m.Call(value);
        }
        static void add_OnRigDeactivated_1(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnRigDeactivated"), {"value"});
            _m.Call(value);
        }
        static void add_OnRigNameChanged_1(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnRigNameChanged"), {"value"});
            _m.Call(value);
        }
        void AddRigToGorillaParent(::GlobalNamespace::NetPlayer* player, ::GlobalNamespace::VRRig* vrrig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddRigToGorillaParent"), {"player", "vrrig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, vrrig);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckForMissingPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckForMissingPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GlobalNamespace::VRRigCache* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::VRRigCache*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        static bool get_isInitialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isInitialized"));
            return _m.Call();
        }
        ::Transform* get_NetworkParent() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_NetworkParent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetActiveRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* rigsListToUpdate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetActiveRigs"), {"rigsListToUpdate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rigsListToUpdate);
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::VRRig*>* GetAllRigs() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::VRRig*>*> _m = GetClass().GetMethod(O("GetAllRigs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetAllRigsHash() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetAllRigsHash"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetAllUsedRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* rigs) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetAllUsedRigs"), {"rigs"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rigs);
        }
        void InitializeVRRigCache() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeVRRigCache"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InstantiateNetworkObject() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InstantiateNetworkObject"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LogError(::BNM::Structures::Mono::String* log) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogError"), {"log"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(log);
        }
        void LogInfo(::BNM::Structures::Mono::String* log) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogInfo"), {"log"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(log);
        }
        void LogWarning(::BNM::Structures::Mono::String* log) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogWarning"), {"log"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(log);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer* newPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEnteredRoom"), {"newPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPlayer);
        }
        void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer* leavingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"leavingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(leavingPlayer);
        }
        void OnVrrigSerializerSuccesfullySpawned() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnVrrigSerializerSuccesfullySpawned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void remove_OnActiveRigsChanged_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnActiveRigsChanged"), {"value"});
            _m.Call(value);
        }
        static void remove_OnPostInitialize_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPostInitialize"), {"value"});
            _m.Call(value);
        }
        static void remove_OnPostSpawnRig_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPostSpawnRig"), {"value"});
            _m.Call(value);
        }
        static void remove_OnRigActivated_1(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnRigActivated"), {"value"});
            _m.Call(value);
        }
        static void remove_OnRigDeactivated_1(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnRigDeactivated"), {"value"});
            _m.Call(value);
        }
        static void remove_OnRigNameChanged_1(::BNM::Structures::Mono::Action<::GlobalNamespace::RigContainer*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnRigNameChanged"), {"value"});
            _m.Call(value);
        }
        void RemoveRigFromGorillaParent(::GlobalNamespace::NetPlayer* player, ::GlobalNamespace::VRRig* vrrig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveRigFromGorillaParent"), {"player", "vrrig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, vrrig);
        }
        static void set_Instance(::GlobalNamespace::VRRigCache* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Instance"), {"value"});
            _m.Call(value);
        }
        static void set_isInitialized(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isInitialized"), {"value"});
            _m.Call(value);
        }
        ::GlobalNamespace::RigContainer* SpawnRig() {
            static BNM::Method<::GlobalNamespace::RigContainer*> _m = GetClass().GetMethod(O("SpawnRig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool TryGetVrrig(::Photon_Realtime::Player* targetPlayer, ::GlobalNamespace::RigContainer*& playerRig) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetVrrig"), {"targetPlayer", "playerRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(targetPlayer, &playerRig);
        }
        bool TryGetVrrig(int targetPlayerId, ::GlobalNamespace::RigContainer*& playerRig) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetVrrig"), {"targetPlayerId", "playerRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(targetPlayerId, &playerRig);
        }
        bool TryGetVrrig(::GlobalNamespace::NetPlayer* targetPlayer, ::GlobalNamespace::RigContainer*& playerRig) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetVrrig"), {"targetPlayer", "playerRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(targetPlayer, &playerRig);
        }
    };
}
