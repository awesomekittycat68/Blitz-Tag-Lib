#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "OneStringGuitar_GuitarStates.hpp"
#include "TransferrableObject.hpp"

namespace GlobalNamespace {
    struct OneStringGuitar : ::GlobalNamespace::TransferrableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "OneStringGuitar");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAngleLerpSnap() {
            static BNM::Field<float> _field = GetClass().GetField(O("angleLerpSnap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAngleSnapped() {
            static BNM::Field<bool> _field = GetClass().GetField(O("angleSnapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAnyHit() {
            static BNM::Field<bool> _field = GetClass().GetField(O("anyHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetAudioClips() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("audioClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetChestColliderLeft() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("chestColliderLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetChestColliderRight() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("chestColliderRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetChestOffsetLeft() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("chestOffsetLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetChestOffsetRight() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("chestOffsetRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetChestRotationOffset() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("chestRotationOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetChestTouch() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("chestTouch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetCollidersHit() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("collidersHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCollidersHitCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("collidersHitCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetCollidersToBeIn() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("collidersToBeIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetCurrentChestCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("currentChestCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentFretIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentFretIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaTriggerColliderHandIndicator* GetFretHandIndicator() {
            static BNM::Field<::GlobalNamespace::GorillaTriggerColliderHandIndicator*> _field = GetClass().GetField(O("fretHandIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetFrets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("frets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetFretsList() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("fretsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHandIn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("handIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetHoldingOffsetRotationLeft() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("holdingOffsetRotationLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetHoldingOffsetRotationRight() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("holdingOffsetRotationRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetInteractableMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("interactableMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastFretIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastFretIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::OneStringGuitar_GuitarStates GetLastState() {
            static BNM::Field<::GlobalNamespace::OneStringGuitar_GuitarStates> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaTriggerColliderHandIndicator* GetLeftHandIndicator() {
            static BNM::Field<::GlobalNamespace::GorillaTriggerColliderHandIndicator*> _field = GetClass().GetField(O("leftHandIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLerpValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("minVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::RaycastHit GetNullHit() {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("nullHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetParentHand() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("parentHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetParentHandLeft() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("parentHandLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetParentHandRight() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("parentHandRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPositionSnapped() {
            static BNM::Field<bool> _field = GetClass().GetField(O("positionSnapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Unity::RaycastHit>* GetRaycastHitList() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("raycastHitList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetRaycastHits() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("raycastHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetReverseGripPositionLeft() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("reverseGripPositionLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetReverseGripPositionRight() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("reverseGripPositionRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetReverseGripQuatLeft() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("reverseGripQuatLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetReverseGripQuatRight() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("reverseGripQuatRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaTriggerColliderHandIndicator* GetRightHandIndicator() {
            static BNM::Field<::GlobalNamespace::GorillaTriggerColliderHandIndicator*> _field = GetClass().GetField(O("rightHandIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSelfInstrumentIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("selfInstrumentIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSnapDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("snapDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSpherecastSweep() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("spherecastSweep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSphereRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("sphereRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetStartingLeftChestOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startingLeftChestOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetStartingRightChestOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startingRightChestOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartingUnsnapDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("startingUnsnapDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetStartPositionLeft() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startPositionLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetStartPositionRight() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startPositionRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetStartQuatLeft() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("startQuatLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetStartQuatRight() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("startQuatRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetStrumCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("strumCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaTriggerColliderHandIndicator* GetStrumHandIndicator() {
            static BNM::Field<::GlobalNamespace::GorillaTriggerColliderHandIndicator*> _field = GetClass().GetField(O("strumHandIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetStrumList() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("strumList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUnsnapDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("unsnapDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVectorLerpSnap() {
            static BNM::Field<float> _field = GetClass().GetField(O("vectorLerpSnap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAngleLerpSnap(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("angleLerpSnap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAngleSnapped(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("angleSnapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnyHit(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("anyHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioClips(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("audioClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChestColliderLeft(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("chestColliderLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChestColliderRight(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("chestColliderRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChestOffsetLeft(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("chestOffsetLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChestOffsetRight(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("chestOffsetRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChestRotationOffset(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("chestRotationOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChestTouch(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("chestTouch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollidersHit(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("collidersHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollidersHitCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("collidersHitCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollidersToBeIn(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("collidersToBeIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentChestCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("currentChestCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentFretIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentFretIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFretHandIndicator(::GlobalNamespace::GorillaTriggerColliderHandIndicator* value) {
            static BNM::Field<::GlobalNamespace::GorillaTriggerColliderHandIndicator*> _field = GetClass().GetField(O("fretHandIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrets(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("frets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFretsList(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("fretsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandIn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("handIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoldingOffsetRotationLeft(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("holdingOffsetRotationLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoldingOffsetRotationRight(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("holdingOffsetRotationRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInteractableMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("interactableMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastFretIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastFretIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastState(::GlobalNamespace::OneStringGuitar_GuitarStates value) {
            static BNM::Field<::GlobalNamespace::OneStringGuitar_GuitarStates> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandIndicator(::GlobalNamespace::GorillaTriggerColliderHandIndicator* value) {
            static BNM::Field<::GlobalNamespace::GorillaTriggerColliderHandIndicator*> _field = GetClass().GetField(O("leftHandIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLerpValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNullHit(::BNM::Structures::Unity::RaycastHit value) {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("nullHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentHand(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("parentHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentHandLeft(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("parentHandLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentHandRight(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("parentHandRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionSnapped(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("positionSnapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaycastHitList(::BNM::Structures::Mono::List<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("raycastHitList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaycastHits(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("raycastHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseGripPositionLeft(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("reverseGripPositionLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseGripPositionRight(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("reverseGripPositionRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseGripQuatLeft(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("reverseGripQuatLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseGripQuatRight(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("reverseGripQuatRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandIndicator(::GlobalNamespace::GorillaTriggerColliderHandIndicator* value) {
            static BNM::Field<::GlobalNamespace::GorillaTriggerColliderHandIndicator*> _field = GetClass().GetField(O("rightHandIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelfInstrumentIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("selfInstrumentIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("snapDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpherecastSweep(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("spherecastSweep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSphereRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sphereRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingLeftChestOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startingLeftChestOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingRightChestOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startingRightChestOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingUnsnapDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startingUnsnapDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartPositionLeft(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startPositionLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartPositionRight(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startPositionRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartQuatLeft(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("startQuatLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartQuatRight(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("startQuatRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStrumCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("strumCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStrumHandIndicator(::GlobalNamespace::GorillaTriggerColliderHandIndicator* value) {
            static BNM::Field<::GlobalNamespace::GorillaTriggerColliderHandIndicator*> _field = GetClass().GetField(O("strumHandIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStrumList(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("strumList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnsnapDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("unsnapDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVectorLerpSnap(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("vectorLerpSnap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::Collider* _GetChestColliderByPath(::GlobalNamespace::VRRig* vrRig, ::BNM::Structures::Mono::String* chestColliderLeftPath) {
            static BNM::Method<::Collider*> _m = GetClass().GetMethod(O("_GetChestColliderByPath"), {"vrRig", "chestColliderLeftPath"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(vrRig, chestColliderLeftPath);
        }
        bool CanActivate() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanActivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CanDeactivate() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanDeactivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CheckFretFinger(::Transform* finger) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckFretFinger"), {"finger"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(finger);
        }
        void GenerateClubOffsetLeft() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateClubOffsetLeft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GenerateClubOffsetRight() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateClubOffsetRight"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GenerateReverseGripOffsetLeft() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateReverseGripOffsetLeft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GenerateReverseGripOffsetRight() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateReverseGripOffsetRight"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GenerateVectorOffsetLeft() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateVectorOffsetLeft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GenerateVectorOffsetRight() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateVectorOffsetRight"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Matrix4x4 GetDefaultTransformationMatrix() {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("GetDefaultTransformationMatrix"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LateUpdateShared() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnActivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnActivate"));
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
        bool OnRelease(::GlobalNamespace::DropZone* zoneReleased, ::GameObject* releasingHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnRelease"), {"zoneReleased", "releasingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zoneReleased, releasingHand);
        }
        void OnSpawn(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSpawn"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        void PlayNote(int note, float volume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayNote"), {"note", "volume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(note, volume);
        }
        void TestClubPositionRight() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestClubPositionRight"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TestPlayingPositionRight() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestPlayingPositionRight"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TestReverseGripPositionRight() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestReverseGripPositionRight"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool Unsnap() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Unsnap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void UpdateNonPlayingPosition(::BNM::Structures::Unity::Vector3 positionTarget, ::BNM::Structures::Unity::Quaternion rotationTarget) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateNonPlayingPosition"), {"positionTarget", "rotationTarget"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(positionTarget, rotationTarget);
        }
    };
}
