#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_GetActiveSIQuestsResult : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("GetActiveSIQuestsResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuest*>* GetQuests() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuest*>*> _field = GetClass().GetField(O("Quests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetQuests(::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuest*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RotatingQuest*>*> _field = GetClass().GetField(O("Quests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
