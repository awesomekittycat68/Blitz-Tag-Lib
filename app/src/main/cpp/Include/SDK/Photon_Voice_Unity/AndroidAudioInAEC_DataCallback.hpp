#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity {
    struct AndroidAudioInAEC_DataCallback : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "AndroidAudioInAEC").GetInnerClass("DataCallback");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<int16_t>*>* GetCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<int16_t>*>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCntFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("cntFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCntShort() {
            static BNM::Field<int> _field = GetClass().GetField(O("cntShort"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Types::nint GetJavaBuf() {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("javaBuf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallback(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<int16_t>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<int16_t>*>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCntFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("cntFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCntShort(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("cntShort"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJavaBuf(::BNM::Types::nint value) {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("javaBuf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnStop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetCallback_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Array<int16_t>*>* callback, ::BNM::Types::nint javaBuf) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCallback"), {"callback", "javaBuf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callback, javaBuf);
        }
    };
}
