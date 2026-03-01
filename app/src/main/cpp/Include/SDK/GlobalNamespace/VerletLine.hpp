#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VerletLine_LineNode.hpp"

namespace GlobalNamespace {
    struct VerletLine : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VerletLine");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::VerletLine_LineNode>* GetNodes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VerletLine_LineNode>*> _field = GetClass().GetField(O("_nodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetPositions() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("_positions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetEndLineAnchorLocalPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("endLineAnchorLocalPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEndMaxSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("endMaxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetEndRigidbody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("endRigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetEndRigidbodyParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("endRigidbodyParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetGravity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("gravity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LineRenderer* GetLine() {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("line"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLineEnd() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lineEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLineStart() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lineStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOnlyPullAtEdges() {
            static BNM::Field<bool> _field = GetClass().GetField(O("onlyPullAtEdges"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetResizeScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("resizeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetResizeSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("resizeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRigidBodyStartingLocalPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rigidBodyStartingLocalPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetScaleLineWidth() {
            static BNM::Field<bool> _field = GetClass().GetField(O("scaleLineWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSegmentLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("segmentLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSegmentMaxLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("segmentMaxLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSegmentMinLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("segmentMinLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSegmentNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("segmentNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSegmentTargetLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("segmentTargetLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSimIterations() {
            static BNM::Field<int> _field = GetClass().GetField(O("simIterations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTension() {
            static BNM::Field<float> _field = GetClass().GetField(O("tension"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTensionScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("tensionScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTotalLineLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("totalLineLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNodes(::BNM::Structures::Mono::Array<::GlobalNamespace::VerletLine_LineNode>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VerletLine_LineNode>*> _field = GetClass().GetField(O("_nodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositions(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("_positions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndLineAnchorLocalPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("endLineAnchorLocalPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndMaxSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("endMaxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndRigidbody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("endRigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndRigidbodyParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("endRigidbodyParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("gravity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLine(::LineRenderer* value) {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("line"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineEnd(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lineEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineStart(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lineStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnlyPullAtEdges(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("onlyPullAtEdges"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResizeScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("resizeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResizeSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("resizeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigidBodyStartingLocalPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("rigidBodyStartingLocalPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleLineWidth(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("scaleLineWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSegmentLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("segmentLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSegmentMaxLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("segmentMaxLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSegmentMinLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("segmentMinLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSegmentNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("segmentNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSegmentTargetLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("segmentTargetLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSimIterations(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("simIterations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTension(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tension"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTensionScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tensionScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalLineLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("totalLineLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddSegmentLength(float amount, float delay) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddSegmentLength"), {"amount", "delay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(amount, delay);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ForceTotalLength(float totalLength) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceTotalLength"), {"totalLength"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(totalLength);
        }
        static void LimitDistance(::GlobalNamespace::VerletLine_LineNode& p1, ::GlobalNamespace::VerletLine_LineNode& p2, float restLength) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LimitDistance"), {"p1", "p2", "restLength"});
            _m.Call(&p1, &p2, restLength);
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
        void RemoveSegmentLength(float amount, float delay) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveSegmentLength"), {"amount", "delay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(amount, delay);
        }
        ::BNM::Coroutine::IEnumerator* ResizeAfterDelay(float delay) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ResizeAfterDelay"), {"delay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(delay);
        }
        void SetLength(float total, float delay) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLength"), {"total", "delay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(total, delay);
        }
        static void Simulate(::GlobalNamespace::VerletLine_LineNode& p, float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Simulate"), {"p", "dt"});
            _m.Call(&p, dt);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
