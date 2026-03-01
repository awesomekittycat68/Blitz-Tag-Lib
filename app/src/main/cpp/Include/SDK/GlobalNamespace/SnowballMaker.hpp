#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonoBehaviourPostTick.hpp"

namespace GlobalNamespace {
    struct SnowballMaker : ::GlobalNamespace::MonoBehaviourPostTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SnowballMaker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SnowballMaker* GetLeftHandInstance() {
            static BNM::Method<::GlobalNamespace::SnowballMaker*> _method = GetClass().GetMethod(O("get_leftHandInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLeftHandInstance(::GlobalNamespace::SnowballMaker* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_leftHandInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::SnowballMaker* GetRightHandInstance() {
            static BNM::Method<::GlobalNamespace::SnowballMaker*> _method = GetClass().GetMethod(O("get_rightHandInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRightHandInstance(::GlobalNamespace::SnowballMaker* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_rightHandInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SnowballThrowable*>* GetSnowballs() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::SnowballThrowable*>*> _method = GetClass().GetMethod(O("get_snowballs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSnowballs(::BNM::Structures::Mono::Array<::GlobalNamespace::SnowballThrowable*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_snowballs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Transform* GetHandTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("handTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLeftHand() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastGroundContactTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastGroundContactTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::SnowballThrowable*>* GetMatSnowballLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::SnowballThrowable*>*> _field = GetClass().GetField(O("matSnowballLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRequiresFreshMaterialContact() {
            static BNM::Field<bool> _field = GetClass().GetField(O("requiresFreshMaterialContact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSnowballCreationCooldownTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("snowballCreationCooldownTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaVelocityEstimator* GetVelocityEstimator() {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("velocityEstimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHandTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("handTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLeftHand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastGroundContactTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastGroundContactTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatSnowballLookup(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::SnowballThrowable*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::SnowballThrowable*>*> _field = GetClass().GetField(O("matSnowballLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequiresFreshMaterialContact(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("requiresFreshMaterialContact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnowballCreationCooldownTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("snowballCreationCooldownTime"));
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
        static ::GlobalNamespace::SnowballMaker* get_leftHandInstance() {
            static BNM::Method<::GlobalNamespace::SnowballMaker*> _m = GetClass().GetMethod(O("get_leftHandInstance"));
            return _m.Call();
        }
        static ::GlobalNamespace::SnowballMaker* get_rightHandInstance() {
            static BNM::Method<::GlobalNamespace::SnowballMaker*> _m = GetClass().GetMethod(O("get_rightHandInstance"));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SnowballThrowable*>* get_snowballs() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::SnowballThrowable*>*> _m = GetClass().GetMethod(O("get_snowballs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void PostTick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostTick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void set_leftHandInstance(::GlobalNamespace::SnowballMaker* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_leftHandInstance"), {"value"});
            _m.Call(value);
        }
        static void set_rightHandInstance(::GlobalNamespace::SnowballMaker* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_rightHandInstance"), {"value"});
            _m.Call(value);
        }
        void set_snowballs(::BNM::Structures::Mono::Array<::GlobalNamespace::SnowballThrowable*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_snowballs"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetupThrowables(::BNM::Structures::Mono::Array<::GlobalNamespace::SnowballThrowable*>* newThrowables) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupThrowables"), {"newThrowables"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newThrowables);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool TryCreateSnowball(int materialIndex, ::GlobalNamespace::SnowballThrowable*& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryCreateSnowball"), {"materialIndex", "result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(materialIndex, &result);
        }
    };
}
