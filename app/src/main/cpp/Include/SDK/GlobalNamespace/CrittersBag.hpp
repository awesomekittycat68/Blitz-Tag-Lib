#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActor.hpp"
#include "CrittersActor_CrittersActorType.hpp"
#include "CrittersAttachPoint_AnchoredLocationTypes.hpp"

namespace GlobalNamespace {
    struct CrittersBag : ::GlobalNamespace::CrittersActor {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersBag");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes GetAnchorLocation() {
            static BNM::Field<::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes> _field = GetClass().GetField(O("anchorLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetAttachableCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("attachableCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetAttachDisableColliders() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("attachDisableColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GameObject*>* GetAttachedColliders() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GameObject*>*> _field = GetClass().GetField(O("attachedColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAttachedToLocalPlayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("attachedToLocalPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetAttachSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("attachSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSrc() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor_CrittersActorType>* GetBlockAttachTypes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor_CrittersActorType>*> _field = GetClass().GetField(O("blockAttachTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDetachSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("detachSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoxCollider* GetDropCube() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("dropCube"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetEquipSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("equipSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsAttachedToPlayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isAttachedToPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetOverlapColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("overlapColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetUnequipSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("unequipSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnchorLocation(::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes value) {
            static BNM::Field<::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes> _field = GetClass().GetField(O("anchorLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachableCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("attachableCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachDisableColliders(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("attachDisableColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachedColliders(::BNM::Structures::Mono::Dictionary<int, ::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GameObject*>*> _field = GetClass().GetField(O("attachedColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachedToLocalPlayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("attachedToLocalPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("attachSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSrc(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlockAttachTypes(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor_CrittersActorType>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor_CrittersActorType>*> _field = GetClass().GetField(O("blockAttachTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDetachSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("detachSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDropCube(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("dropCube"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEquipSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("equipSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsAttachedToPlayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isAttachedToPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverlapColliders(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("overlapColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnequipSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("unequipSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddStoredObjectCollider(::GlobalNamespace::CrittersActor* actor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddStoredObjectCollider"), {"actor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actor);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CleanupActor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CleanupActor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GlobalGrabbedBy(::GlobalNamespace::CrittersActor* grabbedBy) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GlobalGrabbedBy"), {"grabbedBy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbedBy);
        }
        void GrabbedBy(::GlobalNamespace::CrittersActor* grabbedBy, bool positionOverride, ::BNM::Structures::Unity::Quaternion localRotation, ::BNM::Structures::Unity::Vector3 localOffset, bool disableGrabbing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabbedBy"), {"grabbedBy", "positionOverride", "localRotation", "localOffset", "disableGrabbing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbedBy, positionOverride, localRotation, localOffset, disableGrabbing);
        }
        bool IsActorValidStore(::GlobalNamespace::CrittersActor* actor) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsActorValidStore"), {"actor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actor);
        }
        void OnHover(bool isLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHover"), {"isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeft);
        }
        void Released(bool keepWorldPosition, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 impulse, ::BNM::Structures::Unity::Vector3 impulseRotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Released"), {"keepWorldPosition", "rotation", "position", "impulse", "impulseRotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(keepWorldPosition, rotation, position, impulse, impulseRotation);
        }
        void RemoveStoredObjectCollider(::GlobalNamespace::CrittersActor* actor, bool playSound) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveStoredObjectCollider"), {"actor", "playSound"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actor, playSound);
        }
    };
}
