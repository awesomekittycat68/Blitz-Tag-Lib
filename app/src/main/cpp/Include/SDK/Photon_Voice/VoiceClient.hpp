#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AudioSampleType.hpp"
#include "Codec.hpp"
#include "FrameBuffer.hpp"
#include "VoiceInfo.hpp"

namespace Photon_Voice {
    struct VoiceClient : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "VoiceClient");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetDebugLostPercent() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_DebugLostPercent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDebugLostPercent(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DebugLostPercent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetFramesLost() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_FramesLost"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFramesLost(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FramesLost"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetFramesReceived() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_FramesReceived"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFramesReceived(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FramesReceived"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetFramesSent() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_FramesSent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetFramesSentBytes() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_FramesSentBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
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
        ::Photon_Voice::VoiceClient_RemoteVoiceInfoDelegate* GetOnRemoteVoiceInfoAction() {
            static BNM::Method<::Photon_Voice::VoiceClient_RemoteVoiceInfoDelegate*> _method = GetClass().GetMethod(O("get_OnRemoteVoiceInfoAction"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOnRemoteVoiceInfoAction(::Photon_Voice::VoiceClient_RemoteVoiceInfoDelegate* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_OnRemoteVoiceInfoAction"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetRoundTripTime() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_RoundTripTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRoundTripTime(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RoundTripTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetRoundTripTimeVariance() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_RoundTripTimeVariance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRoundTripTimeVariance(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RoundTripTimeVariance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetSuppressInfoDuplicateWarning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_SuppressInfoDuplicateWarning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSuppressInfoDuplicateWarning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SuppressInfoDuplicateWarning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        uint8_t GetGlobalInterestGroup_f() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("globalInterestGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<uint8_t, ::Photon_Voice::LocalVoice*>* GetLocalVoices() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint8_t, ::Photon_Voice::LocalVoice*>*> _field = GetClass().GetField(O("localVoices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::Photon_Voice::LocalVoice*>*>* GetLocalVoicesPerChannel() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::Photon_Voice::LocalVoice*>*>*> _field = GetClass().GetField(O("localVoicesPerChannel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLogger() {
            static BNM::Field<void*> _field = GetClass().GetField(O("logger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPrevRtt() {
            static BNM::Field<int> _field = GetClass().GetField(O("prevRtt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::Photon_Voice::Codec, int>* GetRemoteVoiceDelayFrames() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Photon_Voice::Codec, int>*> _field = GetClass().GetField(O("remoteVoiceDelayFrames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Dictionary<uint8_t, ::Photon_Voice::RemoteVoice*>*>* GetRemoteVoices() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Dictionary<uint8_t, ::Photon_Voice::RemoteVoice*>*>*> _field = GetClass().GetField(O("remoteVoices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetRnd() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("rnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTransport() {
            static BNM::Field<void*> _field = GetClass().GetField(O("transport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetVoiceIdLast() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("voiceIdLast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetVoiceIDMax() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("voiceIDMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetVoiceIDMin() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("voiceIDMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGlobalInterestGroup_fs(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("globalInterestGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalVoices(::BNM::Structures::Mono::Dictionary<uint8_t, ::Photon_Voice::LocalVoice*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint8_t, ::Photon_Voice::LocalVoice*>*> _field = GetClass().GetField(O("localVoices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalVoicesPerChannel(::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::Photon_Voice::LocalVoice*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::Photon_Voice::LocalVoice*>*>*> _field = GetClass().GetField(O("localVoicesPerChannel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogger(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("logger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevRtt(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("prevRtt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoteVoiceDelayFrames(::BNM::Structures::Mono::Dictionary<::Photon_Voice::Codec, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Photon_Voice::Codec, int>*> _field = GetClass().GetField(O("remoteVoiceDelayFrames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoteVoices(::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Dictionary<uint8_t, ::Photon_Voice::RemoteVoice*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Dictionary<uint8_t, ::Photon_Voice::RemoteVoice*>*>*> _field = GetClass().GetField(O("remoteVoices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRnd(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("rnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransport(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("transport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceIdLast(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("voiceIdLast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceIDMax(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("voiceIDMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceIDMin(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("voiceIDMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void addVoice(uint8_t newId, int channelId, ::Photon_Voice::LocalVoice* v) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("addVoice"), {"newId", "channelId", "v"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newId, channelId, v);
        }
        ::BNM::Structures::Mono::String* channelStr(int channelId) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("channelStr"), {"channelId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(channelId);
        }
        void clearRemoteVoices() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("clearRemoteVoices"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void clearRemoteVoicesInChannel(int channelId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("clearRemoteVoicesInChannel"), {"channelId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(channelId);
        }
        void clearRemoteVoicesInChannelForPlayer(int channelId, int playerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("clearRemoteVoicesInChannelForPlayer"), {"channelId", "playerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(channelId, playerId);
        }
        ::Photon_Voice::LocalVoice* createLocalVoice(int channelId, ::BNM::Structures::Mono::Func<uint8_t, int, ::Photon_Voice::LocalVoice*>* voiceFactory) {
            static BNM::Method<::Photon_Voice::LocalVoice*> _m = GetClass().GetMethod(O("createLocalVoice"), {"channelId", "voiceFactory"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(channelId, voiceFactory);
        }
        template <typename TP2 = void*>
        ::Photon_Voice::LocalVoice* CreateLocalVoice(::Photon_Voice::VoiceInfo voiceInfo, int channelId, TP2 encoder) {
            static BNM::Method<::Photon_Voice::LocalVoice*> _m = GetClass().GetMethod(O("CreateLocalVoice"), {"voiceInfo", "channelId", "encoder"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(voiceInfo, channelId, encoder);
        }
        template <typename TP1 = void*, typename TP3 = void*>
        ::Photon_Voice::LocalVoice* CreateLocalVoiceAudioFromSource(::Photon_Voice::VoiceInfo voiceInfo, TP1 source, ::Photon_Voice::AudioSampleType sampleType, TP3 encoder, int channelId) {
            static BNM::Method<::Photon_Voice::LocalVoice*> _m = GetClass().GetMethod(O("CreateLocalVoiceAudioFromSource"), {"voiceInfo", "source", "sampleType", "encoder", "channelId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(voiceInfo, source, sampleType, encoder, channelId);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_DebugLostPercent() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_DebugLostPercent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_FramesLost() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_FramesLost"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_FramesReceived() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_FramesReceived"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_FramesSent() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_FramesSent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_FramesSentBytes() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_FramesSentBytes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t get_GlobalInterestGroup() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_GlobalInterestGroup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_LocalVoices() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_LocalVoices"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice::VoiceClient_RemoteVoiceInfoDelegate* get_OnRemoteVoiceInfoAction() {
            static BNM::Method<::Photon_Voice::VoiceClient_RemoteVoiceInfoDelegate*> _m = GetClass().GetMethod(O("get_OnRemoteVoiceInfoAction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_RemoteVoiceInfos() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_RemoteVoiceInfos"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_RoundTripTime() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_RoundTripTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_RoundTripTimeVariance() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_RoundTripTimeVariance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_SuppressInfoDuplicateWarning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_SuppressInfoDuplicateWarning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t getNewVoiceId() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("getNewVoiceId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t idInc(uint8_t id) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("idInc"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id);
        }
        void* LocalVoicesInChannel(int channelId) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("LocalVoicesInChannel"), {"channelId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(channelId);
        }
        void LogSpacingProfiles() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogSpacingProfiles"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LogStats() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogStats"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void onFrame(int channelId, int playerId, uint8_t voiceId, uint8_t evNumber, ::Photon_Voice::FrameBuffer& receivedBytes, bool isLocalPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onFrame"), {"channelId", "playerId", "voiceId", "evNumber", "receivedBytes", "isLocalPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(channelId, playerId, voiceId, evNumber, &receivedBytes, isLocalPlayer);
        }
        void onJoinChannel(int channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onJoinChannel"), {"channel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(channel);
        }
        void onLeaveAllChannels() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onLeaveAllChannels"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void onLeaveChannel(int channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onLeaveChannel"), {"channel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(channel);
        }
        void onPlayerJoin(int channelId, int playerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onPlayerJoin"), {"channelId", "playerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(channelId, playerId);
        }
        void onPlayerLeave(int channelId, int playerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onPlayerLeave"), {"channelId", "playerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(channelId, playerId);
        }
        void onVoiceInfo(int channelId, int playerId, uint8_t voiceId, uint8_t eventNumber, ::Photon_Voice::VoiceInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onVoiceInfo"), {"channelId", "playerId", "voiceId", "eventNumber", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(channelId, playerId, voiceId, eventNumber, info);
        }
        void onVoiceRemove(int channelId, int playerId, ::BNM::Structures::Mono::Array<uint8_t>* voiceIds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onVoiceRemove"), {"channelId", "playerId", "voiceIds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(channelId, playerId, voiceIds);
        }
        ::BNM::Structures::Mono::String* playerStr(int playerId) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("playerStr"), {"playerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerId);
        }
        void RemoveLocalVoice(::Photon_Voice::LocalVoice* voice) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveLocalVoice"), {"voice"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(voice);
        }
        void sendChannelVoicesInfo(int channelId, int targetPlayerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("sendChannelVoicesInfo"), {"channelId", "targetPlayerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(channelId, targetPlayerId);
        }
        template <typename TP0 = void*>
        void sendVoicesInfoAndConfigFrame(TP0 voiceList, int channelId, int targetPlayerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("sendVoicesInfoAndConfigFrame"), {"voiceList", "channelId", "targetPlayerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(voiceList, channelId, targetPlayerId);
        }
        void Service() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Service"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_DebugLostPercent(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DebugLostPercent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_FramesLost(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FramesLost"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_FramesReceived(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FramesReceived"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_GlobalInterestGroup(uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_GlobalInterestGroup"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_OnRemoteVoiceInfoAction(::Photon_Voice::VoiceClient_RemoteVoiceInfoDelegate* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_OnRemoteVoiceInfoAction"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_RoundTripTime(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RoundTripTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_RoundTripTimeVariance(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RoundTripTimeVariance"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SuppressInfoDuplicateWarning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SuppressInfoDuplicateWarning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetRemoteVoiceDelayFrames_1(::Photon_Voice::Codec codec, int delayFrames) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRemoteVoiceDelayFrames"), {"codec", "delayFrames"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(codec, delayFrames);
        }
    };
}
