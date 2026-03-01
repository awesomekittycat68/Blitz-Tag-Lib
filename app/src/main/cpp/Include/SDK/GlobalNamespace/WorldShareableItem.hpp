#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NetworkComponent.hpp"
#include "TransferrableObject_ItemStates.hpp"
#include "TransferrableObject_PositionState.hpp"
#include "WorldShareableItem_CachedData.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct WorldShareableItem : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "WorldShareableItem");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetEnableRemoteSync() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_EnableRemoteSync"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEnableRemoteSync(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_EnableRemoteSync"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::WorldTargetItem* GetTarget() {
            static BNM::Method<::GlobalNamespace::WorldTargetItem*> _method = GetClass().GetMethod(O("get_target"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTarget(::GlobalNamespace::WorldTargetItem* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_target"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::TransferrableObject_ItemStates GetTransferableObjectItemState() {
            static BNM::Method<::GlobalNamespace::TransferrableObject_ItemStates> _method = GetClass().GetMethod(O("get_transferableObjectItemState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTransferableObjectItemState(::GlobalNamespace::TransferrableObject_ItemStates value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_transferableObjectItemState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::TransferrableObject_ItemStates GetTransferableObjectItemStateNetworked() {
            static BNM::Method<::GlobalNamespace::TransferrableObject_ItemStates> _method = GetClass().GetMethod(O("get_transferableObjectItemStateNetworked"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTransferableObjectItemStateNetworked(::GlobalNamespace::TransferrableObject_ItemStates value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_transferableObjectItemStateNetworked"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::TransferrableObject_PositionState GetTransferableObjectState() {
            static BNM::Method<::GlobalNamespace::TransferrableObject_PositionState> _method = GetClass().GetMethod(O("get_transferableObjectState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTransferableObjectState(::GlobalNamespace::TransferrableObject_PositionState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_transferableObjectState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::TransferrableObject_PositionState GetTransferableObjectStateNetworked() {
            static BNM::Method<::GlobalNamespace::TransferrableObject_PositionState> _method = GetClass().GetMethod(O("get_transferableObjectStateNetworked"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTransferableObjectStateNetworked(::GlobalNamespace::TransferrableObject_PositionState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_transferableObjectStateNetworked"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::WorldTargetItem* GetTarget_f() {
            static BNM::Field<::GlobalNamespace::WorldTargetItem*> _field = GetClass().GetField(O("_target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::WorldShareableItem_CachedData>* GetCachedDatas() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::WorldShareableItem_CachedData>*> _field = GetClass().GetField(O("cachedDatas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableRemoteSync_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableRemoteSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RequestableOwnershipGuard* GetGuard() {
            static BNM::Field<::GlobalNamespace::RequestableOwnershipGuard*> _field = GetClass().GetField(O("guard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate* GetOnOwnerChangeCb() {
            static BNM::Field<::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*> _field = GetClass().GetField(O("onOwnerChangeCb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetRpcCallBack() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("rpcCallBack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransformViewTeleportSerializer* GetTeleportSerializer() {
            static BNM::Field<::GlobalNamespace::TransformViewTeleportSerializer*> _field = GetClass().GetField(O("teleportSerializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetValidShareable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("validShareable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTarget_fs(::GlobalNamespace::WorldTargetItem* value) {
            static BNM::Field<::GlobalNamespace::WorldTargetItem*> _field = GetClass().GetField(O("_target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedDatas(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::WorldShareableItem_CachedData>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::WorldShareableItem_CachedData>*> _field = GetClass().GetField(O("cachedDatas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableRemoteSync_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableRemoteSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuard(::GlobalNamespace::RequestableOwnershipGuard* value) {
            static BNM::Field<::GlobalNamespace::RequestableOwnershipGuard*> _field = GetClass().GetField(O("guard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnOwnerChangeCb(::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate* value) {
            static BNM::Field<::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*> _field = GetClass().GetField(O("onOwnerChangeCb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRpcCallBack(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("rpcCallBack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportSerializer(::GlobalNamespace::TransformViewTeleportSerializer* value) {
            static BNM::Field<::GlobalNamespace::TransformViewTeleportSerializer*> _field = GetClass().GetField(O("teleportSerializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValidShareable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("validShareable"));
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
        bool get_EnableRemoteSync() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_EnableRemoteSync"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::WorldTargetItem* get_target() {
            static BNM::Method<::GlobalNamespace::WorldTargetItem*> _m = GetClass().GetMethod(O("get_target"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::TransferrableObject_ItemStates get_transferableObjectItemState() {
            static BNM::Method<::GlobalNamespace::TransferrableObject_ItemStates> _m = GetClass().GetMethod(O("get_transferableObjectItemState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::TransferrableObject_ItemStates get_transferableObjectItemStateNetworked() {
            static BNM::Method<::GlobalNamespace::TransferrableObject_ItemStates> _m = GetClass().GetMethod(O("get_transferableObjectItemStateNetworked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::TransferrableObject_PositionState get_transferableObjectState() {
            static BNM::Method<::GlobalNamespace::TransferrableObject_PositionState> _m = GetClass().GetMethod(O("get_transferableObjectState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::TransferrableObject_PositionState get_transferableObjectStateNetworked() {
            static BNM::Method<::GlobalNamespace::TransferrableObject_PositionState> _m = GetClass().GetMethod(O("get_transferableObjectStateNetworked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Invalidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invalidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsTargetValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTargetValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        bool OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer* fromPlayer, ::GlobalNamespace::NetPlayer* toPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnMasterClientAssistedTakeoverRequest"), {"fromPlayer", "toPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(fromPlayer, toPlayer);
        }
        void OnMyCreatorLeft() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMyCreatorLeft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnMyOwnerLeft() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMyOwnerLeft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnOwnerChange(::Photon_Realtime::Player* newOwner, ::Photon_Realtime::Player* previousOwner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOwnerChange"), {"newOwner", "previousOwner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newOwner, previousOwner);
        }
        bool OnOwnershipRequest(::GlobalNamespace::NetPlayer* fromPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnOwnershipRequest"), {"fromPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(fromPlayer);
        }
        void OnOwnershipTransferred(::GlobalNamespace::NetPlayer* toPlayer, ::GlobalNamespace::NetPlayer* fromPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOwnershipTransferred"), {"toPlayer", "fromPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toPlayer, fromPlayer);
        }
        void OnPhotonInstantiate(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPhotonInstantiate"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void ReadDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReadDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void ResetViews() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetViews"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RPCWorldShareable(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPCWorldShareable"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void set_EnableRemoteSync(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_EnableRemoteSync"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_target(::GlobalNamespace::WorldTargetItem* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_target"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_transferableObjectItemState(::GlobalNamespace::TransferrableObject_ItemStates value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_transferableObjectItemState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_transferableObjectItemStateNetworked(::GlobalNamespace::TransferrableObject_ItemStates value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_transferableObjectItemStateNetworked"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_transferableObjectState(::GlobalNamespace::TransferrableObject_PositionState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_transferableObjectState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_transferableObjectStateNetworked(::GlobalNamespace::TransferrableObject_PositionState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_transferableObjectStateNetworked"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetupSceneObjectOnNetwork(::GlobalNamespace::NetPlayer* owner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupSceneObjectOnNetwork"), {"owner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(owner);
        }
        void SetupSharableObject(int itemIDx, ::GlobalNamespace::NetPlayer* owner, ::Transform* targetXform) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupSharableObject"), {"itemIDx", "owner", "targetXform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(itemIDx, owner, targetXform);
        }
        void SetupSharableViewIDs(::GlobalNamespace::NetPlayer* player, int slotID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupSharableViewIDs"), {"player", "slotID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, slotID);
        }
        void SetWillTeleport() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetWillTeleport"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SyncToSceneObject(::GlobalNamespace::TransferrableObject* transferrableObject) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SyncToSceneObject"), {"transferrableObject"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(transferrableObject);
        }
        void TriggeredUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggeredUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
    };
}
