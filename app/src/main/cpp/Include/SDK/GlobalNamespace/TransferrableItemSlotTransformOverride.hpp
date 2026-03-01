#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TransferrableObject_PositionState.hpp"

namespace GlobalNamespace {
    struct TransferrableItemSlotTransformOverride : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TransferrableItemSlotTransformOverride");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetAnchor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("anchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SlotTransformOverride* GetDefaultPosition() {
            static BNM::Field<::GlobalNamespace::SlotTransformOverride*> _field = GetClass().GetField(O("defaultPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDefaultTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("defaultTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferrableObject* GetFollowingTransferrableObject() {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("followingTransferrableObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferrableObject_PositionState GetLastPosition() {
            static BNM::Field<::GlobalNamespace::TransferrableObject_PositionState> _field = GetClass().GetField(O("lastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::GlobalNamespace::TransferrableObject*>* GetOnBringUpWindow() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::TransferrableObject*>*> _field = GetClass().GetField(O("OnBringUpWindow"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::TransferrableObject_PositionState, ::Transform*>* GetTransformFromPosition() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::TransferrableObject_PositionState, ::Transform*>*> _field = GetClass().GetField(O("transformFromPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SlotTransformOverride*>* GetTransformOverrides() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SlotTransformOverride*>*> _field = GetClass().GetField(O("transformOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SlotTransformOverride*>* GetTransformOverridesDeprecated() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SlotTransformOverride*>*> _field = GetClass().GetField(O("transformOverridesDeprecated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnchor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("anchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultPosition(::GlobalNamespace::SlotTransformOverride* value) {
            static BNM::Field<::GlobalNamespace::SlotTransformOverride*> _field = GetClass().GetField(O("defaultPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("defaultTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFollowingTransferrableObject(::GlobalNamespace::TransferrableObject* value) {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("followingTransferrableObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPosition(::GlobalNamespace::TransferrableObject_PositionState value) {
            static BNM::Field<::GlobalNamespace::TransferrableObject_PositionState> _field = GetClass().GetField(O("lastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnBringUpWindow(::BNM::Structures::Mono::Action<::GlobalNamespace::TransferrableObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::TransferrableObject*>*> _field = GetClass().GetField(O("OnBringUpWindow"));
            _field.Set(value);
        }
        void SetTransformFromPosition(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::TransferrableObject_PositionState, ::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::TransferrableObject_PositionState, ::Transform*>*> _field = GetClass().GetField(O("transformFromPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransformOverrides(::BNM::Structures::Mono::List<::GlobalNamespace::SlotTransformOverride*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SlotTransformOverride*>*> _field = GetClass().GetField(O("transformOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransformOverridesDeprecated(::BNM::Structures::Mono::List<::GlobalNamespace::SlotTransformOverride*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SlotTransformOverride*>*> _field = GetClass().GetField(O("transformOverridesDeprecated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddGripPosition(::GlobalNamespace::TransferrableObject_PositionState state, ::GlobalNamespace::TransferrableObjectGripPosition* togp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddGripPosition"), {"state", "togp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state, togp);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Edit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Edit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GenerateTransformFromPositionState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateTransformFromPositionState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::AdvancedItemState* GetAdvancedItemStateFromHand(::GlobalNamespace::TransferrableObject_PositionState currentState, ::Transform* handTransform, ::Transform* targetDock) {
            static BNM::Method<::GlobalNamespace::AdvancedItemState*> _m = GetClass().GetMethod(O("GetAdvancedItemStateFromHand"), {"currentState", "handTransform", "targetDock"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(currentState, handTransform, targetDock);
        }
        ::Transform* GetTransformFromPositionState(::GlobalNamespace::TransferrableObject_PositionState currentState) {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetTransformFromPositionState"), {"currentState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(currentState);
        }
        bool GetTransformFromPositionState(::GlobalNamespace::TransferrableObject_PositionState currentState, ::GlobalNamespace::AdvancedItemState* advancedItemState, ::Transform* targetDockXf, ::BNM::Structures::Unity::Matrix4x4& matrix4X4) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetTransformFromPositionState"), {"currentState", "advancedItemState", "targetDockXf", "matrix4X4"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(currentState, advancedItemState, targetDockXf, &matrix4X4);
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
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
