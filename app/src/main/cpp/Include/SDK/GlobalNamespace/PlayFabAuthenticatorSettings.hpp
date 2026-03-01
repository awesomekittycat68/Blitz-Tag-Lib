#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PlayFabAuthenticatorSettings : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PlayFabAuthenticatorSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::String* GetAuthApiBaseUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AuthApiBaseUrl"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetDailyQuestsApiBaseUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DailyQuestsApiBaseUrl"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetFriendApiBaseUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("FriendApiBaseUrl"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetHpPromoApiBaseUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("HpPromoApiBaseUrl"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetIapApiBaseUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("IapApiBaseUrl"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetKidApiBaseUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("KidApiBaseUrl"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetMmrApiBaseUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MmrApiBaseUrl"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetModerationApiBaseUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ModerationApiBaseUrl"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetProgressionApiBaseUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ProgressionApiBaseUrl"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetTitleDataApiBaseUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TitleDataApiBaseUrl"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetTitleId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TitleId"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetVotingApiBaseUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("VotingApiBaseUrl"));
            return _field.Get();
        }
        static void SetAuthApiBaseUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AuthApiBaseUrl"));
            _field.Set(value);
        }
        static void SetDailyQuestsApiBaseUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DailyQuestsApiBaseUrl"));
            _field.Set(value);
        }
        static void SetFriendApiBaseUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("FriendApiBaseUrl"));
            _field.Set(value);
        }
        static void SetHpPromoApiBaseUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("HpPromoApiBaseUrl"));
            _field.Set(value);
        }
        static void SetIapApiBaseUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("IapApiBaseUrl"));
            _field.Set(value);
        }
        static void SetKidApiBaseUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("KidApiBaseUrl"));
            _field.Set(value);
        }
        static void SetMmrApiBaseUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MmrApiBaseUrl"));
            _field.Set(value);
        }
        static void SetModerationApiBaseUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ModerationApiBaseUrl"));
            _field.Set(value);
        }
        static void SetProgressionApiBaseUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ProgressionApiBaseUrl"));
            _field.Set(value);
        }
        static void SetTitleDataApiBaseUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TitleDataApiBaseUrl"));
            _field.Set(value);
        }
        static void SetTitleId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TitleId"));
            _field.Set(value);
        }
        static void SetVotingApiBaseUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("VotingApiBaseUrl"));
            _field.Set(value);
        }
        static void Load(::BNM::Structures::Mono::String* path) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Load"), {"path"});
            _m.Call(path);
        }
    };
}
