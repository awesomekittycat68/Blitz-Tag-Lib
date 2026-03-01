#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NullValueHandling.hpp"

namespace PlayFab_Json {
    struct JsonProperty : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Json", "JsonProperty");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_Json::NullValueHandling GetNullValueHandling() {
            static BNM::Field<::PlayFab_Json::NullValueHandling> _field = GetClass().GetField(O("NullValueHandling"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPropertyName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PropertyName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNullValueHandling(::PlayFab_Json::NullValueHandling value) {
            static BNM::Field<::PlayFab_Json::NullValueHandling> _field = GetClass().GetField(O("NullValueHandling"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPropertyName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PropertyName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
