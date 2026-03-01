#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct KIDPlayerPrefs : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDPlayerPrefs");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* SESSION_ID_PREFIX_PLAYER_PREF = "kIDSessionID-";
        static constexpr const char* SESSION_ETAG_PLAYER_PREF = "kIDSessionETAG-";
        static constexpr const char* SESSION_CHANGED_PLAYER_PREF = "kIDSessionUpdated-";
        static constexpr const char* KID_PERMISSIONS_CSV = "kid-permission-csv";
        static constexpr const char* KID_DEFAULT_PERMISSIONS_CSV = "kid-default-permission-csv";
        static constexpr const char* KID_PERMISSIONS_ENABLED_KEY = "-enabled";
        static constexpr const char* KID_PERMISSIONS_MANAGED_BY_KEY = "-managed-by";
        static constexpr const char* KID_EMAIL_KEY = "k-id_EmailAddress";
    };
}
