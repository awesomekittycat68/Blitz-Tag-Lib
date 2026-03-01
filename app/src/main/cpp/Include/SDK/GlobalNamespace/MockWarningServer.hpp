#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EImageVisibility.hpp"
#include "MockWarningServer_ButtonSetup.hpp"
#include "PlayerAgeGateWarningStatus.hpp"
#include "WarningsServer.hpp"

namespace GlobalNamespace {
    struct MockWarningServer : ::GlobalNamespace::WarningsServer {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MockWarningServer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* SHOWN_SCREEN_PREFIX = "screen-shown-";
        static constexpr const char* KID_WARNING_TITLE_KEY = "KID_WARNING_TITLE";
        static constexpr const char* KID_WARNING_CONTINUE_KEY = "KID_WARNING_CONTINUE";
        static constexpr const char* KID_WARNING_PHASE_THREE_IN_COHORT_KEY = "KID_WARNING_PHASE_THREE_IN_COHORT";
        static constexpr const char* KID_WARNING_PHASE_FOUR_RETURNING_PLAYER_KEY = "KID_WARNING_PHASE_FOUR_RETURNING_PLAYER";
        static constexpr const char* KID_WARNING_OPT_IN_FOLLOW_MESSAGE_KEY = "KID_WARNING_OPT_IN_FOLLOW_MESSAGE";
        static constexpr const char* KID_WARNING_FOLLOW_UP_YAY_KEY = "KID_WARNING_FOLLOW_UP_YAY";
        ::BNM::Structures::Mono::String* GetShownScreenPlayerPref() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ShownScreenPlayerPref"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP2 = void*, typename TP3 = void*>
        ::GlobalNamespace::PlayerAgeGateWarningStatus CreateWarningStatus(::BNM::Structures::Mono::String* header, ::BNM::Structures::Mono::String* body, TP2 leftButtonSetup, TP3 rightButtonSetup, ::GlobalNamespace::EImageVisibility showImage, ::BNM::Structures::Mono::Action<>* leftButtonCallback, ::BNM::Structures::Mono::Action<>* rightButtonCallback) {
            static BNM::Method<::GlobalNamespace::PlayerAgeGateWarningStatus> _m = GetClass().GetMethod(O("CreateWarningStatus"), {"header", "body", "leftButtonSetup", "rightButtonSetup", "showImage", "leftButtonCallback", "rightButtonCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(header, body, leftButtonSetup, rightButtonSetup, showImage, leftButtonCallback, rightButtonCallback);
        }
        template <typename TP0 = void*>
        void* FetchPlayerData(TP0 token) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("FetchPlayerData"), {"token"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(token);
        }
        static ::BNM::Structures::Mono::String* get_ShownScreenPlayerPref() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ShownScreenPlayerPref"));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void* GetOptInFollowUpMessage(TP0 token) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetOptInFollowUpMessage"), {"token"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(token);
        }
        bool ShouldShowWarningScreen(int phase, bool inOptInCohort) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldShowWarningScreen"), {"phase", "inOptInCohort"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(phase, inOptInCohort);
        }
    };
}
