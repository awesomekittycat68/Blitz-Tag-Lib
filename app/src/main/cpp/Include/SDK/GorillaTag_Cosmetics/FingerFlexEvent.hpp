#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/MonoBehaviourTick.hpp"
#include "FingerFlexEvent_FingerType.hpp"

namespace GorillaTag_Cosmetics {
    struct FingerFlexEvent : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "FingerFlexEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::FingerFlexEvent_Listener*>* GetEventListeners() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::FingerFlexEvent_Listener*>*> _field = GetClass().GetField(O("eventListeners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::FingerFlexEvent_FingerType GetFingerType() {
            static BNM::Field<::GorillaTag_Cosmetics::FingerFlexEvent_FingerType> _field = GetClass().GetField(O("fingerType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIgnoreTransferable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ignoreTransferable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferrableObject* GetParentTransferable() {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("parentTransferable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventListeners(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::FingerFlexEvent_Listener*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::FingerFlexEvent_Listener*>*> _field = GetClass().GetField(O("eventListeners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFingerType(::GorillaTag_Cosmetics::FingerFlexEvent_FingerType value) {
            static BNM::Field<::GorillaTag_Cosmetics::FingerFlexEvent_FingerType> _field = GetClass().GetField(O("fingerType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIgnoreTransferable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ignoreTransferable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentTransferable(::GlobalNamespace::TransferrableObject* value) {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("parentTransferable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckFingerValue(::GorillaTag_Cosmetics::FingerFlexEvent_Listener* listener, float fingerValue, bool isLeft, float& lastValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckFingerValue"), {"listener", "fingerValue", "isLeft", "lastValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(listener, fingerValue, isLeft, &lastValue);
        }
        bool FingerFlexValidation(bool isLeftHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("FingerFlexValidation"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isLeftHand);
        }
        void FireEvents(::GorillaTag_Cosmetics::FingerFlexEvent_Listener* listener) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FireEvents"), {"listener"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(listener);
        }
        void FireEvents(::GorillaTag_Cosmetics::FingerFlexEvent_Listener* listener, float leftFinger, float rightFinger) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FireEvents"), {"listener", "leftFinger", "rightFinger"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(listener, leftFinger, rightFinger);
        }
        bool IsMyItem() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMyItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
