#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NetworkingState.hpp"
#include "../Photon_Pun/MonoBehaviourPunCallbacks.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct RequestableOwnershipGuard : ::Photon_Pun::MonoBehaviourPunCallbacks {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RequestableOwnershipGuard");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::NetworkingState GetEdCurrentState() {
            static BNM::Method<::GlobalNamespace::NetworkingState> _method = GetClass().GetMethod(O("get_EdCurrentState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsMine() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isMine"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsTrulyMine() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isTrulyMine"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::NetworkView* GetNetView() {
            static BNM::Method<::GlobalNamespace::NetworkView*> _method = GetClass().GetMethod(O("get_netView"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::NetPlayer* GetActualOwner() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("actualOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAttemptMasterAssistedTakeoverOnDeny() {
            static BNM::Field<bool> _field = GetClass().GetField(O("attemptMasterAssistedTakeoverOnDeny"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAutoRegister() {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoRegister"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetCallbacksList() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("callbacksList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetCreator() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("creator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetCurrentMasterClient() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("currentMasterClient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetCurrentOwner() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("currentOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetworkingState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::NetworkingState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetFallbackOwner() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("fallbackOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGiveCreatorAbsoluteAuthority() {
            static BNM::Field<bool> _field = GetClass().GetField(O("giveCreatorAbsoluteAuthority"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::NetworkView*>* GetNetViews() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NetworkView*>*> _field = GetClass().GetField(O("netViews"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOwnershipDenied() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("ownershipDenied"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOwnershipRequestAccepted() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("ownershipRequestAccepted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOwnershipRequestNonce() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ownershipRequestNonce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActualOwner(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("actualOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttemptMasterAssistedTakeoverOnDeny(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("attemptMasterAssistedTakeoverOnDeny"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoRegister(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoRegister"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCallbacksList(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("callbacksList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreator(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("creator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentMasterClient(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("currentMasterClient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentOwner(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("currentOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::NetworkingState value) {
            static BNM::Field<::GlobalNamespace::NetworkingState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFallbackOwner(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("fallbackOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGiveCreatorAbsoluteAuthority(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("giveCreatorAbsoluteAuthority"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetViews(::BNM::Structures::Mono::Array<::GlobalNamespace::NetworkView*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NetworkView*>*> _field = GetClass().GetField(O("netViews"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwnershipDenied(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("ownershipDenied"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwnershipRequestAccepted(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("ownershipRequestAccepted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwnershipRequestNonce(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ownershipRequestNonce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        void AddCallbackTarget(TP0 callbackObject) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCallbackTarget"), {"callbackObject"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callbackObject);
        }
        void BindNetworkViews() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BindNetworkViews"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::NetworkingState get_EdCurrentState() {
            static BNM::Method<::GlobalNamespace::NetworkingState> _m = GetClass().GetMethod(O("get_EdCurrentState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isMine() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isMine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isTrulyMine() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isTrulyMine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::NetworkView* get_netView() {
            static BNM::Method<::GlobalNamespace::NetworkView*> _m = GetClass().GetMethod(O("get_netView"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::NetPlayer* GetAuthoritativePlayer() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("GetAuthoritativePlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void JoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MasterClientSwitch(::GlobalNamespace::NetPlayer* newMaster) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MasterClientSwitch"), {"newMaster"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newMaster);
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
        void OnPreLeavingRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPreLeavingRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OwnershipRequestDenied(::BNM::Structures::Mono::String* nonce, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OwnershipRequestDenied"), {"nonce", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nonce, info);
        }
        void OwnershipRequested(::BNM::Structures::Mono::String* nonce, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OwnershipRequested"), {"nonce", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nonce, info);
        }
        void PlayerEnteredRoom(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerEnteredRoom"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        bool PlayerHasAuthority(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PlayerHasAuthority"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        void PlayerLeftRoom(::GlobalNamespace::NetPlayer* otherPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerLeftRoom"), {"otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherPlayer);
        }
        template <typename TP0 = void*>
        void RemoveCallbackTarget(TP0 callbackObject) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCallbackTarget"), {"callbackObject"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callbackObject);
        }
        void RequestCurrentOwnerFromAuthorityRPC(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestCurrentOwnerFromAuthorityRPC"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void RequestOwnership(::BNM::Structures::Mono::Action<>* onRequestSuccess, ::BNM::Structures::Mono::Action<>* onRequestFailed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestOwnership"), {"onRequestSuccess", "onRequestFailed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(onRequestSuccess, onRequestFailed);
        }
        void RequestOwnershipImmediately(::BNM::Structures::Mono::Action<>* onRequestFailed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestOwnershipImmediately"), {"onRequestFailed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(onRequestFailed);
        }
        void RequestOwnershipImmediatelyWithGuaranteedAuthority() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestOwnershipImmediatelyWithGuaranteedAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestTheCurrentOwnerFromAuthority() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestTheCurrentOwnerFromAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* RequestTimeout() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("RequestTimeout"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SetCreator_1(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCreator"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void SetCurrentOwner_1(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCurrentOwner"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void SetOwnership(::GlobalNamespace::NetPlayer* player, bool isLocalOnly, bool dontPropigate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetOwnership"), {"player", "isLocalOnly", "dontPropigate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, isLocalOnly, dontPropigate);
        }
        void SetOwnershipFromMasterClient(::Photon_Realtime::Player* nextMaster, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetOwnershipFromMasterClient"), {"nextMaster", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nextMaster, info);
        }
        void SetOwnershipFromMasterClient(::GlobalNamespace::NetPlayer* nextMaster, ::GlobalNamespace::NetPlayer* sender) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetOwnershipFromMasterClient"), {"nextMaster", "sender"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nextMaster, sender);
        }
        void SetViewToRequest() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetViewToRequest"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TransferOwnership(::GlobalNamespace::NetPlayer* player, ::BNM::Structures::Mono::String* Nonce) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TransferOwnership"), {"player", "Nonce"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, Nonce);
        }
        void TransferOwnershipFromToRPC(::Photon_Realtime::Player* nextplayer, ::BNM::Structures::Mono::String* nonce, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TransferOwnershipFromToRPC"), {"nextplayer", "nonce", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nextplayer, nonce, info);
        }
        void TransferOwnershipWithID(int id) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TransferOwnershipWithID"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id);
        }
        void Validate(::BNM::IL2CPP::Il2CppObject* result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Validate"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
    };
}
