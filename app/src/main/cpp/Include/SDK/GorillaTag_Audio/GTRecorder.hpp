#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Voice_Unity/Recorder.hpp"

namespace GorillaTag_Audio {
    struct GTRecorder : ::Photon_Voice_Unity::Recorder {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Audio", "GTRecorder");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetPostTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_PostTickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPostTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PostTickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaTag_Audio::GTMicWrapper* GetMicWrapper() {
            static BNM::Field<::GorillaTag_Audio::GTMicWrapper*> _field = GetClass().GetField(O("_micWrapper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTestEchoCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_testEchoCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAllowPitchAdjustment() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AllowPitchAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAllowVolumeAdjustment() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AllowVolumeAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDebugEchoLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("DebugEchoLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPitchAdjustment() {
            static BNM::Field<float> _field = GetClass().GetField(O("PitchAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVolumeAdjustment() {
            static BNM::Field<float> _field = GetClass().GetField(O("VolumeAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMicWrapper(::GorillaTag_Audio::GTMicWrapper* value) {
            static BNM::Field<::GorillaTag_Audio::GTMicWrapper*> _field = GetClass().GetField(O("_micWrapper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestEchoCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_testEchoCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllowPitchAdjustment(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AllowPitchAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllowVolumeAdjustment(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AllowVolumeAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugEchoLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("DebugEchoLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitchAdjustment(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PitchAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolumeAdjustment(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("VolumeAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::Photon_Voice_Unity::MicWrapper* CreateMicWrapper(::BNM::Structures::Mono::String* micDev, int samplingRateInt, ::Photon_Voice_Unity::VoiceLogger* logger) {
            static BNM::Method<::Photon_Voice_Unity::MicWrapper*> _m = GetClass().GetMethod(O("CreateMicWrapper"), {"micDev", "samplingRateInt", "logger"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(micDev, samplingRateInt, logger);
        }
        ::BNM::Coroutine::IEnumerator* DoTestEcho() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoTestEcho"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_PostTickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_PostTickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void PostTick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostTick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_PostTickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PostTickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
