#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ProgressionManager_RewardRequest.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_SetSIQuestCompleteRequest : ::GlobalNamespace::ProgressionManager_RewardRequest {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("SetSIQuestCompleteRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetQuestID() {
            static BNM::Field<int> _field = GetClass().GetField(O("QuestID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetQuestID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("QuestID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
