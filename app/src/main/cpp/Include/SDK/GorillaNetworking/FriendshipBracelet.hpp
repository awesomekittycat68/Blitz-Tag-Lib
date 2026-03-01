#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    struct FriendshipBracelet : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "FriendshipBracelet");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::MeshRenderer*>* GetBraceletBananas() {
            static BNM::Field<::BNM::Structures::Mono::Array<::MeshRenderer*>*> _field = GetClass().GetField(O("braceletBananas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::MeshRenderer*>* GetBraceletBeads() {
            static BNM::Field<::BNM::Structures::Mono::Array<::MeshRenderer*>*> _field = GetClass().GetField(O("braceletBeads"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetBraceletBrokenParticle() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("braceletBrokenParticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetBraceletBrokenSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("braceletBrokenSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetBraceletFormedParticle() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("braceletFormedParticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetBraceletFormedSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("braceletFormedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::SkinnedMeshRenderer*>* GetBraceletStrings() {
            static BNM::Field<::BNM::Structures::Mono::Array<::SkinnedMeshRenderer*>*> _field = GetClass().GetField(O("braceletStrings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLeftHand() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetOwnerRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("ownerRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBraceletBananas(::BNM::Structures::Mono::Array<::MeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::MeshRenderer*>*> _field = GetClass().GetField(O("braceletBananas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBraceletBeads(::BNM::Structures::Mono::Array<::MeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::MeshRenderer*>*> _field = GetClass().GetField(O("braceletBeads"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBraceletBrokenParticle(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("braceletBrokenParticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBraceletBrokenSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("braceletBrokenSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBraceletFormedParticle(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("braceletFormedParticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBraceletFormedSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("braceletFormedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBraceletStrings(::BNM::Structures::Mono::Array<::SkinnedMeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::SkinnedMeshRenderer*>*> _field = GetClass().GetField(O("braceletStrings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLeftHand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwnerRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("ownerRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Method<::AudioSource*> _m = GetClass().GetMethod(O("GetAudioSource"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayAppearEffects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayAppearEffects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateBeads(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Color>* colors, int selfIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBeads"), {"colors", "selfIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(colors, selfIndex);
        }
    };
}
