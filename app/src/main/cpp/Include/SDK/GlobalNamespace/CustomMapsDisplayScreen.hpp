#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CustomMapsTerminalScreen.hpp"
#include "../GorillaTagScripts_VirtualStumpCustomMaps/MapLoadStatus.hpp"

namespace GlobalNamespace {
    struct CustomMapsDisplayScreen : ::GlobalNamespace::CustomMapsTerminalScreen {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapsDisplayScreen");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float LOGO_WIDTH = 320.0f;
        static constexpr float LOGO_HEIGHT = 180.0f;
        ::BNM::IL2CPP::Il2CppObject* GetCurrentMapMod() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_currentMapMod"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentMapMod(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_currentMapMod"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::TMP_Text* GetErrorText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("errorText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasModProfile() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasModProfile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetHiddenMapDesc() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("hiddenMapDesc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Sprite* GetHiddenMapLogo() {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("hiddenMapLogo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetHiddenMapTitle() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("hiddenMapTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetHiddenRoomMapText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("hiddenRoomMapText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsFavorite() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isFavorite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetLoadingMapLabelText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("loadingMapLabelText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetLoadingMapMessageText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("loadingMapMessageText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetLoadingText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("loadingText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetLoadRoomMapPromptText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("loadRoomMapPromptText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMapAutoDownloadingString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapAutoDownloadingString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMapLoadError() {
            static BNM::Field<bool> _field = GetClass().GetField(O("mapLoadError"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMapLoadingErrorDriverString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapLoadingErrorDriverString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMapLoadingErrorInvalidModFile() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapLoadingErrorInvalidModFile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMapLoadingErrorNonDriverString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapLoadingErrorNonDriverString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMapLoadingErrorString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapLoadingErrorString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMapLoadingString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapLoadingString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMapNeedsUpdateString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapNeedsUpdateString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMapNotDownloadedString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapNotDownloadedString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetMapReadyText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("mapReadyText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMapScreenshotImage() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("mapScreenshotImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMapUnloadingString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapUnloadingString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetModCreatorLabelText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("modCreatorLabelText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetModCreatorText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("modCreatorText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetModDescriptionText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("modDescriptionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetModNameText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("modNameText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetOutdatedText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("outdatedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetPendingModId() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("pendingModId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetErrorText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("errorText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasModProfile(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasModProfile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHiddenMapDesc(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("hiddenMapDesc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHiddenMapLogo(::Sprite* value) {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("hiddenMapLogo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHiddenMapTitle(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("hiddenMapTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHiddenRoomMapText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("hiddenRoomMapText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsFavorite(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isFavorite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadingMapLabelText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("loadingMapLabelText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadingMapMessageText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("loadingMapMessageText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadingText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("loadingText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadRoomMapPromptText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("loadRoomMapPromptText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMapAutoDownloadingString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapAutoDownloadingString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMapLoadError(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("mapLoadError"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMapLoadingErrorDriverString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapLoadingErrorDriverString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMapLoadingErrorInvalidModFile(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapLoadingErrorInvalidModFile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMapLoadingErrorNonDriverString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapLoadingErrorNonDriverString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMapLoadingErrorString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapLoadingErrorString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMapLoadingString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapLoadingString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMapNeedsUpdateString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapNeedsUpdateString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMapNotDownloadedString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapNotDownloadedString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMapReadyText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("mapReadyText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMapScreenshotImage(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("mapScreenshotImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMapUnloadingString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mapUnloadingString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModCreatorLabelText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("modCreatorLabelText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModCreatorText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("modCreatorText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModDescriptionText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("modDescriptionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModNameText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("modNameText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutdatedText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("outdatedText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendingModId(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("pendingModId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::IL2CPP::Il2CppObject* get_currentMapMod() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_currentMapMod"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* GetModId() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetModId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP2 = void*, typename TP3 = void*>
        void HandleModManagementEvent(::BNM::IL2CPP::Il2CppObject* mod, ::BNM::IL2CPP::Il2CppObject* modfile, TP2 jobType, TP3 jobPhase) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleModManagementEvent"), {"mod", "modfile", "jobType", "jobPhase"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mod, modfile, jobType, jobPhase);
        }
        void Hide() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Hide"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsCurrentModHidden() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsCurrentModHidden"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnGetModLogo(::BNM::IL2CPP::Il2CppObject* error, ::Texture2D* modLogo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetModLogo"), {"error", "modLogo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error, modLogo);
        }
        void OnMapLoadComplete(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMapLoadComplete"), {"success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success);
        }
        void OnMapLoadComplete_UIUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMapLoadComplete_UIUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnMapLoadProgress(::GorillaTagScripts_VirtualStumpCustomMaps::MapLoadStatus loadStatus, int progress, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMapLoadProgress"), {"loadStatus", "progress", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(loadStatus, progress, message);
        }
        void OnMapUnloaded() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMapUnloaded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnModIOLoggedIn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModIOLoggedIn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnModIOLoggedOut() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModIOLoggedOut"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnModIOUserChanged(::BNM::IL2CPP::Il2CppObject* user) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModIOUserChanged"), {"user"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(user);
        }
        void OnProfileReceived(::BNM::IL2CPP::Il2CppObject* error, ::BNM::IL2CPP::Il2CppObject* mod) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProfileReceived"), {"error", "mod"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error, mod);
        }
        template <typename TP0 = void*>
        void OnRoomMapChanged(TP0 roomMapID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRoomMapChanged"), {"roomMapID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(roomMapID);
        }
        void OnRoomMapRetrieved(::BNM::IL2CPP::Il2CppObject* error, ::BNM::IL2CPP::Il2CppObject* mod) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRoomMapRetrieved"), {"error", "mod"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error, mod);
        }
        void RefreshCurrentMapMod() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshCurrentMapMod"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetToDefaultView() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetToDefaultView"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RetrieveModFromModIO(int64_t id, bool forceUpdate, ::BNM::Structures::Mono::Action<::BNM::IL2CPP::Il2CppObject*, ::BNM::IL2CPP::Il2CppObject*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RetrieveModFromModIO"), {"id", "forceUpdate", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id, forceUpdate, callback);
        }
        void set_currentMapMod(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_currentMapMod"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetModProfile(::BNM::IL2CPP::Il2CppObject* mod) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetModProfile"), {"mod"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mod);
        }
        void Show() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Show"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ShowLoadRoomMapPrompt() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowLoadRoomMapPrompt"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateMapDetails(bool refreshScreenState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMapDetails"), {"refreshScreenState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(refreshScreenState);
        }
        ::BNM::IL2CPP::Il2CppObject* UpdateStatus(bool errorEncountered) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("UpdateStatus"), {"errorEncountered"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(errorEncountered);
        }
    };
}
