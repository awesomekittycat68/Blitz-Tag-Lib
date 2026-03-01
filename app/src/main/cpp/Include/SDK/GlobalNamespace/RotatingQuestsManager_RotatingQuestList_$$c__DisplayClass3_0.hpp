#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RotatingQuestsManager_RotatingQuestList_$$c__DisplayClass3_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RotatingQuestsManager").GetInnerClass("RotatingQuestList").GetInnerClass("<>c__DisplayClass3_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetQuestID() {
            static BNM::Field<int> _field = GetClass().GetField(O("questID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetQuestID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("questID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
