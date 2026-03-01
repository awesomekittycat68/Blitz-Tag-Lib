#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct ExecuteCloudScriptResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "ExecuteCloudScriptResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetAPIRequestsIssued() {
            static BNM::Field<int> _field = GetClass().GetField(O("APIRequestsIssued"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::ScriptExecutionError* GetError() {
            static BNM::Field<::PlayFab_ClientModels::ScriptExecutionError*> _field = GetClass().GetField(O("Error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetExecutionTimeSeconds() {
            static BNM::Field<double> _field = GetClass().GetField(O("ExecutionTimeSeconds"));
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
        int GetHttpRequestsIssued() {
            static BNM::Field<int> _field = GetClass().GetField(O("HttpRequestsIssued"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::LogStatement*>* GetLogs() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::LogStatement*>*> _field = GetClass().GetField(O("Logs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLogsTooLarge() {
            static BNM::Field<void*> _field = GetClass().GetField(O("LogsTooLarge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetMemoryConsumedBytes() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("MemoryConsumedBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetProcessorTimeSeconds() {
            static BNM::Field<double> _field = GetClass().GetField(O("ProcessorTimeSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRevision() {
            static BNM::Field<int> _field = GetClass().GetField(O("Revision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAPIRequestsIssued(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("APIRequestsIssued"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetError(::PlayFab_ClientModels::ScriptExecutionError* value) {
            static BNM::Field<::PlayFab_ClientModels::ScriptExecutionError*> _field = GetClass().GetField(O("Error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExecutionTimeSeconds(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("ExecutionTimeSeconds"));
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
        void SetHttpRequestsIssued(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("HttpRequestsIssued"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogs(::BNM::Structures::Mono::List<::PlayFab_ClientModels::LogStatement*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::LogStatement*>*> _field = GetClass().GetField(O("Logs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogsTooLarge(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("LogsTooLarge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMemoryConsumedBytes(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("MemoryConsumedBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProcessorTimeSeconds(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("ProcessorTimeSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRevision(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Revision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
