#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MonkeVoteOption : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MonkeVoteOption");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetCanVote() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CanVote"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCanVote(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CanVote"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetText() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_Text"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetText(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Text"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_OnVote(::BNM::Structures::Mono::Action<::GlobalNamespace::MonkeVoteOption*, ::Collider*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnVote"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnVote(::BNM::Structures::Mono::Action<::GlobalNamespace::MonkeVoteOption*, ::Collider*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnVote"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        bool GetCanVote_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_canVote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VotingCard* GetGuessIndicator() {
            static BNM::Field<::GlobalNamespace::VotingCard*> _field = GetClass().GetField(O("_guessIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetOptionText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_optionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetText_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetTrigger() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("_trigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VotingCard* GetVoteIndicator() {
            static BNM::Field<::GlobalNamespace::VotingCard*> _field = GetClass().GetField(O("_voteIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::MonkeVoteOption*, ::Collider*>* GetOnVote() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::MonkeVoteOption*, ::Collider*>*> _field = GetClass().GetField(O("OnVote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCanVote_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_canVote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuessIndicator(::GlobalNamespace::VotingCard* value) {
            static BNM::Field<::GlobalNamespace::VotingCard*> _field = GetClass().GetField(O("_guessIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOptionText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_optionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetText_fs(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrigger(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("_trigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoteIndicator(::GlobalNamespace::VotingCard* value) {
            static BNM::Field<::GlobalNamespace::VotingCard*> _field = GetClass().GetField(O("_voteIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnVote(::BNM::Structures::Mono::Action<::GlobalNamespace::MonkeVoteOption*, ::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::MonkeVoteOption*, ::Collider*>*> _field = GetClass().GetField(O("OnVote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnVote_1(::BNM::Structures::Mono::Action<::GlobalNamespace::MonkeVoteOption*, ::Collider*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnVote"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Configure() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Configure"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_CanVote() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CanVote"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_Text() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_Text"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsValidVotingRock(::Collider* other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidVotingRock"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void remove_OnVote_1(::BNM::Structures::Mono::Action<::GlobalNamespace::MonkeVoteOption*, ::Collider*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnVote"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendVote(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendVote"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void set_CanVote(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CanVote"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Text(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Text"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetDynamicMeshesVisible(bool visible) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDynamicMeshesVisible"), {"visible"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(visible);
        }
        void ShowIndicators(bool showVote, bool showPrediction, bool instant) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowIndicators"), {"showVote", "showPrediction", "instant"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(showVote, showPrediction, instant);
        }
        void Vote() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Vote"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
