#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "UberShaderMatUsedProps.hpp"

namespace GlobalNamespace {
    struct MatCombinerUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MatCombinerUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* _k_logPre = "MaterialCombiner: ";
        static void ApplyExtraFingerprintRules(::GlobalNamespace::UberShaderMatUsedProps& matUsedProps) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyExtraFingerprintRules"), {"matUsedProps"});
            _m.Call(&matUsedProps);
        }
        static ::Material* AverageMaterials(::BNM::Structures::Mono::List<::Material*>* oldMats) {
            static BNM::Method<::Material*> _m = GetClass().GetMethod(O("AverageMaterials"), {"oldMats"});
            return _m.Call(oldMats);
        }
    };
}
