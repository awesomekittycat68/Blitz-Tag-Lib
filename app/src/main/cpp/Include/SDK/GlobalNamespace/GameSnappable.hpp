#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityId.hpp"
#include "GameSnappable_SnapJointOffset.hpp"
#include "SnapJointType.hpp"

namespace GlobalNamespace {
    struct GameSnappable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameSnappable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilityHaptic* GetSnapHaptic() {
            static BNM::Field<::GlobalNamespace::AbilityHaptic*> _field = GetClass().GetField(O("snapHaptic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SnapJointType GetSnapLocationTypes() {
            static BNM::Field<::GlobalNamespace::SnapJointType> _field = GetClass().GetField(O("snapLocationTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameSnappable_SnapJointOffset>* GetSnapOffsets() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameSnappable_SnapJointOffset>*> _field = GetClass().GetField(O("snapOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SuperInfectionSnapPoint* GetSnappedToJoint() {
            static BNM::Field<::GlobalNamespace::SuperInfectionSnapPoint*> _field = GetClass().GetField(O("snappedToJoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSnapRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("snapRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetSnapSound() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("snapSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetUnsnapSound() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("unsnapSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapHaptic(::GlobalNamespace::AbilityHaptic* value) {
            static BNM::Field<::GlobalNamespace::AbilityHaptic*> _field = GetClass().GetField(O("snapHaptic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapLocationTypes(::GlobalNamespace::SnapJointType value) {
            static BNM::Field<::GlobalNamespace::SnapJointType> _field = GetClass().GetField(O("snapLocationTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapOffsets(::BNM::Structures::Mono::List<::GlobalNamespace::GameSnappable_SnapJointOffset>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameSnappable_SnapJointOffset>*> _field = GetClass().GetField(O("snapOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnappedToJoint(::GlobalNamespace::SuperInfectionSnapPoint* value) {
            static BNM::Field<::GlobalNamespace::SuperInfectionSnapPoint*> _field = GetClass().GetField(O("snappedToJoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("snapRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapSound(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("snapSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnsnapSound(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("unsnapSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::SuperInfectionSnapPoint* BestSnapPoint() {
            static BNM::Method<::GlobalNamespace::SuperInfectionSnapPoint*> _m = GetClass().GetMethod(O("BestSnapPoint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GameEntityId BestSnapPointDock() {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("BestSnapPointDock"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CanGrabWithHand(bool leftHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanGrabWithHand"), {"leftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(leftHand);
        }
        void GetSnapOffset(::GlobalNamespace::SnapJointType jointType, ::BNM::Structures::Unity::Vector3& positionOffset, ::BNM::Structures::Unity::Quaternion& rotationOffset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetSnapOffset"), {"jointType", "positionOffset", "rotationOffset"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(jointType, &positionOffset, &rotationOffset);
        }
        bool IsSnappedToLeftArm() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSnappedToLeftArm"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsSnappedToRightArm() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSnappedToRightArm"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnSnap() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSnap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUnsnap() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUnsnap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
