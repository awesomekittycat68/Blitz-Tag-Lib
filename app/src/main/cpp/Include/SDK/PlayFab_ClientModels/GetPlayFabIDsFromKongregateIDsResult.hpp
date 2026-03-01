#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct GetPlayFabIDsFromKongregateIDsResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "GetPlayFabIDsFromKongregateIDsResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::KongregatePlayFabIdPair*>* GetData() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::KongregatePlayFabIdPair*>*> _field = GetClass().GetField(O("Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData(::BNM::Structures::Mono::List<::PlayFab_ClientModels::KongregatePlayFabIdPair*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::KongregatePlayFabIdPair*>*> _field = GetClass().GetField(O("Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
