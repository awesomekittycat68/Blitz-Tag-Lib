#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct HoverboardVisual : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HoverboardVisual");
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
        bool GetIsHeld() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsHeld"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsHeld(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsHeld"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsLeftHanded() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsLeftHanded"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsLeftHanded(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsLeftHanded"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Vector3 GetNominalLocalPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_NominalLocalPosition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetNominalLocalPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_NominalLocalPosition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Quaternion GetNominalLocalRotation() {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _method = GetClass().GetMethod(O("get_NominalLocalRotation"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetNominalLocalRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_NominalLocalRotation"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Transform* GetNominalParentTransform() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_NominalParentTransform"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::MeshRenderer* GetBoardMesh() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("boardMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCarveHapticDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("carveHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCarveHapticStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("carveHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetColorMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("colorMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrindHapticDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("grindHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrindHapticStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("grindHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::InteractionPoint* GetHandleInteractionPoint() {
            static BNM::Field<::GlobalNamespace::InteractionPoint*> _field = GetClass().GetField(O("handleInteractionPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HoverboardHandle* GetHandlePosition() {
            static BNM::Field<::GlobalNamespace::HoverboardHandle*> _field = GetClass().GetField(O("handlePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HoverboardAudio* GetHoverboardAudio() {
            static BNM::Field<::GlobalNamespace::HoverboardAudio*> _field = GetClass().GetField(O("hoverboardAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetInterpolatedLocalPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("interpolatedLocalPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetInterpolatedLocalRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("interpolatedLocalRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsCallbackActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isCallbackActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLerpIntoHandDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpIntoHandDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetParentRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("parentRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPositionLerpSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("positionLerpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetRaceLapsReadout() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("raceLapsReadout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetRacePositionReadout() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("racePositionReadout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotationLerpSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationLerpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaVelocityEstimator* GetVelocityEstimator() {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("velocityEstimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBoardMesh(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("boardMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCarveHapticDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("carveHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCarveHapticStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("carveHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("colorMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrindHapticDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grindHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrindHapticStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grindHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandleInteractionPoint(::GlobalNamespace::InteractionPoint* value) {
            static BNM::Field<::GlobalNamespace::InteractionPoint*> _field = GetClass().GetField(O("handleInteractionPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandlePosition(::GlobalNamespace::HoverboardHandle* value) {
            static BNM::Field<::GlobalNamespace::HoverboardHandle*> _field = GetClass().GetField(O("handlePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverboardAudio(::GlobalNamespace::HoverboardAudio* value) {
            static BNM::Field<::GlobalNamespace::HoverboardAudio*> _field = GetClass().GetField(O("hoverboardAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInterpolatedLocalPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("interpolatedLocalPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInterpolatedLocalRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("interpolatedLocalRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsCallbackActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isCallbackActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLerpIntoHandDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpIntoHandDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("parentRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionLerpSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("positionLerpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaceLapsReadout(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("raceLapsReadout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRacePositionReadout(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("racePositionReadout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationLerpSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationLerpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityEstimator(::GlobalNamespace::GorillaVelocityEstimator* value) {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("velocityEstimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DropFreeBoard() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DropFreeBoard"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Color get_boardColor() {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("get_boardColor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsHeld() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsHeld"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsLeftHanded() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsLeftHanded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_NominalLocalPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_NominalLocalPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Quaternion get_NominalLocalRotation() {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("get_NominalLocalRotation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* get_NominalParentTransform() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_NominalParentTransform"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void PlayCarveHaptic(float carveForce) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayCarveHaptic"), {"carveForce"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(carveForce);
        }
        void PlayGrindHaptic() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayGrindHaptic"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProxyGrabHandle(bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProxyGrabHandle"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand);
        }
        void set_boardColor(::BNM::Structures::Unity::Color value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_boardColor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsHeld(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsHeld"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsLeftHanded(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsLeftHanded"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_NominalLocalPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_NominalLocalPosition"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_NominalLocalRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_NominalLocalRotation"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetIsHeld_1(bool isHeldLeftHanded, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation, ::BNM::Structures::Unity::Color boardColor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetIsHeld"), {"isHeldLeftHanded", "localPosition", "localRotation", "boardColor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isHeldLeftHanded, localPosition, localRotation, boardColor);
        }
        void SetNotHeld() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNotHeld"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetNotHeld(bool isLeftHanded) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNotHeld"), {"isLeftHanded"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHanded);
        }
        void SetRaceDisplay(::BNM::Structures::Mono::String* text) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRaceDisplay"), {"text"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(text);
        }
        void SetRaceLapsDisplay(::BNM::Structures::Mono::String* text) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRaceLapsDisplay"), {"text"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(text);
        }
    };
}
