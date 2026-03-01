#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RotatingQuestsManager_RotatingQuestList : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RotatingQuestsManager").GetInnerClass("RotatingQuestList");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>* GetDailyQuests() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*> _field = GetClass().GetField(O("DailyQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>* GetWeeklyQuests() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*> _field = GetClass().GetField(O("WeeklyQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDailyQuests(::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*> _field = GetClass().GetField(O("DailyQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeeklyQuests(::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*> _field = GetClass().GetField(O("WeeklyQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::RotatingQuest* GetQuest(int questID) {
            static BNM::Method<::GlobalNamespace::RotatingQuest*> _m = GetClass().GetMethod(O("GetQuest"), {"questID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(questID);
        }
        void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
