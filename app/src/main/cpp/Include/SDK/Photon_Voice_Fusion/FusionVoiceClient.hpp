#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Fusion {
    struct FusionVoiceClient : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Fusion", "FusionVoiceClient");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t FusionNetworkIdTypeCode = 0;
        ::BNM::Structures::Mono::String* GetFusionOfflineVoiceRoomName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_FusionOfflineVoiceRoomName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetFusionOfflineVoiceRoomName_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("fusionOfflineVoiceRoomName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* GetMemCompressedUInt64() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memCompressedUInt64"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNetworkRunner() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("networkRunner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseFusionAppSettings() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseFusionAppSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseFusionAuthValues() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseFusionAuthValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetVoiceFollowClientStarted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("voiceFollowClientStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::EnterRoomParams* GetVoiceRoomParams() {
            static BNM::Field<::Photon_Realtime::EnterRoomParams*> _field = GetClass().GetField(O("voiceRoomParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFusionOfflineVoiceRoomName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("fusionOfflineVoiceRoomName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetMemCompressedUInt64(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memCompressedUInt64"));
            _field.Set(value);
        }
        void SetNetworkRunner(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("networkRunner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseFusionAppSettings(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseFusionAppSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseFusionAuthValues(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseFusionAuthValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceFollowClientStarted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("voiceFollowClientStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceRoomParams(::Photon_Realtime::EnterRoomParams* value) {
            static BNM::Field<::Photon_Realtime::EnterRoomParams*> _field = GetClass().GetField(O("voiceRoomParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void* DeserializeFusionNetworkId(::ExitGames_Client_Photon::StreamBuffer* instream, int16_t length) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DeserializeFusionNetworkId"), {"instream", "length"});
            return _m.Call(instream, length);
        }
        ::BNM::Structures::Mono::String* get_FusionOfflineVoiceRoomName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_FusionOfflineVoiceRoomName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP2 = void*>
        void OnObjectEnterAOI(::BNM::IL2CPP::Il2CppObject* runner, ::BNM::IL2CPP::Il2CppObject* obj, TP2 player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnObjectEnterAOI"), {"runner", "obj", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, obj, player);
        }
        template <typename TP2 = void*>
        void OnObjectExitAOI(::BNM::IL2CPP::Il2CppObject* runner, ::BNM::IL2CPP::Il2CppObject* obj, TP2 player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnObjectExitAOI"), {"runner", "obj", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, obj, player);
        }
        static uint64_t ReadCompressedUInt64(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadCompressedUInt64"), {"stream"});
            return _m.Call(stream);
        }
        template <typename TP1 = void*>
        static int16_t SerializeFusionNetworkId(::ExitGames_Client_Photon::StreamBuffer* outstream, TP1 customobject) {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("SerializeFusionNetworkId"), {"outstream", "customobject"});
            return _m.Call(outstream, customobject);
        }
        static void VoiceRegisterCustomTypes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VoiceRegisterCustomTypes"));
            _m.Call();
        }
        static int WriteCompressedUInt64(::ExitGames_Client_Photon::StreamBuffer* stream, uint64_t value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("WriteCompressedUInt64"), {"stream", "value"});
            return _m.Call(stream, value);
        }
    };
}
