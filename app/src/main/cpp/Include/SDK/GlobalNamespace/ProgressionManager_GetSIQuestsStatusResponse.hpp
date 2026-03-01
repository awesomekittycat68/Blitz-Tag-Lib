#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_GetSIQuestsStatusResponse : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("GetSIQuestsStatusResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse* GetResult() {
            static BNM::Field<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*> _field = GetClass().GetField(O("Result"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetResult(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse* value) {
            static BNM::Field<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*> _field = GetClass().GetField(O("Result"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
