#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ProgressionManager_MothershipUserDataWriteRequest.hpp"
#include "ProgressionManager_WristDockUpgradeType.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_AdvanceDockWristUpgradeRequest : ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("AdvanceDockWristUpgradeRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::ProgressionManager_WristDockUpgradeType GetUpgrade() {
            static BNM::Field<::GlobalNamespace::ProgressionManager_WristDockUpgradeType> _field = GetClass().GetField(O("Upgrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetUpgrade(::GlobalNamespace::ProgressionManager_WristDockUpgradeType value) {
            static BNM::Field<::GlobalNamespace::ProgressionManager_WristDockUpgradeType> _field = GetClass().GetField(O("Upgrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
