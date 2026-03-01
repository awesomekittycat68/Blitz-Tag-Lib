#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GhostReactorTelemetry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactorTelemetry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* SHIFT_START_EVENT_NAME = "ghost_game_start";
        static constexpr const char* SHIFT_END_EVENT_NAME = "ghost_game_end";
        static constexpr const char* FLOOR_START_EVENT_NAME = "ghost_floor_start";
        static constexpr const char* FLOOR_END_EVENT_NAME = "ghost_floor_end";
        static constexpr const char* TOOL_PURCHASED_EVENT_NAME = "ghost_tool_purchased";
        static constexpr const char* RANK_UP_EVENT_NAME = "ghost_game_rank_up";
        static constexpr const char* TOOL_UNLOCK_EVENT_NAME = "ghost_game_tool_unlock";
        static constexpr const char* POD_UPGRADE_PURCHASED_EVENT_NAME = "ghost_pod_upgrade_purchased";
        static constexpr const char* TOOL_UPGRADE_EVENT_NAME = "ghost_game_tool_upgrade";
        static constexpr const char* CHAOS_SEED_START_EVENT_NAME = "ghost_chaos_seed_start";
        static constexpr const char* CHAOS_JUICE_COLLECTED_EVENT_NAME = "ghost_chaos_juice_collected";
        static constexpr const char* OVERDRIVE_PURCHASED_EVENT_NAME = "ghost_overdrive_purchased";
        static constexpr const char* CREDITS_REFILL_PURCHASED_EVENT_NAME = "ghost_credits_refill_purchased";
        static constexpr const char* GAME_VERSION_CUSTOM_TAG_PREFIX = "game_version_";
        static constexpr const char* METRIC_ACTION_CUSTOM_TAG_PREFIX = "metric_action_";
        static constexpr const char* GHOST_GAME_ID_BODY_DATA = "ghost_game_id";
        static constexpr const char* EVENT_TIMESTAMP_BODY_DATA = "event_timestamp";
        static constexpr const char* INITIAL_CORES_BALANCE_BODY_DATA = "initial_cores_balance";
        static constexpr const char* FINAL_CORES_BALANCE_BODY_DATA = "final_cores_balance";
        static constexpr const char* CORES_SPENT_WAITING_IN_BREAKROOM_BODY_DATA = "cores_spent_waiting_in_breakroom";
        static constexpr const char* CORES_COLLECTED_FROM_GHOSTS_BODY_DATA = "cores_collected_from_ghosts";
        static constexpr const char* CORES_COLLECTED_FROM_GATHERING_BODY_DATA = "cores_collected_from_gathering";
        static constexpr const char* CORES_SPENT_ON_ITEMS_BODY_DATA = "cores_spent_on_items";
        static constexpr const char* CORES_SPENT_ON_GATES_BODY_DATA = "cores_spent_on_gates";
        static constexpr const char* CORES_SPENT_ON_LEVELS_BODY_DATA = "cores_spent_on_levels";
        static constexpr const char* CORES_GIVEN_TO_OTHERS_BODY_DATA = "cores_given_to_others";
        static constexpr const char* CORES_RECEIVED_FROM_OTHERS_BODY_DATA = "cores_received_from_others";
        static constexpr const char* SHIFT_CUT_DATA = "shift_cut_data";
        static constexpr const char* GATES_UNLOCKED_BODY_DATA = "gates_unlocked";
        static constexpr const char* DIED_BODY_DATA = "died";
        static constexpr const char* CAUGHT_IN_ANAMOLE_BODY_DATA = "caught_in_anamole";
        static constexpr const char* ITEMS_PURCHASED_BODY_DATA = "items_purchased";
        static constexpr const char* LEVELS_UNLOCKED_BODY_DATA = "levels_unlocked";
        static constexpr const char* NUMBER_OF_PLAYERS_BODY_DATA = "number_of_players";
        static constexpr const char* START_AT_BEGINNING_BODY_DATA = "start_at_beginning";
        static constexpr const char* SECONDS_INTO_SHIFT_AT_JOIN_BODY_DATA = "seconds_into_shift_at_join";
        static constexpr const char* REASON_BODY_DATA = "reason";
        static constexpr const char* PLAY_DURATION_BODY_DATA = "play_duration";
        static constexpr const char* STARTED_LATE_BODY_DATA = "started_late";
        static constexpr const char* TIME_STARTED_BODY_DATA = "time_started";
        static constexpr const char* CORES_COLLECTED_BODY_DATA = "cores_collected";
        static constexpr const char* MAX_NUMBER_IN_GAME_BODY_DATA = "max_number_in_game";
        static constexpr const char* END_NUMBER_IN_GAME_BODY_DATA = "end_number_in_game";
        static constexpr const char* ITEMS_PICKED_UP_BODY_DATA = "items_picked_up";
        static constexpr const char* FLOOR_JOINED_BODY_DATA = "floor_joined";
        static constexpr const char* PLAYER_RANK_BODY_DATA = "player_rank";
        static constexpr const char* TOTAL_CORES_COLLECTED_BY_PLAYER_BODY_DATA = "total_cores_collected_by_player";
        static constexpr const char* TOTAL_CORES_COLLECTED_BY_GROUP_BODY_DATA = "total_cores_collected_by_group";
        static constexpr const char* TOTAL_CORES_SPENT_BY_PLAYER_BODY_DATA = "total_cores_spent_by_player";
        static constexpr const char* TOTAL_CORES_SPENT_BY_GROUP_BODY_DATA = "total_cores_spent_by_group";
        static constexpr const char* FLOOR_BODY_DATA = "floor";
        static constexpr const char* PRESET_BODY_DATA = "preset";
        static constexpr const char* MODIFIER_BODY_DATA = "modifier";
        static constexpr const char* SECTION_BODY_DATA = "section";
        static constexpr const char* XP_GAINED_BODY_DATA = "xp_gained";
        static constexpr const char* CHAOS_SEEDS_COLLECTED_BODY_DATA = "chaos_seeds_collected";
        static constexpr const char* OBJECTIVES_COMPLETED_BODY_DATA = "objectives_completed";
        static constexpr const char* REVIVES_BODY_DATA = "revives";
        static constexpr const char* TOOL_BODY_DATA = "tool";
        static constexpr const char* TOOL_LEVEL_BODY_DATA = "tool_level";
        static constexpr const char* CORES_SPENT_BODY_DATA = "cores_spent";
        static constexpr const char* SHINY_ROCKS_SPENT_BODY_DATA = "shiny_rocks_spent";
        static constexpr const char* NEW_RANK_BODY_DATA = "new_rank";
        static constexpr const char* UPGRADE_BODY_DATA = "upgrade";
        static constexpr const char* GRIFT_PRICE_BODY_DATA = "grift_price";
        static constexpr const char* TYPE_BODY_DATA = "type";
        static constexpr const char* NEW_LEVEL_BODY_DATA = "new_level";
        static constexpr const char* JUICE_SPENT_BODY_DATA = "juice_spent";
        static constexpr const char* GRIFT_SPENT_BODY_DATA = "grift_spent";
        static constexpr const char* CHAOS_SEEDS_IN_QUEUE_BODY_DATA = "chaos_seeds_in_queue";
        static constexpr const char* UNLOCK_TIME_BODY_DATA = "unlock_time";
        static constexpr const char* SHINY_ROCKS_USED_BODY_DATA = "shiny_rocks_used";
        static constexpr const char* JUICE_COLLECTED_BODY_DATA = "juice_collected";
        static constexpr const char* CORES_PROCESSED_BY_OVERDRIVE_BODY_DATA = "cores_processed_by_overdrive";
        static constexpr const char* FINAL_CREDITS_BODY_DATA = "final_credits";
        static constexpr const char* IS_PRIVATE_ROOM_BODY_DATA = "is_private_room";
        static constexpr const char* NUM_SHIFTS_PLAYED_BODY_DATA = "num_shifts_played";
        ::BNM::Structures::Mono::String* GetGameEnvironment() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_GameEnvironment"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetGameVersionCustomTag() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_GameVersionCustomTag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::BNM::Structures::Mono::String* get_GameEnvironment() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_GameEnvironment"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_GameVersionCustomTag() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_GameVersionCustomTag"));
            return _m.Call();
        }
    };
}
