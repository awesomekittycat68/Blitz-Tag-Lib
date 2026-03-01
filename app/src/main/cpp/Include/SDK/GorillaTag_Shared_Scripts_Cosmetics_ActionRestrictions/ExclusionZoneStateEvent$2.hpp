#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ZoneStateEventBase.hpp"

namespace GorillaTag_Shared_Scripts_Cosmetics_ActionRestrictions {
    template <typename T0, typename T1>
    struct ExclusionZoneStateEvent$2 : ::GorillaTag_Shared_Scripts_Cosmetics_ActionRestrictions::ZoneStateEventBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions", "ExclusionZoneStateEvent`2");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void Invoke(::GlobalNamespace::VRRig* vrRig, T0 arg0, T1 arg1) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"vrRig", "arg0", "arg1"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(vrRig, arg0, arg1);
        }
    };
}
