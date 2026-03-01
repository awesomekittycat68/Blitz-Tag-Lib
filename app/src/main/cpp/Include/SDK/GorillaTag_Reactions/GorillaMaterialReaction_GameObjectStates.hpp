#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaMaterialReaction_MomentInStateActiveOption.hpp"

namespace GorillaTag_Reactions {
    struct GorillaMaterialReaction_GameObjectStates : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Reactions", "GorillaMaterialReaction").GetInnerClass("GameObjectStates");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetGameObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gameObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Reactions::GorillaMaterialReaction_MomentInStateActiveOption GetOnEnter() {
            static BNM::Field<::GorillaTag_Reactions::GorillaMaterialReaction_MomentInStateActiveOption> _field = GetClass().GetField(O("onEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Reactions::GorillaMaterialReaction_MomentInStateActiveOption GetOnExit() {
            static BNM::Field<::GorillaTag_Reactions::GorillaMaterialReaction_MomentInStateActiveOption> _field = GetClass().GetField(O("onExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Reactions::GorillaMaterialReaction_MomentInStateActiveOption GetOnStay() {
            static BNM::Field<::GorillaTag_Reactions::GorillaMaterialReaction_MomentInStateActiveOption> _field = GetClass().GetField(O("onStay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gameObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnEnter(::GorillaTag_Reactions::GorillaMaterialReaction_MomentInStateActiveOption value) {
            static BNM::Field<::GorillaTag_Reactions::GorillaMaterialReaction_MomentInStateActiveOption> _field = GetClass().GetField(O("onEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnExit(::GorillaTag_Reactions::GorillaMaterialReaction_MomentInStateActiveOption value) {
            static BNM::Field<::GorillaTag_Reactions::GorillaMaterialReaction_MomentInStateActiveOption> _field = GetClass().GetField(O("onExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnStay(::GorillaTag_Reactions::GorillaMaterialReaction_MomentInStateActiveOption value) {
            static BNM::Field<::GorillaTag_Reactions::GorillaMaterialReaction_MomentInStateActiveOption> _field = GetClass().GetField(O("onStay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
