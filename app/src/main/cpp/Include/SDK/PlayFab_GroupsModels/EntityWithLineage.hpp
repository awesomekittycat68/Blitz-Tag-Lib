#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_GroupsModels {
    struct EntityWithLineage : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.GroupsModels", "EntityWithLineage");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_GroupsModels::EntityKey* GetKey() {
            static BNM::Field<::PlayFab_GroupsModels::EntityKey*> _field = GetClass().GetField(O("Key"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_GroupsModels::EntityKey*>* GetLineage() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_GroupsModels::EntityKey*>*> _field = GetClass().GetField(O("Lineage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetKey(::PlayFab_GroupsModels::EntityKey* value) {
            static BNM::Field<::PlayFab_GroupsModels::EntityKey*> _field = GetClass().GetField(O("Key"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineage(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_GroupsModels::EntityKey*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_GroupsModels::EntityKey*>*> _field = GetClass().GetField(O("Lineage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
