#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MonkeVoteResult : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MonkeVoteResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

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
        bool GetCanVote() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_canVote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGuessLoseIndicator() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_guessLoseIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGuessWinIndicator() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_guessWinIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MonkeVoteMachine* GetMachine() {
            static BNM::Field<::GlobalNamespace::MonkeVoteMachine*> _field = GetClass().GetField(O("_machine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMostPopularIndicator() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_mostPopularIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetOptionIndicator() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_optionIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetOptionText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_optionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRockPileHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("_rockPileHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RockPiles* GetRockPiles() {
            static BNM::Field<::GlobalNamespace::RockPiles*> _field = GetClass().GetField(O("_rockPiles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetScoreIndicator() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_scoreIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetScoreText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_scoreText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetText_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetVoteIndicator() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_voteIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetYouWinIndicator() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_youWinIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCanVote(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_canVote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuessLoseIndicator(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_guessLoseIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuessWinIndicator(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_guessWinIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMachine(::GlobalNamespace::MonkeVoteMachine* value) {
            static BNM::Field<::GlobalNamespace::MonkeVoteMachine*> _field = GetClass().GetField(O("_machine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMostPopularIndicator(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_mostPopularIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOptionIndicator(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_optionIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOptionText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_optionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRockPileHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_rockPileHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRockPiles(::GlobalNamespace::RockPiles* value) {
            static BNM::Field<::GlobalNamespace::RockPiles*> _field = GetClass().GetField(O("_rockPiles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreIndicator(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_scoreIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("_scoreText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetText_fs(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoteIndicator(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_voteIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetYouWinIndicator(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_youWinIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::String* get_Text() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_Text"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HideResult() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HideResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void ShowResult(::BNM::Structures::Mono::String* questionOption, int percentage, bool showVote, bool showPrediction, bool isWinner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowResult"), {"questionOption", "percentage", "showVote", "showPrediction", "isWinner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(questionOption, percentage, showVote, showPrediction, isWinner);
        }
        void ShowRockPile(int percentage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowRockPile"), {"percentage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(percentage);
        }
    };
}
