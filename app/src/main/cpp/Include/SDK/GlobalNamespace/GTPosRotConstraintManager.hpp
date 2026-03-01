#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaPosRotConstraint.hpp"
#include "GTPosRotConstraintManager_Range.hpp"

namespace GlobalNamespace {
    struct GTPosRotConstraintManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTPosRotConstraintManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GTPosRotConstraintManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::GTPosRotConstraintManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr int _kComponentsCapacity = 256;
        static constexpr int _kConstraintsCapacity = 1024;
        static ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::GTPosRotConstraintManager_Range>* GetComponentRanges() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::GTPosRotConstraintManager_Range>*> _field = GetClass().GetField(O("componentRanges"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaPosRotConstraint>* GetConstraints() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaPosRotConstraint>*> _field = GetClass().GetField(O("constraints"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GTPosRotConstraints*>* GetConstraintsToDisable() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GTPosRotConstraints*>*> _field = GetClass().GetField(O("constraintsToDisable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GlobalNamespace::GTPosRotConstraintManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GTPosRotConstraintManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Unity::Vector3>* GetOriginalOffset() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("originalOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::Transform*, ::Transform*>* GetOriginalParent() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, ::Transform*>*> _field = GetClass().GetField(O("originalParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Unity::Quaternion>* GetOriginalRot() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Unity::Quaternion>*> _field = GetClass().GetField(O("originalRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Unity::Vector3>* GetOriginalScale() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("originalScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetConstraintsToDisable(::BNM::Structures::Mono::List<::GlobalNamespace::GTPosRotConstraints*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GTPosRotConstraints*>*> _field = GetClass().GetField(O("constraintsToDisable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::GTPosRotConstraintManager* value) {
            static BNM::Field<::GlobalNamespace::GTPosRotConstraintManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetOriginalOffset(::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("originalOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOriginalParent(::BNM::Structures::Mono::Dictionary<::Transform*, ::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, ::Transform*>*> _field = GetClass().GetField(O("originalParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOriginalRot(::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Unity::Quaternion>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Unity::Quaternion>*> _field = GetClass().GetField(O("originalRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOriginalScale(::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("originalScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CreateManager() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateManager"));
            _m.Call();
        }
        void InvokeConstraint(::GlobalNamespace::GorillaPosRotConstraint constraint, int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeConstraint"), {"constraint", "index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(constraint, index);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void Register(::GlobalNamespace::GTPosRotConstraints* component) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"component"});
            _m.Call(component);
        }
        static void SetInstance_1(::GlobalNamespace::GTPosRotConstraintManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInstance"), {"manager"});
            _m.Call(manager);
        }
        static void Unregister(::GlobalNamespace::GTPosRotConstraints* component) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"component"});
            _m.Call(component);
        }
    };
}
