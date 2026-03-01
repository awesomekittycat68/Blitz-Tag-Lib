#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "TransferrableObject.hpp"

namespace GlobalNamespace {
    struct UseableObject : ::GlobalNamespace::TransferrableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "UseableObject");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsMidUse() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isMidUse"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetJustUsed() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_justUsed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetUseTimeElapsed() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_useTimeElapsed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::UseableObjectEvents* GetEvents() {
            static BNM::Field<::GlobalNamespace::UseableObjectEvents*> _field = GetClass().GetField(O("_events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsMidUse_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isMidUse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetJustUsed_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_justUsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLastActivate() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_lastActivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLastDeactivate() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_lastDeactivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRaiseActivate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_raiseActivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRaiseDeactivate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_raiseDeactivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUseTimeElapsed_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("_useTimeElapsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableActivation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableActivation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableDeactivation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableDeactivation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnActivateLocal() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onActivateLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnDeactivateLocal() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onDeactivateLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTempHandPos() {
            static BNM::Field<int> _field = GetClass().GetField(O("tempHandPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEvents(::GlobalNamespace::UseableObjectEvents* value) {
            static BNM::Field<::GlobalNamespace::UseableObjectEvents*> _field = GetClass().GetField(O("_events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsMidUse(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isMidUse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJustUsed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_justUsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastActivate(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_lastActivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastDeactivate(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_lastDeactivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaiseActivate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_raiseActivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaiseDeactivate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_raiseDeactivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseTimeElapsed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_useTimeElapsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableActivation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableActivation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableDeactivation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableDeactivation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnActivateLocal(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onActivateLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnDeactivateLocal(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onDeactivateLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempHandPos(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("tempHandPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanActivate() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanActivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CanDeactivate() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanDeactivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isMidUse() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isMidUse"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_justUsed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_justUsed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_useTimeElapsed() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_useTimeElapsed"));
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
        void OnObjectActivated(int sender, int target, ::BNM::Structures::Mono::Array<void*>* args, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnObjectActivated"), {"sender", "target", "args", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sender, target, args, info);
        }
        void OnObjectDeactivated(int sender, int target, ::BNM::Structures::Mono::Array<void*>* args, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnObjectDeactivated"), {"sender", "target", "args", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sender, target, args, info);
        }
        void TriggeredLateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggeredLateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
