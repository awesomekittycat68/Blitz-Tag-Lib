#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SystemVoipStatus.hpp"
#include "VoipBitrate.hpp"
#include "VoipDtxState.hpp"
#include "VoipMuteState.hpp"

namespace Oculus_Platform {
    struct Voip : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "Voip");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void Accept(uint64_t userID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Accept"), {"userID"});
            _m.Call(userID);
        }
        static ::Oculus_Platform::VoipDtxState GetIsConnectionUsingDtx(uint64_t peerID) {
            static BNM::Method<::Oculus_Platform::VoipDtxState> _m = GetClass().GetMethod(O("GetIsConnectionUsingDtx"), {"peerID"});
            return _m.Call(peerID);
        }
        static ::Oculus_Platform::VoipBitrate GetLocalBitrate(uint64_t peerID) {
            static BNM::Method<::Oculus_Platform::VoipBitrate> _m = GetClass().GetMethod(O("GetLocalBitrate"), {"peerID"});
            return _m.Call(peerID);
        }
        static ::Oculus_Platform::VoipBitrate GetRemoteBitrate(uint64_t peerID) {
            static BNM::Method<::Oculus_Platform::VoipBitrate> _m = GetClass().GetMethod(O("GetRemoteBitrate"), {"peerID"});
            return _m.Call(peerID);
        }
        static ::Oculus_Platform::VoipMuteState GetSystemVoipMicrophoneMuted() {
            static BNM::Method<::Oculus_Platform::VoipMuteState> _m = GetClass().GetMethod(O("GetSystemVoipMicrophoneMuted"));
            return _m.Call();
        }
        static ::Oculus_Platform::SystemVoipStatus GetSystemVoipStatus() {
            static BNM::Method<::Oculus_Platform::SystemVoipStatus> _m = GetClass().GetMethod(O("GetSystemVoipStatus"));
            return _m.Call();
        }
        static void SetMicrophoneFilterCallback(::Oculus_Platform::CAPI_FilterCallback* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMicrophoneFilterCallback"), {"callback"});
            _m.Call(callback);
        }
        static void SetMicrophoneMuted(::Oculus_Platform::VoipMuteState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMicrophoneMuted"), {"state"});
            _m.Call(state);
        }
        static void SetNewConnectionOptions(::Oculus_Platform::VoipOptions* voipOptions) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNewConnectionOptions"), {"voipOptions"});
            _m.Call(voipOptions);
        }
        static void Start(uint64_t userID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"), {"userID"});
            _m.Call(userID);
        }
        static void Stop(uint64_t userID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Stop"), {"userID"});
            _m.Call(userID);
        }
    };
}
