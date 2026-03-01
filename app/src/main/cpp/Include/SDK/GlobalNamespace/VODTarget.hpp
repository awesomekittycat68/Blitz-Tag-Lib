#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ObservableBehavior.hpp"

namespace GlobalNamespace {
    struct VODTarget : ::GlobalNamespace::ObservableBehavior {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VODTarget");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::VODTarget_VODTargetAudioSettings* GetAudioSettings() {
            static BNM::Method<::GlobalNamespace::VODTarget_VODTargetAudioSettings*> _method = GetClass().GetMethod(O("get_AudioSettings"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Renderer* GetRenderer() {
            static BNM::Method<::Renderer*> _method = GetClass().GetMethod(O("get_Renderer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Material* GetStandbyOverride() {
            static BNM::Method<::Material*> _method = GetClass().GetMethod(O("get_StandbyOverride"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::TMP_Text* GetUpNextText() {
            static BNM::Method<::TMP_Text*> _method = GetClass().GetMethod(O("get_UpNextText"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::BNM::Structures::Mono::Action<::GlobalNamespace::VODTarget*>* GetAlertDisabled() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::VODTarget*>*> _field = GetClass().GetField(O("AlertDisabled"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::GlobalNamespace::VODTarget*>* GetAlertEnabled() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::VODTarget*>*> _field = GetClass().GetField(O("AlertEnabled"));
            return _field.Get();
        }
        ::GlobalNamespace::VODTarget_VODTargetAudioSettings* GetAudioSettings_f() {
            static BNM::Field<::GlobalNamespace::VODTarget_VODTargetAudioSettings*> _field = GetClass().GetField(O("audioSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetStandbyOverride_f() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("standbyOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetTargetRenderer() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("targetRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetUpNext() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("upNext"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetAlertDisabled(::BNM::Structures::Mono::Action<::GlobalNamespace::VODTarget*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::VODTarget*>*> _field = GetClass().GetField(O("AlertDisabled"));
            _field.Set(value);
        }
        static void SetAlertEnabled(::BNM::Structures::Mono::Action<::GlobalNamespace::VODTarget*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::VODTarget*>*> _field = GetClass().GetField(O("AlertEnabled"));
            _field.Set(value);
        }
        void SetAudioSettings(::GlobalNamespace::VODTarget_VODTargetAudioSettings* value) {
            static BNM::Field<::GlobalNamespace::VODTarget_VODTargetAudioSettings*> _field = GetClass().GetField(O("audioSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStandbyOverride(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("standbyOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("targetRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpNext(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("upNext"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::VODTarget_VODTargetAudioSettings* get_AudioSettings() {
            static BNM::Method<::GlobalNamespace::VODTarget_VODTargetAudioSettings*> _m = GetClass().GetMethod(O("get_AudioSettings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Renderer* get_Renderer() {
            static BNM::Method<::Renderer*> _m = GetClass().GetMethod(O("get_Renderer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Material* get_StandbyOverride() {
            static BNM::Method<::Material*> _m = GetClass().GetMethod(O("get_StandbyOverride"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::TMP_Text* get_UpNextText() {
            static BNM::Method<::TMP_Text*> _m = GetClass().GetMethod(O("get_UpNextText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ObservableSliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ObservableSliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnBecameObservable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBecameObservable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLostObservable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLostObservable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UnityOnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnityOnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UnityOnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnityOnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void VODPlayer_OnCrash() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VODPlayer_OnCrash"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
