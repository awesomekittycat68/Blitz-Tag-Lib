#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Internal {
    struct PlayFabDeviceUtil : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Internal", "PlayFabDeviceUtil");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static bool GetGatherDeviceInfo() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_gatherDeviceInfo"));
            return _field.Get();
        }
        static bool GetGatherScreenTime() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_gatherScreenTime"));
            return _field.Get();
        }
        static bool GetNeedsAttribution() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_needsAttribution"));
            return _field.Get();
        }
        static void SetGatherDeviceInfo(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_gatherDeviceInfo"));
            _field.Set(value);
        }
        static void SetGatherScreenTime(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_gatherScreenTime"));
            _field.Set(value);
        }
        static void SetNeedsAttribution(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_needsAttribution"));
            _field.Set(value);
        }
        template <typename TP5 = void*>
        static void _OnPlayFabLogin(::PlayFab_ClientModels::UserSettings* settingsForUser, ::BNM::Structures::Mono::String* playFabId, ::BNM::Structures::Mono::String* entityId, ::BNM::Structures::Mono::String* entityType, ::PlayFab::PlayFabApiSettings* settings, TP5 instanceApi) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_OnPlayFabLogin"), {"settingsForUser", "playFabId", "entityId", "entityType", "settings", "instanceApi"});
            _m.Call(settingsForUser, playFabId, entityId, entityType, settings, instanceApi);
        }
        template <typename TP1 = void*>
        static void DoAttributeInstall(::PlayFab::PlayFabApiSettings* settings, TP1 instanceApi) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoAttributeInstall"), {"settings", "instanceApi"});
            _m.Call(settings, instanceApi);
        }
        template <typename TP1 = void*>
        static void GetAdvertIdFromUnity(::PlayFab::PlayFabApiSettings* settings, TP1 instanceApi) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetAdvertIdFromUnity"), {"settings", "instanceApi"});
            _m.Call(settings, instanceApi);
        }
        static void OnAttributeInstall(::PlayFab_ClientModels::AttributeInstallResult* result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAttributeInstall"), {"result"});
            _m.Call(result);
        }
        static void OnGatherFail(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGatherFail"), {"error"});
            _m.Call(error);
        }
        template <typename TP2 = void*>
        static void OnPlayFabLogin(::PlayFab_SharedModels::PlayFabResultCommon* result, ::PlayFab::PlayFabApiSettings* settings, TP2 instanceApi) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayFabLogin"), {"result", "settings", "instanceApi"});
            _m.Call(result, settings, instanceApi);
        }
        template <typename TP1 = void*>
        static void SendDeviceInfoToPlayFab(::PlayFab::PlayFabApiSettings* settings, TP1 instanceApi) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendDeviceInfoToPlayFab"), {"settings", "instanceApi"});
            _m.Call(settings, instanceApi);
        }
    };
}
