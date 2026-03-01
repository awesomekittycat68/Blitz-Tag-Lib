#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MagicCauldron_Recipe : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MagicCauldron").GetInnerClass("Recipe");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::MagicIngredientType*>* GetRecipeIngredients() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MagicIngredientType*>*> _field = GetClass().GetField(O("recipeIngredients"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetSuccessAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("successAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRecipeIngredients(::BNM::Structures::Mono::List<::GlobalNamespace::MagicIngredientType*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MagicIngredientType*>*> _field = GetClass().GetField(O("recipeIngredients"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuccessAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("successAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
