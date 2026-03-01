#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaGrabber : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaGrabber");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsGrabbing() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isGrabbing"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsLeftHand() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsLeftHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsRightHand() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsRightHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaLocomotion::GTPlayer* GetPlayer() {
            static BNM::Method<::GorillaLocomotion::GTPlayer*> _method = GetClass().GetMethod(O("get_Player"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBreakDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("breakDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCoyoteTimeDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("coyoteTimeDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCurrentGrabbable() {
            static BNM::Field<void*> _field = GetClass().GetField(O("currentGrabbable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCurrentGrabbedTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("currentGrabbedTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetGrabCastResults() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("grabCastResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabTimeStamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabTimeStamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetGripEffects() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("gripEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticDecay() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDecay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticStrengthActual() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrengthActual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLocalGrabbedPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("localGrabbedPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion::GTPlayer* GetPlayer_f() {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("player"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetXrNode() {
            static BNM::Field<void*> _field = GetClass().GetField(O("xrNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBreakDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("breakDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoyoteTimeDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("coyoteTimeDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentGrabbable(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("currentGrabbable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentGrabbedTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("currentGrabbedTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabCastResults(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("grabCastResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabTimeStamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabTimeStamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGripEffects(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("gripEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticDecay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDecay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticStrengthActual(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrengthActual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalGrabbedPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("localGrabbedPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayer(::GorillaLocomotion::GTPlayer* value) {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("player"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetXrNode(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("xrNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CheckGrabber(bool initiateGrab) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckGrabber"), {"initiateGrab"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(initiateGrab);
        }
        ::BNM::Structures::Unity::Vector3 FindClosestPoint(::Collider* collider, ::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("FindClosestPoint"), {"collider", "position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(collider, position);
        }
        bool get_isGrabbing() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isGrabbing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsLeftHand() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsLeftHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsRightHand() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsRightHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaLocomotion::GTPlayer* get_Player() {
            static BNM::Method<::GorillaLocomotion::GTPlayer*> _m = GetClass().GetMethod(O("get_Player"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_XrNode() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_XrNode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool GrabDistanceOverCheck() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GrabDistanceOverCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Inject(::Transform* currentGrabbableTransform, ::BNM::Structures::Unity::Vector3 localGrabbedPosition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inject"), {"currentGrabbableTransform", "localGrabbedPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentGrabbableTransform, localGrabbedPosition);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* TryGrab(bool momentary) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TryGrab"), {"momentary"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(momentary);
        }
        template <typename TP0 = void*>
        void Ungrab(TP0 specificGrabbable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Ungrab"), {"specificGrabbable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(specificGrabbable);
        }
    };
}
