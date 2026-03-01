#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct GameServerRegionsResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "GameServerRegionsResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::RegionInfo*>* GetRegions() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::RegionInfo*>*> _field = GetClass().GetField(O("Regions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRegions(::BNM::Structures::Mono::List<::PlayFab_ClientModels::RegionInfo*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::RegionInfo*>*> _field = GetClass().GetField(O("Regions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
