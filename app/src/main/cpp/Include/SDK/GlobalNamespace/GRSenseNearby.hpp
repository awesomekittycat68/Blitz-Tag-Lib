#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRSenseNearby : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRSenseNearby");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetBossEntityPresent() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_BossEntityPresent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GameEntity* GetEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("_entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExitRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("exitRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFov() {
            static BNM::Field<float> _field = GetClass().GetField(O("fov"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHeadTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("headTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHearingRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("hearingRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("range"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetRigsNearby() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("rigsNearby"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("_entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExitRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("exitRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFov(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fov"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("headTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHearingRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hearingRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("range"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigsNearby(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("rigsNearby"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddNearby(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 forward, ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* allRigs) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddNearby"), {"position", "forward", "allRigs"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position, forward, allRigs);
        }
        bool get_BossEntityPresent() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_BossEntityPresent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Unity::Vector3 GetRigTestLocation(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetRigTestLocation"), {"rig"});
            return _m.Call(rig);
        }
        bool IsAnyoneNearby() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAnyoneNearby"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsAnyoneNearby(float range, bool ignoreBossEntity) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAnyoneNearby"), {"range", "ignoreBossEntity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(range, ignoreBossEntity);
        }
        void OnHitByPlayer(int hitByActorId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHitByPlayer"), {"hitByActorId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitByActorId);
        }
        ::GlobalNamespace::VRRig* PickClosest(float& outDistanceSq) {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("PickClosest"), {"outDistanceSq"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&outDistanceSq);
        }
        void RemoveNoLineOfSight(::BNM::Structures::Unity::Vector3 headPos, ::GlobalNamespace::GRSenseLineOfSight* senseLineOfSight) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveNoLineOfSight"), {"headPos", "senseLineOfSight"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(headPos, senseLineOfSight);
        }
        void RemoveNotNearby(::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveNotNearby"), {"position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position);
        }
        void Setup(::Transform* headTransform, ::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"headTransform", "entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(headTransform, entity);
        }
        void UpdateNearby(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* allRigs, ::GlobalNamespace::GRSenseLineOfSight* senseLineOfSight) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateNearby"), {"allRigs", "senseLineOfSight"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(allRigs, senseLineOfSight);
        }
    };
}
