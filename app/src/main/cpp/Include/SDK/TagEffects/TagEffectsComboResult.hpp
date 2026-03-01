#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace TagEffects {
    struct TagEffectsComboResult : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("TagEffects", "TagEffectsComboResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::TagEffects::TagEffectsCombo* GetInput() {
            static BNM::Field<::TagEffects::TagEffectsCombo*> _field = GetClass().GetField(O("input"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::TagEffects::TagEffectPack*>* GetOutput() {
            static BNM::Field<::BNM::Structures::Mono::Array<::TagEffects::TagEffectPack*>*> _field = GetClass().GetField(O("output"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInput(::TagEffects::TagEffectsCombo* value) {
            static BNM::Field<::TagEffects::TagEffectsCombo*> _field = GetClass().GetField(O("input"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutput(::BNM::Structures::Mono::Array<::TagEffects::TagEffectPack*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::TagEffects::TagEffectPack*>*> _field = GetClass().GetField(O("output"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
