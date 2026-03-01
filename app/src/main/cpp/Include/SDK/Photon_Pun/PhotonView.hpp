#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "OwnershipOption.hpp"
#include "PhotonMessageInfo.hpp"
#include "PhotonView_CallbackTargetChange.hpp"
#include "PhotonView_ObservableSearch.hpp"
#include "RpcTarget.hpp"
#include "ViewSynchronization.hpp"

namespace Photon_Pun {
    struct PhotonView : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "PhotonView");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAmController() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AmController"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetAmOwner() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AmOwner"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAmOwner(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AmOwner"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Realtime::Player* GetController() {
            static BNM::Method<::Photon_Realtime::Player*> _method = GetClass().GetMethod(O("get_Controller"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetController(::Photon_Realtime::Player* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Controller"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetControllerActorNr() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ControllerActorNr"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetControllerActorNr(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ControllerActorNr"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetCreatorActorNr() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CreatorActorNr"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCreatorActorNr(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CreatorActorNr"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<void*>* GetInstantiationData() {
            static BNM::Method<::BNM::Structures::Mono::Array<void*>*> _method = GetClass().GetMethod(O("get_InstantiationData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstantiationData(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_InstantiationData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsMine() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsMine"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsMine(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsMine"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsOwnerActive() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsOwnerActive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsRoomView() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsRoomView"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsSceneView() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsSceneView"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Realtime::Player* GetOwner() {
            static BNM::Method<::Photon_Realtime::Player*> _method = GetClass().GetMethod(O("get_Owner"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOwner(::Photon_Realtime::Player* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Owner"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetOwnerActorNr() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_OwnerActorNr"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOwnerActorNr(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_OwnerActorNr"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetPrefix() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Prefix"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPrefix(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Prefix"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetViewID() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ViewID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetViewID(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ViewID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void* GetCallbackChangeQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("CallbackChangeQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetControllerActorNr_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("controllerActorNr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetGroup() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("Group"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<void*>* GetInstantiationDataField() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("instantiationDataField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInstantiationId() {
            static BNM::Field<int> _field = GetClass().GetField(O("InstantiationId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsRuntimeInstantiated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRuntimeInstantiated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<void*>* GetLastOnSerializeDataReceived() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("lastOnSerializeDataReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetLastOnSerializeDataSent() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("lastOnSerializeDataSent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMixedModeIsReliable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("mixedModeIsReliable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView_ObservableSearch GetObservableSearch() {
            static BNM::Field<::Photon_Pun::PhotonView_ObservableSearch> _field = GetClass().GetField(O("observableSearch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Component*>* GetObservedComponents() {
            static BNM::Field<::BNM::Structures::Mono::List<::Component*>*> _field = GetClass().GetField(O("ObservedComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetOnControllerChangeCallbacks() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("OnControllerChangeCallbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetOnOwnerChangeCallbacks() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("OnOwnerChangeCallbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetOnPreNetDestroyCallbacks() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("OnPreNetDestroyCallbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOwnerActorNr_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("ownerActorNr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::OwnershipOption GetOwnershipTransfer() {
            static BNM::Field<::Photon_Pun::OwnershipOption> _field = GetClass().GetField(O("OwnershipTransfer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPrefixField() {
            static BNM::Field<int> _field = GetClass().GetField(O("prefixField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRemovedFromLocalViewList() {
            static BNM::Field<bool> _field = GetClass().GetField(O("removedFromLocalViewList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::MonoBehaviour*>* GetRpcMonoBehaviours() {
            static BNM::Field<::BNM::Structures::Mono::Array<::MonoBehaviour*>*> _field = GetClass().GetField(O("RpcMonoBehaviours"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSceneViewId() {
            static BNM::Field<int> _field = GetClass().GetField(O("sceneViewId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::ViewSynchronization GetSynchronization() {
            static BNM::Field<::Photon_Pun::ViewSynchronization> _field = GetClass().GetField(O("Synchronization"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetSyncValues() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("syncValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetViewIdField() {
            static BNM::Field<int> _field = GetClass().GetField(O("viewIdField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallbackChangeQueue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("CallbackChangeQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetControllerActorNr_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("controllerActorNr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroup(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("Group"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstantiationDataField(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("instantiationDataField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstantiationId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("InstantiationId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsRuntimeInstantiated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRuntimeInstantiated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastOnSerializeDataReceived(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("lastOnSerializeDataReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastOnSerializeDataSent(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("lastOnSerializeDataSent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMixedModeIsReliable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("mixedModeIsReliable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObservableSearch(::Photon_Pun::PhotonView_ObservableSearch value) {
            static BNM::Field<::Photon_Pun::PhotonView_ObservableSearch> _field = GetClass().GetField(O("observableSearch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObservedComponents(::BNM::Structures::Mono::List<::Component*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Component*>*> _field = GetClass().GetField(O("ObservedComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnControllerChangeCallbacks(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("OnControllerChangeCallbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnOwnerChangeCallbacks(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("OnOwnerChangeCallbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPreNetDestroyCallbacks(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("OnPreNetDestroyCallbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwnerActorNr_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ownerActorNr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwnershipTransfer(::Photon_Pun::OwnershipOption value) {
            static BNM::Field<::Photon_Pun::OwnershipOption> _field = GetClass().GetField(O("OwnershipTransfer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrefixField(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("prefixField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemovedFromLocalViewList(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("removedFromLocalViewList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRpcMonoBehaviours(::BNM::Structures::Mono::Array<::MonoBehaviour*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::MonoBehaviour*>*> _field = GetClass().GetField(O("RpcMonoBehaviours"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSceneViewId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sceneViewId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSynchronization(::Photon_Pun::ViewSynchronization value) {
            static BNM::Field<::Photon_Pun::ViewSynchronization> _field = GetClass().GetField(O("Synchronization"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSyncValues(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("syncValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetViewIdField(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("viewIdField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename T, typename TP0 = void*>
        void AddCallback(TP0 obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCallback"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        template <typename TP0 = void*>
        void AddCallbackTarget(TP0 obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCallbackTarget"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DeserializeComponent(::Component* component, ::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeComponent"), {"component", "stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(component, stream, info);
        }
        void DeserializeView(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeView"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        static ::Photon_Pun::PhotonView* Find(int viewID) {
            static BNM::Method<::Photon_Pun::PhotonView*> _m = GetClass().GetMethod(O("Find"), {"viewID"});
            return _m.Call(viewID);
        }
        void FindObservables(bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FindObservables"), {"force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(force);
        }
        static ::Photon_Pun::PhotonView* Get(::Component* component) {
            static BNM::Method<::Photon_Pun::PhotonView*> _m = GetClass().GetMethod(O("Get"), {"component"});
            return _m.Call(component);
        }
        static ::Photon_Pun::PhotonView* Get(::GameObject* gameObj) {
            static BNM::Method<::Photon_Pun::PhotonView*> _m = GetClass().GetMethod(O("Get"), {"gameObj"});
            return _m.Call(gameObj);
        }
        bool get_AmController() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AmController"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_AmOwner() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AmOwner"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::Player* get_Controller() {
            static BNM::Method<::Photon_Realtime::Player*> _m = GetClass().GetMethod(O("get_Controller"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ControllerActorNr() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ControllerActorNr"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_CreatorActorNr() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CreatorActorNr"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<void*>* get_InstantiationData() {
            static BNM::Method<::BNM::Structures::Mono::Array<void*>*> _m = GetClass().GetMethod(O("get_InstantiationData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsMine() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsMine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsOwnerActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsOwnerActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsRoomView() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsRoomView"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsSceneView() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsSceneView"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::Player* get_Owner() {
            static BNM::Method<::Photon_Realtime::Player*> _m = GetClass().GetMethod(O("get_Owner"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_OwnerActorNr() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_OwnerActorNr"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Prefix() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Prefix"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ViewID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ViewID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPreNetDestroy(::Photon_Pun::PhotonView* rootView) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPreNetDestroy"), {"rootView"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rootView);
        }
        void RebuildControllerCache(bool ownerHasChanged) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RebuildControllerCache"), {"ownerHasChanged"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ownerHasChanged);
        }
        void RefreshRpcMonoBehaviourCache() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshRpcMonoBehaviourCache"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename T>
        void RegisterCallback(T obj, ::BNM::IL2CPP::Il2CppObject*& list, bool add) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterCallback"), {"obj", "list", "add"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj, &list, add);
        }
        template <typename T, typename TP0 = void*>
        void RemoveCallback(TP0 obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCallback"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        template <typename TP0 = void*>
        void RemoveCallbackTarget(TP0 obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCallbackTarget"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void RequestOwnership() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestOwnership"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetPhotonView(bool resetOwner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetPhotonView"), {"resetOwner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(resetOwner);
        }
        void RPC(::BNM::Structures::Mono::String* methodName, ::Photon_Pun::RpcTarget target, ::BNM::Structures::Mono::Array<void*>* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC"), {"methodName", "target", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(methodName, target, parameters);
        }
        void RPC(::BNM::Structures::Mono::String* methodName, ::Photon_Realtime::Player* targetPlayer, ::BNM::Structures::Mono::Array<void*>* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC"), {"methodName", "targetPlayer", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(methodName, targetPlayer, parameters);
        }
        void RpcSecure(::BNM::Structures::Mono::String* methodName, ::Photon_Pun::RpcTarget target, bool encrypt, ::BNM::Structures::Mono::Array<void*>* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RpcSecure"), {"methodName", "target", "encrypt", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(methodName, target, encrypt, parameters);
        }
        void RpcSecure(::BNM::Structures::Mono::String* methodName, ::Photon_Realtime::Player* targetPlayer, bool encrypt, ::BNM::Structures::Mono::Array<void*>* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RpcSecure"), {"methodName", "targetPlayer", "encrypt", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(methodName, targetPlayer, encrypt, parameters);
        }
        void SerializeComponent(::Component* component, ::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeComponent"), {"component", "stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(component, stream, info);
        }
        void SerializeView(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeView"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void set_AmOwner(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AmOwner"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Controller(::Photon_Realtime::Player* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Controller"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ControllerActorNr(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ControllerActorNr"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CreatorActorNr(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CreatorActorNr"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_InstantiationData(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_InstantiationData"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsMine(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsMine"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Owner(::Photon_Realtime::Player* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Owner"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_OwnerActorNr(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_OwnerActorNr"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Prefix(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Prefix"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ViewID(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ViewID"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void TransferOwnership(::Photon_Realtime::Player* newOwner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TransferOwnership"), {"newOwner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newOwner);
        }
        void TransferOwnership(int newOwnerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TransferOwnership"), {"newOwnerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newOwnerId);
        }
        template <typename T, typename TP0 = void*>
        void TryRegisterCallback(TP0 obj, ::BNM::IL2CPP::Il2CppObject*& list, bool add) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryRegisterCallback"), {"obj", "list", "add"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj, &list, add);
        }
        void UpdateCallbackLists() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCallbackLists"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
