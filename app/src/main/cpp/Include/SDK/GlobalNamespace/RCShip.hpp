#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RCHoverboard.hpp"

namespace GlobalNamespace {
    struct RCShip : ::GlobalNamespace::RCHoverboard {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RCShip");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t CannonLeftBit = 1;
        static constexpr uint8_t FireFlipBit = 2;
        static constexpr uint8_t MovingBit = 4;
        bool GetArmedAfterMobilize() {
            static BNM::Field<bool> _field = GetClass().GetField(O("armedAfterMobilize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCannonToLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("cannonToLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCannonTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("cannonTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCannonYawSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("cannonYawSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFaceIsDown() {
            static BNM::Field<bool> _field = GetClass().GetField(O("faceIsDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFacePressThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("facePressThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFaceReleaseThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("faceReleaseThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsMovingShared() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMovingShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLastCannonToLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("lastCannonToLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLastFireFlip() {
            static BNM::Field<bool> _field = GetClass().GetField(O("lastFireFlip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLastIsMoving() {
            static BNM::Field<bool> _field = GetClass().GetField(O("lastIsMoving"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLeftYaw() {
            static BNM::Field<float> _field = GetClass().GetField(O("leftYaw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMovingSpeedThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("movingSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnCannonSideChanged() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnCannonSideChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnFire() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnFire"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnMoveStarted() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnMoveStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnMoveStopped() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnMoveStopped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPrevFaceDown() {
            static BNM::Field<bool> _field = GetClass().GetField(O("prevFaceDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPrevTriggerDown() {
            static BNM::Field<bool> _field = GetClass().GetField(O("prevTriggerDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRightYaw() {
            static BNM::Field<float> _field = GetClass().GetField(O("rightYaw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTriggerIsDown() {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerIsDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTriggerPressThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerPressThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTriggerReleaseThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerReleaseThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetArmedAfterMobilize(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("armedAfterMobilize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCannonToLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("cannonToLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCannonTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("cannonTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCannonYawSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cannonYawSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFaceIsDown(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("faceIsDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFacePressThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("facePressThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFaceReleaseThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("faceReleaseThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsMovingShared(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMovingShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastCannonToLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("lastCannonToLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastFireFlip(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("lastFireFlip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastIsMoving(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("lastIsMoving"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftYaw(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("leftYaw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMovingSpeedThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("movingSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCannonSideChanged(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnCannonSideChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnFire(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnFire"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnMoveStarted(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnMoveStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnMoveStopped(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnMoveStopped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevFaceDown(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("prevFaceDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevTriggerDown(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("prevTriggerDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightYaw(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rightYaw"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerIsDown(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerIsDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerPressThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerPressThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerReleaseThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerReleaseThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AuthorityUpdate(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthorityUpdate"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        uint8_t GetDataB() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("GetDataB"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ReadCannonBit() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReadCannonBit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ReadFireFlip() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReadFireFlip"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void RemoteUpdate(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteUpdate"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void SetDataB(uint8_t b) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDataB"), {"b"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(b);
        }
        void SharedUpdate(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SharedUpdate"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void WriteCannonBit(bool toLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteCannonBit"), {"toLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toLeft);
        }
    };
}
