#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PlayFabBaseModel.hpp"

namespace PlayFab_SharedModels {
    struct PlayFabResultCommon : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.SharedModels", "PlayFabResultCommon");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetCustomData() {
            static BNM::Field<void*> _field = GetClass().GetField(O("CustomData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_SharedModels::PlayFabRequestCommon* GetRequest() {
            static BNM::Field<::PlayFab_SharedModels::PlayFabRequestCommon*> _field = GetClass().GetField(O("Request"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCustomData(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("CustomData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequest(::PlayFab_SharedModels::PlayFabRequestCommon* value) {
            static BNM::Field<::PlayFab_SharedModels::PlayFabRequestCommon*> _field = GetClass().GetField(O("Request"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
