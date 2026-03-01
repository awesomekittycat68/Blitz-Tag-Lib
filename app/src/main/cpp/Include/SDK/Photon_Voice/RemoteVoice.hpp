#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FrameBuffer.hpp"
#include "RemoteVoiceOptions.hpp"
#include "VoiceInfo.hpp"

namespace Photon_Voice {
    struct RemoteVoice : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "RemoteVoice");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetDelayFrames() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_DelayFrames"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDelayFrames(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DelayFrames"));
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
        ::BNM::Structures::Mono::String* GetLogPrefix() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_LogPrefix"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLogPrefix(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LogPrefix"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetReceiveSpacingProfileDump() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ReceiveSpacingProfileDump"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetReceiveSpacingProfileMax() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ReceiveSpacingProfileMax"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetShortName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_shortName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetChannelId() {
            static BNM::Field<int> _field = GetClass().GetField(O("channelId"));
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
        int GetFlushingFramePosInQueue() {
            static BNM::Field<int> _field = GetClass().GetField(O("flushingFramePosInQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFrameQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("frameQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetFrameQueueReady() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("frameQueueReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetLastEvNumber() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("lastEvNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::FrameBuffer GetNullFrame() {
            static BNM::Field<::Photon_Voice::FrameBuffer> _field = GetClass().GetField(O("nullFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::RemoteVoiceOptions GetOptions() {
            static BNM::Field<::Photon_Voice::RemoteVoiceOptions> _field = GetClass().GetField(O("options"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayerId() {
            static BNM::Field<int> _field = GetClass().GetField(O("playerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::SpacingProfile* GetReceiveSpacingProfile() {
            static BNM::Field<::Photon_Voice::SpacingProfile*> _field = GetClass().GetField(O("receiveSpacingProfile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::VoiceClient* GetVoiceClient() {
            static BNM::Field<::Photon_Voice::VoiceClient*> _field = GetClass().GetField(O("voiceClient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetVoiceId() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("voiceId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetChannelId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("channelId"));
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
        void SetFlushingFramePosInQueue(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("flushingFramePosInQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameQueue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("frameQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameQueueReady(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("frameQueueReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastEvNumber(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("lastEvNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNullFrame(::Photon_Voice::FrameBuffer value) {
            static BNM::Field<::Photon_Voice::FrameBuffer> _field = GetClass().GetField(O("nullFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOptions(::Photon_Voice::RemoteVoiceOptions value) {
            static BNM::Field<::Photon_Voice::RemoteVoiceOptions> _field = GetClass().GetField(O("options"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReceiveSpacingProfile(::Photon_Voice::SpacingProfile* value) {
            static BNM::Field<::Photon_Voice::SpacingProfile*> _field = GetClass().GetField(O("receiveSpacingProfile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceClient(::Photon_Voice::VoiceClient* value) {
            static BNM::Field<::Photon_Voice::VoiceClient*> _field = GetClass().GetField(O("voiceClient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceId(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("voiceId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static uint8_t byteDiff(uint8_t latest, uint8_t last) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("byteDiff"), {"latest", "last"});
            return _m.Call(latest, last);
        }
        void decodeThread() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("decodeThread"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_DelayFrames() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_DelayFrames"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice::VoiceInfo get_Info() {
            static BNM::Method<::Photon_Voice::VoiceInfo> _m = GetClass().GetMethod(O("get_Info"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_LogPrefix() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_LogPrefix"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_ReceiveSpacingProfileDump() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ReceiveSpacingProfileDump"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ReceiveSpacingProfileMax() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ReceiveSpacingProfileMax"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_shortName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_shortName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void receiveBytes(::Photon_Voice::FrameBuffer& receivedBytes, uint8_t evNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("receiveBytes"), {"receivedBytes", "evNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&receivedBytes, evNumber);
        }
        void receiveFrame(::Photon_Voice::FrameBuffer& frame) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("receiveFrame"), {"frame"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&frame);
        }
        void receiveNullFrames(int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("receiveNullFrames"), {"count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(count);
        }
        void ReceiveSpacingProfileStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReceiveSpacingProfileStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void removeAndDispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("removeAndDispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_DelayFrames(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DelayFrames"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Info(::Photon_Voice::VoiceInfo value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Info"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LogPrefix(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LogPrefix"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
