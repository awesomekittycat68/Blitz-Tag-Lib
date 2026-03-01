#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_ClientModels {
    struct GetPlayFabIDsFromGenericIDsRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "GetPlayFabIDsFromGenericIDsRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::GenericServiceId*>* GetGenericIDs() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::GenericServiceId*>*> _field = GetClass().GetField(O("GenericIDs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGenericIDs(::BNM::Structures::Mono::List<::PlayFab_ClientModels::GenericServiceId*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::GenericServiceId*>*> _field = GetClass().GetField(O("GenericIDs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
