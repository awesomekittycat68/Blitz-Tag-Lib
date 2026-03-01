#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct FreeHoverboardInstance : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FreeHoverboardInstance");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Color GetBoardColor() {
            static BNM::Method<::BNM::Structures::Unity::Color> _method = GetClass().GetMethod(O("get_boardColor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBoardColor(::BNM::Structures::Unity::Color value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_boardColor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Rigidbody* GetRigidbody() {
            static BNM::Method<::Rigidbody*> _method = GetClass().GetMethod(O("get_Rigidbody"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRigidbody(::Rigidbody* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Rigidbody"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetAvelocityDragWhileHovering() {
            static BNM::Field<float> _field = GetClass().GetField(O("avelocityDragWhileHovering"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBoardIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("boardIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetBoardMesh() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("boardMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetColorMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("colorMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasHoverPoint() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasHoverPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetHoverNormal() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("hoverNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetHoverPoint() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("hoverPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetHoverRaycastMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("hoverRaycastMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverRotationLerp() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverRotationLerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOwnerActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("ownerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSphereCastCenter() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("sphereCastCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSphereCastRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("sphereCastRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAvelocityDragWhileHovering(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("avelocityDragWhileHovering"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoardIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("boardIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoardMesh(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("boardMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("colorMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasHoverPoint(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasHoverPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverNormal(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("hoverNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverPoint(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("hoverPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverRaycastMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("hoverRaycastMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverRotationLerp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverRotationLerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwnerActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ownerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSphereCastCenter(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("sphereCastCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSphereCastRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sphereCastRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Color get_boardColor() {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("get_boardColor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Rigidbody* get_Rigidbody() {
            static BNM::Method<::Rigidbody*> _m = GetClass().GetMethod(O("get_Rigidbody"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_boardColor(::BNM::Structures::Unity::Color value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_boardColor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Rigidbody(::Rigidbody* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Rigidbody"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetColor(::BNM::Structures::Unity::Color col) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetColor"), {"col"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(col);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
