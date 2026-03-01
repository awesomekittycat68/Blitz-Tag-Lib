#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ProgressionManager_DrillUpgradeLevel.hpp"
#include "ProgressionManager_MothershipRequest.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_PurchaseDrillUpgradeRequest : ::GlobalNamespace::ProgressionManager_MothershipRequest {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("PurchaseDrillUpgradeRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel GetUpgrade() {
            static BNM::Field<::GlobalNamespace::ProgressionManager_DrillUpgradeLevel> _field = GetClass().GetField(O("Upgrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetUpgrade(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel value) {
            static BNM::Field<::GlobalNamespace::ProgressionManager_DrillUpgradeLevel> _field = GetClass().GetField(O("Upgrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
