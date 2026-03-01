#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_CloudScriptModels {
    struct PostFunctionResultForPlayerTriggeredActionRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.CloudScriptModels", "PostFunctionResultForPlayerTriggeredActionRequest");
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
        ::PlayFab_CloudScriptModels::PlayerProfileModel* GetPlayerProfile() {
            static BNM::Field<::PlayFab_CloudScriptModels::PlayerProfileModel*> _field = GetClass().GetField(O("PlayerProfile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_CloudScriptModels::PlayStreamEventEnvelopeModel* GetPlayStreamEventEnvelope() {
            static BNM::Field<::PlayFab_CloudScriptModels::PlayStreamEventEnvelopeModel*> _field = GetClass().GetField(O("PlayStreamEventEnvelope"));
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
        void SetPlayerProfile(::PlayFab_CloudScriptModels::PlayerProfileModel* value) {
            static BNM::Field<::PlayFab_CloudScriptModels::PlayerProfileModel*> _field = GetClass().GetField(O("PlayerProfile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayStreamEventEnvelope(::PlayFab_CloudScriptModels::PlayStreamEventEnvelopeModel* value) {
            static BNM::Field<::PlayFab_CloudScriptModels::PlayStreamEventEnvelopeModel*> _field = GetClass().GetField(O("PlayStreamEventEnvelope"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
