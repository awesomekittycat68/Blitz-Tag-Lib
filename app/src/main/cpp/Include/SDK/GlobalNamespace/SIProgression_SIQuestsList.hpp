#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SIProgression_SIQuestsList : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIProgression").GetInnerClass("SIQuestsList");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuest*>* GetQuests() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuest*>*> _field = GetClass().GetField(O("quests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetQuests(::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuest*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuest*>*> _field = GetClass().GetField(O("quests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::RotatingQuest* GetQuestById(int questID) {
            static BNM::Method<::GlobalNamespace::RotatingQuest*> _m = GetClass().GetMethod(O("GetQuestById"), {"questID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(questID);
        }
    };
}
