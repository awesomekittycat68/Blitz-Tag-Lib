#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CloudScriptRevisionOption.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_CloudScriptModels {
    struct ExecuteEntityCloudScriptRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.CloudScriptModels", "ExecuteEntityCloudScriptRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_CloudScriptModels::EntityKey* GetEntity() {
            static BNM::Field<::PlayFab_CloudScriptModels::EntityKey*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFunctionName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("FunctionName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFunctionParameter() {
            static BNM::Field<void*> _field = GetClass().GetField(O("FunctionParameter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetGeneratePlayStreamEvent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("GeneratePlayStreamEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRevisionSelection() {
            static BNM::Field<void*> _field = GetClass().GetField(O("RevisionSelection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSpecificRevision() {
            static BNM::Field<void*> _field = GetClass().GetField(O("SpecificRevision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEntity(::PlayFab_CloudScriptModels::EntityKey* value) {
            static BNM::Field<::PlayFab_CloudScriptModels::EntityKey*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFunctionName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("FunctionName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFunctionParameter(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("FunctionParameter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGeneratePlayStreamEvent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("GeneratePlayStreamEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRevisionSelection(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("RevisionSelection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpecificRevision(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("SpecificRevision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
