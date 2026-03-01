#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LocalizationTelemetry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LocalizationTelemetry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* LANGUAGE_CHANGED_EVENT_NAME = "language_changed";
        static constexpr const char* GAME_VERSION_CUSTOM_TAG_PREFIX = "game_version_";
        static constexpr const char* STARTING_LANGUAGE_BODY_DATA = "starting_language";
        static constexpr const char* NEW_LANGUAGE_BODY_DATA = "new_language";
        ::BNM::Structures::Mono::String* GetGameVersionCustomTag() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_GameVersionCustomTag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::BNM::Structures::Mono::String* get_GameVersionCustomTag() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_GameVersionCustomTag"));
            return _m.Call();
        }
    };
}
