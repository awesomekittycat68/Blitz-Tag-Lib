#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTag_CosmeticSystem/ECosmeticSelectSide.hpp"

namespace GlobalNamespace {
    struct InteractionPoint : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "InteractionPoint");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag_CosmeticSystem::ECosmeticSelectSide GetCosmeticSelectedSide() {
            static BNM::Method<::GorillaTag_CosmeticSystem::ECosmeticSelectSide> _method = GetClass().GetMethod(O("get_CosmeticSelectedSide"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCosmeticSelectedSide(::GorillaTag_CosmeticSystem::ECosmeticSelectSide value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CosmeticSelectedSide"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIgnoreLeftHand() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ignoreLeftHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIgnoreLeftHand(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ignoreLeftHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIgnoreRightHand() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ignoreRightHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIgnoreRightHand(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ignoreRightHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsSpawned() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsSpawned"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsSpawned(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsSpawned"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetForLocalPlayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("forLocalPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInteractionRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("interactionRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::EquipmentInteractor* GetInteractor() {
            static BNM::Field<::GlobalNamespace::EquipmentInteractor*> _field = GetClass().GetField(O("interactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsNonSpawnedObject() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isNonSpawnedObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetMyCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("myCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetParentHoldable() {
            static BNM::Field<void*> _field = GetClass().GetField(O("parentHoldable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetParentHoldableObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("parentHoldableObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasInLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasInLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasInRight() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasInRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetForLocalPlayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("forLocalPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInteractionRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("interactionRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInteractor(::GlobalNamespace::EquipmentInteractor* value) {
            static BNM::Field<::GlobalNamespace::EquipmentInteractor*> _field = GetClass().GetField(O("interactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsNonSpawnedObject(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isNonSpawnedObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("myCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentHoldable(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("parentHoldable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentHoldableObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("parentHoldableObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasInLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasInLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasInRight(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasInRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool BuildValidationCheck() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BuildValidationCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTag_CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() {
            static BNM::Method<::GorillaTag_CosmeticSystem::ECosmeticSelectSide> _m = GetClass().GetMethod(O("get_CosmeticSelectedSide"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_Holdable() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Holdable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ignoreLeftHand() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ignoreLeftHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ignoreRightHand() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ignoreRightHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsSpawned() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsSpawned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
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
        void OnSpawn(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSpawn"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        bool OverlapCheck(::BNM::Structures::Unity::Vector3 point) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OverlapCheck"), {"point"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(point);
        }
        void set_CosmeticSelectedSide(::GorillaTag_CosmeticSystem::ECosmeticSelectSide value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CosmeticSelectedSide"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ignoreLeftHand(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ignoreLeftHand"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ignoreRightHand(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ignoreRightHand"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsSpawned(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsSpawned"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
