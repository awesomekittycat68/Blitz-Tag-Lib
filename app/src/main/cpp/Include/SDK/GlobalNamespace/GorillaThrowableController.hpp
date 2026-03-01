#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaThrowableController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaThrowableController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetBoolVar() {
            static BNM::Field<bool> _field = GetClass().GetField(O("boolVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGorillaThrowableLayerMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("gorillaThrowableLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHandRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("handRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverVibrationDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverVibrationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverVibrationStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverVibrationStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetInputDevice() {
            static BNM::Field<void*> _field = GetClass().GetField(O("inputDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLeftDevice() {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLeftHandController() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftHandController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaThrowable* GetLeftHandGrabbedObject() {
            static BNM::Field<::GlobalNamespace::GorillaThrowable*> _field = GetClass().GetField(O("leftHandGrabbedObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftHandIsGrabbing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftHandIsGrabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMagnitude() {
            static BNM::Field<float> _field = GetClass().GetField(O("magnitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetMinCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("minCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetReturnCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("returnCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRightDevice() {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRightHandController() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightHandController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaThrowable* GetRightHandGrabbedObject() {
            static BNM::Field<::GlobalNamespace::GorillaThrowable*> _field = GetClass().GetField(O("rightHandGrabbedObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightHandIsGrabbing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightHandIsGrabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTestCanGrab() {
            static BNM::Field<bool> _field = GetClass().GetField(O("testCanGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTriggerValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBoolVar(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("boolVar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliders(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGorillaThrowableLayerMask(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("gorillaThrowableLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("handRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverVibrationDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverVibrationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverVibrationStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverVibrationStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputDevice(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("inputDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftDevice(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandController(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftHandController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandGrabbedObject(::GlobalNamespace::GorillaThrowable* value) {
            static BNM::Field<::GlobalNamespace::GorillaThrowable*> _field = GetClass().GetField(O("leftHandGrabbedObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandIsGrabbing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftHandIsGrabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMagnitude(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("magnitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("minCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReturnCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("returnCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightDevice(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandController(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightHandController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandGrabbedObject(::GlobalNamespace::GorillaThrowable* value) {
            static BNM::Field<::GlobalNamespace::GorillaThrowable*> _field = GetClass().GetField(O("rightHandGrabbedObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandIsGrabbing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightHandIsGrabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestCanGrab(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("testCanGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanGrabAnObject(::Transform* handTransform, ::Collider*& returnCollider) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanGrabAnObject"), {"handTransform", "returnCollider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handTransform, &returnCollider);
        }
        template <typename TP0 = void*>
        bool CheckIfHandHasGrabbed(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckIfHandHasGrabbed"), {"node"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(node);
        }
        template <typename TP0 = void*>
        bool CheckIfHandHasReleased(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckIfHandHasReleased"), {"node"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(node);
        }
        void GrabbableObjectHover(bool isLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabbableObjectHover"), {"isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeft);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
