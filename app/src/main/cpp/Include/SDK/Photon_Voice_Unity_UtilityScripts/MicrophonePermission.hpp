#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Voice_Unity/VoiceComponent.hpp"

namespace Photon_Voice_Unity_UtilityScripts {
    struct MicrophonePermission : ::Photon_Voice_Unity::VoiceComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity.UtilityScripts", "MicrophonePermission");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetHasPermission() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasPermission"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHasPermission(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_HasPermission"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_MicrophonePermissionCallback(::BNM::Structures::Mono::Action<bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_MicrophonePermissionCallback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_MicrophonePermissionCallback(::BNM::Structures::Mono::Action<bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_MicrophonePermissionCallback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        bool GetAutoStart() {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasPermission_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPermission"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsRequesting() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRequesting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<bool>* GetMicrophonePermissionCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("MicrophonePermissionCallback"));
            return _field.Get();
        }
        ::Photon_Voice_Unity::Recorder* GetRecorder() {
            static BNM::Field<::Photon_Voice_Unity::Recorder*> _field = GetClass().GetField(O("recorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAutoStart(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasPermission_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPermission"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsRequesting(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRequesting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetMicrophonePermissionCallback(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("MicrophonePermissionCallback"));
            _field.Set(value);
        }
        void SetRecorder(::Photon_Voice_Unity::Recorder* value) {
            static BNM::Field<::Photon_Voice_Unity::Recorder*> _field = GetClass().GetField(O("recorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void add_MicrophonePermissionCallback_1(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_MicrophonePermissionCallback"), {"value"});
            _m.Call(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_HasPermission() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasPermission"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitVoice() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitVoice"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PermissionCallbacks_PermissionDenied(::BNM::Structures::Mono::String* permissionName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PermissionCallbacks_PermissionDenied"), {"permissionName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(permissionName);
        }
        void PermissionCallbacks_PermissionDeniedAndDontAskAgain(::BNM::Structures::Mono::String* permissionName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PermissionCallbacks_PermissionDeniedAndDontAskAgain"), {"permissionName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(permissionName);
        }
        void PermissionCallbacks_PermissionGranted(::BNM::Structures::Mono::String* permissionName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PermissionCallbacks_PermissionGranted"), {"permissionName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(permissionName);
        }
        static void remove_MicrophonePermissionCallback_1(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_MicrophonePermissionCallback"), {"value"});
            _m.Call(value);
        }
        void set_HasPermission(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_HasPermission"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
