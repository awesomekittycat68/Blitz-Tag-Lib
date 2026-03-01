#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Realtime/ClientState.hpp"
#include "../Photon_Realtime/LoadBalancingClient.hpp"
#include "Codec.hpp"
#include "FrameFlags.hpp"

namespace Photon_Voice {
    struct LoadBalancingTransport : ::Photon_Realtime::LoadBalancingClient {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "LoadBalancingTransport");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int VOICE_CHANNEL = 0;
        uint8_t GetGlobalAudioGroup() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_GlobalAudioGroup"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetGlobalAudioGroup(uint8_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_GlobalAudioGroup"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        uint8_t GetGlobalInterestGroup() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_GlobalInterestGroup"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetGlobalInterestGroup(uint8_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_GlobalInterestGroup"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Voice::VoiceClient* GetVoiceClient() {
            static BNM::Method<::Photon_Voice::VoiceClient*> _method = GetClass().GetMethod(O("get_VoiceClient"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Voice::PhotonTransportProtocol* GetProtocol() {
            static BNM::Field<::Photon_Voice::PhotonTransportProtocol*> _field = GetClass().GetField(O("protocol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::VoiceClient* GetVoiceClient_f() {
            static BNM::Field<::Photon_Voice::VoiceClient*> _field = GetClass().GetField(O("voiceClient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetProtocol(::Photon_Voice::PhotonTransportProtocol* value) {
            static BNM::Field<::Photon_Voice::PhotonTransportProtocol*> _field = GetClass().GetField(O("protocol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceClient(::Photon_Voice::VoiceClient* value) {
            static BNM::Field<::Photon_Voice::VoiceClient*> _field = GetClass().GetField(O("voiceClient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool ChangeAudioGroups(::BNM::Structures::Mono::Array<uint8_t>* groupsToRemove, ::BNM::Structures::Mono::Array<uint8_t>* groupsToAdd) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ChangeAudioGroups"), {"groupsToRemove", "groupsToAdd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(groupsToRemove, groupsToAdd);
        }
        ::BNM::Structures::Mono::String* ChannelIdStr(int channelId) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ChannelIdStr"), {"channelId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(channelId);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        uint8_t get_GlobalAudioGroup() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_GlobalAudioGroup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t get_GlobalInterestGroup() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_GlobalInterestGroup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice::VoiceClient* get_VoiceClient() {
            static BNM::Method<::Photon_Voice::VoiceClient*> _m = GetClass().GetMethod(O("get_VoiceClient"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsChannelJoined(int channelId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsChannelJoined"), {"channelId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(channelId);
        }
        void LogDebug(::BNM::Structures::Mono::String* fmt, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogDebug"), {"fmt", "args"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fmt, args);
        }
        void LogError(::BNM::Structures::Mono::String* fmt, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogError"), {"fmt", "args"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fmt, args);
        }
        void LogInfo(::BNM::Structures::Mono::String* fmt, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogInfo"), {"fmt", "args"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fmt, args);
        }
        void LogWarning(::BNM::Structures::Mono::String* fmt, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogWarning"), {"fmt", "args"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fmt, args);
        }
        void onEventActionVoiceClient(::ExitGames_Client_Photon::EventData* ev) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onEventActionVoiceClient"), {"ev"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ev);
        }
        void onStateChangeVoiceClient(::Photon_Realtime::ClientState fromState, ::Photon_Realtime::ClientState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onStateChangeVoiceClient"), {"fromState", "state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fromState, state);
        }
        uint8_t photonChannelForCodec(::Photon_Voice::Codec c) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("photonChannelForCodec"), {"c"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(c);
        }
        ::BNM::Structures::Mono::String* PlayerIdStr(int playerId) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("PlayerIdStr"), {"playerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerId);
        }
        template <typename TP0 = void*>
        void SendFrame(TP0 data, ::Photon_Voice::FrameFlags flags, uint8_t evNumber, uint8_t voiceId, int channelId, int targetPlayerId, bool reliable, ::Photon_Voice::LocalVoice* localVoice) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendFrame"), {"data", "flags", "evNumber", "voiceId", "channelId", "targetPlayerId", "reliable", "localVoice"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data, flags, evNumber, voiceId, channelId, targetPlayerId, reliable, localVoice);
        }
        void SendVoiceRemove(::Photon_Voice::LocalVoice* voice, int channelId, int targetPlayerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendVoiceRemove"), {"voice", "channelId", "targetPlayerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(voice, channelId, targetPlayerId);
        }
        template <typename TP0 = void*>
        void SendVoicesInfo(TP0 voices, int channelId, int targetPlayerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendVoicesInfo"), {"voices", "channelId", "targetPlayerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(voices, channelId, targetPlayerId);
        }
        void Service() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Service"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_GlobalAudioGroup(uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_GlobalAudioGroup"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_GlobalInterestGroup(uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_GlobalInterestGroup"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
