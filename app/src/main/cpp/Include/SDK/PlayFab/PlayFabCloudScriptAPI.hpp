#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab {
    struct PlayFabCloudScriptAPI : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab", "PlayFabCloudScriptAPI");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP3 = void*>
        static void ExecuteEntityCloudScript(::PlayFab_CloudScriptModels::ExecuteEntityCloudScriptRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::ExecuteCloudScriptResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteEntityCloudScript"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ExecuteFunction(::PlayFab_CloudScriptModels::ExecuteFunctionRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::ExecuteFunctionResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteFunction"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        static void ForgetAllCredentials() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForgetAllCredentials"));
            _m.Call();
        }
        static bool IsEntityLoggedIn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEntityLoggedIn"));
            return _m.Call();
        }
        template <typename TP3 = void*>
        static void ListFunctions(::PlayFab_CloudScriptModels::ListFunctionsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::ListFunctionsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListFunctions"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ListHttpFunctions(::PlayFab_CloudScriptModels::ListFunctionsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::ListHttpFunctionsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListHttpFunctions"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void ListQueuedFunctions(::PlayFab_CloudScriptModels::ListFunctionsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::ListQueuedFunctionsResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListQueuedFunctions"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void PostFunctionResultForEntityTriggeredAction(::PlayFab_CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::EmptyResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostFunctionResultForEntityTriggeredAction"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void PostFunctionResultForFunctionExecution(::PlayFab_CloudScriptModels::PostFunctionResultForFunctionExecutionRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::EmptyResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostFunctionResultForFunctionExecution"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void PostFunctionResultForPlayerTriggeredAction(::PlayFab_CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::EmptyResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostFunctionResultForPlayerTriggeredAction"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void PostFunctionResultForScheduledTask(::PlayFab_CloudScriptModels::PostFunctionResultForScheduledTaskRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::EmptyResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostFunctionResultForScheduledTask"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void RegisterHttpFunction(::PlayFab_CloudScriptModels::RegisterHttpFunctionRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::EmptyResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterHttpFunction"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void RegisterQueuedFunction(::PlayFab_CloudScriptModels::RegisterQueuedFunctionRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::EmptyResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterQueuedFunction"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void UnregisterFunction(::PlayFab_CloudScriptModels::UnregisterFunctionRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::EmptyResult*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterFunction"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
    };
}
