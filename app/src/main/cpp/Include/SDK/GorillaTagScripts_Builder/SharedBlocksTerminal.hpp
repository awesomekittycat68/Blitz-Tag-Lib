#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GTZone.hpp"
#include "SharedBlocksKeyboardBindings.hpp"
#include "SharedBlocksTerminal_TerminalState.hpp"

namespace GorillaTagScripts_Builder {
    struct SharedBlocksTerminal : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "SharedBlocksTerminal");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* SHARE_BLOCKS_TERMINAL_PROMPT_KEY = "SHARE_BLOCKS_TERMINAL_PROMPT";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_CONTROL_BUTTON_KEY = "SHARE_BLOCKS_TERMINAL_CONTROL_BUTTON";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_CONTROL_BUTTON_AVAILABLE_KEY = "SHARE_BLOCKS_TERMINAL_CONTROL_BUTTON_AVAILABLE";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_CONTROL_BUTTON_LOCKED_KEY = "SHARE_BLOCKS_TERMINAL_CONTROL_BUTTON_LOCKED";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_STATUS_SEARCH_KEY = "SHARE_BLOCKS_TERMINAL_STATUS_SEARCH";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_STATUS_MAP_FOUND_KEY = "SHARE_BLOCKS_TERMINAL_STATUS_MAP_FOUND";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_STATUS_MAP_NOT_FOUND_KEY = "SHARE_BLOCKS_TERMINAL_STATUS_MAP_NOT_FOUND";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_STATUS_LOADING_KEY = "SHARE_BLOCKS_TERMINAL_STATUS_LOADING";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_STATUS_LOAD_SUCCESS_KEY = "SHARE_BLOCKS_TERMINAL_STATUS_LOAD_SUCCESS";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_STATUS_LOAD_FAILED_KEY = "SHARE_BLOCKS_TERMINAL_STATUS_LOAD_FAILED";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_STATUS_NOT_CONTROLLER_KEY = "SHARE_BLOCKS_TERMINAL_STATUS_NOT_CONTROLLER";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_STATUS_NO_SELECTION_KEY = "SHARE_BLOCKS_TERMINAL_STATUS_NO_SELECTION";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_STATUS_IN_PROGRESS_KEY = "SHARE_BLOCKS_TERMINAL_STATUS_IN_PROGRESS";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_STATUS_WAIT_KEY = "SHARE_BLOCKS_TERMINAL_STATUS_WAIT";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_LOBBY_LOAD_KEY = "SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_LOBBY_LOAD";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_LOBBY_UNLOAD_KEY = "SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_LOBBY_UNLOAD";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_ROOM_LOAD_KEY = "SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_ROOM_LOAD";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_ROOM_UNLOAD_KEY = "SHARE_BLOCKS_TERMINAL_STATUS_DISALLOWED_ROOM_UNLOAD";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_SEARCH_LOADED_LABEL_KEY = "SHARE_BLOCKS_TERMINAL_SEARCH_LOADED_LABEL";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_SEARCH_LOADED_NONE_KEY = "SHARE_BLOCKS_TERMINAL_SEARCH_LOADED_NONE";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_SEARCH_MAP_SEARCH_KEY = "SHARE_BLOCKS_TERMINAL_SEARCH_MAP_SEARCH";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_SEARCH_VOTES_KEY = "SHARE_BLOCKS_TERMINAL_SEARCH_VOTES";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_SEARCH_MAPS_LABEL_KEY = "SHARE_BLOCKS_TERMINAL_SEARCH_MAPS_LABEL";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_SEARCH_LOBBY_TEXT_KEY = "SHARE_BLOCKS_TERMINAL_SEARCH_LOBBY_TEXT";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_ERROR_TITLE_KEY = "SHARE_BLOCKS_TERMINAL_ERROR_TITLE";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_ERROR_INSTRUCTIONS_KEY = "SHARE_BLOCKS_TERMINAL_ERROR_INSTRUCTIONS";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_ERROR_BACK_KEY = "SHARE_BLOCKS_TERMINAL_ERROR_BACK";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_INFO_TITLE_KEY = "SHARE_BLOCKS_TERMINAL_INFO_TITLE";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_INFO_DATA_KEY = "SHARE_BLOCKS_TERMINAL_INFO_DATA";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_INFO_ENTER_KEY = "SHARE_BLOCKS_TERMINAL_INFO_ENTER";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_OTHER_DRIVER_KEY = "SHARE_BLOCKS_TERMINAL_OTHER_DRIVER";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_CONTROLLER_LABEL_KEY = "SHARE_BLOCKS_TERMINAL_CONTROLLER_LABEL";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_SEARCH_LOBBY_TEXT_FORMAT_KEY = "SHARE_BLOCKS_TERMINAL_SEARCH_LOBBY_TEXT_FORMAT";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_SEARCH_ERROR_INVALID_LENGTH_KEY = "SHARE_BLOCKS_TERMINAL_SEARCH_ERROR_INVALID_LENGTH";
        static constexpr const char* SHARE_BLOCKS_TERMINAL_SEARCH_ERROR_INVALID_ID_KEY = "SHARE_BLOCKS_TERMINAL_SEARCH_ERROR_INVALID_ID";
        static constexpr int NO_DRIVER_ID = -2;
        static constexpr const char* POINTER = "> ";
        int GetGetDriverID() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_GetDriverID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsDriver() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsDriver"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsTerminalLocked() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsTerminalLocked"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetPlayersInLobby() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_playersInLobby"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* GetSelectedMap() {
            static BNM::Method<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*> _method = GetClass().GetMethod(O("get_SelectedMap"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::LocalizedText* GetCurrentDriverLoc() {
            static BNM::Field<::GlobalNamespace::LocalizedText*> _field = GetClass().GetField(O("_currentDriverLoc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAwaitingWebRequest() {
            static BNM::Field<bool> _field = GetClass().GetField(O("awaitingWebRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCachedLocalPlayerID() {
            static BNM::Field<int> _field = GetClass().GetField(O("cachedLocalPlayerID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetCurrentDriverLabel() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("currentDriverLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetCurrentDriverText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("currentDriverText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetCurrentMapSelectionText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("currentMapSelectionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::SharedBlocksScreen* GetCurrentScreen() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksScreen*> _field = GetClass().GetField(O("currentScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetDriverRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("driverRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLoadingMap() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLoadingMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsTerminalLocked_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isTerminalLocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastLoadTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastLoadTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTable* GetLinkedTable() {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("linkedTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLoadMapCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("loadMapCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaFriendCollider* GetLobbyTrigger() {
            static BNM::Field<::GlobalNamespace::GorillaFriendCollider*> _field = GetClass().GetField(O("lobbyTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::SharedBlocksTerminal_SharedBlocksTerminalState* GetLocalState() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksTerminal_SharedBlocksTerminalState*> _field = GetClass().GetField(O("localState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::SharedBlocksScreen* GetNoDriverScreen() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksScreen*> _field = GetClass().GetField(O("noDriverScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<bool>* GetOnMapLoadComplete() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnMapLoadComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayersInRoom() {
            static BNM::Field<int> _field = GetClass().GetField(O("playersInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRequestedMapID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("requestedMapID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetSb() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sb"));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::SharedBlocksScreenSearch* GetSearchScreen() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksScreenSearch*> _field = GetClass().GetField(O("searchScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* GetSelectedMap_f() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*> _field = GetClass().GetField(O("selectedMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetStatusMessageText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("statusMessageText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetTableZone() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("tableZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetTempRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetTerminalControlButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("terminalControlButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseNametags() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useNametags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentDriverLoc(::GlobalNamespace::LocalizedText* value) {
            static BNM::Field<::GlobalNamespace::LocalizedText*> _field = GetClass().GetField(O("_currentDriverLoc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAwaitingWebRequest(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("awaitingWebRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedLocalPlayerID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("cachedLocalPlayerID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentDriverLabel(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("currentDriverLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentDriverText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("currentDriverText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentMapSelectionText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("currentMapSelectionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentScreen(::GorillaTagScripts_Builder::SharedBlocksScreen* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksScreen*> _field = GetClass().GetField(O("currentScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDriverRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("driverRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLoadingMap(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLoadingMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsTerminalLocked(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isTerminalLocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastLoadTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastLoadTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinkedTable(::GorillaTagScripts::BuilderTable* value) {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("linkedTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadMapCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("loadMapCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLobbyTrigger(::GlobalNamespace::GorillaFriendCollider* value) {
            static BNM::Field<::GlobalNamespace::GorillaFriendCollider*> _field = GetClass().GetField(O("lobbyTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalState(::GorillaTagScripts_Builder::SharedBlocksTerminal_SharedBlocksTerminalState* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksTerminal_SharedBlocksTerminalState*> _field = GetClass().GetField(O("localState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoDriverScreen(::GorillaTagScripts_Builder::SharedBlocksScreen* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksScreen*> _field = GetClass().GetField(O("noDriverScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnMapLoadComplete(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnMapLoadComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayersInRoom(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playersInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestedMapID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("requestedMapID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSb(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sb"));
            _field.Set(value);
        }
        void SetSearchScreen(::GorillaTagScripts_Builder::SharedBlocksScreenSearch* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksScreenSearch*> _field = GetClass().GetField(O("searchScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedMap(::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*> _field = GetClass().GetField(O("selectedMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatusMessageText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("statusMessageText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTableZone(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("tableZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTempRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            _field.Set(value);
        }
        void SetTerminalControlButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("terminalControlButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseNametags(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useNametags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool AreAllPlayersInLobby() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AreAllPlayersInLobby"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CanChangeMapState(bool load, ::BNM::Structures::Mono::String*& disallowedReason) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanChangeMapState"), {"load", "disallowedReason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(load, &disallowedReason);
        }
        int get_GetDriverID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_GetDriverID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsDriver() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsDriver"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsTerminalLocked() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsTerminalLocked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_playersInLobby() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_playersInLobby"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* get_SelectedMap() {
            static BNM::Method<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*> _m = GetClass().GetMethod(O("get_SelectedMap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetLobbyText() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetLobbyText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTagScripts::BuilderTable* GetTable() {
            static BNM::Method<::GorillaTagScripts::BuilderTable*> _m = GetClass().GetMethod(O("GetTable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Init(::GorillaTagScripts::BuilderTable* table) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"table"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(table);
        }
        bool IsLocalPlayerInLobby() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLocalPlayerInLobby"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsPlayerDriver(::Photon_Realtime::Player* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerDriver"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::BNM::Structures::Mono::String* MapIDToDisplayedString(::BNM::Structures::Mono::String* mapID) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("MapIDToDisplayedString"), {"mapID"});
            return _m.Call(mapID);
        }
        void OnBackButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBackButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDeleteButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDeleteButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDownButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDownButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDriverNameChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDriverNameChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLetterPressed(::BNM::Structures::Mono::String* letter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLetterPressed"), {"letter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(letter);
        }
        void OnLoadMapPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLoadMapPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnNumberPressed(int number) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnNumberPressed"), {"number"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(number);
        }
        void OnPlayerMapRequestComplete(::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerMapRequestComplete"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void OnReturnedToSinglePlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReturnedToSinglePlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSelectButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSelectButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSharedBlocksMapLoaded(::BNM::Structures::Mono::String* mapID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSharedBlocksMapLoaded"), {"mapID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mapID);
        }
        void OnSharedBlocksMapLoadFailed(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSharedBlocksMapLoadFailed"), {"message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(message);
        }
        void OnSharedBlocksMapLoadStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSharedBlocksMapLoadStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTerminalControlPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTerminalControlPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUpButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PressButton(::GorillaTagScripts_Builder::SharedBlocksKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressButton"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void RefreshActiveScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshActiveScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshDriverNickname() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshDriverNickname"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshLobbyCount() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshLobbyCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetTerminalControl() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetTerminalControl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SelectMapIDAndOpenInfo(::BNM::Structures::Mono::String* mapID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectMapIDAndOpenInfo"), {"mapID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mapID);
        }
        void SetStatusText(::BNM::Structures::Mono::String* text) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStatusText"), {"text"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(text);
        }
        void SetTerminalDriver(int playerNum) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTerminalDriver"), {"playerNum"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerNum);
        }
        void SetTerminalState(::GorillaTagScripts_Builder::SharedBlocksTerminal_TerminalState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTerminalState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateTerminalButton() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTerminalButton"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ValidateLoadMapRequest(::BNM::Structures::Mono::String* mapID, int playerNum) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateLoadMapRequest"), {"mapID", "playerNum"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(mapID, playerNum);
        }
        bool ValidateTerminalControlRequest(bool locked, int playerNumber) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateTerminalControlRequest"), {"locked", "playerNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(locked, playerNumber);
        }
    };
}
