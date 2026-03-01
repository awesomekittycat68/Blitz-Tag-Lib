#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab {
    struct PlayFabEventsInstanceAPI : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab", "PlayFabEventsInstanceAPI");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab::PlayFabApiSettings* GetApiSettings() {
            static BNM::Field<::PlayFab::PlayFabApiSettings*> _field = GetClass().GetField(O("apiSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab::PlayFabAuthenticationContext* GetAuthenticationContext() {
            static BNM::Field<::PlayFab::PlayFabAuthenticationContext*> _field = GetClass().GetField(O("authenticationContext"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void ForgetAllCredentials() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForgetAllCredentials"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsEntityLoggedIn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEntityLoggedIn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP3 = void*>
        void WriteEvents(::PlayFab_EventsModels::WriteEventsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_EventsModels::WriteEventsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteEvents"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void WriteTelemetryEvents(::PlayFab_EventsModels::WriteEventsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_EventsModels::WriteEventsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteTelemetryEvents"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
    };
}
