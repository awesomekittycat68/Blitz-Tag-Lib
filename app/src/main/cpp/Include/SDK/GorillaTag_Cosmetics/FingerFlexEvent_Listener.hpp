#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FingerFlexEvent_EventType.hpp"

namespace GorillaTag_Cosmetics {
    struct FingerFlexEvent_Listener : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "FingerFlexEvent").GetInnerClass("Listener");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetCheckLeftHand() {
            static BNM::Field<bool> _field = GetClass().GetField(O("checkLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::FingerFlexEvent_EventType GetEventType() {
            static BNM::Field<::GorillaTag_Cosmetics::FingerFlexEvent_EventType> _field = GetClass().GetField(O("eventType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFingerFlexValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("fingerFlexValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFingerLeftLastValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("fingerLeftLastValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFingerReleaseValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("fingerReleaseValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFingerRightLastValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("fingerRightLastValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFireOnlyWhileHeld() {
            static BNM::Field<bool> _field = GetClass().GetField(O("fireOnlyWhileHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFrameCounter() {
            static BNM::Field<int> _field = GetClass().GetField(O("frameCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFrameInterval() {
            static BNM::Field<int> _field = GetClass().GetField(O("frameInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetListenerComponent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("listenerComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSyncForEveryoneInRoom() {
            static BNM::Field<bool> _field = GetClass().GetField(O("syncForEveryoneInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCheckLeftHand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("checkLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventType(::GorillaTag_Cosmetics::FingerFlexEvent_EventType value) {
            static BNM::Field<::GorillaTag_Cosmetics::FingerFlexEvent_EventType> _field = GetClass().GetField(O("eventType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFingerFlexValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fingerFlexValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFingerLeftLastValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fingerLeftLastValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFingerReleaseValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fingerReleaseValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFingerRightLastValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fingerRightLastValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireOnlyWhileHeld(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("fireOnlyWhileHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameCounter(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("frameCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameInterval(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("frameInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetListenerComponent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("listenerComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSyncForEveryoneInRoom(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("syncForEveryoneInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
