#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRPlayer_ProgressionLevels.hpp"

namespace GlobalNamespace {
    struct GRProgressionScriptableObject : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRProgressionScriptableObject");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GRPlayer_ProgressionLevels>* GetProgressionData() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRPlayer_ProgressionLevels>*> _field = GetClass().GetField(O("progressionData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetProgressionData(::BNM::Structures::Mono::List<::GlobalNamespace::GRPlayer_ProgressionLevels>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRPlayer_ProgressionLevels>*> _field = GetClass().GetField(O("progressionData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
