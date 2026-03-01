#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Shared_Scripts_Cosmetics_ActionRestrictions {
    struct ZoneStateEventBase : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions", "ZoneStateEventBase");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool IsRestricted(::GlobalNamespace::VRRig* vrRig) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsRestricted"), {"vrRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(vrRig);
        }
    };
}
