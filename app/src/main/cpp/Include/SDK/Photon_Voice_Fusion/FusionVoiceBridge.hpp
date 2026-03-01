#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Realtime/ClientState.hpp"
#include "../Photon_Voice_Unity/VoiceComponent.hpp"

namespace Photon_Voice_Fusion {
    struct FusionVoiceBridge : ::Photon_Voice_Unity::VoiceComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Fusion", "FusionVoiceBridge");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t FusionNetworkIdTypeCode = 0;
        bool GetUseFusionAppSettings() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UseFusionAppSettings"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUseFusionAppSettings(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UseFusionAppSettings"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetUseFusionAuthValues() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UseFusionAuthValues"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUseFusionAuthValues(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UseFusionAuthValues"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
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
        ::Photon_Voice_Unity::VoiceConnection* GetVoiceConnection() {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection*> _field = GetClass().GetField(O("voiceConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::EnterRoomParams* GetVoiceRoomParams() {
            static BNM::Field<::Photon_Realtime::EnterRoomParams*> _field = GetClass().GetField(O("voiceRoomParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
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
        void SetVoiceConnection(::Photon_Voice_Unity::VoiceConnection* value) {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection*> _field = GetClass().GetField(O("voiceConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceRoomParams(::Photon_Realtime::EnterRoomParams* value) {
            static BNM::Field<::Photon_Realtime::EnterRoomParams*> _field = GetClass().GetField(O("voiceRoomParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void* DeserializeFusionNetworkId(::ExitGames_Client_Photon::StreamBuffer* instream, int16_t length) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DeserializeFusionNetworkId"), {"instream", "length"});
            return _m.Call(instream, length);
        }
        template <typename TP2 = void*>
        ::Photon_Voice_Unity::Speaker* FusionSpeakerFactory(int playerId, uint8_t voiceId, TP2 userData) {
            static BNM::Method<::Photon_Voice_Unity::Speaker*> _m = GetClass().GetMethod(O("FusionSpeakerFactory"), {"playerId", "voiceId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerId, voiceId, userData);
        }
        bool get_UseFusionAppSettings() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UseFusionAppSettings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_UseFusionAuthValues() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UseFusionAuthValues"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP1 = void*>
        void OnDisconnectedFromServer(::BNM::IL2CPP::Il2CppObject* runner, TP1 reason) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisconnectedFromServer"), {"runner", "reason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, reason);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        template <typename TP1 = void*, typename TP2 = void*>
        void OnReliableDataProgress(::BNM::IL2CPP::Il2CppObject* runner, TP1 player, TP2 key, float progress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReliableDataProgress"), {"runner", "player", "key", "progress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, player, key, progress);
        }
        template <typename TP1 = void*, typename TP2 = void*, typename TP3 = void*>
        void OnReliableDataReceived(::BNM::IL2CPP::Il2CppObject* runner, TP1 player, TP2 key, TP3 data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReliableDataReceived"), {"runner", "player", "key", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, player, key, data);
        }
        void OnVoiceClientStateChanged(::Photon_Realtime::ClientState previous, ::Photon_Realtime::ClientState current) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnVoiceClientStateChanged"), {"previous", "current"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(previous, current);
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
        void set_UseFusionAppSettings(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UseFusionAppSettings"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_UseFusionAuthValues(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UseFusionAuthValues"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool VoiceConnectAndFollowFusion() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("VoiceConnectAndFollowFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void VoiceConnectOrJoinRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VoiceConnectOrJoinRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void VoiceConnectOrJoinRoom(::Photon_Realtime::ClientState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VoiceConnectOrJoinRoom"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void VoiceDisconnect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VoiceDisconnect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* VoiceGetMirroringRoomName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("VoiceGetMirroringRoomName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool VoiceJoinMirroringRoom() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("VoiceJoinMirroringRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool VoiceJoinRoom(::BNM::Structures::Mono::String* voiceRoomName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("VoiceJoinRoom"), {"voiceRoomName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(voiceRoomName);
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
