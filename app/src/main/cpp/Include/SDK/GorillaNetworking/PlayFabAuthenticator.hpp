#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PlayFabAuthenticator_SafetyType.hpp"
#include "../Oculus_Platform/AccountAgeCategory.hpp"

namespace GorillaNetworking {
    struct PlayFabAuthenticator : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "PlayFabAuthenticator");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaNetworking::PlayFabAuthenticator* GetInstance() {
            static BNM::Field<::GorillaNetworking::PlayFabAuthenticator*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr int PlayFabAuthRequestTimeout = 30;
        ::GorillaNetworking::GorillaComputer* GetGorillaComputer() {
            static BNM::Method<::GorillaNetworking::GorillaComputer*> _method = GetClass().GetMethod(O("get_gorillaComputer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsReturningPlayer() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsReturningPlayer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsReturningPlayer(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsReturningPlayer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetPostAuthSetSafety() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_postAuthSetSafety"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPostAuthSetSafety(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_postAuthSetSafety"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetDisplayName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_displayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNonce() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_nonce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlayFabPlayerIdCache() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_playFabPlayerIdCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSessionTicket() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_sessionTicket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform::AccountAgeCategory GetCategory() {
            static BNM::Field<::Oculus_Platform::AccountAgeCategory> _field = GetClass().GetField(O("category"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentLoginAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentLoginAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDbgIsReturningPlayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("dbg_isReturningPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetDebugText() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("debugText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetEmptyObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("emptyObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaNetworking::PlayFabAuthenticator* GetInstance_f() {
            static BNM::Field<::GorillaNetworking::PlayFabAuthenticator*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        bool GetIsModded() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isModded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsSafeAccount() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSafeAccount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLoginFailed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loginFailed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetMPcbTicket() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("m_pcbTicket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetMTicket() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("m_Ticket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxLoginAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxLoginAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MetaAuthenticator* GetMetaAuthenticator() {
            static BNM::Field<::GlobalNamespace::MetaAuthenticator*> _field = GetClass().GetField(O("metaAuthenticator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MothershipAuthenticator* GetMothershipAuthenticator() {
            static BNM::Field<::GlobalNamespace::MothershipAuthenticator*> _field = GetClass().GetField(O("mothershipAuthenticator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<bool>* GetOnSafetyUpdate() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnSafetyUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PhotonAuthenticator* GetPhotonAuthenticator() {
            static BNM::Field<::GlobalNamespace::PhotonAuthenticator*> _field = GetClass().GetField(O("photonAuthenticator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PlatformTagJoin* GetPlatform() {
            static BNM::Field<::GlobalNamespace::PlatformTagJoin*> _field = GetClass().GetField(O("platform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayFabAuthRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("playFabAuthRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayFabCacheMaxRetries() {
            static BNM::Field<int> _field = GetClass().GetField(O("playFabCacheMaxRetries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayFabCacheRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("playFabCacheRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayFabMaxRetries() {
            static BNM::Field<int> _field = GetClass().GetField(O("playFabMaxRetries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::PlayFabAuthenticator_SafetyType GetSafetyType() {
            static BNM::Field<::GorillaNetworking::PlayFabAuthenticator_SafetyType> _field = GetClass().GetField(O("safetyType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetScreenDebugMode() {
            static BNM::Field<bool> _field = GetClass().GetField(O("screenDebugMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SteamAuthenticator* GetSteamAuthenticator() {
            static BNM::Field<::GlobalNamespace::SteamAuthenticator*> _field = GetClass().GetField(O("steamAuthenticator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetUserID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("userID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetUserToken() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("userToken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDisplayName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_displayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNonce(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_nonce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayFabPlayerIdCache(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_playFabPlayerIdCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSessionTicket(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_sessionTicket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCategory(::Oculus_Platform::AccountAgeCategory value) {
            static BNM::Field<::Oculus_Platform::AccountAgeCategory> _field = GetClass().GetField(O("category"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentLoginAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentLoginAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDbgIsReturningPlayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("dbg_isReturningPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugText(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("debugText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmptyObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("emptyObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaNetworking::PlayFabAuthenticator* value) {
            static BNM::Field<::GorillaNetworking::PlayFabAuthenticator*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetIsModded(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isModded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsSafeAccount(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSafeAccount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoginFailed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loginFailed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPcbTicket(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("m_pcbTicket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTicket(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("m_Ticket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxLoginAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxLoginAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMetaAuthenticator(::GlobalNamespace::MetaAuthenticator* value) {
            static BNM::Field<::GlobalNamespace::MetaAuthenticator*> _field = GetClass().GetField(O("metaAuthenticator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMothershipAuthenticator(::GlobalNamespace::MothershipAuthenticator* value) {
            static BNM::Field<::GlobalNamespace::MothershipAuthenticator*> _field = GetClass().GetField(O("mothershipAuthenticator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnSafetyUpdate(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnSafetyUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonAuthenticator(::GlobalNamespace::PhotonAuthenticator* value) {
            static BNM::Field<::GlobalNamespace::PhotonAuthenticator*> _field = GetClass().GetField(O("photonAuthenticator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlatform(::GlobalNamespace::PlatformTagJoin* value) {
            static BNM::Field<::GlobalNamespace::PlatformTagJoin*> _field = GetClass().GetField(O("platform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayFabAuthRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playFabAuthRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayFabCacheMaxRetries(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playFabCacheMaxRetries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayFabCacheRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playFabCacheRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayFabMaxRetries(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playFabMaxRetries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSafetyType(::GorillaNetworking::PlayFabAuthenticator_SafetyType value) {
            static BNM::Field<::GorillaNetworking::PlayFabAuthenticator_SafetyType> _field = GetClass().GetField(O("safetyType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenDebugMode(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("screenDebugMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSteamAuthenticator(::GlobalNamespace::SteamAuthenticator* value) {
            static BNM::Field<::GlobalNamespace::SteamAuthenticator*> _field = GetClass().GetField(O("steamAuthenticator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUserID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("userID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUserToken(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("userToken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AdvanceLogin() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AdvanceLogin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AuthenticateWithPhoton() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthenticateWithPhoton"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AuthenticateWithPlayFab() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthenticateWithPlayFab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BeginLoginFlow() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BeginLoginFlow"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* CachePlayFabId(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest* data, ::BNM::Structures::Mono::Action<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("CachePlayFabId"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        ::BNM::Coroutine::IEnumerator* ComputerOnConnectedToMaster() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ComputerOnConnectedToMaster"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void DefaultSafetiesByAgeCategory() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DefaultSafetiesByAgeCategory"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DisplayGeneralFailureMessageOnGorillaComputerAfter1Frame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaNetworking::GorillaComputer* get_gorillaComputer() {
            static BNM::Method<::GorillaNetworking::GorillaComputer*> _m = GetClass().GetMethod(O("get_gorillaComputer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsReturningPlayer() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsReturningPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_postAuthSetSafety() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_postAuthSetSafety"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetNonceForPlayFab() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetNonceForPlayFab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GetOculusNonceCallback(::Oculus_Platform::Message* msg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetOculusNonceCallback"), {"msg"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(msg);
        }
        void GetOculusUser() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetOculusUser"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GetOculusUserAgeCallback(::Oculus_Platform::Message* msg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetOculusUserAgeCallback"), {"msg"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(msg);
        }
        void GetPlayerDisplayName(::BNM::Structures::Mono::String* playFabId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPlayerDisplayName"), {"playFabId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playFabId);
        }
        ::BNM::Structures::Mono::String* GetPlayFabPlayerId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPlayFabPlayerId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetPlayFabSessionTicket() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPlayFabSessionTicket"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool GetSafety() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetSafety"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaNetworking::PlayFabAuthenticator_SafetyType GetSafetyType_1() {
            static BNM::Method<::GorillaNetworking::PlayFabAuthenticator_SafetyType> _m = GetClass().GetMethod(O("GetSafetyType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetUserID_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetUserID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LogMessage(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogMessage"), {"message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(message);
        }
        void OculusAttemptFail() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OculusAttemptFail"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OculusLoginFail() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OculusLoginFail"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCachePlayFabIdRequest(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCachePlayFabIdRequest"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void OnLoginWithSteamResponse(::PlayFab_ClientModels::LoginResult* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLoginWithSteamResponse"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void OnPlayFabAuthResponse(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayFabAuthResponse"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void OnPlayFabError(::PlayFab::PlayFabError* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayFabError"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        ::BNM::Coroutine::IEnumerator* PlayfabAuthenticate(::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthRequestData* data, ::BNM::Structures::Mono::Action<::GorillaNetworking::PlayFabAuthenticator_PlayfabAuthResponseData*>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("PlayfabAuthenticate"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        bool RegularLogin() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RegularLogin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ScreenDebug(::BNM::Structures::Mono::String* debugString) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ScreenDebug"), {"debugString"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(debugString);
        }
        void ScreenDebugClear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ScreenDebugClear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_IsReturningPlayer(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsReturningPlayer"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_postAuthSetSafety(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_postAuthSetSafety"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetDisplayName_1(::BNM::Structures::Mono::String* playerName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDisplayName"), {"playerName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerName);
        }
        void SetSafety(bool isSafety, bool isAutoSet, bool setPlayfab) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSafety"), {"isSafety", "isAutoSet", "setPlayfab"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isSafety, isAutoSet, setPlayfab);
        }
        void ShowBanMessage(::GorillaNetworking::PlayFabAuthenticator_BanInfo* banInfo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowBanMessage"), {"banInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(banInfo);
        }
        void ShowMothershipAuthErrorMessage(::BNM::Structures::Mono::String* errorMessage, ::BNM::Structures::Mono::String* errorCode, ::BNM::Structures::Mono::String* traceId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowMothershipAuthErrorMessage"), {"errorMessage", "errorCode", "traceId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(errorMessage, errorCode, traceId);
        }
        void ShowPlayFabAuthErrorMessage(::BNM::Structures::Mono::String* errorJson) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowPlayFabAuthErrorMessage"), {"errorJson"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(errorJson);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        ::BNM::Coroutine::IEnumerator* VerifyKidAuthenticated(TP0 accountCreationDateTime) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("VerifyKidAuthenticated"), {"accountCreationDateTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(accountCreationDateTime);
        }
    };
}
