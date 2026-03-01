#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/OwnershipOption.hpp"
#include "../Photon_Pun/RpcTarget.hpp"

namespace GlobalNamespace {
    struct NetworkView : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NetworkView");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

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
        ::Photon_Pun::PhotonView* GetGetView() {
            static BNM::Method<::Photon_Pun::PhotonView*> _method = GetClass().GetMethod(O("get_GetView"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasView() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasView"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsMine() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsMine"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsRoomView() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsRoomView"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsValid() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsValid"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::NetPlayer* GetOwner() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _method = GetClass().GetMethod(O("get_Owner"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
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
        ::Photon_Pun::OwnershipOption GetOwnershipTransfer() {
            static BNM::Method<::Photon_Pun::OwnershipOption> _method = GetClass().GetMethod(O("get_OwnershipTransfer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOwnershipTransfer(::Photon_Pun::OwnershipOption value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_OwnershipTransfer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetViewID() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ViewID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetSceneObject() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_sceneObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSpawned() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_spawned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetChangingStatAuth() {
            static BNM::Field<bool> _field = GetClass().GetField(O("changingStatAuth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetFusionView() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("fusionView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetPunView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("punView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetReliableView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("reliableView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSceneObject(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_sceneObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawned(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_spawned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChangingStatAuth(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("changingStatAuth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFusionView(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("fusionView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPunView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("punView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReliableView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("reliableView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        int get_ControllerActorNr() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ControllerActorNr"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Pun::PhotonView* get_GetView() {
            static BNM::Method<::Photon_Pun::PhotonView*> _m = GetClass().GetMethod(O("get_GetView"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasView() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasView"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsMine() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsMine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsRoomView() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsRoomView"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::NetPlayer* get_Owner() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("get_Owner"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_OwnerActorNr() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_OwnerActorNr"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Pun::OwnershipOption get_OwnershipTransfer() {
            static BNM::Method<::Photon_Pun::OwnershipOption> _m = GetClass().GetMethod(O("get_OwnershipTransfer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ViewID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ViewID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetViews() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetViews"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnOwnershipRequest(::Photon_Pun::PhotonView* targetView, ::Photon_Realtime::Player* requestingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOwnershipRequest"), {"targetView", "requestingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetView, requestingPlayer);
        }
        void OnOwnershipTransfered(::Photon_Pun::PhotonView* targetView, ::Photon_Realtime::Player* previousOwner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOwnershipTransfered"), {"targetView", "previousOwner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetView, previousOwner);
        }
        void OnOwnershipTransferFailed(::Photon_Pun::PhotonView* targetView, ::Photon_Realtime::Player* senderOfFailedRequest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOwnershipTransferFailed"), {"targetView", "senderOfFailedRequest"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetView, senderOfFailedRequest);
        }
        void ReleaseOwnership() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReleaseOwnership"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestOwnership() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestOwnership"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendRPC(::BNM::Structures::Mono::String* method, ::GlobalNamespace::NetPlayer* targetPlayer, ::BNM::Structures::Mono::Array<void*>* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendRPC"), {"method", "targetPlayer", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(method, targetPlayer, parameters);
        }
        void SendRPC(::BNM::Structures::Mono::String* method, ::Photon_Pun::RpcTarget target, ::BNM::Structures::Mono::Array<void*>* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendRPC"), {"method", "target", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(method, target, parameters);
        }
        void SendRPC(::BNM::Structures::Mono::String* method, int target, ::BNM::Structures::Mono::Array<void*>* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendRPC"), {"method", "target", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(method, target, parameters);
        }
        void set_ControllerActorNr(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ControllerActorNr"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_OwnerActorNr(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_OwnerActorNr"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_OwnershipTransfer(::Photon_Pun::OwnershipOption value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_OwnershipTransfer"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Spawned() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Spawned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StateAuthorityChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StateAuthorityChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
