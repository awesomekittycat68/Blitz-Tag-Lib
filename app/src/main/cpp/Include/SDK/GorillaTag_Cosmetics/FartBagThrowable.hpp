#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/PhotonMessageInfoWrapped.hpp"

namespace GorillaTag_Cosmetics {
    struct FartBagThrowable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "FartBagThrowable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::TransferrableObject* GetParentTransferable() {
            static BNM::Method<::GlobalNamespace::TransferrableObject*> _method = GetClass().GetMethod(O("get_ParentTransferable"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetParentTransferable(::GlobalNamespace::TransferrableObject* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ParentTransferable"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_OnDeflated(::BNM::Structures::Mono::Action<void*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDeflated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnDeflated(::BNM::Structures::Mono::Action<void*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDeflated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::GlobalNamespace::RubberDuckEvents* GetEvents() {
            static BNM::Field<::GlobalNamespace::RubberDuckEvents*> _field = GetClass().GetField(O("_events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetCallLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("callLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDeflated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("deflated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDeflationEffect() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("deflationEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDestroyWhenDeflateDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("destroyWhenDeflateDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFloorLayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("floorLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetForceDestroyAfterSec() {
            static BNM::Field<float> _field = GetClass().GetField(O("forceDestroyAfterSec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetHandContactPoint() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("handContactPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetHandLayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("handLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetHandNormalVector() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("handNormalVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<void*>* GetOnDeflated() {
            static BNM::Field<::BNM::Structures::Mono::Action<void*>*> _field = GetClass().GetField(O("OnDeflated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlacedOnFloor() {
            static BNM::Field<bool> _field = GetClass().GetField(O("placedOnFloor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlacedOnFloorTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("placedOnFloorTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlacementOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("placementOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRigidbody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeCreated() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeCreated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::UpdateBlendShapeCosmetic* GetUpdateBlendShapeCosmetic() {
            static BNM::Field<::GorillaTag_Cosmetics::UpdateBlendShapeCosmetic*> _field = GetClass().GetField(O("updateBlendShapeCosmetic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEvents(::GlobalNamespace::RubberDuckEvents* value) {
            static BNM::Field<::GlobalNamespace::RubberDuckEvents*> _field = GetClass().GetField(O("_events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCallLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("callLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeflated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("deflated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeflationEffect(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("deflationEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestroyWhenDeflateDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("destroyWhenDeflateDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloorLayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("floorLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceDestroyAfterSec(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("forceDestroyAfterSec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandContactPoint(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("handContactPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandLayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("handLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandNormalVector(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("handNormalVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnDeflated(::BNM::Structures::Mono::Action<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<void*>*> _field = GetClass().GetField(O("OnDeflated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlacedOnFloor(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("placedOnFloor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlacedOnFloorTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("placedOnFloorTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlacementOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("placementOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigidbody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeCreated(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeCreated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateBlendShapeCosmetic(::GorillaTag_Cosmetics::UpdateBlendShapeCosmetic* value) {
            static BNM::Field<::GorillaTag_Cosmetics::UpdateBlendShapeCosmetic*> _field = GetClass().GetField(O("updateBlendShapeCosmetic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnDeflated_1(::BNM::Structures::Mono::Action<void*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDeflated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Deflate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Deflate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DeflateEvent(int sender, int target, ::BNM::Structures::Mono::Array<void*>* args, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeflateEvent"), {"sender", "target", "args", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sender, target, args, info);
        }
        void DeflateLocal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeflateLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DisableObject() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableObject"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::TransferrableObject* get_ParentTransferable() {
            static BNM::Method<::GlobalNamespace::TransferrableObject*> _m = GetClass().GetMethod(O("get_ParentTransferable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitialPhotonEvent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitialPhotonEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Launch(::BNM::Structures::Unity::Vector3 startPosition, ::BNM::Structures::Unity::Quaternion startRotation, ::BNM::Structures::Unity::Vector3 velocity, float chargeFrac, ::GlobalNamespace::VRRig* ownerRig, int progress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Launch"), {"startPosition", "startRotation", "velocity", "chargeFrac", "ownerRig", "progress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(startPosition, startRotation, velocity, chargeFrac, ownerRig, progress);
        }
        void OnCollisionEnter(::BNM::IL2CPP::Il2CppObject* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void remove_OnDeflated_1(::BNM::Structures::Mono::Action<void*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDeflated"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ParentTransferable(::GlobalNamespace::TransferrableObject* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ParentTransferable"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
