#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaTagCompetitiveScoreboard_PredictedResult.hpp"

namespace GlobalNamespace {
    struct GorillaTagCompetitiveScoreboardLine : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTagCompetitiveScoreboardLine");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::TMP_Text* GetPlayerNameDisplay() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("playerNameDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetRankSprite() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("rankSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetResultSprite() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("resultSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Sprite*>* GetResultSprites() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Sprite*>*> _field = GetClass().GetField(O("resultSprites"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetTagCountDisplay() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("tagCountDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetUntaggedTimeDisplay() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("untaggedTimeDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPlayerNameDisplay(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("playerNameDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRankSprite(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("rankSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResultSprite(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("resultSprite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResultSprites(::BNM::Structures::Mono::Array<::Sprite*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Sprite*>*> _field = GetClass().GetField(O("resultSprites"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagCountDisplay(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("tagCountDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUntaggedTimeDisplay(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("untaggedTimeDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DisplayPredictedResults(bool bShow) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisplayPredictedResults"), {"bShow"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bShow);
        }
        void SetInfected(bool infected) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInfected"), {"infected"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(infected);
        }
        void SetPlayer(::BNM::Structures::Mono::String* playerName, ::Sprite* icon) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPlayer"), {"playerName", "icon"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerName, icon);
        }
        void SetPredictedResult(::GlobalNamespace::GorillaTagCompetitiveScoreboard_PredictedResult result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPredictedResult"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void SetScore(float untaggedTime, int tagCount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetScore"), {"untaggedTime", "tagCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(untaggedTime, tagCount);
        }
    };
}
