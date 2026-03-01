#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_GroupsModels {
    struct InviteToGroupResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.GroupsModels", "InviteToGroupResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

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
        ::PlayFab_GroupsModels::EntityWithLineage* GetInvitedByEntity() {
            static BNM::Field<::PlayFab_GroupsModels::EntityWithLineage*> _field = GetClass().GetField(O("InvitedByEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_GroupsModels::EntityWithLineage* GetInvitedEntity() {
            static BNM::Field<::PlayFab_GroupsModels::EntityWithLineage*> _field = GetClass().GetField(O("InvitedEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRoleId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("RoleId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
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
        void SetInvitedByEntity(::PlayFab_GroupsModels::EntityWithLineage* value) {
            static BNM::Field<::PlayFab_GroupsModels::EntityWithLineage*> _field = GetClass().GetField(O("InvitedByEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInvitedEntity(::PlayFab_GroupsModels::EntityWithLineage* value) {
            static BNM::Field<::PlayFab_GroupsModels::EntityWithLineage*> _field = GetClass().GetField(O("InvitedEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoleId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("RoleId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
