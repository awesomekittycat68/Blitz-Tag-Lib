#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SIProgression_$$c__DisplayClass158_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIProgression").GetInnerClass("<>c__DisplayClass158_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::RotatingQuest* GetQuest() {
            static BNM::Field<::GlobalNamespace::RotatingQuest*> _field = GetClass().GetField(O("quest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetQuestIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("questIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetQuest(::GlobalNamespace::RotatingQuest* value) {
            static BNM::Field<::GlobalNamespace::RotatingQuest*> _field = GetClass().GetField(O("quest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("questIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
