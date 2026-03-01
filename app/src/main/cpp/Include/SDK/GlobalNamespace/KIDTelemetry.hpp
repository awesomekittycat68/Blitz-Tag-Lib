#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct KIDTelemetry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDTelemetry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* SCREEN_SHOWN_EVENT_NAME = "kid_screen_shown";
        static constexpr const char* PHASE_TWO_IN_COHORT_EVENT_NAME = "kid_phase2_incohort";
        static constexpr const char* PHASE_THREE_OPTIONAL_EVENT_NAME = "kid_phase3_optional";
        static constexpr const char* AGE_GATE_EVENT_NAME = "kid_age_gate";
        static constexpr const char* AGE_GATE_CONFIRM_EVENT_NAME = "kid_age_gate_confirm";
        static constexpr const char* AGE_DISCREPENCY_EVENT_NAME = "kid_age_gate_discrepency";
        static constexpr const char* GAME_SETTINGS_EVENT_NAME = "kid_game_settings";
        static constexpr const char* EMAIL_CONFIRM_EVENT_NAME = "kid_email_confirm";
        static constexpr const char* AGE_APPEAL_EVENT_NAME = "kid_age_appeal";
        static constexpr const char* APPEAL_AGE_GATE_EVENT_NAME = "kid_age_appeal_age_gate";
        static constexpr const char* APPEAL_ENTER_EMAIL_EVENT_NAME = "kid_age_appeal_enter_email";
        static constexpr const char* APPEAL_CONFIRM_EMAIL_EVENT_NAME = "kid_age_appeal_confirm_email";
        static constexpr const char* GAME_VERSION_CUSTOM_TAG_PREFIX = "game_version_";
        static constexpr const char* METRIC_ACTION_CUSTOM_TAG_PREFIX = "metric_action_";
        static constexpr const char* WARNING_SCREEN_CUSTOM_TAG = "kid_warning_screen";
        static constexpr const char* PHASE_TWO = "kid_phase_2";
        static constexpr const char* PHASE_THREE = "kid_phase_3";
        static constexpr const char* PHASE_FOUR = "kid_phase_4";
        static constexpr const char* AGE_GATE_CUSTOM_TAG = "kid_age_gate";
        static constexpr const char* SETTINGS_CUSTOM_TAG = "kid_settings";
        static constexpr const char* SETUP_CUSTOM_TAG = "kid_setup";
        static constexpr const char* APPEAL_CUSTOM_TAG = "kid_age_appeal";
        static constexpr const char* SCREEN_TYPE_BODY_DATA = "screen";
        static constexpr const char* OPT_IN_CHOICE_BODY_DATA = "opt_in_choice";
        static constexpr const char* BUTTON_PRESSED_BODY_DATA = "button_pressed";
        static constexpr const char* MISMATCH_EXPECTED_BODY_DATA = "mismatch_expected";
        static constexpr const char* MISMATCH_ACTUAL_BODY_DATA = "mismatch_actual";
        static constexpr const char* AGE_DECLARED_BODY_DATA = "age_declared";
        static constexpr const char* LEARN_MORE_URL_PRESSED_BODY_DATA = "learn_more_url_pressed";
        static constexpr const char* SCREEN_SHOWN_REASON_BODY_DATA = "screen_shown_reason";
        static constexpr const char* SUBMITTED_AGE_BODY_DATA = "submitted_age";
        static constexpr const char* CORRECT_AGE_BODY_DATA = "correct_age";
        static constexpr const char* APPEAL_EMAIL_TYPE_BODY_DATA = "email_type";
        static constexpr const char* SHOWN_SETTINGS_SCREEN = "saw_game_settings";
        static constexpr const char* KID_STATUS_BODY_DATA = "kid_status";
        static constexpr const char* PERMISSION_MANAGED_BY_BODY_DATA = "permission_managedby_";
        static constexpr const char* PERMISSION_ENABLED_BODY_DATA = "permission_eneabled_";
        ::BNM::Structures::Mono::String* GetClosedMetricActionCustomTag() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_Closed_MetricActionCustomTag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
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
        ::BNM::Structures::Mono::String* GetOpenMetricActionCustomTag() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_Open_MetricActionCustomTag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetUpdatedMetricActionCustomTag() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_Updated_MetricActionCustomTag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::BNM::Structures::Mono::String* get_Closed_MetricActionCustomTag() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_Closed_MetricActionCustomTag"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_GameEnvironment() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_GameEnvironment"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_GameVersionCustomTag() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_GameVersionCustomTag"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_Open_MetricActionCustomTag() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_Open_MetricActionCustomTag"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_Updated_MetricActionCustomTag() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_Updated_MetricActionCustomTag"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetPermissionEnabledBodyData(::BNM::Structures::Mono::String* permission) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPermissionEnabledBodyData"), {"permission"});
            return _m.Call(permission);
        }
        static ::BNM::Structures::Mono::String* GetPermissionManagedByBodyData(::BNM::Structures::Mono::String* permission) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPermissionManagedByBodyData"), {"permission"});
            return _m.Call(permission);
        }
    };
}
