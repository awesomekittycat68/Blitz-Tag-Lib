#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VoiceComponent.hpp"

namespace Photon_Voice_Unity {
    struct AudioChangesHandler : ::Photon_Voice_Unity::VoiceComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "AudioChangesHandler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAndroidAlwaysHandleDeviceChange() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Android_AlwaysHandleDeviceChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetAudioConfiguration() {
            static BNM::Field<void*> _field = GetClass().GetField(O("audioConfiguration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHandleConfigChange() {
            static BNM::Field<bool> _field = GetClass().GetField(O("HandleConfigChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHandleDeviceChange() {
            static BNM::Field<bool> _field = GetClass().GetField(O("HandleDeviceChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPhotonMicChangeNotifier() {
            static BNM::Field<void*> _field = GetClass().GetField(O("photonMicChangeNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::Recorder* GetRecorder() {
            static BNM::Field<::Photon_Voice_Unity::Recorder*> _field = GetClass().GetField(O("recorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStartWhenDeviceChange() {
            static BNM::Field<bool> _field = GetClass().GetField(O("StartWhenDeviceChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSubscribedToSystemChangesPhoton() {
            static BNM::Field<bool> _field = GetClass().GetField(O("subscribedToSystemChangesPhoton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSubscribedToSystemChangesUnity() {
            static BNM::Field<bool> _field = GetClass().GetField(O("subscribedToSystemChangesUnity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseNativePluginChangeNotifier() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseNativePluginChangeNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseOnAudioConfigurationChanged() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseOnAudioConfigurationChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAndroidAlwaysHandleDeviceChange(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Android_AlwaysHandleDeviceChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioConfiguration(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("audioConfiguration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandleConfigChange(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("HandleConfigChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandleDeviceChange(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("HandleDeviceChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonMicChangeNotifier(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("photonMicChangeNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecorder(::Photon_Voice_Unity::Recorder* value) {
            static BNM::Field<::Photon_Voice_Unity::Recorder*> _field = GetClass().GetField(O("recorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartWhenDeviceChange(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("StartWhenDeviceChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubscribedToSystemChangesPhoton(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("subscribedToSystemChangesPhoton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubscribedToSystemChangesUnity(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("subscribedToSystemChangesUnity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseNativePluginChangeNotifier(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseNativePluginChangeNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseOnAudioConfigurationChanged(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseOnAudioConfigurationChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnAudioConfigChanged(bool deviceWasChanged) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAudioConfigChanged"), {"deviceWasChanged"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(deviceWasChanged);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDeviceChange() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDeviceChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SubscribeToSystemChanges() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SubscribeToSystemChanges"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UnsubscribeFromSystemChanges() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnsubscribeFromSystemChanges"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
