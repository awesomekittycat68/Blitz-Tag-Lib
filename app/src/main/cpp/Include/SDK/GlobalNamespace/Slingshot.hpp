#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ProjectileWeapon.hpp"

namespace GlobalNamespace {
    struct Slingshot : ::GlobalNamespace::ProjectileWeapon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Slingshot");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetElasticIntialWidthMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("_elasticIntialWidthMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCenter() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("center"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCenterOrigin() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("centerOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDelayLaunchTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("delayLaunchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDisableInDraw() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("disableInDraw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableLineRenderer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableLineRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableWhenNotInRoom() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableWhenNotInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDrawingHand() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("drawingHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDummyProjectile() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("dummyProjectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDummyProjectileColliderRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("dummyProjectileColliderRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDummyProjectileInitialScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("dummyProjectileInitialScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LineRenderer* GetElasticLeft() {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("elasticLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetElasticLeftPoints() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("elasticLeftPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LineRenderer* GetElasticRight() {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("elasticRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetElasticRightPoints() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("elasticRightPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::InteractionPoint* GetGrip() {
            static BNM::Field<::GlobalNamespace::InteractionPoint*> _field = GetClass().GetField(O("grip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticsLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticsLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticsStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticsStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasDummyProjectile() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasDummyProjectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLeftArm() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftArm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLeftHandSnap() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftHandSnap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxDraw() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDraw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinDrawDistanceToRelease() {
            static BNM::Field<float> _field = GetClass().GetField(O("minDrawDistanceToRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinTimeToLaunch() {
            static BNM::Field<float> _field = GetClass().GetField(O("minTimeToLaunch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetMyRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::InteractionPoint* GetNock() {
            static BNM::Field<::GlobalNamespace::InteractionPoint*> _field = GetClass().GetField(O("nock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayStretchingHaptics() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playStretchingHaptics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetProjectileCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("projectileCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRightArm() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightArm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRightHandSnap() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightHandSnap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpringConstant() {
            static BNM::Field<float> _field = GetClass().GetField(O("springConstant"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStretchEndLocal() {
            static BNM::Field<void*> _field = GetClass().GetField(O("StretchEndLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStretchEndShared() {
            static BNM::Field<void*> _field = GetClass().GetField(O("StretchEndShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStretchStartLocal() {
            static BNM::Field<void*> _field = GetClass().GetField(O("StretchStartLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStretchStartShared() {
            static BNM::Field<void*> _field = GetClass().GetField(O("StretchStartShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasStretching() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasStretching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasStretchingLocal() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasStretchingLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetElasticIntialWidthMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_elasticIntialWidthMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCenter(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("center"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCenterOrigin(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("centerOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelayLaunchTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("delayLaunchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableInDraw(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("disableInDraw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableLineRenderer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableLineRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableWhenNotInRoom(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableWhenNotInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrawingHand(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("drawingHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDummyProjectile(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("dummyProjectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDummyProjectileColliderRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dummyProjectileColliderRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDummyProjectileInitialScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dummyProjectileInitialScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetElasticLeft(::LineRenderer* value) {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("elasticLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetElasticLeftPoints(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("elasticLeftPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetElasticRight(::LineRenderer* value) {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("elasticRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetElasticRightPoints(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("elasticRightPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrip(::GlobalNamespace::InteractionPoint* value) {
            static BNM::Field<::GlobalNamespace::InteractionPoint*> _field = GetClass().GetField(O("grip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticsLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticsLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticsStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticsStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasDummyProjectile(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasDummyProjectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftArm(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftArm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandSnap(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftHandSnap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDraw(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDraw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinDrawDistanceToRelease(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minDrawDistanceToRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinTimeToLaunch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minTimeToLaunch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNock(::GlobalNamespace::InteractionPoint* value) {
            static BNM::Field<::GlobalNamespace::InteractionPoint*> _field = GetClass().GetField(O("nock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayStretchingHaptics(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playStretchingHaptics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("projectileCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightArm(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightArm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandSnap(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightHandSnap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpringConstant(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("springConstant"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStretchEndLocal(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("StretchEndLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStretchEndShared(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("StretchEndShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStretchStartLocal(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("StretchStartLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStretchStartShared(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("StretchStartShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasStretching(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasStretching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasStretchingLocal(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasStretchingLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool AutoGrabTrue(bool leftGrabbingHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AutoGrabTrue"), {"leftGrabbingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(leftGrabbingHand);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DestroyDummyProjectile() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyDummyProjectile"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DropItemCleanup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DropItemCleanup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ForLeftHandSlingshot() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ForLeftHandSlingshot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetLaunchPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetLaunchPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetLaunchVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetLaunchVelocity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool InDrawingState() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("InDrawingState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool IsSlingShotEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSlingShotEnabled"));
            return _m.Call();
        }
        void LateUpdateLocal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdateReplicated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateReplicated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdateShared() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        bool OnRelease(::GlobalNamespace::DropZone* zoneReleased, ::GameObject* releasingHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnRelease"), {"zoneReleased", "releasingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zoneReleased, releasingHand);
        }
        void OnSpawn(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSpawn"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
    };
}
