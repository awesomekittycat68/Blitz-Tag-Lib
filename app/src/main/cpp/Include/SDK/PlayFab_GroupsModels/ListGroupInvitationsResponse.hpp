#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_GroupsModels {
    struct ListGroupInvitationsResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.GroupsModels", "ListGroupInvitationsResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_GroupsModels::GroupInvitation*>* GetInvitations() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_GroupsModels::GroupInvitation*>*> _field = GetClass().GetField(O("Invitations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInvitations(::BNM::Structures::Mono::List<::PlayFab_GroupsModels::GroupInvitation*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_GroupsModels::GroupInvitation*>*> _field = GetClass().GetField(O("Invitations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
