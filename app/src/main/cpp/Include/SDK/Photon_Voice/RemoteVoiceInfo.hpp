#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VoiceInfo.hpp"

namespace Photon_Voice {
    struct RemoteVoiceInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "RemoteVoiceInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetChannelId() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ChannelId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetChannelId(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ChannelId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Voice::VoiceInfo GetInfo() {
            static BNM::Method<::Photon_Voice::VoiceInfo> _method = GetClass().GetMethod(O("get_Info"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInfo(::Photon_Voice::VoiceInfo value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Info"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetPlayerId() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PlayerId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPlayerId(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PlayerId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        uint8_t GetVoiceId() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_VoiceId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetVoiceId(uint8_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_VoiceId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int get_ChannelId() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ChannelId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice::VoiceInfo get_Info() {
            static BNM::Method<::Photon_Voice::VoiceInfo> _m = GetClass().GetMethod(O("get_Info"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PlayerId() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PlayerId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t get_VoiceId() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_VoiceId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_ChannelId(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ChannelId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Info(::Photon_Voice::VoiceInfo value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Info"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PlayerId(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PlayerId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_VoiceId(uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_VoiceId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
