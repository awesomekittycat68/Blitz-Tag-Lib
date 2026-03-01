#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct GetPlayFabIDsFromTwitchIDsResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "GetPlayFabIDsFromTwitchIDsResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::TwitchPlayFabIdPair*>* GetData() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::TwitchPlayFabIdPair*>*> _field = GetClass().GetField(O("Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData(::BNM::Structures::Mono::List<::PlayFab_ClientModels::TwitchPlayFabIdPair*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::TwitchPlayFabIdPair*>*> _field = GetClass().GetField(O("Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
