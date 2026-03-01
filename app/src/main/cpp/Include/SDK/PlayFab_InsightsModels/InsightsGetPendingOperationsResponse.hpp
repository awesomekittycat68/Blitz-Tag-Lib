#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_InsightsModels {
    struct InsightsGetPendingOperationsResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.InsightsModels", "InsightsGetPendingOperationsResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_InsightsModels::InsightsGetOperationStatusResponse*>* GetPendingOperations() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_InsightsModels::InsightsGetOperationStatusResponse*>*> _field = GetClass().GetField(O("PendingOperations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPendingOperations(::BNM::Structures::Mono::List<::PlayFab_InsightsModels::InsightsGetOperationStatusResponse*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_InsightsModels::InsightsGetOperationStatusResponse*>*> _field = GetClass().GetField(O("PendingOperations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
