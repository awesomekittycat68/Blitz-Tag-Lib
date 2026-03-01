#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct GroupPresence : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "GroupPresence");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Oculus_Platform::Request* Clear() {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("Clear"));
            return _m.Call();
        }
        static ::Oculus_Platform::Request* LaunchMultiplayerErrorDialog(::Oculus_Platform::MultiplayerErrorOptions* options) {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("LaunchMultiplayerErrorDialog"), {"options"});
            return _m.Call(options);
        }
        static ::Oculus_Platform::Request* LaunchRosterPanel(::Oculus_Platform::RosterOptions* options) {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("LaunchRosterPanel"), {"options"});
            return _m.Call(options);
        }
        static ::Oculus_Platform::Request* Set(::Oculus_Platform::GroupPresenceOptions* groupPresenceOptions) {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("Set"), {"groupPresenceOptions"});
            return _m.Call(groupPresenceOptions);
        }
        static ::Oculus_Platform::Request* SetDeeplinkMessageOverride(::BNM::Structures::Mono::String* deeplink_message) {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("SetDeeplinkMessageOverride"), {"deeplink_message"});
            return _m.Call(deeplink_message);
        }
        static ::Oculus_Platform::Request* SetDestination(::BNM::Structures::Mono::String* api_name) {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("SetDestination"), {"api_name"});
            return _m.Call(api_name);
        }
        static ::Oculus_Platform::Request* SetIsJoinable(bool is_joinable) {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("SetIsJoinable"), {"is_joinable"});
            return _m.Call(is_joinable);
        }
        static ::Oculus_Platform::Request* SetLobbySession(::BNM::Structures::Mono::String* id) {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("SetLobbySession"), {"id"});
            return _m.Call(id);
        }
        static ::Oculus_Platform::Request* SetMatchSession(::BNM::Structures::Mono::String* id) {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("SetMatchSession"), {"id"});
            return _m.Call(id);
        }
    };
}
