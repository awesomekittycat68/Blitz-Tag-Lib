#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TransferrableObject.hpp"

namespace GlobalNamespace {
    struct ThrowableSetDressing : ::GlobalNamespace::TransferrableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ThrowableSetDressing");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetInInitialPose() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_inInitialPose"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInInitialPose(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_inInitialPose"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetRespawnTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("_respawnTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCapsuleCollider() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("capsuleCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MagicIngredientType* GetIngredientTypeSO() {
            static BNM::Field<::GlobalNamespace::MagicIngredientType*> _field = GetClass().GetField(O("IngredientTypeSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetworkView* GetNetView() {
            static BNM::Field<::GlobalNamespace::NetworkView*> _field = GetClass().GetField(O("netView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRespawnAtPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("respawnAtPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetRespawnAtRot() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("respawnAtRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetRespawnTimer() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("respawnTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRespawnTimerDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("respawnTimerDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRespawnTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_respawnTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCapsuleCollider(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("capsuleCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIngredientTypeSO(::GlobalNamespace::MagicIngredientType* value) {
            static BNM::Field<::GlobalNamespace::MagicIngredientType*> _field = GetClass().GetField(O("IngredientTypeSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetView(::GlobalNamespace::NetworkView* value) {
            static BNM::Field<::GlobalNamespace::NetworkView*> _field = GetClass().GetField(O("netView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRespawnAtPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("respawnAtPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRespawnAtRot(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("respawnAtRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRespawnTimer(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("respawnTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRespawnTimerDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("respawnTimerDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DropItem() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DropItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_inInitialPose() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_inInitialPose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnGrab(::GlobalNamespace::InteractionPoint* pointGrabbed, ::GameObject* grabbingHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrab"), {"pointGrabbed", "grabbingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pointGrabbed, grabbingHand);
        }
        bool OnRelease(::GlobalNamespace::DropZone* zoneReleased, ::GameObject* releasingHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnRelease"), {"zoneReleased", "releasingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zoneReleased, releasingHand);
        }
        ::BNM::Coroutine::IEnumerator* RespawnTimerCoroutine(float timerDuration) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("RespawnTimerCoroutine"), {"timerDuration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(timerDuration);
        }
        void set_inInitialPose(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_inInitialPose"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetWillTeleport() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetWillTeleport"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ShouldBeKinematic() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldBeKinematic"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartRespawnTimer(float overrideTimer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartRespawnTimer"), {"overrideTimer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(overrideTimer);
        }
        void StopRespawnTimer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopRespawnTimer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
