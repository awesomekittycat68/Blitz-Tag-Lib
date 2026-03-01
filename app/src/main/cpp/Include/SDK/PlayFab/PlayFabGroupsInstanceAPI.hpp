#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab {
    struct PlayFabGroupsInstanceAPI : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab", "PlayFabGroupsInstanceAPI");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab::PlayFabApiSettings* GetApiSettings() {
            static BNM::Field<::PlayFab::PlayFabApiSettings*> _field = GetClass().GetField(O("apiSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab::PlayFabAuthenticationContext* GetAuthenticationContext() {
            static BNM::Field<::PlayFab::PlayFabAuthenticationContext*> _field = GetClass().GetField(O("authenticationContext"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        template <typename TP3 = void*>
        void AcceptGroupApplication(::PlayFab_GroupsModels::AcceptGroupApplicationRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AcceptGroupApplication"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void AcceptGroupInvitation(::PlayFab_GroupsModels::AcceptGroupInvitationRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AcceptGroupInvitation"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void AddMembers(::PlayFab_GroupsModels::AddMembersRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddMembers"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ApplyToGroup(::PlayFab_GroupsModels::ApplyToGroupRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::ApplyToGroupResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyToGroup"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void BlockEntity(::PlayFab_GroupsModels::BlockEntityRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BlockEntity"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ChangeMemberRole(::PlayFab_GroupsModels::ChangeMemberRoleRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeMemberRole"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void CreateGroup(::PlayFab_GroupsModels::CreateGroupRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::CreateGroupResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateGroup"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void CreateRole(::PlayFab_GroupsModels::CreateGroupRoleRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::CreateGroupRoleResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateRole"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void DeleteGroup(::PlayFab_GroupsModels::DeleteGroupRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteGroup"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void DeleteRole(::PlayFab_GroupsModels::DeleteRoleRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteRole"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        void ForgetAllCredentials() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForgetAllCredentials"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP3 = void*>
        void GetGroup(::PlayFab_GroupsModels::GetGroupRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::GetGroupResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetGroup"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void InviteToGroup(::PlayFab_GroupsModels::InviteToGroupRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::InviteToGroupResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InviteToGroup"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        bool IsEntityLoggedIn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEntityLoggedIn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP3 = void*>
        void IsMember(::PlayFab_GroupsModels::IsMemberRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::IsMemberResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IsMember"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListGroupApplications(::PlayFab_GroupsModels::ListGroupApplicationsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::ListGroupApplicationsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListGroupApplications"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListGroupBlocks(::PlayFab_GroupsModels::ListGroupBlocksRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::ListGroupBlocksResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListGroupBlocks"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListGroupInvitations(::PlayFab_GroupsModels::ListGroupInvitationsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::ListGroupInvitationsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListGroupInvitations"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListGroupMembers(::PlayFab_GroupsModels::ListGroupMembersRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::ListGroupMembersResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListGroupMembers"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListMembership(::PlayFab_GroupsModels::ListMembershipRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::ListMembershipResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListMembership"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void ListMembershipOpportunities(::PlayFab_GroupsModels::ListMembershipOpportunitiesRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::ListMembershipOpportunitiesResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ListMembershipOpportunities"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void RemoveGroupApplication(::PlayFab_GroupsModels::RemoveGroupApplicationRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveGroupApplication"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void RemoveGroupInvitation(::PlayFab_GroupsModels::RemoveGroupInvitationRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveGroupInvitation"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void RemoveMembers(::PlayFab_GroupsModels::RemoveMembersRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveMembers"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UnblockEntity(::PlayFab_GroupsModels::UnblockEntityRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::EmptyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnblockEntity"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UpdateGroup(::PlayFab_GroupsModels::UpdateGroupRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::UpdateGroupResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateGroup"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        void UpdateRole(::PlayFab_GroupsModels::UpdateGroupRoleRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_GroupsModels::UpdateGroupRoleResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRole"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
    };
}
