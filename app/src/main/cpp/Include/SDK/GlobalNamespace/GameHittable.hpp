#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameHitData.hpp"

namespace GlobalNamespace {
    struct GameHittable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameHittable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<void*>* GetComponents() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("components"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameHittable_HittablePoint*>* GetHittablePoints() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameHittable_HittablePoint*>*> _field = GetClass().GetField(O("hittablePoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetComponents(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("components"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHittablePoints(::BNM::Structures::Mono::List<::GlobalNamespace::GameHittable_HittablePoint*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameHittable_HittablePoint*>*> _field = GetClass().GetField(O("hittablePoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyHit(::GlobalNamespace::GameHitData hitData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyHit"), {"hitData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitData);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int FindHittablePoint(::Collider* collider) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FindHittablePoint"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(collider);
        }
        ::GlobalNamespace::GameHittable_HittablePoint* GetHittablePoint(int hittablePoint) {
            static BNM::Method<::GlobalNamespace::GameHittable_HittablePoint*> _m = GetClass().GetMethod(O("GetHittablePoint"), {"hittablePoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hittablePoint);
        }
        bool IsColliderValid(::Collider* collider) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsColliderValid"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(collider);
        }
        bool IsHitValid(::GlobalNamespace::GameHitData hitData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHitValid"), {"hitData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hitData);
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
        void OnUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestHit(::GlobalNamespace::GameHitData hitData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestHit"), {"hitData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitData);
        }
    };
}
