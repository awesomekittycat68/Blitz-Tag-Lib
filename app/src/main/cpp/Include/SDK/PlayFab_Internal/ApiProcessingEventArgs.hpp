#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ApiProcessingEventType.hpp"

namespace PlayFab_Internal {
    struct ApiProcessingEventArgs : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Internal", "ApiProcessingEventArgs");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetApiEndpoint() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ApiEndpoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_Internal::ApiProcessingEventType GetEventType() {
            static BNM::Field<::PlayFab_Internal::ApiProcessingEventType> _field = GetClass().GetField(O("EventType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_SharedModels::PlayFabRequestCommon* GetRequest() {
            static BNM::Field<::PlayFab_SharedModels::PlayFabRequestCommon*> _field = GetClass().GetField(O("Request"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_SharedModels::PlayFabResultCommon* GetResult() {
            static BNM::Field<::PlayFab_SharedModels::PlayFabResultCommon*> _field = GetClass().GetField(O("Result"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetApiEndpoint(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ApiEndpoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventType(::PlayFab_Internal::ApiProcessingEventType value) {
            static BNM::Field<::PlayFab_Internal::ApiProcessingEventType> _field = GetClass().GetField(O("EventType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequest(::PlayFab_SharedModels::PlayFabRequestCommon* value) {
            static BNM::Field<::PlayFab_SharedModels::PlayFabRequestCommon*> _field = GetClass().GetField(O("Request"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResult(::PlayFab_SharedModels::PlayFabResultCommon* value) {
            static BNM::Field<::PlayFab_SharedModels::PlayFabResultCommon*> _field = GetClass().GetField(O("Result"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TRequest>
        TRequest GetRequest_1() {
            static BNM::Method<TRequest> _m = GetClass().GetMethod(O("GetRequest"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
