#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaGameModes/GameModeType.hpp"
#include "GorillaComputer_ComputerState.hpp"
#include "GorillaComputer_EKidScreenState.hpp"
#include "GorillaComputer_RedemptionResult.hpp"
#include "GorillaKeyboardBindings.hpp"

namespace GorillaNetworking {
    struct GorillaComputer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "GorillaComputer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaNetworking::GorillaComputer* GetInstance() {
            static BNM::Field<::GorillaNetworking::GorillaComputer*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr const char* VERSION_MISMATCH_KEY = "VERSION_MISMATCH";
        static constexpr const char* CONNECTION_ISSUE_KEY = "CONNECTION_ISSUE";
        static constexpr const char* NO_CONNECTION_KEY = "NO_CONNECTION";
        static constexpr const char* STARTUP_INTRO_KEY = "STARTUP_INTRO";
        static constexpr const char* STARTUP_PLAYERS_ONLINE_KEY = "STARTUP_PLAYERS_ONLINE";
        static constexpr const char* STARTUP_USERS_BANNED_KEY = "STARTUP_USERS_BANNED";
        static constexpr const char* STARTUP_PRESS_KEY_KEY = "STARTUP_PRESS_KEY";
        static constexpr const char* STARTUP_PRESS_KEY_SHORT_KEY = "STARTUP_PRESS_KEY_SHORT";
        static constexpr const char* STARTUP_MANAGED_KEY = "STARTUP_MANAGED";
        static constexpr const char* COLOR_SELECT_INTRO_KEY = "COLOR_SELECT_INTRO";
        static constexpr const char* CURRENT_SELECTED_LANGUAGE_KEY = "CURRENT_SELECTED_LANGUAGE";
        static constexpr const char* CHANGE_TO_KEY = "CHANGE_TO";
        static constexpr const char* CONFIRM_LANGUAGE_KEY = "CONFIRM_LANGUAGE";
        static constexpr const char* COLOR_RED_KEY = "COLOR_RED";
        static constexpr const char* COLOR_GREEN_KEY = "COLOR_GREEN";
        static constexpr const char* COLOR_BLUE_KEY = "COLOR_BLUE";
        static constexpr const char* ROOM_INTRO_KEY = "ROOM_INTRO";
        static constexpr const char* ROOM_OPTION_KEY = "ROOM_OPTION";
        static constexpr const char* ROOM_TEXT_CURRENT_ROOM_KEY = "ROOM_TEXT_CURRENT_ROOM";
        static constexpr const char* PLAYERS_IN_ROOM_KEY = "PLAYERS_IN_ROOM";
        static constexpr const char* NOT_IN_ROOM_KEY = "NOT_IN_ROOM";
        static constexpr const char* PLAYERS_ONLINE_KEY = "PLAYERS_ONLINE";
        static constexpr const char* ROOM_TO_JOIN_KEY = "ROOM_TO_JOIN";
        static constexpr const char* ROOM_FULL_KEY = "ROOM_FULL";
        static constexpr const char* ROOM_JOIN_NOT_ALLOWED_KEY = "ROOM_JOIN_NOT_ALLOWED";
        static constexpr const char* LANGUAGE_KEY = "LANGUAGE";
        static constexpr const char* NAME_SCREEN_KEY = "NAME_SCREEN";
        static constexpr const char* CURRENT_NAME_KEY = "CURRENT_NAME";
        static constexpr const char* NEW_NAME_KEY = "NEW_NAME";
        static constexpr const char* TURN_SCREEN_KEY = "TURN_SCREEN";
        static constexpr const char* TURN_SCREEN_TURNING_SPEED_KEY = "TURN_SCREEN_TURNING_SPEED";
        static constexpr const char* TURN_SCREEN_TURN_TYPE_KEY = "TURN_SCREEN_TURN_TYPE";
        static constexpr const char* TURN_SCREEN_TURN_SPEED_KEY = "TURN_SCREEN_TURN_SPEED";
        static constexpr const char* TURN_TYPE_SNAP_TURN_KEY = "TURN_TYPE_SNAP_TURN";
        static constexpr const char* TURN_TYPE_SMOOTH_TURN_KEY = "TURN_TYPE_SMOOTH_TURN";
        static constexpr const char* TURN_TYPE_NO_TURN_KEY = "TURN_TYPE_NO_TURN";
        static constexpr const char* QUEUE_SCREEN_KEY = "QUEUE_SCREEN";
        static constexpr const char* BEAT_OBSTACLE_COURSE_KEY = "BEAT_OBSTACLE_COURSE";
        static constexpr const char* COMPETITIVE_DESC_KEY = "COMPETITIVE_DESC";
        static constexpr const char* QUEUE_SCREEN_ALL_QUEUES_KEY = "QUEUE_SCREEN_ALL_QUEUES";
        static constexpr const char* QUEUE_SCREEN_DEFAULT_QUEUES_KEY = "QUEUE_SCREEN_DEFAULT_QUEUES";
        static constexpr const char* CURRENT_QUEUE_KEY = "CURRENT_QUEUE";
        static constexpr const char* DEFAULT_QUEUE_KEY = "DEFAULT_QUEUE";
        static constexpr const char* MINIGAMES_QUEUE_KEY = "MINIGAMES_QUEUE";
        static constexpr const char* COMPETITIVE_QUEUE_KEY = "COMPETITIVE_QUEUE";
        static constexpr const char* MIC_SCREEN_INTRO_KEY = "MIC_SCREEN_INTRO";
        static constexpr const char* MIC_SCREEN_OPTIONS_KEY = "MIC_SCREEN_OPTIONS";
        static constexpr const char* MIC_SCREEN_CURRENT_KEY = "MIC_SCREEN_CURRENT";
        static constexpr const char* MIC_SCREEN_PUSH_TO_MUTE_TOOLTIP_KEY = "MIC_SCREEN_PUSH_TO_MUTE_TOOLTIP";
        static constexpr const char* MIC_SCREEN_MIC_DISABLED_KEY = "MIC_SCREEN_MIC_DISABLED";
        static constexpr const char* MIC_SCREEN_NO_MIC_KEY = "MIC_SCREEN_NO_MIC";
        static constexpr const char* MIC_SCREEN_NO_PERMISSIONS_KEY = "MIC_SCREEN_NO_PERMISSIONS";
        static constexpr const char* MIC_SCREEN_PUSH_TO_TALK_TOOLTIP_KEY = "MIC_SCREEN_PUSH_TO_TALK_TOOLTIP";
        static constexpr const char* MIC_SCREEN_INPUT_TEST_LABEL_KEY = "MIC_SCREEN_INPUT_TEST_LABEL";
        static constexpr const char* MIC_SCREEN_INPUT_TEST_NO_MIC_KEY = "MIC_SCREEN_INPUT_TEST_NO_MIC";
        static constexpr const char* ALL_CHAT_MIC_KEY = "ALL_CHAT_MIC";
        static constexpr const char* PUSH_TO_TALK_MIC_KEY = "PUSH_TO_TALK_MIC";
        static constexpr const char* PUSH_TO_MUTE_MIC_KEY = "PUSH_TO_MUTE_MIC";
        static constexpr const char* OPEN_MIC_KEY = "OPEN_MIC";
        static constexpr const char* AUTOMOD_SCREEN_INTRO_KEY = "AUTOMOD_SCREEN_INTRO";
        static constexpr const char* AUTOMOD_SCREEN_OPTIONS_KEY = "AUTOMOD_SCREEN_OPTIONS";
        static constexpr const char* AUTOMOD_SCREEN_CURRENT_KEY = "AUTOMOD_SCREEN_CURRENT";
        static constexpr const char* AUTOMOD_AGGRESSIVE_KEY = "AUTOMOD_AGGRESSIVE";
        static constexpr const char* AUTOMOD_MODERATE_KEY = "AUTOMOD_MODERATE";
        static constexpr const char* AUTOMOD_OFF_KEY = "AUTOMOD_OFF";
        static constexpr const char* VOICE_CHAT_SCREEN_INTRO_OLD_KEY = "VOICE_CHAT_SCREEN_INTRO_OLD";
        static constexpr const char* VOICE_CHAT_SCREEN_OPTIONS_OLD_KEY = "VOICE_CHAT_SCREEN_OPTIONS_OLD";
        static constexpr const char* VOICE_CHAT_SCREEN_CURRENT_OLD_KEY = "VOICE_CHAT_SCREEN_CURRENT_OLD";
        static constexpr const char* TRUE_KEY = "TRUE";
        static constexpr const char* FALSE_KEY = "FALSE";
        static constexpr const char* VOICE_CHAT_SCREEN_INTRO_KEY = "VOICE_CHAT_SCREEN_INTRO";
        static constexpr const char* VOICE_CHAT_SCREEN_OPTIONS_KEY = "VOICE_CHAT_SCREEN_OPTIONS";
        static constexpr const char* VOICE_CHAT_SCREEN_CURRENT_KEY = "VOICE_CHAT_SCREEN_CURRENT";
        static constexpr const char* VOICE_OPTION_HUMAN_KEY = "VOICE_OPTION_HUMAN";
        static constexpr const char* VOICE_OPTION_MONKE_KEY = "VOICE_OPTION_MONKE";
        static constexpr const char* VOICE_OPTION_OFF_KEY = "VOICE_OPTION_OFF";
        static constexpr const char* VISUALS_SCREEN_INTRO_KEY = "VISUALS_SCREEN_INTRO";
        static constexpr const char* VISUALS_SCREEN_OPTIONS_KEY = "VISUALS_SCREEN_OPTIONS";
        static constexpr const char* VISUALS_SCREEN_CURRENT_KEY = "VISUALS_SCREEN_CURRENT";
        static constexpr const char* VISUALS_SCREEN_VOLUME_KEY = "VISUALS_SCREEN_VOLUME";
        static constexpr const char* CREDITS_KEY = "CREDITS";
        static constexpr const char* CREDITS_PRESS_ENTER_KEY = "CREDITS_PRESS_ENTER";
        static constexpr const char* CREDITS_CONTINUED_KEY = "CREDITS_CONTINUED";
        static constexpr const char* TIME_SCREEN_KEY = "TIME_SCREEN";
        static constexpr const char* GROUP_SCREEN_LIMITED_OLD_KEY = "GROUP_SCREEN_LIMITED_OLD";
        static constexpr const char* GROUP_SCREEN_FULL_OLD_KEY = "GROUP_SCREEN_FULL_OLD";
        static constexpr const char* GROUP_SCREEN_SELECTION_OLD_KEY = "GROUP_SCREEN_SELECTION_OLD";
        static constexpr const char* PLATFORM_STEAM_KEY = "PLATFORM_STEAM";
        static constexpr const char* PLATFORM_QUEST_KEY = "PLATFORM_QUEST";
        static constexpr const char* PLATFORM_PSVR_KEY = "PLATFORM_PSVR";
        static constexpr const char* PLATFORM_PICO_KEY = "PLATFORM_PICO";
        static constexpr const char* PLATFORM_OCULUS_PC_KEY = "PLATFORM_OCULUS_PC";
        static constexpr const char* SUPPORT_SCREEN_INTRO_KEY = "SUPPORT_SCREEN_INTRO";
        static constexpr const char* SUPPORT_SCREEN_DETAILS_PLAYER_ID_KEY = "SUPPORT_SCREEN_DETAILS_PLAYERID";
        static constexpr const char* SUPPORT_SCREEN_DETAILS_VERSION_KEY = "SUPPORT_SCREEN_DETAILS_VERSION";
        static constexpr const char* SUPPORT_SCREEN_DETAILS_PLATFORM_KEY = "SUPPORT_SCREEN_DETAILS_PLATFORM";
        static constexpr const char* SUPPORT_SCREEN_DETAILS_BUILD_DATE_KEY = "SUPPORT_SCREEN_DETAILS_BUILD_DATE";
        static constexpr const char* SUPPORT_SCREEN_DETAILS_MOTHERSHIP_SESSION_ID_KEY = "SUPPORT_SCREEN_DETAILS_MOTHERSHIP_SESSION_ID";
        static constexpr const char* SUPPORT_SCREEN_INITIAL_KEY = "SUPPORT_SCREEN_INITIAL";
        static constexpr const char* SUPPORT_SCREEN_INITIAL_WARNING_KEY = "SUPPORT_SCREEN_INITIAL_WARNING";
        static constexpr const char* OCULUS_BUILD_CODE_KEY = "OCULUS_BUILD_CODE";
        static constexpr const char* LOADING_SCREEN_KEY = "LOADING_SCREEN";
        static constexpr const char* WARNING_SCREEN_KEY = "WARNING_SCREEN";
        static constexpr const char* WARNING_SCREEN_CONFIRMATION_KEY = "WARNING_SCREEN_CONFIRMATION";
        static constexpr const char* WARNING_SCREEN_TYPE_YES_KEY = "WARNING_SCREEN_TYPE_YES";
        static constexpr const char* FUNCTION_ROOM_KEY = "FUNCTION_ROOM";
        static constexpr const char* FUNCTION_NAME_KEY = "FUNCTION_NAME";
        static constexpr const char* FUNCTION_COLOR_KEY = "FUNCTION_COLOR";
        static constexpr const char* FUNCTION_TURN_KEY = "FUNCTION_TURN";
        static constexpr const char* FUNCTION_MIC_KEY = "FUNCTION_MIC";
        static constexpr const char* FUNCTION_QUEUE_KEY = "FUNCTION_QUEUE";
        static constexpr const char* FUNCTION_GROUP_KEY = "FUNCTION_GROUP";
        static constexpr const char* FUNCTION_VOICE_KEY = "FUNCTION_VOICE";
        static constexpr const char* FUNCTION_AUTOMOD_KEY = "FUNCTION_AUTOMOD";
        static constexpr const char* FUNCTION_ITEMS_KEY = "FUNCTION_ITEMS";
        static constexpr const char* FUNCTION_CREDITS_KEY = "FUNCTION_CREDITS";
        static constexpr const char* FUNCTION_LANGUAGE_KEY = "FUNCTION_LANGUAGE";
        static constexpr const char* FUNCTION_SUPPORT_KEY = "FUNCTION_SUPPORT";
        static constexpr const char* COMPUTER_KEYBOARD_DELETE_KEY = "COMPUTER_KEYBOARD_DELETE";
        static constexpr const char* COMPUTER_KEYBOARD_ENTER_KEY = "COMPUTER_KEYBOARD_ENTER";
        static constexpr const char* COMPUTER_KEYBOARD_OPTION1_KEY = "COMPUTER_KEYBOARD_OPTION1";
        static constexpr const char* COMPUTER_KEYBOARD_OPTION2_KEY = "COMPUTER_KEYBOARD_OPTION2";
        static constexpr const char* COMPUTER_KEYBOARD_OPTION3_KEY = "COMPUTER_KEYBOARD_OPTION3";
        static constexpr const char* WARNING_SCREEN_YES_INPUT_KEY = "WARNING_SCREEN_YES_INPUT";
        static constexpr const char* GROUP_SCREEN_ENTER_PARTY_KEY = "GROUP_SCREEN_ENTER_PARTY";
        static constexpr const char* GROUP_SCREEN_ENTER_NOPARTY_KEY = "GROUP_SCREEN_ENTER_NOPARTY";
        static constexpr const char* GROUP_SCREEN_CANNOT_JOIN_KEY = "GROUP_SCREEN_CANNOT_JOIN";
        static constexpr const char* GROUP_SCREEN_ACTIVE_ZONES_KEY = "GROUP_SCREEN_ACTIVE_ZONES";
        static constexpr const char* GROUP_SCREEN_DESTINATIONS_KEY = "GROUP_SCREEN_DESTINATIONS";
        static constexpr const char* NAME_SCREEN_TOGGLE_NAMETAGS_KEY = "NAME_SCREEN_TOGGLE_NAMETAGS";
        static constexpr const char* NAME_SCREEN_KID_PROHIBITED_VERB_KEY = "NAME_SCREEN_KID_PROHIBITED_VERB";
        static constexpr const char* NAME_SCREEN_DISABLED_KEY = "NAME_SCREEN_DISABLED";
        static constexpr const char* ON_KEY = "ON_KEY";
        static constexpr const char* OFF_KEY = "OFF_KEY";
        static constexpr const char* KID_PROHIBITED_MESSAGE_KEY = "KID_PROHIBITED_MESSAGE";
        static constexpr const char* KID_PERMISSION_NEEDED_KEY = "KID_PERMISSION_NEEDED";
        static constexpr const char* KID_WAITING_PERMISSION_KEY = "KID_WAITING_PERMISSION";
        static constexpr const char* KID_REFRESH_PERMISSIONS_KEY = "KID_REFRESH_PERMISSIONS";
        static constexpr const char* KID_CHECK_AGAIN_COOLDOWN_KEY = "KID_CHECK_AGAIN_COOLDOWN";
        static constexpr const char* STARTUP_TROOP_TEXT_KEY = "STARTUP_TROOP_TEXT";
        static constexpr const char* ROOM_GROUP_TRAVEL_KEY = "ROOM_GROUP_TRAVEL";
        static constexpr const char* ROOM_PARTY_WARNING_KEY = "ROOM_PARTY_WARNING";
        static constexpr const char* ROOM_GAME_LABEL_KEY = "ROOM_GAME_LABEL";
        static constexpr const char* ROOM_SCREEN_KID_PROHIBITED_VERB_KEY = "ROOM_SCREEN_KID_PROHIBITED_VERB";
        static constexpr const char* ROOM_SCREEN_DISABLED_KEY = "ROOM_SCREEN_DISABLED";
        static constexpr const char* REDEMPTION_INTRO_KEY = "REDEMPTION_INTRO";
        static constexpr const char* REDEMPTION_CODE_LABEL_KEY = "REDEMPTION_CODE_LABEL";
        static constexpr const char* REDEMPTION_CODE_INVALID_KEY = "REDEMPTION_CODE_INVALID";
        static constexpr const char* REDEMPTION_CODE_VALIDATING_KEY = "REDEMPTION_CODE_VALIDATING";
        static constexpr const char* REDEMPTION_CODE_ALREADY_USED_KEY = "REDEMPTION_CODE_ALREADY_USED";
        static constexpr const char* REDEMPTION_CODE_TOO_EARLY_KEY = "REDEMPTION_CODE_TOO_EARLY";
        static constexpr const char* REDEMPTION_CODE_TOO_LATE_KEY = "REDEMPTION_CODE_TOO_LATE";
        static constexpr const char* REDEMPTION_CODE_SUCCESS_KEY = "REDEMPTION_CODE_SUCCESS";
        static constexpr const char* LIMITED_ONLINE_FUNC_KEY = "LIMITED_ONLINE_FUNC";
        static constexpr const char* CURRENT_MODE_KEY = "CURRENT_MODE";
        static constexpr const char* SUPPORT_META_ACCOUNT_TYPE_KEY = "SUPPORT_META_ACCOUNT_TYPE";
        static constexpr const char* SUPPORT_FINAL_QUEST_ONE_KEY = "SUPPORT_FINAL_QUEST_ONE";
        static constexpr const char* SUPPORT_KID_ACCOUNT_TYPE_KEY = "SUPPORT_KID_ACCOUNT_TYPE";
        static constexpr const char* VOICE_SCREEN_KID_PROHIBITED_VERB_KEY = "VOICE_SCREEN_KID_PROHIBITED_VERB";
        static constexpr const char* VOICE_SCREEN_DISABLED_KEY = "VOICE_SCREEN_DISABLED";
        static constexpr const char* MIC_SCREEN_GUARDIAN_FEATURE_DESC_KEY = "VOICE_SCREEN_GUARDIAN_FEATURE_DESC";
        static constexpr const char* VOICE_SCREEN_KID_CURRENT_VOICE_KEY = "VOICE_SCREEN_KID_CURRENT_VOICE";
        static constexpr const char* MIC_SCREEN_PUSH_KEY_INSTRUCTIONS_KEY = "MIC_SCREEN_PUSH_KEY_INSTRUCTIONS";
        static constexpr const char* TROOP_SCREEN_INTRO_KEY = "TROOP_SCREEN_INTRO";
        static constexpr const char* TROOP_SCREEN_INSTRUCTIONS_KEY = "TROOP_SCREEN_INSTRUCTIONS";
        static constexpr const char* TROOP_SCREEN_CURRENT_TROOP_KEY = "TROOP_SCREEN_CURRENT_TROOP";
        static constexpr const char* TROOP_SCREEN_IN_QUEUE_KEY = "TROOP_SCREEN_IN_QUEUE";
        static constexpr const char* TROOP_SCREEN_PLAYERS_IN_TROOP_KEY = "TROOP_SCREEN_PLAYERS_IN_TROOP";
        static constexpr const char* TROOP_SCREEN_DEFAULT_QUEUE_KEY = "TROOP_SCREEN_DEFAULT_QUEUE";
        static constexpr const char* TROOP_SCREEN_CURRENT_QUEUE_KEY = "TROOP_SCREEN_CURRENT_QUEUE";
        static constexpr const char* TROOP_SCREEN_TROOP_QUEUE_KEY = "TROOP_SCREEN_TROOP_QUEUE";
        static constexpr const char* TROOP_SCREEN_LEAVE_KEY = "TROOP_SCREEN_LEAVE";
        static constexpr const char* TROOP_SCREEN_NOT_IN_TROOP_KEY = "TROOP_SCREEN_NOT_IN_TROOP";
        static constexpr const char* TROOP_SCREEN_JOIN_TROOP_KEY = "TROOP_SCREEN_JOIN_TROOP";
        static constexpr const char* TROOP_SCREEN_KID_PROHIBITED_VERB_KEY = "TROOP_SCREEN_KID_PROHIBITED_VERB";
        static constexpr const char* TROOP_SCREEN_DISABLED_KEY = "TROOP_SCREEN_DISABLED";
        static constexpr const char* TROOP_SCREEN_KID_DESC_KEY = "TROOP_SCREEN_KID_DESC";
        static constexpr bool HIDE_SCREENS = false;
        static constexpr const char* NAMETAG_PLAYER_PREF_KEY = "nameTagsOn";
        static constexpr bool k_debug_shouldResetSessionCount = false;
        static constexpr bool k_debug_shouldResetGameMode = false;
        static constexpr const char* k_sessionCountKey = "sessionCount";
        static constexpr ::GorillaGameModes::GameModeType k_defaultGameMode = (::GorillaGameModes::GameModeType)11;
        static constexpr ::GorillaGameModes::GameModeType k_noobGameMode = (::GorillaGameModes::GameModeType)1;
        static constexpr int k_noobSessionCountThreshold = 4;
        static constexpr const char* ENABLED_COLOUR = "#85ffa5";
        static constexpr const char* DISABLED_COLOUR = "\"RED\"";
        static constexpr const char* FAMILY_PORTAL_URL = "k-id.com/code";
        static constexpr const char* LANG_SCREEN_TITLE_KEY = "LANG_SCREEN_TITLE";
        static constexpr const char* LANG_SCREEN_INSTRUCTIONS_KEY = "LANG_SCREEN_INSTRUCTIONS";
        static constexpr const char* LANG_SCREEN_CURRENT_LANGUAGE_KEY = "LANG_SCREEN_CURRENT_LANGUAGE";
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetAllowedMapsToJoin() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _method = GetClass().GetMethod(O("get_allowedMapsToJoin"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAllowedMapsToJoin(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_allowedMapsToJoin"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaNetworking::GorillaComputer_ComputerState GetCurrentState() {
            static BNM::Method<::GorillaNetworking::GorillaComputer_ComputerState> _method = GetClass().GetMethod(O("get_currentState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetNameTagPlayerPref() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_NameTagPlayerPref"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetNametagsEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_NametagsEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetNametagsEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_NametagsEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetRedemptionCode() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_RedemptionCode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRedemptionCode(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RedemptionCode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaNetworking::GorillaComputer_RedemptionResult GetRedemptionStatus() {
            static BNM::Method<::GorillaNetworking::GorillaComputer_RedemptionResult> _method = GetClass().GetMethod(O("get_RedemptionStatus"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRedemptionStatus(::GorillaNetworking::GorillaComputer_RedemptionResult value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RedemptionStatus"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetUnableToConnect() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_unableToConnect"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetVersionMismatch() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_versionMismatch"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetVStumpRoomPrepend() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_VStumpRoomPrepend"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::GorillaComputer_StateOrderItem*>* GetActiveOrderList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::GorillaComputer_StateOrderItem*>*> _field = GetClass().GetField(O("_activeOrderList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetAllowedMapsToJoin_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_allowedMapsToJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCachedUnableToConnect() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_cachedUnableToConnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCachedVersionMismatch() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_cachedVersionMismatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::GorillaComputer_EKidScreenState GetCurrentScreentState() {
            static BNM::Field<::GorillaNetworking::GorillaComputer_EKidScreenState> _field = GetClass().GetField(O("_currentScreentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::GorillaComputer_ComputerState>* GetFilteredStates() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::GorillaComputer_ComputerState>*> _field = GetClass().GetField(O("_filteredStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetInterestedPermissionNames() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_interestedPermissionNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLanguagesDisplaySB() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_languagesDisplaySB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLastLocaleCheckedConnect() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_lastLocaleChecked_Connect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLastLocaleCheckedVersion() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_lastLocaleChecked_Version"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextUpdateAttemptTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_nextUpdateAttemptTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPreviousLocalisationSetting() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_previousLocalisationSetting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUpdateAttemptCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("_updateAttemptCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWaitingForUpdatedSession() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_waitingForUpdatedSession"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAllowedInCompetitive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowedInCompetitive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetAnywhereOneWeek() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("anywhereOneWeek"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetAnywhereOneWeekFile() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("anywhereOneWeekFile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetAnywhereTwoWeek() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("anywhereTwoWeek"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetAnywhereTwoWeekFile() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("anywhereTwoWeekFile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetAutoMuteType() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("autoMuteType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBlueText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("blueText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBlueValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("blueValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBuildCode() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("buildCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBuildDate() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("buildDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetButtonFadeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("buttonFadeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCheckIfConnectedSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("checkIfConnectedSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCheckIfDisconnectedSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("checkIfDisconnectedSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetColorCursorLine() {
            static BNM::Field<int> _field = GetClass().GetField(O("colorCursorLine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetComputerScreenRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("computerScreenRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CreditsView* GetCreditsView() {
            static BNM::Field<::GorillaNetworking::CreditsView*> _field = GetClass().GetField(O("creditsView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::GorillaComputer_ComputerState GetCurrentComputerState() {
            static BNM::Field<::GorillaNetworking::GorillaComputer_ComputerState> _field = GetClass().GetField(O("currentComputerState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::WatchableStringSO* GetCurrentGameMode() {
            static BNM::Field<::GlobalNamespace::WatchableStringSO*> _field = GetClass().GetField(O("currentGameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::WatchableStringSO* GetCurrentGameModeText() {
            static BNM::Field<::GlobalNamespace::WatchableStringSO*> _field = GetClass().GetField(O("currentGameModeText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCurrentName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCurrentQueue() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentStateIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentStateIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCurrentTextField() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentTextField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentTroopPopulation() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentTroopPopulation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDefaultUpdateCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("defaultUpdateCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDeltaTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("deltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDidInitializeGameMode() {
            static BNM::Field<bool> _field = GetClass().GetField(O("didInitializeGameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableParticles() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisplaySupport() {
            static BNM::Field<bool> _field = GetClass().GetField(O("displaySupport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetExactOneWeek() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("exactOneWeek"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetExactOneWeekFile() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("exactOneWeekFile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaFriendCollider* GetFriendJoinCollider() {
            static BNM::Field<::GlobalNamespace::GorillaFriendCollider*> _field = GetClass().GetField(O("friendJoinCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetFunctionNames() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("FunctionNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFunctionsCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("FunctionsCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::GorillaText* GetFunctionSelectText() {
            static BNM::Field<::GorillaNetworking::GorillaText*> _field = GetClass().GetField(O("functionSelectText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetGreenText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("greenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGreenValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("greenValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetGroupMapJoin() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("groupMapJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGroupMapJoinIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("groupMapJoinIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        bool GetHasRequestedInitialTroopPopulation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasRequestedInitialTroopPopulation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHighestCharacterCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("highestCharacterCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIncludeUpdatedServerSynchTest() {
            static BNM::Field<int> _field = GetClass().GetField(O("includeUpdatedServerSynchTest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaNetworking::GorillaComputer* GetInstance_f() {
            static BNM::Field<::GorillaNetworking::GorillaComputer*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        float GetInstrumentVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("instrumentVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInternetFailure() {
            static BNM::Field<bool> _field = GetClass().GetField(O("internetFailure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsConnectedToMaster() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isConnectedToMaster"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsSubcribed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSubcribed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastCheckedWifi() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastCheckedWifi"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLastPressedGameMode() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("lastPressedGameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaGameModes::GameModeType GetLastPressedGameModeType() {
            static BNM::Field<::GorillaGameModes::GameModeType> _field = GetClass().GetField(O("lastPressedGameModeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastUpdateTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastUpdateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftHanded() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftHanded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLimitOnlineScreens() {
            static BNM::Field<bool> _field = GetClass().GetField(O("limitOnlineScreens"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLoadingRoutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("LoadingRoutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMicInputTestTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("micInputTestTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMicInputTestTimerThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("micInputTestTimerThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMicUpdateCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("micUpdateCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::ModeSelectButton*>* GetModeSelectButtons() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ModeSelectButton*>*> _field = GetClass().GetField(O("modeSelectButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::PhotonNetworkController* GetNetworkController() {
            static BNM::Field<::GorillaNetworking::PhotonNetworkController*> _field = GetClass().GetField(O("networkController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextPopulationCheckTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("nextPopulationCheckTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOfflineTextInitialString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("offlineTextInitialString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<bool>* GetOnNametagSettingChangedAction() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("onNametagSettingChangedAction"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnServerTimeUpdated() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnServerTimeUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::GorillaComputer_StateOrderItem*>* GetOrderList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::GorillaComputer_StateOrderItem*>*> _field = GetClass().GetField(O("OrderList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPerfMode() {
            static BNM::Field<bool> _field = GetClass().GetField(O("perfMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayerInVirtualStump() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playerInVirtualStump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPointer() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Pointer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetPressedMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("pressedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::GorillaComputer_ComputerState GetPreviousComputerState() {
            static BNM::Field<::GorillaNetworking::GorillaComputer_ComputerState> _field = GetClass().GetField(O("previousComputerState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking::GorillaNetworkJoinTrigger*>* GetPrimaryTriggersByZone() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking::GorillaNetworkJoinTrigger*>*> _field = GetClass().GetField(O("primaryTriggersByZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPttType() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("pttType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRedemptionCode_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("redemptionCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::GorillaComputer_RedemptionResult GetRedemptionResult() {
            static BNM::Field<::GorillaNetworking::GorillaComputer_RedemptionResult> _field = GetClass().GetField(O("redemptionResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRedText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("redText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRedValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("redValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRememberTroopQueueState() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rememberTroopQueueState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRoomFull() {
            static BNM::Field<bool> _field = GetClass().GetField(O("roomFull"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRoomNotAllowed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("roomNotAllowed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRoomToJoin() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("roomToJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSavedName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("savedName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetScreenChanged() {
            static BNM::Field<bool> _field = GetClass().GetField(O("screenChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::GorillaText* GetScreenText() {
            static BNM::Field<::GorillaNetworking::GorillaText*> _field = GetClass().GetField(O("screenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetSessionCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("sessionCount"));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaSpeakerLoudness* GetSpeakerLoudness() {
            static BNM::Field<::GlobalNamespace::GorillaSpeakerLoudness*> _field = GetClass().GetField(O("speakerLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetStartupMillis() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("startupMillis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStartupTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("startupTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStateStack() {
            static BNM::Field<void*> _field = GetClass().GetField(O("stateStack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStateUpdated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("stateUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetTopTroops() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("topTroops"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTroopName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("troopName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTroopPopulationCheckCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("troopPopulationCheckCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTroopQueueActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("troopQueueActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTroopToJoin() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("troopToJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTryGetTimeAgain() {
            static BNM::Field<bool> _field = GetClass().GetField(O("tryGetTimeAgain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetUnpressedMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("unpressedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUpdateCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("updateCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUsersBanned() {
            static BNM::Field<int> _field = GetClass().GetField(O("usersBanned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetVersion() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("version"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetVirtualStumpRoomPrepend() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("virtualStumpRoomPrepend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetVoiceChatOn() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("voiceChatOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetWaitOneSecond() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("waitOneSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetWallScreenRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("wallScreenRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::GorillaText* GetWallScreenText() {
            static BNM::Field<::GorillaNetworking::GorillaText*> _field = GetClass().GetField(O("wallScreenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetWarningConfirmationInputString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("warningConfirmationInputString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetWrongVersionMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("wrongVersionMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveOrderList(::BNM::Structures::Mono::List<::GorillaNetworking::GorillaComputer_StateOrderItem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::GorillaComputer_StateOrderItem*>*> _field = GetClass().GetField(O("_activeOrderList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllowedMapsToJoin_fs(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_allowedMapsToJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedUnableToConnect(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_cachedUnableToConnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedVersionMismatch(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_cachedVersionMismatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentScreentState(::GorillaNetworking::GorillaComputer_EKidScreenState value) {
            static BNM::Field<::GorillaNetworking::GorillaComputer_EKidScreenState> _field = GetClass().GetField(O("_currentScreentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFilteredStates(::BNM::Structures::Mono::List<::GorillaNetworking::GorillaComputer_ComputerState>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::GorillaComputer_ComputerState>*> _field = GetClass().GetField(O("_filteredStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInterestedPermissionNames(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_interestedPermissionNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLanguagesDisplaySB(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_languagesDisplaySB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastLocaleCheckedConnect(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_lastLocaleChecked_Connect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastLocaleCheckedVersion(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_lastLocaleChecked_Version"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextUpdateAttemptTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_nextUpdateAttemptTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousLocalisationSetting(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_previousLocalisationSetting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateAttemptCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_updateAttemptCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitingForUpdatedSession(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_waitingForUpdatedSession"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllowedInCompetitive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowedInCompetitive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnywhereOneWeek(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("anywhereOneWeek"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnywhereOneWeekFile(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("anywhereOneWeekFile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnywhereTwoWeek(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("anywhereTwoWeek"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnywhereTwoWeekFile(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("anywhereTwoWeekFile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoMuteType(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("autoMuteType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlueText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("blueText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlueValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("blueValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuildCode(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("buildCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuildDate(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("buildDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonFadeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("buttonFadeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCheckIfConnectedSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("checkIfConnectedSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCheckIfDisconnectedSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("checkIfDisconnectedSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorCursorLine(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("colorCursorLine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComputerScreenRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("computerScreenRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreditsView(::GorillaNetworking::CreditsView* value) {
            static BNM::Field<::GorillaNetworking::CreditsView*> _field = GetClass().GetField(O("creditsView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentComputerState(::GorillaNetworking::GorillaComputer_ComputerState value) {
            static BNM::Field<::GorillaNetworking::GorillaComputer_ComputerState> _field = GetClass().GetField(O("currentComputerState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentGameMode(::GlobalNamespace::WatchableStringSO* value) {
            static BNM::Field<::GlobalNamespace::WatchableStringSO*> _field = GetClass().GetField(O("currentGameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentGameModeText(::GlobalNamespace::WatchableStringSO* value) {
            static BNM::Field<::GlobalNamespace::WatchableStringSO*> _field = GetClass().GetField(O("currentGameModeText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentQueue(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentStateIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentStateIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentTextField(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentTextField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentTroopPopulation(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentTroopPopulation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultUpdateCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("defaultUpdateCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeltaTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("deltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDidInitializeGameMode(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("didInitializeGameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableParticles(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplaySupport(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("displaySupport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExactOneWeek(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("exactOneWeek"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExactOneWeekFile(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("exactOneWeekFile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendJoinCollider(::GlobalNamespace::GorillaFriendCollider* value) {
            static BNM::Field<::GlobalNamespace::GorillaFriendCollider*> _field = GetClass().GetField(O("friendJoinCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFunctionNames(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("FunctionNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFunctionsCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("FunctionsCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFunctionSelectText(::GorillaNetworking::GorillaText* value) {
            static BNM::Field<::GorillaNetworking::GorillaText*> _field = GetClass().GetField(O("functionSelectText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreenText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("greenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreenValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("greenValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroupMapJoin(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("groupMapJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroupMapJoinIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("groupMapJoinIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        void SetHasRequestedInitialTroopPopulation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasRequestedInitialTroopPopulation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHighestCharacterCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("highestCharacterCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncludeUpdatedServerSynchTest(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("includeUpdatedServerSynchTest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaNetworking::GorillaComputer* value) {
            static BNM::Field<::GorillaNetworking::GorillaComputer*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetInstrumentVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("instrumentVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInternetFailure(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("internetFailure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsConnectedToMaster(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isConnectedToMaster"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsSubcribed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSubcribed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastCheckedWifi(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastCheckedWifi"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPressedGameMode(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("lastPressedGameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPressedGameModeType(::GorillaGameModes::GameModeType value) {
            static BNM::Field<::GorillaGameModes::GameModeType> _field = GetClass().GetField(O("lastPressedGameModeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastUpdateTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastUpdateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHanded(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftHanded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLimitOnlineScreens(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("limitOnlineScreens"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadingRoutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("LoadingRoutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMicInputTestTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("micInputTestTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMicInputTestTimerThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("micInputTestTimerThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMicUpdateCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("micUpdateCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModeSelectButtons(::BNM::Structures::Mono::Array<::GlobalNamespace::ModeSelectButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ModeSelectButton*>*> _field = GetClass().GetField(O("modeSelectButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkController(::GorillaNetworking::PhotonNetworkController* value) {
            static BNM::Field<::GorillaNetworking::PhotonNetworkController*> _field = GetClass().GetField(O("networkController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextPopulationCheckTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nextPopulationCheckTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOfflineTextInitialString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("offlineTextInitialString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnNametagSettingChangedAction(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("onNametagSettingChangedAction"));
            _field.Set(value);
        }
        void SetOnServerTimeUpdated(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnServerTimeUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOrderList(::BNM::Structures::Mono::List<::GorillaNetworking::GorillaComputer_StateOrderItem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::GorillaComputer_StateOrderItem*>*> _field = GetClass().GetField(O("OrderList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerfMode(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("perfMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerInVirtualStump(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playerInVirtualStump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPointer(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Pointer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPressedMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("pressedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousComputerState(::GorillaNetworking::GorillaComputer_ComputerState value) {
            static BNM::Field<::GorillaNetworking::GorillaComputer_ComputerState> _field = GetClass().GetField(O("previousComputerState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrimaryTriggersByZone(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking::GorillaNetworkJoinTrigger*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking::GorillaNetworkJoinTrigger*>*> _field = GetClass().GetField(O("primaryTriggersByZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPttType(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("pttType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRedemptionCode_fs(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("redemptionCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRedemptionResult(::GorillaNetworking::GorillaComputer_RedemptionResult value) {
            static BNM::Field<::GorillaNetworking::GorillaComputer_RedemptionResult> _field = GetClass().GetField(O("redemptionResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRedText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("redText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRedValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("redValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRememberTroopQueueState(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rememberTroopQueueState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomFull(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("roomFull"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomNotAllowed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("roomNotAllowed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomToJoin(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("roomToJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSavedName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("savedName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenChanged(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("screenChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenText(::GorillaNetworking::GorillaText* value) {
            static BNM::Field<::GorillaNetworking::GorillaText*> _field = GetClass().GetField(O("screenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSessionCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sessionCount"));
            _field.Set(value);
        }
        void SetSpeakerLoudness(::GlobalNamespace::GorillaSpeakerLoudness* value) {
            static BNM::Field<::GlobalNamespace::GorillaSpeakerLoudness*> _field = GetClass().GetField(O("speakerLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartupMillis(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("startupMillis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartupTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("startupTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateStack(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("stateStack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateUpdated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("stateUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTopTroops(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("topTroops"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTroopName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("troopName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTroopPopulationCheckCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("troopPopulationCheckCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTroopQueueActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("troopQueueActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTroopToJoin(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("troopToJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTryGetTimeAgain(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("tryGetTimeAgain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnpressedMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("unpressedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("updateCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsersBanned(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("usersBanned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVersion(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("version"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVirtualStumpRoomPrepend(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("virtualStumpRoomPrepend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceChatOn(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("voiceChatOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitOneSecond(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("waitOneSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWallScreenRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("wallScreenRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWallScreenText(::GorillaNetworking::GorillaText* value) {
            static BNM::Field<::GorillaNetworking::GorillaText*> _field = GetClass().GetField(O("wallScreenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWarningConfirmationInputString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("warningConfirmationInputString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWrongVersionMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("wrongVersionMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddSeverTime(int m) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddSeverTime"), {"m"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(m);
        }
        void AutomuteScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AutomuteScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CheckAutoBanListForName(::BNM::Structures::Mono::String* nameToCheck) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckAutoBanListForName"), {"nameToCheck"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(nameToCheck);
        }
        void CheckAutoBanListForPlayerName(::BNM::Structures::Mono::String* nameToCheck) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckAutoBanListForPlayerName"), {"nameToCheck"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nameToCheck);
        }
        void CheckAutoBanListForRoomName(::BNM::Structures::Mono::String* nameToCheck) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckAutoBanListForRoomName"), {"nameToCheck"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nameToCheck);
        }
        void CheckAutoBanListForTroopName(::BNM::Structures::Mono::String* nameToCheck) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckAutoBanListForTroopName"), {"nameToCheck"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nameToCheck);
        }
        void CheckForBadPlayerName(::BNM::Structures::Mono::String* nameToCheck) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckForBadPlayerName"), {"nameToCheck"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nameToCheck);
        }
        void CheckForBadRoomName(::BNM::Structures::Mono::String* nameToCheck) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckForBadRoomName"), {"nameToCheck"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nameToCheck);
        }
        void CheckForBadTroopName(::BNM::Structures::Mono::String* nameToCheck) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckForBadTroopName"), {"nameToCheck"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nameToCheck);
        }
        bool CheckInternetConnection() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckInternetConnection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CheckVoiceChatEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckVoiceChatEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ColourScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ColourScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CompQueueUnlockButtonPress() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CompQueueUnlockButtonPress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreditsScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreditsScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DecreaseState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DecreaseState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DisconnectAfterDelay(float seconds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisconnectAfterDelay"), {"seconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seconds);
        }
        void GeneralFailureMessage(::BNM::Structures::Mono::String* failMessage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GeneralFailureMessage"), {"failMessage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(failMessage);
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* get_allowedMapsToJoin() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("get_allowedMapsToJoin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaNetworking::GorillaComputer_ComputerState get_currentState() {
            static BNM::Method<::GorillaNetworking::GorillaComputer_ComputerState> _m = GetClass().GetMethod(O("get_currentState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_NameTagPlayerPref() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_NameTagPlayerPref"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_NametagsEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_NametagsEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_RedemptionCode() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_RedemptionCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_RedemptionRestrictionTime() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_RedemptionRestrictionTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaNetworking::GorillaComputer_RedemptionResult get_RedemptionStatus() {
            static BNM::Method<::GorillaNetworking::GorillaComputer_RedemptionResult> _m = GetClass().GetMethod(O("get_RedemptionStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_unableToConnect() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_unableToConnect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_versionMismatch() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_versionMismatch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_VStumpRoomPrepend() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_VStumpRoomPrepend"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetCurrentTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetCurrentTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* GetCurrentTroop() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetCurrentTroop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetCurrentTroopPopulation_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetCurrentTroopPopulation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaNetworking::GorillaNetworkJoinTrigger* GetJoinTriggerForZone(::BNM::Structures::Mono::String* zone) {
            static BNM::Method<::GorillaNetworking::GorillaNetworkJoinTrigger*> _m = GetClass().GetMethod(O("GetJoinTriggerForZone"), {"zone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zone);
        }
        ::GorillaNetworking::GorillaNetworkJoinTrigger* GetJoinTriggerFromFullGameModeString(::BNM::Structures::Mono::String* gameModeString) {
            static BNM::Method<::GorillaNetworking::GorillaNetworkJoinTrigger*> _m = GetClass().GetMethod(O("GetJoinTriggerFromFullGameModeString"), {"gameModeString"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameModeString);
        }
        void GetLangaugesList(::BNM::Structures::Mono::String*& langStr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetLangaugesList"), {"langStr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&langStr);
        }
        ::BNM::Structures::Mono::String* GetLanguageScreenLocalisation() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetLanguageScreenLocalisation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetLocalisedLanguageScreen() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetLocalisedLanguageScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetOrderListForScreen(::GorillaNetworking::GorillaComputer_ComputerState currentState) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetOrderListForScreen"), {"currentState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(currentState);
        }
        ::BNM::Structures::Mono::String* GetQueueNameForTroop(::BNM::Structures::Mono::String* troop) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetQueueNameForTroop"), {"troop"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(troop);
        }
        int GetRemainingChars(::BNM::Structures::Mono::String* value, int maxLength) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRemainingChars"), {"value", "maxLength"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value, maxLength);
        }
        ::GorillaNetworking::GorillaNetworkJoinTrigger* GetSelectedMapJoinTrigger() {
            static BNM::Method<::GorillaNetworking::GorillaNetworkJoinTrigger*> _m = GetClass().GetMethod(O("GetSelectedMapJoinTrigger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* GetServerTime() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetServerTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaNetworking::GorillaComputer_ComputerState GetState(int index) {
            static BNM::Method<::GorillaNetworking::GorillaComputer_ComputerState> _m = GetClass().GetMethod(O("GetState"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        int GetStateIndex(::GorillaNetworking::GorillaComputer_ComputerState state) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetStateIndex"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(state);
        }
        void GroupScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GroupScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool GuardianConsentMessage(::BNM::Structures::Mono::String* setupKIDButtonName, ::BNM::Structures::Mono::String* featureDescription) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GuardianConsentMessage"), {"setupKIDButtonName", "featureDescription"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(setupKIDButtonName, featureDescription);
        }
        ::BNM::Coroutine::IEnumerator* HandleInitialTroopQueueState() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("HandleInitialTroopQueueState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void IncreaseState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncreaseState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Initialise() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialise"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitialiseAllRoomStates() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitialiseAllRoomStates"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitialiseLanguageScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitialiseLanguageScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitialiseRoomScreens() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitialiseRoomScreens"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitialiseStrings() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitialiseStrings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeAutoMuteState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeAutoMuteState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeColorState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeColorState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeCreditsState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeCreditsState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeGameMode() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeGameMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeGameMode(::BNM::Structures::Mono::String* gameMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeGameMode"), {"gameMode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameMode);
        }
        void InitializeGroupState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeGroupState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeKIdState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeKIdState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeMicState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeMicState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeNameState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeNameState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeQueueState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeQueueState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeRedeemState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeRedeemState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeRoomState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeRoomState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeStartupState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeStartupState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeSupportState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeSupportState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeTimeState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeTimeState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeTroopState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeTroopState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeTurnState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeTurnState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeVisualsState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeVisualsState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeVoiceState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeVoiceState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsPlayerInVirtualStump() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerInVirtualStump"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsValidTroopName(::BNM::Structures::Mono::String* troop) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidTroopName"), {"troop"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(troop);
        }
        void JoinDefaultQueue() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JoinDefaultQueue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void JoinQueue(::BNM::Structures::Mono::String* queueName, bool isTroopQueue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JoinQueue"), {"queueName", "isTroopQueue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(queueName, isTroopQueue);
        }
        void JoinTroop(::BNM::Structures::Mono::String* newTroopName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JoinTroop"), {"newTroopName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newTroopName);
        }
        void JoinTroopQueue() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JoinTroopQueue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP1 = void*>
        void KID_SetVoiceChatSettingOnStart(bool voiceChatEnabled, TP1 managedBy, bool hasOptedInPreviously) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("KID_SetVoiceChatSettingOnStart"), {"voiceChatEnabled", "managedBy", "hasOptedInPreviously"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(voiceChatEnabled, managedBy, hasOptedInPreviously);
        }
        void KIdScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("KIdScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void KIdScreen_DisplayPermissions() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("KIdScreen_DisplayPermissions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LanguageScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LanguageScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LeaveTroop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LeaveTroop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LimitedOnlineFunctionalityScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LimitedOnlineFunctionalityScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LoadingScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadingScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MicScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MicScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MicScreen_KIdProhibited() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MicScreen_KIdProhibited"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MicScreen_Permission() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MicScreen_Permission"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void NameScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NameScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void NameScreen_KIdProhibited() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NameScreen_KIdProhibited"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void NameScreen_Permission() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NameScreen_Permission"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void NameWarningScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NameWarningScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnConnectedToMasterStuff() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnConnectedToMasterStuff"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnErrorNameCheck(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnErrorNameCheck"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        static void OnErrorShared(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnErrorShared"), {"error"});
            _m.Call(error);
        }
        static void OnFirstJoinedRoom_IncrementSessionCount() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFirstJoinedRoom_IncrementSessionCount"));
            _m.Call();
        }
        void OnGetTimeFailure(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetTimeFailure"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void OnGetTimeSuccess(::PlayFab_ClientModels::GetTimeResult* result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetTimeSuccess"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void OnGroupJoinButtonPress(int mapJoinIndex, ::GlobalNamespace::GorillaFriendCollider* chosenFriendJoinCollider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGroupJoinButtonPress"), {"mapJoinIndex", "chosenFriendJoinCollider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mapJoinIndex, chosenFriendJoinCollider);
        }
        template <typename TP1 = void*>
        void OnKIDSessionUpdated_CustomNicknames(bool showCustomNames, TP1 managedBy) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnKIDSessionUpdated_CustomNicknames"), {"showCustomNames", "managedBy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(showCustomNames, managedBy);
        }
        void OnLanguageChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLanguageChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnModeSelectButtonPress(::BNM::Structures::Mono::String* gameMode, bool leftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModeSelectButtonPress"), {"gameMode", "leftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameMode, leftHand);
        }
        void OnPlayerNameChecked(::PlayFab_CloudScriptModels::ExecuteFunctionResult* result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerNameChecked"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void OnReturnCurrentVersion(::PlayFab_CloudScriptModels::ExecuteFunctionResult* result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReturnCurrentVersion"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void OnRoomNameChecked(::PlayFab_CloudScriptModels::ExecuteFunctionResult* result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRoomNameChecked"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void OnSessionUpdate_GorillaComputer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSessionUpdate_GorillaComputer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTroopNameChecked(::PlayFab_CloudScriptModels::ExecuteFunctionResult* result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTroopNameChecked"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void PlayerCountChangedCallback(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerCountChangedCallback"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void PopState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PressButton(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressButton"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessAutoMuteState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessAutoMuteState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessColorState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessColorState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessCreditsState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessCreditsState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessGroupState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessGroupState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessKIdState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessKIdState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessLanguageState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessLanguageState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessMicState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessMicState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessNameState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessNameState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessNameWarningState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessNameWarningState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessQueueState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessQueueState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessRedemptionState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessRedemptionState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessRoomState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessRoomState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessScreen_SetupKID() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessScreen_SetupKID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProcessStartupState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessStartupState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessSupportState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessSupportState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessTroopState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessTroopState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessTurnState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessTurnState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessVisualsState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessVisualsState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProcessVoiceState(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessVoiceState"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void ProhibitedMessage(::BNM::Structures::Mono::String* verb) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProhibitedMessage"), {"verb"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(verb);
        }
        void QueueScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QueueScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RedemptionScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RedemptionScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshFunctionNames() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshFunctionNames"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void RegisterOnNametagSettingChanged(::BNM::Structures::Mono::Action<bool>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterOnNametagSettingChanged"), {"callback"});
            _m.Call(callback);
        }
        void RegisterPrimaryJoinTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger* trigger) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterPrimaryJoinTrigger"), {"trigger"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(trigger);
        }
        void RequestTroopPopulation(bool forceUpdate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestTroopPopulation"), {"forceUpdate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(forceUpdate);
        }
        void RequestUpdatedPermissions() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestUpdatedPermissions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RestoreFromFailureState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestoreFromFailureState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RoomScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RoomScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RoomScreen_KIdProhibited() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RoomScreen_KIdProhibited"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RoomScreen_Permission() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RoomScreen_Permission"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SaveModAccountData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveModAccountData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_allowedMapsToJoin(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_allowedMapsToJoin"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_NametagsEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_NametagsEnabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_RedemptionCode(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RedemptionCode"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_RedemptionRestrictionTime(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RedemptionRestrictionTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_RedemptionStatus(::GorillaNetworking::GorillaComputer_RedemptionResult value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RedemptionStatus"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetComputerSettingsBySafety(bool isSafety, ::BNM::Structures::Mono::Array<::GorillaNetworking::GorillaComputer_ComputerState>* toFilterOut, bool shouldHide) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetComputerSettingsBySafety"), {"isSafety", "toFilterOut", "shouldHide"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isSafety, toFilterOut, shouldHide);
        }
        void SetGameModeWithoutButton(::BNM::Structures::Mono::String* gameMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGameModeWithoutButton"), {"gameMode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameMode);
        }
        void SetInVirtualStump(bool inVirtualStump) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInVirtualStump"), {"inVirtualStump"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inVirtualStump);
        }
        void SetLimitOnlineScreens_1(bool isLimited) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLimitOnlineScreens"), {"isLimited"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLimited);
        }
        void SetLocalNameTagText(::BNM::Structures::Mono::String* newName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLocalNameTagText"), {"newName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newName);
        }
        void SetNameBySafety(bool isSafety) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNameBySafety"), {"isSafety"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isSafety);
        }
        template <typename TP1 = void*>
        void SetNametagSetting(bool setting, TP1 managedBy, bool hasOptedInPreviously) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNametagSetting"), {"setting", "managedBy", "hasOptedInPreviously"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(setting, managedBy, hasOptedInPreviously);
        }
        void SetVoice(bool setting, bool saveSetting) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVoice"), {"setting", "saveSetting"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(setting, saveSetting);
        }
        template <typename TP1 = void*>
        void SetVoiceChatBySafety(bool voiceChatEnabled, TP1 managedBy) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVoiceChatBySafety"), {"voiceChatEnabled", "managedBy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(voiceChatEnabled, managedBy);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartupScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartupScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SupportScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SupportScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SwitchState(::GorillaNetworking::GorillaComputer_ComputerState newState, bool clearStack) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwitchState"), {"newState", "clearStack"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, clearStack);
        }
        void SwitchToLoadingState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwitchToLoadingState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SwitchToWarningState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwitchToWarningState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TimeScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimeScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TroopScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TroopScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TroopScreen_KIdProhibited() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TroopScreen_KIdProhibited"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TroopScreen_Permission() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TroopScreen_Permission"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TurnScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TurnScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void UnregisterOnNametagSettingChanged(::BNM::Structures::Mono::Action<bool>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterOnNametagSettingChanged"), {"callback"});
            _m.Call(callback);
        }
        void UpdateColor(float red, float green, float blue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateColor"), {"red", "green", "blue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(red, green, blue);
        }
        void UpdateFailureText(::BNM::Structures::Mono::String* failMessage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFailureText"), {"failMessage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(failMessage);
        }
        void UpdateFunctionScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFunctionScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateGameModeText() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateGameModeText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateKidState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateKidState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateNametagSetting(bool newSettingValue, bool saveSetting) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateNametagSetting"), {"newSettingValue", "saveSetting"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newSettingValue, saveSetting);
        }
        void UpdateScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateSession() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSession"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void VisualsScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VisualsScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void VoiceScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VoiceScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void VoiceScreen_KIdProhibited() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VoiceScreen_KIdProhibited"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void VoiceScreen_Permission() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VoiceScreen_Permission"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
