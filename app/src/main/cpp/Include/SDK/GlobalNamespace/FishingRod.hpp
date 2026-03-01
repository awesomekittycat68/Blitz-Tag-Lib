#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TimeSince.hpp"
#include "TransferrableObject.hpp"

namespace GlobalNamespace {
    struct FishingRod : ::GlobalNamespace::TransferrableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FishingRod");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetBobFloating() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_bobFloating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBobFloatPlaneY() {
            static BNM::Field<float> _field = GetClass().GetField(O("_bobFloatPlaneY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetGrippingHand() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_grippingHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsGrippingHandle() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isGrippingHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetLastLocalRot() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("_lastLocalRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLineExpanding() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_lineExpanding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLineResetting() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_lineResetting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLineResizing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_lineResizing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLocalRotDelta() {
            static BNM::Field<float> _field = GetClass().GetField(O("_localRotDelta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetManualReeling() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_manualReeling"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TimeSince GetSinceGripLoss() {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_sinceGripLoss"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TimeSince GetSinceReset() {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_sinceReset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTargetSegmentMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("_targetSegmentMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTargetSegmentMin() {
            static BNM::Field<float> _field = GetClass().GetField(O("_targetSegmentMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetBobCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("bobCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBobDynamicDrag() {
            static BNM::Field<float> _field = GetClass().GetField(O("bobDynamicDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBobFloatForce() {
            static BNM::Field<float> _field = GetClass().GetField(O("bobFloatForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetBobRigidbody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("bobRigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBobStaticDrag() {
            static BNM::Field<float> _field = GetClass().GetField(O("bobStaticDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoxCollider* GetHandleCollider() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("handleCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetHandleJoint() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("handleJoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetHandleRigidbody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("handleRigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHandleTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("handleTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VerletLine* GetLine() {
            static BNM::Field<::GlobalNamespace::VerletLine*> _field = GetClass().GetField(O("line"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLineCastFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("lineCastFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLineLengthMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("lineLengthMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLineLengthMin() {
            static BNM::Field<float> _field = GetClass().GetField(O("lineLengthMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLineResizeRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("lineResizeRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetReelFreezeLocalPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("reelFreezeLocalPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetReelFrom() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("reelFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReelSpinRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("reelSpinRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetReelTo() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("reelTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetReelToSync() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("reelToSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetTipBody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("tipBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaVelocityEstimator* GetTipTracker() {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("tipTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBobFloating(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_bobFloating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBobFloatPlaneY(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_bobFloatPlaneY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrippingHand(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_grippingHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsGrippingHandle(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isGrippingHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastLocalRot(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("_lastLocalRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineExpanding(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_lineExpanding"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineResetting(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_lineResetting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineResizing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_lineResizing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalRotDelta(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_localRotDelta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetManualReeling(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_manualReeling"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSinceGripLoss(::GlobalNamespace::TimeSince value) {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_sinceGripLoss"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSinceReset(::GlobalNamespace::TimeSince value) {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_sinceReset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetSegmentMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_targetSegmentMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetSegmentMin(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_targetSegmentMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBobCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("bobCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBobDynamicDrag(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bobDynamicDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBobFloatForce(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bobFloatForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBobRigidbody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("bobRigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBobStaticDrag(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bobStaticDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandleCollider(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("handleCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandleJoint(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("handleJoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandleRigidbody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("handleRigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandleTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("handleTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLine(::GlobalNamespace::VerletLine* value) {
            static BNM::Field<::GlobalNamespace::VerletLine*> _field = GetClass().GetField(O("line"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineCastFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lineCastFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineLengthMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lineLengthMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineLengthMin(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lineLengthMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineResizeRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lineResizeRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReelFreezeLocalPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("reelFreezeLocalPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReelFrom(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("reelFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReelSpinRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("reelSpinRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReelTo(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("reelTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReelToSync(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("reelToSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTipBody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("tipBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTipTracker(::GlobalNamespace::GorillaVelocityEstimator* value) {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("tipTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static float GetSignedDeltaYZ(::BNM::Structures::Unity::Quaternion& a, ::BNM::Structures::Unity::Quaternion& b) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetSignedDeltaYZ"), {"a", "b"});
            return _m.Call(&a, &b);
        }
        bool IsFreeHandGripping() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsFreeHandGripping"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnActivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnActivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDeactivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDeactivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool OnRelease(::GlobalNamespace::DropZone* zoneReleased, ::GameObject* releasingHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnRelease"), {"zoneReleased", "releasingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zoneReleased, releasingHand);
        }
        void QuickReel() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QuickReel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReelIn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReelIn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReelOut() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReelOut"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReelStop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReelStop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetLineLength(float length) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetLineLength"), {"length"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(length);
        }
        void SetBobFloat(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBobFloat"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        static void SetHandleMotorUse(bool useMotor, float spinRate, ::BNM::IL2CPP::Il2CppObject* handleJoint, bool reverse) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHandleMotorUse"), {"useMotor", "spinRate", "handleJoint", "reverse"});
            _m.Call(useMotor, spinRate, handleJoint, reverse);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TriggeredLateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggeredLateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
