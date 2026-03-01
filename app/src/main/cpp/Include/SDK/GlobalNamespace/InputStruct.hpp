#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct InputStruct : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "InputStruct");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetBodyRotation() {
            static BNM::Field<int> _field = GetClass().GetField(O("bodyRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGrabbedRopeIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("grabbedRopeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHandPosition() {
            static BNM::Field<int> _field = GetClass().GetField(O("handPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHeadRotation() {
            static BNM::Field<int> _field = GetClass().GetField(O("headRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int16_t GetHoverboardColor() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("hoverboardColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetHoverboardPosRot() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("hoverboardPosRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsGroundedButt() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isGroundedButt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsGroundedHand() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isGroundedHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastHandTouchedGroundAtTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastHandTouchedGroundAtTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastTouchedGroundAtTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTouchedGroundAtTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftGrabbedHandIsLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftGrabbedHandIsLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLeftHandGrabbedActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("leftHandGrabbedActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetLeftHandLong() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("leftHandLong"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int16_t GetLeftUpperArmRotation() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("leftUpperArmRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMovingSurfaceIsMonkeBlock() {
            static BNM::Field<bool> _field = GetClass().GetField(O("movingSurfaceIsMonkeBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int16_t GetPackedCompetitiveData() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("packedCompetitiveData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPackedFields() {
            static BNM::Field<int> _field = GetClass().GetField(O("packedFields"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetPosition() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("position"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetPropHuntPosRot() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("propHuntPosRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRightGrabbedHandIsLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightGrabbedHandIsLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRightHandGrabbedActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("rightHandGrabbedActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetRightHandLong() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("rightHandLong"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int16_t GetRightUpperArmRotation() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("rightUpperArmRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRopeBoneIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("ropeBoneIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRopeGrabIsBody() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ropeGrabIsBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRopeGrabIsLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ropeGrabIsLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRopeGrabOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("ropeGrabOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetServerTimeStamp() {
            static BNM::Field<double> _field = GetClass().GetField(O("serverTimeStamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int16_t GetTaggedById() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("taggedById"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUsingNewIK() {
            static BNM::Field<bool> _field = GetClass().GetField(O("usingNewIK"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBodyRotation(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bodyRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedRopeIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("grabbedRopeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandPosition(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("handPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadRotation(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("headRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverboardColor(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("hoverboardColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverboardPosRot(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("hoverboardPosRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsGroundedButt(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isGroundedButt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsGroundedHand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isGroundedHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHandTouchedGroundAtTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastHandTouchedGroundAtTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTouchedGroundAtTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTouchedGroundAtTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftGrabbedHandIsLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftGrabbedHandIsLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandGrabbedActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("leftHandGrabbedActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandLong(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("leftHandLong"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftUpperArmRotation(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("leftUpperArmRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMovingSurfaceIsMonkeBlock(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("movingSurfaceIsMonkeBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPackedCompetitiveData(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("packedCompetitiveData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPackedFields(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("packedFields"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPosition(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("position"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPropHuntPosRot(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("propHuntPosRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightGrabbedHandIsLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rightGrabbedHandIsLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandGrabbedActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("rightHandGrabbedActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandLong(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("rightHandLong"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightUpperArmRotation(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("rightUpperArmRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeBoneIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ropeBoneIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeGrabIsBody(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ropeGrabIsBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeGrabIsLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ropeGrabIsLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeGrabOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("ropeGrabOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetServerTimeStamp(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("serverTimeStamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTaggedById(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("taggedById"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsingNewIK(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("usingNewIK"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
