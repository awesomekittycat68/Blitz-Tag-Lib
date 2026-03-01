#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaMaterialReaction_GameObjectStates.hpp"

namespace GorillaTag_Reactions {
    struct GorillaMaterialReaction_ReactionEntry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Reactions", "GorillaMaterialReaction").GetInnerClass("ReactionEntry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GorillaTag_Reactions::GorillaMaterialReaction_GameObjectStates>* GetGameObjectStates() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Reactions::GorillaMaterialReaction_GameObjectStates>*> _field = GetClass().GetField(O("gameObjectStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetStatusMaterialIndexes() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("statusMaterialIndexes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameObjectStates(::BNM::Structures::Mono::Array<::GorillaTag_Reactions::GorillaMaterialReaction_GameObjectStates>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Reactions::GorillaMaterialReaction_GameObjectStates>*> _field = GetClass().GetField(O("gameObjectStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatusMaterialIndexes(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("statusMaterialIndexes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
