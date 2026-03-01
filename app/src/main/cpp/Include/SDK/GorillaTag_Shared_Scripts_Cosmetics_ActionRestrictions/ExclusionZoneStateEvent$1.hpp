#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ZoneStateEventBase.hpp"

namespace GorillaTag_Shared_Scripts_Cosmetics_ActionRestrictions {
    template <typename T>
    struct ExclusionZoneStateEvent$1 : ::GorillaTag_Shared_Scripts_Cosmetics_ActionRestrictions::ZoneStateEventBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions", "ExclusionZoneStateEvent`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void Invoke(::GlobalNamespace::VRRig* vrRig, T arg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"vrRig", "arg"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(vrRig, arg);
        }
    };
}
