#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ManipulatableObject.hpp"

namespace GlobalNamespace {
    struct TestManipulatableCube : ::GlobalNamespace::ManipulatableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TestManipulatableCube");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetApplyReleaseVelocity() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyReleaseVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBreakDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("breakDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Matrix4x4 GetLocalSpace() {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("localSpace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxXOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxXOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxYOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxYOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxZOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxZOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinXOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("minXOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinYOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("minYOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinZOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("minZOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReleaseDrag() {
            static BNM::Field<float> _field = GetClass().GetField(O("releaseDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetStartingPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startingPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetApplyReleaseVelocity(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyReleaseVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBreakDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("breakDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalSpace(::BNM::Structures::Unity::Matrix4x4 value) {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("localSpace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxXOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxXOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxYOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxYOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxZOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxZOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinXOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minXOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinYOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minYOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinZOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minZOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReleaseDrag(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("releaseDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startingPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Matrix4x4 GetLocalSpace_1() {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("GetLocalSpace"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnHeldUpdate(::GameObject* hand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHeldUpdate"), {"hand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hand);
        }
        void OnReleasedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReleasedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnStartManipulation(::GameObject* grabbingHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStartManipulation"), {"grabbingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbingHand);
        }
        void OnStopManipulation(::GameObject* releasingHand, ::BNM::Structures::Unity::Vector3 releaseVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStopManipulation"), {"releasingHand", "releaseVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(releasingHand, releaseVelocity);
        }
        void SetCubeToSpecificPosition(::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCubeToSpecificPosition"), {"pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pos);
        }
        void SetCubeToSpecificPosition(float x, float y, float z) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCubeToSpecificPosition"), {"x", "y", "z"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(x, y, z);
        }
        bool ShouldHandDetach(::GameObject* hand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldHandDetach"), {"hand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hand);
        }
    };
}
