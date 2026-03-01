#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_ProfilesModels {
    struct GetEntityProfilesRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ProfilesModels", "GetEntityProfilesRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetDataAsObject() {
            static BNM::Field<void*> _field = GetClass().GetField(O("DataAsObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityKey*>* GetEntities() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityKey*>*> _field = GetClass().GetField(O("Entities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDataAsObject(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("DataAsObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntities(::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityKey*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityKey*>*> _field = GetClass().GetField(O("Entities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
