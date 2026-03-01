#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Shared_Scripts_Cosmetics_ActionRestrictions {
    struct CosmeticExclusionQuery : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions", "CosmeticExclusionQuery");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static bool IsRestricted(::GlobalNamespace::VRRig* ownerRig, ::GameObject* effectSource) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsRestricted"), {"ownerRig", "effectSource"});
            return _m.Call(ownerRig, effectSource);
        }
    };
}
