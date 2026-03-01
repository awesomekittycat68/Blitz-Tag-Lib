#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ArcadeButtons.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct ArcadeGame : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ArcadeGame");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::AudioClip*>* GetAudioClips() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("audioClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ArcadeMachine* GetMachine() {
            static BNM::Field<::GlobalNamespace::ArcadeMachine*> _field = GetClass().GetField(O("machine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMemoryStreamsInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("memoryStreamsInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetNetStateBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("netStateBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetNetStateBufferAlt() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("netStateBufferAlt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetNetStateBufferSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("NetStateBufferSize"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNetStateMemStream() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("netStateMemStream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNetStateMemStreamAlt() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("netStateMemStreamAlt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::ArcadeButtons>* GetPlayerInputs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ArcadeButtons>*> _field = GetClass().GetField(O("playerInputs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetScale() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("Scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioClips(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("audioClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMachine(::GlobalNamespace::ArcadeMachine* value) {
            static BNM::Field<::GlobalNamespace::ArcadeMachine*> _field = GetClass().GetField(O("machine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMemoryStreamsInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("memoryStreamsInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetStateBuffer(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("netStateBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetStateBufferAlt(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("netStateBufferAlt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetNetStateBufferSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("NetStateBufferSize"));
            _field.Set(value);
        }
        void SetNetStateMemStream(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("netStateMemStream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetStateMemStreamAlt(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("netStateMemStreamAlt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerInputs(::BNM::Structures::Mono::Array<::GlobalNamespace::ArcadeButtons>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ArcadeButtons>*> _field = GetClass().GetField(O("playerInputs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScale(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("Scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ButtonDown(int player, ::GlobalNamespace::ArcadeButtons button) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonDown"), {"player", "button"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, button);
        }
        void ButtonUp(int player, ::GlobalNamespace::ArcadeButtons button) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonUp"), {"player", "button"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, button);
        }
        bool getButtonState(int player, ::GlobalNamespace::ArcadeButtons button) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("getButtonState"), {"player", "button"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, button);
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetNetworkState() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("GetNetworkState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitializeMemoryStreams() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeMemoryStreams"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsPlayerLocallyControlled(int player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerLocallyControlled"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        void OnInputStateChange(int player, ::GlobalNamespace::ArcadeButtons buttons) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnInputStateChange"), {"player", "buttons"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, buttons);
        }
        void OnTimeout() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTimeout"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlaySound(int clipId, int prio) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySound"), {"clipId", "prio"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clipId, prio);
        }
        void ReadPlayerDataPUN(int player, ::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadPlayerDataPUN"), {"player", "stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, stream, info);
        }
        void SetMachine_1(::GlobalNamespace::ArcadeMachine* machine) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMachine"), {"machine"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(machine);
        }
        void SetNetworkState(::BNM::Structures::Mono::Array<uint8_t>* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNetworkState"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void SwapNetStateBuffersAndStreams() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwapNetStateBuffersAndStreams"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void* UnwrapNetState(::BNM::Structures::Mono::Array<uint8_t>* b) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("UnwrapNetState"), {"b"});
            return _m.Call(b);
        }
        template <typename TP0 = void*>
        static void WrapNetState(TP0 ns, ::BNM::IL2CPP::Il2CppObject* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WrapNetState"), {"ns", "stream"});
            _m.Call(ns, stream);
        }
        void WritePlayerDataPUN(int player, ::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WritePlayerDataPUN"), {"player", "stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, stream, info);
        }
    };
}
