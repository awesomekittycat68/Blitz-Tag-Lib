#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_GroupsModels {
    struct DeleteGroupRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.GroupsModels", "DeleteGroupRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_GroupsModels::EntityKey* GetGroup() {
            static BNM::Field<::PlayFab_GroupsModels::EntityKey*> _field = GetClass().GetField(O("Group"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGroup(::PlayFab_GroupsModels::EntityKey* value) {
            static BNM::Field<::PlayFab_GroupsModels::EntityKey*> _field = GetClass().GetField(O("Group"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
