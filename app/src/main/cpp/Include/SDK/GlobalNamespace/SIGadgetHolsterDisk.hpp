#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIGadget.hpp"
#include "SIGadgetHolsterDisk_State.hpp"

namespace GlobalNamespace {
    struct SIGadgetHolsterDisk : ::GlobalNamespace::SIGadget {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetHolsterDisk");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SIGadget* GetCachedGadget() {
            static BNM::Field<::GlobalNamespace::SIGadget*> _field = GetClass().GetField(O("cachedGadget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCooldownTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCooldownTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetGadgetRB() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("gadgetRB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetGrenade* GetGrenadeGadget() {
            static BNM::Field<::GlobalNamespace::SIGadgetGrenade*> _field = GetClass().GetField(O("grenadeGadget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadget* GetReferenceGadget() {
            static BNM::Field<::GlobalNamespace::SIGadget*> _field = GetClass().GetField(O("referenceGadget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetReferenceTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("referenceTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetHolsterDisk_State GetState() {
            static BNM::Field<::GlobalNamespace::SIGadgetHolsterDisk_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCachedGadget(::GlobalNamespace::SIGadget* value) {
            static BNM::Field<::GlobalNamespace::SIGadget*> _field = GetClass().GetField(O("cachedGadget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGadgetRB(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("gadgetRB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrenadeGadget(::GlobalNamespace::SIGadgetGrenade* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetGrenade*> _field = GetClass().GetField(O("grenadeGadget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReferenceGadget(::GlobalNamespace::SIGadget* value) {
            static BNM::Field<::GlobalNamespace::SIGadget*> _field = GetClass().GetField(O("referenceGadget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReferenceTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("referenceTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::SIGadgetHolsterDisk_State value) {
            static BNM::Field<::GlobalNamespace::SIGadgetHolsterDisk_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreateGadget() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateGadget"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DiskRemovedFromHolster() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DiskRemovedFromHolster"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DiskSnappedToHolster() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DiskSnappedToHolster"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Disrupt(float disruptTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Disrupt"), {"disruptTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disruptTime);
        }
        void GadgetRespawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GadgetRespawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUpdateAuthority(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateAuthority"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void RegisterGadget(::GlobalNamespace::SIGadget* gadget) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterGadget"), {"gadget"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gadget);
        }
        void SetState_1(::GlobalNamespace::SIGadgetHolsterDisk_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
