#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ProgressionManager_CoreType.hpp"
#include "ProgressionManager_MothershipUserDataWriteRequest.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_DepositCoreRequest : ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("DepositCoreRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::ProgressionManager_CoreType GetCoreBeingDeposited() {
            static BNM::Field<::GlobalNamespace::ProgressionManager_CoreType> _field = GetClass().GetField(O("CoreBeingDeposited"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCoreBeingDeposited(::GlobalNamespace::ProgressionManager_CoreType value) {
            static BNM::Field<::GlobalNamespace::ProgressionManager_CoreType> _field = GetClass().GetField(O("CoreBeingDeposited"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
