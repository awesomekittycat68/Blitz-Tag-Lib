#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_GroupsModels {
    struct ApplyToGroupResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.GroupsModels", "ApplyToGroupResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_GroupsModels::EntityWithLineage* GetEntity() {
            static BNM::Field<::PlayFab_GroupsModels::EntityWithLineage*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetExpires() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Expires"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_GroupsModels::EntityKey* GetGroup() {
            static BNM::Field<::PlayFab_GroupsModels::EntityKey*> _field = GetClass().GetField(O("Group"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEntity(::PlayFab_GroupsModels::EntityWithLineage* value) {
            static BNM::Field<::PlayFab_GroupsModels::EntityWithLineage*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpires(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Expires"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroup(::PlayFab_GroupsModels::EntityKey* value) {
            static BNM::Field<::PlayFab_GroupsModels::EntityKey*> _field = GetClass().GetField(O("Group"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
