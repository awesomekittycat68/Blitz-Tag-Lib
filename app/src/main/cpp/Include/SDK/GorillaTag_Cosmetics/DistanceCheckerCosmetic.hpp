#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DistanceCheckerCosmetic_DistanceCondition.hpp"
#include "DistanceCheckerCosmetic_State.hpp"
#include "../GorillaTag_CosmeticSystem/ECosmeticSelectSide.hpp"

namespace GorillaTag_Cosmetics {
    struct DistanceCheckerCosmetic : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "DistanceCheckerCosmetic");
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
        ::BNM::Structures::Unity::Vector3 GetClosestDistance() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("closestDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetCurrentClosestPlayer() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("currentClosestPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::DistanceCheckerCosmetic_State GetCurrentState() {
            static BNM::Field<::GorillaTag_Cosmetics::DistanceCheckerCosmetic_State> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDistanceFrom() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("distanceFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDistanceThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::DistanceCheckerCosmetic_DistanceCondition GetDistanceTo() {
            static BNM::Field<::GorillaTag_Cosmetics::DistanceCheckerCosmetic_DistanceCondition> _field = GetClass().GetField(O("distanceTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetMyRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnAllAreAboveThreshold() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onAllAreAboveThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnClosestPlayerBelowThresholdChanged() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onClosestPlayerBelowThresholdChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnOneIsBelowThreshold() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onOneIsBelowThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetOwnerRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("ownerRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferrableObject* GetTransferableObject() {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("transferableObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetClosestDistance(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("closestDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentClosestPlayer(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("currentClosestPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GorillaTag_Cosmetics::DistanceCheckerCosmetic_State value) {
            static BNM::Field<::GorillaTag_Cosmetics::DistanceCheckerCosmetic_State> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistanceFrom(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("distanceFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistanceThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistanceTo(::GorillaTag_Cosmetics::DistanceCheckerCosmetic_DistanceCondition value) {
            static BNM::Field<::GorillaTag_Cosmetics::DistanceCheckerCosmetic_DistanceCondition> _field = GetClass().GetField(O("distanceTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnAllAreAboveThreshold(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onAllAreAboveThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnClosestPlayerBelowThresholdChanged(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onClosestPlayerBelowThresholdChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnOneIsBelowThreshold(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onOneIsBelowThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwnerRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("ownerRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransferableObject(::GlobalNamespace::TransferrableObject* value) {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("transferableObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GorillaTag_CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() {
            static BNM::Method<::GorillaTag_CosmeticSystem::ECosmeticSelectSide> _m = GetClass().GetMethod(O("get_CosmeticSelectedSide"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsSpawned() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsSpawned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsAboveThreshold(::BNM::Structures::Unity::Vector3 distance) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAboveThreshold"), {"distance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(distance);
        }
        bool IsBelowThreshold(::BNM::Structures::Unity::Vector3 distance) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsBelowThreshold"), {"distance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(distance);
        }
        void OnDespawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDespawn"));
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
        void ResetClosestPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetClosestPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_CosmeticSelectedSide(::GorillaTag_CosmeticSystem::ECosmeticSelectSide value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CosmeticSelectedSide"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsSpawned(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsSpawned"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateClosestPlayer(bool others) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateClosestPlayer"), {"others"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(others);
        }
        void UpdateDistance() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDistance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateState(::GorillaTag_Cosmetics::DistanceCheckerCosmetic_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
    };
}
