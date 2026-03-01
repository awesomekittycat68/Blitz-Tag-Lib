#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ElderGorilla : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ElderGorilla");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float MAX_HAND_DIST = 1.0f;
        static constexpr float COOLDOWN_HAND_DIST = 1.0f;
        static constexpr float VALID_HAND_DIST = 0.75f;
        static constexpr float TIME_VALID_HEAD_HEIGHT = 1.0f;
        int GetCountValidArmDists() {
            static BNM::Field<int> _field = GetClass().GetField(O("countValidArmDists"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSavedHeadHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("savedHeadHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTHMD() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tHMD"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeLastValidArmDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeLastValidArmDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimerTrackedHeadHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("timerTrackedHeadHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTLeftHand() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTrackedHeadHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("trackedHeadHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTrackingHeadHeight() {
            static BNM::Field<bool> _field = GetClass().GetField(O("trackingHeadHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTRightHand() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tRightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCountValidArmDists(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("countValidArmDists"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSavedHeadHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("savedHeadHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTHMD(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tHMD"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeLastValidArmDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeLastValidArmDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimerTrackedHeadHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timerTrackedHeadHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTLeftHand(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrackedHeadHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("trackedHeadHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrackingHeadHeight(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("trackingHeadHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTRightHand(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tRightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CheckHandDistance(::Transform* hand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckHandDistance"), {"hand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hand);
        }
        void CheckHeight() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckHeight"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckMicVolume() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckMicVolume"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
