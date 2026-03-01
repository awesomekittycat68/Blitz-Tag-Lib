#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FortuneResults_FortuneCategoryType.hpp"

namespace GlobalNamespace {
    struct FortuneResults_FortuneCategory : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FortuneResults").GetInnerClass("FortuneCategory");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::FortuneResults_FortuneCategoryType GetFortuneType() {
            static BNM::Field<::GlobalNamespace::FortuneResults_FortuneCategoryType> _field = GetClass().GetField(O("fortuneType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetTextResults() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("textResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWeightedChance() {
            static BNM::Field<float> _field = GetClass().GetField(O("weightedChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFortuneType(::GlobalNamespace::FortuneResults_FortuneCategoryType value) {
            static BNM::Field<::GlobalNamespace::FortuneResults_FortuneCategoryType> _field = GetClass().GetField(O("fortuneType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextResults(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("textResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeightedChance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("weightedChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
