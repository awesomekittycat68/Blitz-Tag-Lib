#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BetterBakerPositionOverrides_OverridePosition.hpp"

namespace GlobalNamespace {
    struct BetterBakerPositionOverrides : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BetterBakerPositionOverrides");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition>* GetOverridePositions() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition>*> _field = GetClass().GetField(O("overridePositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOverridePositions(::BNM::Structures::Mono::List<::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition>*> _field = GetClass().GetField(O("overridePositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
