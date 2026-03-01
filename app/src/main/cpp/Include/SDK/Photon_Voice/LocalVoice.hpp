#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FrameFlags.hpp"
#include "VoiceInfo.hpp"

namespace Photon_Voice {
    struct LocalVoice : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "LocalVoice");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int DATA_POOL_CAPACITY = 50;
        static constexpr int NO_TRANSMIT_TIMEOUT_MS = 100;
        bool GetDebugEchoMode() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_DebugEchoMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDebugEchoMode(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DebugEchoMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetEncrypt() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Encrypt"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEncrypt(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Encrypt"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        uint8_t GetEvNumber() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_EvNumber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetFramesSent() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_FramesSent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFramesSent(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FramesSent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetFramesSentBytes() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_FramesSentBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFramesSentBytes(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FramesSentBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        uint8_t GetGroup() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_Group"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetGroup(uint8_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Group"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        uint8_t GetID() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_ID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Voice::VoiceInfo GetInfo() {
            static BNM::Method<::Photon_Voice::VoiceInfo> _method = GetClass().GetMethod(O("get_Info"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        uint8_t GetInterestGroup() {
            static BNM::Method<uint8_t> _method = GetClass().GetMethod(O("get_InterestGroup"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInterestGroup(uint8_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_InterestGroup"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsCurrentlyTransmitting() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsCurrentlyTransmitting"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetLogPrefix() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_LogPrefix"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_Name"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetReliable() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Reliable"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetReliable(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Reliable"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetSendSpacingProfileDump() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_SendSpacingProfileDump"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetSendSpacingProfileMax() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SendSpacingProfileMax"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetShortName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_shortName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetTransmitEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TransmitEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTransmitEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TransmitEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetChannelId() {
            static BNM::Field<int> _field = GetClass().GetField(O("channelId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetConfigFrame() {
            static BNM::Field<void*> _field = GetClass().GetField(O("configFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugEchoMode_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugEchoMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisposed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disposed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetDisposeLock() {
            static BNM::Field<void*> _field = GetClass().GetField(O("disposeLock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetEncoder() {
            static BNM::Field<void*> _field = GetClass().GetField(O("encoder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<uint8_t, int>* GetEventTimestamps() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint8_t, int>*> _field = GetClass().GetField(O("eventTimestamps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetEvNumber_f() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("evNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetId() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::VoiceInfo GetInfo_f() {
            static BNM::Field<::Photon_Voice::VoiceInfo> _field = GetClass().GetField(O("info"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastTransmitTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastTransmitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::SpacingProfile* GetSendSpacingProfile() {
            static BNM::Field<::Photon_Voice::SpacingProfile*> _field = GetClass().GetField(O("sendSpacingProfile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTransmitEnabled_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("transmitEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::VoiceClient* GetVoiceClient() {
            static BNM::Field<::Photon_Voice::VoiceClient*> _field = GetClass().GetField(O("voiceClient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetChannelId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("channelId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfigFrame(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("configFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugEchoMode_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugEchoMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisposed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disposed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisposeLock(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("disposeLock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEncoder(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("encoder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventTimestamps(::BNM::Structures::Mono::Dictionary<uint8_t, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint8_t, int>*> _field = GetClass().GetField(O("eventTimestamps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEvNumber(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("evNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetId(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInfo(::Photon_Voice::VoiceInfo value) {
            static BNM::Field<::Photon_Voice::VoiceInfo> _field = GetClass().GetField(O("info"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTransmitTime(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastTransmitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendSpacingProfile(::Photon_Voice::SpacingProfile* value) {
            static BNM::Field<::Photon_Voice::SpacingProfile*> _field = GetClass().GetField(O("sendSpacingProfile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransmitEnabled_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("transmitEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceClient(::Photon_Voice::VoiceClient* value) {
            static BNM::Field<::Photon_Voice::VoiceClient*> _field = GetClass().GetField(O("voiceClient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_DebugEchoMode() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_DebugEchoMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_Encrypt() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Encrypt"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t get_EvNumber() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_EvNumber"));
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
        uint8_t get_Group() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_Group"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t get_ID() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_ID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice::VoiceInfo get_Info() {
            static BNM::Method<::Photon_Voice::VoiceInfo> _m = GetClass().GetMethod(O("get_Info"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t get_InterestGroup() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("get_InterestGroup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsCurrentlyTransmitting() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsCurrentlyTransmitting"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_LocalUserServiceable() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_LocalUserServiceable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_LogPrefix() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_LogPrefix"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_Name() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_Name"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_Reliable() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Reliable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_SendSpacingProfileDump() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_SendSpacingProfileDump"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SendSpacingProfileMax() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SendSpacingProfileMax"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_shortName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_shortName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TransmitEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TransmitEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void RemoveSelf() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveSelf"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void sendConfigFrame(int targetPlayerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("sendConfigFrame"), {"targetPlayerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetPlayerId);
        }
        template <typename TP0 = void*>
        void sendFrame(TP0 compressed, ::Photon_Voice::FrameFlags flags) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("sendFrame"), {"compressed", "flags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(compressed, flags);
        }
        template <typename TP0 = void*>
        void sendFrame0(TP0 compressed, ::Photon_Voice::FrameFlags flags, int targetPlayerId, bool reliable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("sendFrame0"), {"compressed", "flags", "targetPlayerId", "reliable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(compressed, flags, targetPlayerId, reliable);
        }
        void SendSpacingProfileStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendSpacingProfileStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void service() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("service"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_DebugEchoMode(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DebugEchoMode"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Encrypt(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Encrypt"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_FramesSent(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FramesSent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_FramesSentBytes(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FramesSentBytes"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Group(uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Group"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_InterestGroup(uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_InterestGroup"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_LocalUserServiceable(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LocalUserServiceable"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Reliable(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Reliable"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TransmitEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TransmitEnabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
