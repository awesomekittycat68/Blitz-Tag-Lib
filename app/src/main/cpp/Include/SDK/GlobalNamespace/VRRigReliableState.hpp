#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BodyDockPositions_DropPositions.hpp"
#include "ReliableStateData.hpp"
#include "TransferrableObject_ItemStates.hpp"
#include "TransferrableObject_PositionState.hpp"

namespace GlobalNamespace {
    struct VRRigReliableState : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VRRigReliableState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int64_t IS_MIC_ENABLED_BIT = 32;
        static constexpr int64_t BRACELET_LEFTHAND_BIT = 64;
        static constexpr int64_t BUILDER_WATCH_ENABLED_BIT = 128;
        static constexpr int BRACELET_NUM_BEADS_SHIFT = 12;
        static constexpr int LPROJECTILECOLOR_R_SHIFT = 16;
        static constexpr int LPROJECTILECOLOR_G_SHIFT = 24;
        static constexpr int LPROJECTILECOLOR_B_SHIFT = 32;
        static constexpr int RPROJECTILECOLOR_R_SHIFT = 40;
        static constexpr int RPROJECTILECOLOR_G_SHIFT = 48;
        static constexpr int RPROJECTILECOLOR_B_SHIFT = 56;
        static constexpr int POS_STATES_SHIFT = 32;
        static constexpr int ITEM_STATES_SHIFT = 40;
        static constexpr int DOCK_POSITIONS_SHIFT = 48;
        static constexpr int BRACELET_SELF_INDEX_SHIFT = 60;
        bool GetHasBracelet() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasBracelet"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsDirty() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isDirty"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsDirty(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_isDirty"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<int>* GetActiveTransferrableObjectIndex() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("activeTransferrableObjectIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BodyDockPositions* GetBDock() {
            static BNM::Field<::GlobalNamespace::BodyDockPositions*> _field = GetClass().GetField(O("bDock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Color>* GetBraceletBeadColors() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("braceletBeadColors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBraceletSelfIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("braceletSelfIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ReliableStateData GetData() {
            static BNM::Field<::GlobalNamespace::ReliableStateData> _field = GetClass().GetField(O("Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsBraceletLeftHanded() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBraceletLeftHanded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsBuilderWatchEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBuilderWatchEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsMicEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMicEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsOfflineVRRig() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOfflineVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLThrowableProjectileColor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("lThrowableProjectileColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLThrowableProjectileIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lThrowableProjectileIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRandomThrowableIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("randomThrowableIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRThrowableProjectileColor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("rThrowableProjectileColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRThrowableProjectileIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("rThrowableProjectileIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSizeLayerMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("sizeLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::BodyDockPositions_DropPositions>* GetTransferableDockPositions() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::BodyDockPositions_DropPositions>*> _field = GetClass().GetField(O("transferableDockPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject_ItemStates>* GetTransferrableItemStates() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject_ItemStates>*> _field = GetClass().GetField(O("transferrableItemStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject_PositionState>* GetTransferrablePosStates() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject_PositionState>*> _field = GetClass().GetField(O("transferrablePosStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWearablesPackedStates() {
            static BNM::Field<int> _field = GetClass().GetField(O("wearablesPackedStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveTransferrableObjectIndex(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("activeTransferrableObjectIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBDock(::GlobalNamespace::BodyDockPositions* value) {
            static BNM::Field<::GlobalNamespace::BodyDockPositions*> _field = GetClass().GetField(O("bDock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBraceletBeadColors(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Color>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("braceletBeadColors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBraceletSelfIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("braceletSelfIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetData(::GlobalNamespace::ReliableStateData value) {
            static BNM::Field<::GlobalNamespace::ReliableStateData> _field = GetClass().GetField(O("Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsBraceletLeftHanded(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBraceletLeftHanded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsBuilderWatchEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBuilderWatchEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsMicEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMicEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsOfflineVRRig(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOfflineVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLThrowableProjectileColor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("lThrowableProjectileColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLThrowableProjectileIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lThrowableProjectileIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandomThrowableIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("randomThrowableIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRThrowableProjectileColor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("rThrowableProjectileColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRThrowableProjectileIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("rThrowableProjectileIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSizeLayerMask(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sizeLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransferableDockPositions(::BNM::Structures::Mono::Array<::GlobalNamespace::BodyDockPositions_DropPositions>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::BodyDockPositions_DropPositions>*> _field = GetClass().GetField(O("transferableDockPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransferrableItemStates(::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject_ItemStates>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject_ItemStates>*> _field = GetClass().GetField(O("transferrableItemStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransferrablePosStates(::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject_PositionState>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObject_PositionState>*> _field = GetClass().GetField(O("transferrablePosStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWearablesPackedStates(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("wearablesPackedStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_HasBracelet() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasBracelet"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isDirty() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isDirty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t GetHeader() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("GetHeader"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<int64_t>* GetTransferrableStates(int64_t header) {
            static BNM::Method<::BNM::Structures::Mono::List<int64_t>*> _m = GetClass().GetMethod(O("GetTransferrableStates"), {"header"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(header);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static int64_t PackBeadColors(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Color>* beadColors, int fromIndex) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("PackBeadColors"), {"beadColors", "fromIndex"});
            return _m.Call(beadColors, fromIndex);
        }
        void set_isDirty(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isDirty"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetHeader(int64_t header, int& numBeadsToRead) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHeader"), {"header", "numBeadsToRead"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(header, &numBeadsToRead);
        }
        void SetIsDirty_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetIsDirty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetIsNotDirty() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetIsNotDirty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SharedStart(bool isOfflineVRRig_, ::GlobalNamespace::BodyDockPositions* bDock_) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SharedStart"), {"isOfflineVRRig_", "bDock_"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isOfflineVRRig_, bDock_);
        }
        static void UnpackBeadColors(int64_t packed, int startIndex, int endIndex, ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Color>* beadColorsResult) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnpackBeadColors"), {"packed", "startIndex", "endIndex", "beadColorsResult"});
            _m.Call(packed, startIndex, endIndex, beadColorsResult);
        }
    };
}
