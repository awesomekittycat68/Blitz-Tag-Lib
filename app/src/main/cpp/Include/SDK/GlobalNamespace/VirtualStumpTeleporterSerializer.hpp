#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaSerializer.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct VirtualStumpTeleporterSerializer : ::GlobalNamespace::GorillaSerializer {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VirtualStumpTeleporterSerializer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::AudioClip*>* GetObserverSoundClips() {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("observerSoundClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::ParticleSystem*>* GetReturnVFX() {
            static BNM::Field<::BNM::Structures::Mono::List<::ParticleSystem*>*> _field = GetClass().GetField(O("returnVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::AudioSource*>* GetTeleportAudioSource() {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioSource*>*> _field = GetClass().GetField(O("teleportAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::VirtualStumpTeleporter*>* GetTeleporters() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VirtualStumpTeleporter*>*> _field = GetClass().GetField(O("teleporters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::ParticleSystem*>* GetTeleporterVFX() {
            static BNM::Field<::BNM::Structures::Mono::List<::ParticleSystem*>*> _field = GetClass().GetField(O("teleporterVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::AudioClip*>* GetTeleportingPlayerSoundClips() {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("teleportingPlayerSoundClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetObserverSoundClips(::BNM::Structures::Mono::List<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("observerSoundClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReturnVFX(::BNM::Structures::Mono::List<::ParticleSystem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::ParticleSystem*>*> _field = GetClass().GetField(O("returnVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportAudioSource(::BNM::Structures::Mono::List<::AudioSource*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioSource*>*> _field = GetClass().GetField(O("teleportAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleporters(::BNM::Structures::Mono::List<::GlobalNamespace::VirtualStumpTeleporter*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VirtualStumpTeleporter*>*> _field = GetClass().GetField(O("teleporters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleporterVFX(::BNM::Structures::Mono::List<::ParticleSystem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::ParticleSystem*>*> _field = GetClass().GetField(O("teleporterVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportingPlayerSoundClips(::BNM::Structures::Mono::List<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("teleportingPlayerSoundClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ActivateTeleportVFX(bool returning, int16_t teleporterIdx, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateTeleportVFX"), {"returning", "teleporterIdx", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(returning, teleporterIdx, info);
        }
        int16_t GetTeleporterIndex(::GlobalNamespace::VirtualStumpTeleporter* teleporter) {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("GetTeleporterIndex"), {"teleporter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(teleporter);
        }
        void NotifyPlayerReturning(int16_t teleporterIdx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NotifyPlayerReturning"), {"teleporterIdx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(teleporterIdx);
        }
        void NotifyPlayerTeleporting(int16_t teleporterIdx, ::AudioSource* localPlayerTeleporterAudioSource) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NotifyPlayerTeleporting"), {"teleporterIdx", "localPlayerTeleporterAudioSource"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(teleporterIdx, localPlayerTeleporterAudioSource);
        }
    };
}
