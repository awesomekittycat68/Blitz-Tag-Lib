#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_GroupsModels {
    struct ListGroupBlocksResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.GroupsModels", "ListGroupBlocksResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_GroupsModels::GroupBlock*>* GetBlockedEntities() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_GroupsModels::GroupBlock*>*> _field = GetClass().GetField(O("BlockedEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlockedEntities(::BNM::Structures::Mono::List<::PlayFab_GroupsModels::GroupBlock*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_GroupsModels::GroupBlock*>*> _field = GetClass().GetField(O("BlockedEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
