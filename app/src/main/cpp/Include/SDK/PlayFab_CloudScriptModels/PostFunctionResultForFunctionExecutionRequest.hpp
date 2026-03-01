#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_CloudScriptModels {
    struct PostFunctionResultForFunctionExecutionRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.CloudScriptModels", "PostFunctionResultForFunctionExecutionRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_CloudScriptModels::EntityKey* GetEntity() {
            static BNM::Field<::PlayFab_CloudScriptModels::EntityKey*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_CloudScriptModels::ExecuteFunctionResult* GetFunctionResult() {
            static BNM::Field<::PlayFab_CloudScriptModels::ExecuteFunctionResult*> _field = GetClass().GetField(O("FunctionResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEntity(::PlayFab_CloudScriptModels::EntityKey* value) {
            static BNM::Field<::PlayFab_CloudScriptModels::EntityKey*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFunctionResult(::PlayFab_CloudScriptModels::ExecuteFunctionResult* value) {
            static BNM::Field<::PlayFab_CloudScriptModels::ExecuteFunctionResult*> _field = GetClass().GetField(O("FunctionResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
