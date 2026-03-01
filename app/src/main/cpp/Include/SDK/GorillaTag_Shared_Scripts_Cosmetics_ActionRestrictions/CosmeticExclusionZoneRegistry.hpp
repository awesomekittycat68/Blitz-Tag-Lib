#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Shared_Scripts_Cosmetics_ActionRestrictions {
    struct CosmeticExclusionZoneRegistry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions", "CosmeticExclusionZoneRegistry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void* GetRestrictedRigs() {
            static BNM::Field<void*> _field = GetClass().GetField(O("restrictedRigs"));
            return _field.Get();
        }
        static void Enter(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Enter"), {"rig"});
            _m.Call(rig);
        }
        static void Exit(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Exit"), {"rig"});
            _m.Call(rig);
        }
        static bool IsRestricted(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsRestricted"), {"rig"});
            return _m.Call(rig);
        }
        static void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.Call();
        }
    };
}
