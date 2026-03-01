#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_MultiplayerModels {
    struct GetTitleMultiplayerServersQuotasResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "GetTitleMultiplayerServersQuotasResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_MultiplayerModels::TitleMultiplayerServersQuotas* GetQuotas() {
            static BNM::Field<::PlayFab_MultiplayerModels::TitleMultiplayerServersQuotas*> _field = GetClass().GetField(O("Quotas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetQuotas(::PlayFab_MultiplayerModels::TitleMultiplayerServersQuotas* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::TitleMultiplayerServersQuotas*> _field = GetClass().GetField(O("Quotas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
