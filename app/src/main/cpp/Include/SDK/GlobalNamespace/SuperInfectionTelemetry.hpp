#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SuperInfectionTelemetry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SuperInfectionTelemetry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* ROOM_LEFT_EVENT_NAME = "super_infection_room_left";
        static constexpr const char* INTERVAL_EVENT_NAME = "super_infection_interval";
        static constexpr const char* SI_PURCHASE_EVENT_NAME = "super_infection_purchase";
        static constexpr const char* GAME_VERSION_CUSTOM_TAG_PREFIX = "game_version_";
        static constexpr const char* METRIC_ACTION_CUSTOM_TAG_PREFIX = "metric_action_";
        static constexpr const char* SUPER_INFECTION_PREPEND = "super_infection_";
        static constexpr const char* SUPER_INFECTION_GAME_ID_BODY_DATA = "super_infection_round_id";
        static constexpr const char* EVENT_TIMESTAMP_BODY_DATA = "event_timestamp";
        static constexpr const char* TOTAL_PLAY_TIME_BODY_DATA = "total_play_time";
        static constexpr const char* ROOM_PLAY_TIME_BODY_DATA = "room_play_time";
        static constexpr const char* SESSION_PLAY_TIME_BODY_DATA = "session_play_time";
        static constexpr const char* INTERVAL_PLAY_TIME_BODY_DATA = "interval_play_time";
        static constexpr const char* TERMINAL_TOTAL_TIME_BODY_DATA = "terminal_total_time";
        static constexpr const char* TERMINAL_INTERVAL_TIME_BODY_DATA = "terminal_interval_time";
        static constexpr const char* TIME_USING_GADGET_TYPE_TOTAL_BODY_DATA = "time_holding_gadget_type_total";
        static constexpr const char* TIME_USING_GADGET_TYPE_INTERVAL_BODY_DATA = "time_holding_gadget_type_interval";
        static constexpr const char* TIME_HOLDING_OWN_GADGETS_TOTAL_BODY_DATA = "time_holding_own_gadgets_total";
        static constexpr const char* TIME_HOLDING_OWN_GADGETS_INTERVAL_BODY_DATA = "time_holding_own_gadgets_interval";
        static constexpr const char* TIME_HOLDING_OTHERS_GADGETS_TOTAL_BODY_DATA = "time_holding_others_gadgets_total";
        static constexpr const char* TIME_HOLDING_OTHERS_GADGETS_INTERVAL_BODY_DATA = "time_holding_others_gadgets_interval";
        static constexpr const char* TAGS_HOLDING_GADGET_TYPE_TOTAL_BODY_DATA = "tags_holding_gadget_type_total";
        static constexpr const char* TAGS_HOLDING_GADGET_TYPE_INTERVAL_BODY_DATA = "tags_holding_gadget_type_interval";
        static constexpr const char* TAGS_HOLDING_OWN_GADGETS_TOTAL_BODY_DATA = "tags_holding_own_gadgets_total";
        static constexpr const char* TAGS_HOLDING_OWN_GADGETS_INTERVAL_BODY_DATA = "tags_holding_own_gadgets_interval";
        static constexpr const char* TAGS_HOLDING_OTHERS_GADGETS_TOTAL_BODY_DATA = "tags_holding_others_gadgets_total";
        static constexpr const char* TAGS_HOLDING_OTHERS_GADGETS_INTERVAL_BODY_DATA = "tags_holding_others_gadgets_interval";
        static constexpr const char* RESOURCE_TYPE_COLLECTED_TOTAL_BODY_DATA = "resource_type_collected_total";
        static constexpr const char* RESOURCE_TYPE_COLLECTED_INTERVAL_BODY_DATA = "resource_type_collected_interval";
        static constexpr const char* ROUNDS_PLAYED_TOTAL_BODY_DATA = "rounds_played_total";
        static constexpr const char* ROUNDS_PLAYED_INTERVAL_BODY_DATA = "rounds_played_interval";
        static constexpr const char* UNLOCKED_NODES_BODY_DATA = "unlocked_nodes";
        static constexpr const char* PLAYER_COUNT_BODY_DATA = "player_count";
        static constexpr const char* SI_SHINY_ROCK_COST = "si_shiny_rock_cost";
        static constexpr const char* SI_PURCHASE_TYPE = "si_purchase_type";
        static constexpr const char* SI_TECH_POINTS_PURCHASED = "si_tech_points_purchased";
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
