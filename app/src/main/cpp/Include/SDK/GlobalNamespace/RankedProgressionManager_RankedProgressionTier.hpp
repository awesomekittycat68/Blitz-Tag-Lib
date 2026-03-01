#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RankedProgressionManager_RankedProgressionTierBase.hpp"

namespace GlobalNamespace {
    struct RankedProgressionManager_RankedProgressionTier : ::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RankedProgressionManager").GetInnerClass("RankedProgressionTier");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>* GetSubTiers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>*> _field = GetClass().GetField(O("subTiers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSubTiers(::BNM::Structures::Mono::List<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>*> _field = GetClass().GetField(O("subTiers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void EnforceSubTierValidity(float thresholdMin) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnforceSubTierValidity"), {"thresholdMin"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(thresholdMin);
        }
        void InsertSubTierAt(int idx, float tierMin) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InsertSubTierAt"), {"idx", "tierMin"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(idx, tierMin);
        }
    };
}
