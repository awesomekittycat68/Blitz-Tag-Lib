#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Audio {
    struct GTAudioOneShot : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Audio", "GTAudioOneShot");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isInitialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsInitialized(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_isInitialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetDefaultCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("defaultCurve"));
            return _field.Get();
        }
        static void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.Set(value);
        }
        static void SetDefaultCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("defaultCurve"));
            _field.Set(value);
        }
        static bool get_isInitialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isInitialized"));
            return _m.Call();
        }
        static void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.Call();
        }
        static void Play(::AudioClip* clip, ::BNM::Structures::Unity::Vector3 position, float volume, float pitch) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Play"), {"clip", "position", "volume", "pitch"});
            _m.Call(clip, position, volume, pitch);
        }
        static void Play(::AudioClip* clip, ::BNM::Structures::Unity::Vector3 position, ::BNM::IL2CPP::Il2CppObject* curve, float volume, float pitch) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Play"), {"clip", "position", "curve", "volume", "pitch"});
            _m.Call(clip, position, curve, volume, pitch);
        }
        static void set_isInitialized(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isInitialized"), {"value"});
            _m.Call(value);
        }
    };
}
