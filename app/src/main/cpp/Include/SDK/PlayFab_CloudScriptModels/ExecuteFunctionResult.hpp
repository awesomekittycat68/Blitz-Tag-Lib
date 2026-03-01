#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_CloudScriptModels {
    struct ExecuteFunctionResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.CloudScriptModels", "ExecuteFunctionResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_CloudScriptModels::FunctionExecutionError* GetError() {
            static BNM::Field<::PlayFab_CloudScriptModels::FunctionExecutionError*> _field = GetClass().GetField(O("Error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetExecutionTimeMilliseconds() {
            static BNM::Field<int> _field = GetClass().GetField(O("ExecutionTimeMilliseconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFunctionName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("FunctionName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFunctionResult() {
            static BNM::Field<void*> _field = GetClass().GetField(O("FunctionResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFunctionResultTooLarge() {
            static BNM::Field<void*> _field = GetClass().GetField(O("FunctionResultTooLarge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetError(::PlayFab_CloudScriptModels::FunctionExecutionError* value) {
            static BNM::Field<::PlayFab_CloudScriptModels::FunctionExecutionError*> _field = GetClass().GetField(O("Error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExecutionTimeMilliseconds(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ExecutionTimeMilliseconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFunctionName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("FunctionName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFunctionResult(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("FunctionResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFunctionResultTooLarge(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("FunctionResultTooLarge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
