#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ProgressionController_SetQuestCompleteResponse : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionController").GetInnerClass("SetQuestCompleteResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::ProgressionController_UserQuestsStatus* GetResult() {
            static BNM::Field<::GlobalNamespace::ProgressionController_UserQuestsStatus*> _field = GetClass().GetField(O("result"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetResult(::GlobalNamespace::ProgressionController_UserQuestsStatus* value) {
            static BNM::Field<::GlobalNamespace::ProgressionController_UserQuestsStatus*> _field = GetClass().GetField(O("result"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
