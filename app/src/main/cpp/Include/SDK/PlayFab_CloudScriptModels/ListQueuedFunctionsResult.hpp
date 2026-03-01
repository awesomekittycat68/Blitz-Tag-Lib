#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_CloudScriptModels {
    struct ListQueuedFunctionsResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.CloudScriptModels", "ListQueuedFunctionsResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::QueuedFunctionModel*>* GetFunctions() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::QueuedFunctionModel*>*> _field = GetClass().GetField(O("Functions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFunctions(::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::QueuedFunctionModel*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_CloudScriptModels::QueuedFunctionModel*>*> _field = GetClass().GetField(O("Functions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
