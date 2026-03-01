#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct GetAdPlacementsResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "GetAdPlacementsResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::AdPlacementDetails*>* GetAdPlacements() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::AdPlacementDetails*>*> _field = GetClass().GetField(O("AdPlacements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAdPlacements(::BNM::Structures::Mono::List<::PlayFab_ClientModels::AdPlacementDetails*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::AdPlacementDetails*>*> _field = GetClass().GetField(O("AdPlacements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
