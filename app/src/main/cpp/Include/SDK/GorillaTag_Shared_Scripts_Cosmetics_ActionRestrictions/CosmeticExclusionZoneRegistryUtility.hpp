#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Shared_Scripts_Cosmetics_ActionRestrictions {
    struct CosmeticExclusionZoneRegistryUtility : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions", "CosmeticExclusionZoneRegistryUtility");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::List<::Collider*>* GetExclusionZones() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("exclusionZones"));
            return _field.Get();
        }
        static bool IsPositionRestricted(::BNM::Structures::Unity::Vector3 worldPos) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPositionRestricted"), {"worldPos"});
            return _m.Call(worldPos);
        }
        static void RegisterZone(::Collider* zone) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterZone"), {"zone"});
            _m.Call(zone);
        }
        static void UnregisterZone(::Collider* zone) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterZone"), {"zone"});
            _m.Call(zone);
        }
    };
}
