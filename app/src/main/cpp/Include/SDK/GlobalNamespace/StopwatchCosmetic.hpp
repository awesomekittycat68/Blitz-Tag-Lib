#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "TransferrableObject.hpp"

namespace GlobalNamespace {
    struct StopwatchCosmetic : ::GlobalNamespace::TransferrableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "StopwatchCosmetic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetActiveTimeElapsed() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_activeTimeElapsed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsActivating() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isActivating"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetActivated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_activated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetActiveTimeElapsed_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("_activeTimeElapsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsActivating_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isActivating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPhotonID() {
            static BNM::Field<int> _field = GetClass().GetField(O("_photonID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::StopwatchFace* GetWatchFace() {
            static BNM::Field<::GlobalNamespace::StopwatchFace*> _field = GetClass().GetField(O("_watchFace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<int, int, ::BNM::Structures::Mono::Array<void*>*, ::GlobalNamespace::PhotonMessageInfoWrapped>* GetWatchReset() {
            static BNM::Field<::BNM::Structures::Mono::Action<int, int, ::BNM::Structures::Mono::Array<void*>*, ::GlobalNamespace::PhotonMessageInfoWrapped>*> _field = GetClass().GetField(O("_watchReset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<int, int, ::BNM::Structures::Mono::Array<void*>*, ::GlobalNamespace::PhotonMessageInfoWrapped>* GetWatchToggle() {
            static BNM::Field<::BNM::Structures::Mono::Action<int, int, ::BNM::Structures::Mono::Array<void*>*, ::GlobalNamespace::PhotonMessageInfoWrapped>*> _field = GetClass().GetField(O("_watchToggle"));
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
        static ::GlobalNamespace::PhotonEvent* GetGWatchResetRPC() {
            static BNM::Field<::GlobalNamespace::PhotonEvent*> _field = GetClass().GetField(O("gWatchResetRPC"));
            return _field.Get();
        }
        static ::GlobalNamespace::PhotonEvent* GetGWatchToggleRPC() {
            static BNM::Field<::GlobalNamespace::PhotonEvent*> _field = GetClass().GetField(O("gWatchToggleRPC"));
            return _field.Get();
        }
        void SetActivated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_activated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveTimeElapsed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_activeTimeElapsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsActivating(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isActivating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_photonID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWatchFace(::GlobalNamespace::StopwatchFace* value) {
            static BNM::Field<::GlobalNamespace::StopwatchFace*> _field = GetClass().GetField(O("_watchFace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWatchReset(::BNM::Structures::Mono::Action<int, int, ::BNM::Structures::Mono::Array<void*>*, ::GlobalNamespace::PhotonMessageInfoWrapped>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<int, int, ::BNM::Structures::Mono::Array<void*>*, ::GlobalNamespace::PhotonMessageInfoWrapped>*> _field = GetClass().GetField(O("_watchReset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWatchToggle(::BNM::Structures::Mono::Action<int, int, ::BNM::Structures::Mono::Array<void*>*, ::GlobalNamespace::PhotonMessageInfoWrapped>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<int, int, ::BNM::Structures::Mono::Array<void*>*, ::GlobalNamespace::PhotonMessageInfoWrapped>*> _field = GetClass().GetField(O("_watchToggle"));
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
        static void SetGWatchResetRPC(::GlobalNamespace::PhotonEvent* value) {
            static BNM::Field<::GlobalNamespace::PhotonEvent*> _field = GetClass().GetField(O("gWatchResetRPC"));
            _field.Set(value);
        }
        static void SetGWatchToggleRPC(::GlobalNamespace::PhotonEvent* value) {
            static BNM::Field<::GlobalNamespace::PhotonEvent*> _field = GetClass().GetField(O("gWatchToggleRPC"));
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
        bool FetchMyViewID(int& viewID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("FetchMyViewID"), {"viewID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&viewID);
        }
        float get_activeTimeElapsed() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_activeTimeElapsed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isActivating() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isActivating"));
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
        void OnWatchReset(int sender, int target, ::BNM::Structures::Mono::Array<void*>* args, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnWatchReset"), {"sender", "target", "args", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sender, target, args, info);
        }
        void OnWatchToggle(int sender, int target, ::BNM::Structures::Mono::Array<void*>* args, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnWatchToggle"), {"sender", "target", "args", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sender, target, args, info);
        }
        bool PollActivated() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PollActivated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void TriggeredLateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggeredLateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
