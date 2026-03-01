#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SnapJointType.hpp"
#include "../GorillaTag_CosmeticSystem/GTHardCodedBones_SturdyEBone.hpp"

namespace GlobalNamespace {
    struct SuperInfectionSnapPoint : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SuperInfectionSnapPoint");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[SuperInfectionSnapPoint]  ";
        static constexpr const char* preErr = "[SuperInfectionSnapPoint]  ERROR!!!  ";
        bool GetCanSnapOverride() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canSnapOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SnapJointType GetJointType() {
            static BNM::Field<::GlobalNamespace::SnapJointType> _field = GetClass().GetField(O("jointType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetOverrideParentTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("overrideParentTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::GTHardCodedBones_SturdyEBone GetParentBone() {
            static BNM::Field<::GorillaTag_CosmeticSystem::GTHardCodedBones_SturdyEBone> _field = GetClass().GetField(O("parentBone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetParentTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("parentTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GamePlayer* GetPlayerForPoint() {
            static BNM::Field<::GlobalNamespace::GamePlayer*> _field = GetClass().GetField(O("playerForPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetSnappedEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("snappedEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSnapPointRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("snapPointRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCanSnapOverride(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canSnapOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJointType(::GlobalNamespace::SnapJointType value) {
            static BNM::Field<::GlobalNamespace::SnapJointType> _field = GetClass().GetField(O("jointType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideParentTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("overrideParentTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentBone(::GorillaTag_CosmeticSystem::GTHardCodedBones_SturdyEBone value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::GTHardCodedBones_SturdyEBone> _field = GetClass().GetField(O("parentBone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("parentTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerForPoint(::GlobalNamespace::GamePlayer* value) {
            static BNM::Field<::GlobalNamespace::GamePlayer*> _field = GetClass().GetField(O("playerForPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnappedEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("snappedEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapPointRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("snapPointRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::GameEntity* GetSnappedEntity_1() {
            static BNM::Method<::GlobalNamespace::GameEntity*> _m = GetClass().GetMethod(O("GetSnappedEntity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool HasSnapped() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasSnapped"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Snapped(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Snapped"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity);
        }
        void Unsnapped() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unsnapped"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
