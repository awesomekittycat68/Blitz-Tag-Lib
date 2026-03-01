#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab {
    struct PlayFabProfilesAPI : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab", "PlayFabProfilesAPI");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void ForgetAllCredentials() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForgetAllCredentials"));
            _m.Call();
        }
        template <typename TP3 = void*>
        static void GetGlobalPolicy(::PlayFab_ProfilesModels::GetGlobalPolicyRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ProfilesModels::GetGlobalPolicyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetGlobalPolicy"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetProfile(::PlayFab_ProfilesModels::GetEntityProfileRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ProfilesModels::GetEntityProfileResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetProfile"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetProfiles(::PlayFab_ProfilesModels::GetEntityProfilesRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ProfilesModels::GetEntityProfilesResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetProfiles"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void GetTitlePlayersFromMasterPlayerAccountIds(::PlayFab_ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetTitlePlayersFromMasterPlayerAccountIds"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        static bool IsEntityLoggedIn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEntityLoggedIn"));
            return _m.Call();
        }
        template <typename TP3 = void*>
        static void SetGlobalPolicy(::PlayFab_ProfilesModels::SetGlobalPolicyRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ProfilesModels::SetGlobalPolicyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGlobalPolicy"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void SetProfileLanguage(::PlayFab_ProfilesModels::SetProfileLanguageRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ProfilesModels::SetProfileLanguageResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetProfileLanguage"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
        template <typename TP3 = void*>
        static void SetProfilePolicy(::PlayFab_ProfilesModels::SetEntityProfilePolicyRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_ProfilesModels::SetEntityProfilePolicyResponse*>* resultCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback, TP3 customData, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* extraHeaders) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetProfilePolicy"), {"request", "resultCallback", "errorCallback", "customData", "extraHeaders"});
            _m.Call(request, resultCallback, errorCallback, customData, extraHeaders);
        }
    };
}
