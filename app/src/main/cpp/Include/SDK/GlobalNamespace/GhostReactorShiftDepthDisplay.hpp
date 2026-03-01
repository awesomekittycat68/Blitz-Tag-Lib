#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GhostReactorShiftDepthDisplay : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactorShiftDepthDisplay");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetCachedStringBuilder() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("cachedStringBuilder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Animator*>* GetDelveDeeperAnimators() {
            static BNM::Field<::BNM::Structures::Mono::List<::Animator*>*> _field = GetClass().GetField(O("delveDeeperAnimators"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetDelveDeeperAnims() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("delveDeeperAnims"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetDelveDeeperAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("delveDeeperAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDelveDeeperButton() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("delveDeeperButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetDelveDeeperNonspatializedAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("delveDeeperNonspatializedAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::ParticleSystem*>* GetDelveDeeperParticles() {
            static BNM::Field<::BNM::Structures::Mono::List<::ParticleSystem*>*> _field = GetClass().GetField(O("delveDeeperParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetJumbotronRequirements() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("jumbotronRequirements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetJumbotronRewards() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("jumbotronRewards"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetJumbotronState() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("jumbotronState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetJumbotronTime() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("jumbotronTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetJumbotronTitle() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("jumbotronTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::TMP_Text*>* GetLogoFrames() {
            static BNM::Field<::BNM::Structures::Mono::List<::TMP_Text*>*> _field = GetClass().GetField(O("logoFrames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorShiftManager* GetShiftManager() {
            static BNM::Field<::GlobalNamespace::GhostReactorShiftManager*> _field = GetClass().GetField(O("shiftManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetSTATENAMES() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("STATE_NAMES"));
            return _field.Get();
        }
        void SetCachedStringBuilder(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("cachedStringBuilder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelveDeeperAnimators(::BNM::Structures::Mono::List<::Animator*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Animator*>*> _field = GetClass().GetField(O("delveDeeperAnimators"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelveDeeperAnims(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("delveDeeperAnims"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelveDeeperAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("delveDeeperAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelveDeeperButton(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("delveDeeperButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelveDeeperNonspatializedAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("delveDeeperNonspatializedAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelveDeeperParticles(::BNM::Structures::Mono::List<::ParticleSystem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::ParticleSystem*>*> _field = GetClass().GetField(O("delveDeeperParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJumbotronRequirements(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("jumbotronRequirements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJumbotronRewards(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("jumbotronRewards"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJumbotronState(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("jumbotronState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJumbotronTime(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("jumbotronTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJumbotronTitle(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("jumbotronTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogoFrames(::BNM::Structures::Mono::List<::TMP_Text*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::TMP_Text*>*> _field = GetClass().GetField(O("logoFrames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftManager(::GlobalNamespace::GhostReactorShiftManager* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorShiftManager*> _field = GetClass().GetField(O("shiftManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int GetRewardXP() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRewardXP"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void RefreshDisplay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshDisplay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshObjectives() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshObjectives"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Setup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartDelveDeeperFX() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartDelveDeeperFX"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopDelveDeeperFX() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopDelveDeeperFX"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
