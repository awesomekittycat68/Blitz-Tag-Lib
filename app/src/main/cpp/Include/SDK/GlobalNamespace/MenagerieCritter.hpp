#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "KeyValueStringPair.hpp"
#include "MenagerieCritter_MenagerieCritterState.hpp"

namespace GlobalNamespace {
    struct MenagerieCritter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MenagerieCritter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::Menagerie_CritterData* GetCritterData() {
            static BNM::Method<::GlobalNamespace::Menagerie_CritterData*> _method = GetClass().GetMethod(O("get_CritterData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::MenagerieSlot* GetSlot() {
            static BNM::Method<::GlobalNamespace::MenagerieSlot*> _method = GetClass().GetMethod(O("get_Slot"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSlot(::GlobalNamespace::MenagerieSlot* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Slot"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetTwoHanded() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TwoHanded"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnDataChange(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDataChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnDataChange(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDataChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::Transform* GetAnimRoot() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_animRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetBodyScale() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_bodyScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CritterConfiguration* GetCritterConfiguration() {
            static BNM::Field<::GlobalNamespace::CritterConfiguration*> _field = GetClass().GetField(O("_critterConfiguration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::Menagerie_CritterData* GetCritterData_f() {
            static BNM::Field<::GlobalNamespace::Menagerie_CritterData*> _field = GetClass().GetField(O("_critterData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersAnim* GetCurrentAnim() {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("_currentAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentAnimTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentAnimTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MenagerieSlot* GetSlot_f() {
            static BNM::Field<::GlobalNamespace::MenagerieSlot*> _field = GetClass().GetField(O("_slot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGrabber*>* GetActiveGrabbers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGrabber*>*> _field = GetClass().GetField(O("activeGrabbers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetBodyCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("bodyCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MenagerieCritter_MenagerieCritterState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::MenagerieCritter_MenagerieCritterState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::KeyValueStringPair>* GetEyeScanData() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::KeyValueStringPair>*> _field = GetClass().GetField(O("eyeScanData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGrabbedFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("grabbedFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetGrabbedHaptics() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("grabbedHaptics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabbedHapticsStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabbedHapticsStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersAnim* GetHeldAnimation() {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("heldAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetHeldBy() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("heldBy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsHeld() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsHeldLeftHand() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHeldLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnDataChange() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnDataChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::MenagerieCritter*>* GetOnReleased() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::MenagerieCritter*>*> _field = GetClass().GetField(O("OnReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CritterVisuals* GetVisuals() {
            static BNM::Field<::GlobalNamespace::CritterVisuals*> _field = GetClass().GetField(O("visuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimRoot(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_animRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyScale(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_bodyScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCritterConfiguration(::GlobalNamespace::CritterConfiguration* value) {
            static BNM::Field<::GlobalNamespace::CritterConfiguration*> _field = GetClass().GetField(O("_critterConfiguration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCritterData(::GlobalNamespace::Menagerie_CritterData* value) {
            static BNM::Field<::GlobalNamespace::Menagerie_CritterData*> _field = GetClass().GetField(O("_critterData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentAnim(::GlobalNamespace::CrittersAnim* value) {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("_currentAnim"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentAnimTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentAnimTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlot_fs(::GlobalNamespace::MenagerieSlot* value) {
            static BNM::Field<::GlobalNamespace::MenagerieSlot*> _field = GetClass().GetField(O("_slot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveGrabbers(::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGrabber*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGrabber*>*> _field = GetClass().GetField(O("activeGrabbers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("bodyCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::MenagerieCritter_MenagerieCritterState value) {
            static BNM::Field<::GlobalNamespace::MenagerieCritter_MenagerieCritterState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEyeScanData(::BNM::Structures::Mono::Array<::GlobalNamespace::KeyValueStringPair>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::KeyValueStringPair>*> _field = GetClass().GetField(O("eyeScanData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("grabbedFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedHaptics(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("grabbedHaptics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedHapticsStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabbedHapticsStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeldAnimation(::GlobalNamespace::CrittersAnim* value) {
            static BNM::Field<::GlobalNamespace::CrittersAnim*> _field = GetClass().GetField(O("heldAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeldBy(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("heldBy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsHeld(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsHeldLeftHand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHeldLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnDataChange(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnDataChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnReleased(::BNM::Structures::Mono::Action<::GlobalNamespace::MenagerieCritter*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::MenagerieCritter*>*> _field = GetClass().GetField(O("OnReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisuals(::GlobalNamespace::CritterVisuals* value) {
            static BNM::Field<::GlobalNamespace::CritterVisuals*> _field = GetClass().GetField(O("visuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnDataChange_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDataChange"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ApplyCritterData(::GlobalNamespace::Menagerie_CritterData* critterData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyCritterData"), {"critterData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critterData);
        }
        void* BuildEyeScannerData() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BuildEyeScannerData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void DropItemCleanup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DropItemCleanup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::Menagerie_CritterData* get_CritterData() {
            static BNM::Method<::GlobalNamespace::Menagerie_CritterData*> _m = GetClass().GetMethod(O("get_CritterData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::MenagerieSlot* get_Slot() {
            static BNM::Method<::GlobalNamespace::MenagerieSlot*> _m = GetClass().GetMethod(O("get_Slot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TwoHanded() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TwoHanded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetCurrentStateName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetCurrentStateName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGrab(::GlobalNamespace::InteractionPoint* pointGrabbed, ::GameObject* grabbingHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrab"), {"pointGrabbed", "grabbingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pointGrabbed, grabbingHand);
        }
        void OnHover(::GlobalNamespace::InteractionPoint* pointHovered, ::GameObject* hoveringHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHover"), {"pointHovered", "hoveringHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pointHovered, hoveringHand);
        }
        bool OnRelease(::GlobalNamespace::DropZone* zoneReleased, ::GameObject* releasingHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnRelease"), {"zoneReleased", "releasingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zoneReleased, releasingHand);
        }
        void PlayAnimation(::GlobalNamespace::CrittersAnim* anim, float time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayAnimation"), {"anim", "time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(anim, time);
        }
        void remove_OnDataChange_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDataChange"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ResetToTransform() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetToTransform"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_Slot(::GlobalNamespace::MenagerieSlot* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Slot"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateAnimation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateAnimation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
