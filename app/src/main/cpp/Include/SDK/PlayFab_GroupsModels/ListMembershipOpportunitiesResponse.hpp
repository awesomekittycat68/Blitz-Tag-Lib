#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_GroupsModels {
    struct ListMembershipOpportunitiesResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.GroupsModels", "ListMembershipOpportunitiesResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_GroupsModels::GroupApplication*>* GetApplications() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_GroupsModels::GroupApplication*>*> _field = GetClass().GetField(O("Applications"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_GroupsModels::GroupInvitation*>* GetInvitations() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_GroupsModels::GroupInvitation*>*> _field = GetClass().GetField(O("Invitations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetApplications(::BNM::Structures::Mono::List<::PlayFab_GroupsModels::GroupApplication*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_GroupsModels::GroupApplication*>*> _field = GetClass().GetField(O("Applications"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInvitations(::BNM::Structures::Mono::List<::PlayFab_GroupsModels::GroupInvitation*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_GroupsModels::GroupInvitation*>*> _field = GetClass().GetField(O("Invitations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
