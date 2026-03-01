#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GhostReactorLevelSectionConnector_Direction.hpp"

namespace GlobalNamespace {
    struct GhostReactorLevelSectionConnector : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactorLevelSectionConnector");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float SHOW_DIST = 18.0f;
        static constexpr float HIDE_DIST = 22.0f;
        ::BoxCollider* GetBoundingCollider() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("boundingCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorLevelSectionConnector_Direction GetDirection() {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelSectionConnector_Direction> _field = GetClass().GetField(O("direction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetGateEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gateEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetGateSpawnPoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gateSpawnPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHidden() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hidden"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHubAnchor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("hubAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetPathNodes() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("pathNodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* GetPrePlacedGameEntities() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("prePlacedGameEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Renderer*>* GetRenderers() {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("renderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSectionAnchor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("sectionAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBoundingCollider(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("boundingCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDirection(::GlobalNamespace::GhostReactorLevelSectionConnector_Direction value) {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelSectionConnector_Direction> _field = GetClass().GetField(O("direction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGateEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gateEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGateSpawnPoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gateSpawnPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHidden(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hidden"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHubAnchor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("hubAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPathNodes(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("pathNodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrePlacedGameEntities(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("prePlacedGameEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderers(::BNM::Structures::Mono::List<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("renderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSectionAnchor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("sectionAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Hide(bool hide) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Hide"), {"hide"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hide);
        }
        void Init(::GlobalNamespace::GhostReactorManager* grManager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"grManager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grManager);
        }
        void UpdateDisable(::BNM::Structures::Unity::Vector3 playerPos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDisable"), {"playerPos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerPos);
        }
    };
}
