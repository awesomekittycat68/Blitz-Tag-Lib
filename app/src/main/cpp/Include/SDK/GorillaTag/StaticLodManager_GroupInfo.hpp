#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag {
    struct StaticLodManager_GroupInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "StaticLodManager").GetInnerClass("GroupInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetBounds() {
            static BNM::Field<void*> _field = GetClass().GetField(O("bounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetCenter() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("center"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCollidersEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("collidersEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCollisionEnableDistanceSq() {
            static BNM::Field<float> _field = GetClass().GetField(O("collisionEnableDistanceSq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetComponentEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("componentEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetInteractableColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("interactableColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLoaded() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLoaded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRadiusSq() {
            static BNM::Field<float> _field = GetClass().GetField(O("radiusSq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Renderer*>* GetRenderers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Renderer*>*> _field = GetClass().GetField(O("renderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUiEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("uiEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUiEnableDistanceSq() {
            static BNM::Field<float> _field = GetClass().GetField(O("uiEnableDistanceSq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Graphic*>* GetUiGraphics() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Graphic*>*> _field = GetClass().GetField(O("uiGraphics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBounds(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("bounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCenter(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("center"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollidersEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("collidersEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionEnableDistanceSq(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("collisionEnableDistanceSq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComponentEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("componentEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInteractableColliders(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("interactableColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLoaded(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLoaded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRadiusSq(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("radiusSq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderers(::BNM::Structures::Mono::Array<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Renderer*>*> _field = GetClass().GetField(O("renderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUiEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("uiEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUiEnableDistanceSq(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("uiEnableDistanceSq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUiGraphics(::BNM::Structures::Mono::Array<::Graphic*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Graphic*>*> _field = GetClass().GetField(O("uiGraphics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
