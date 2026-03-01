#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FlagForLighting_TimeOfDay.hpp"

namespace GlobalNamespace {
    struct FlagForLighting : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FlagForLighting");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::FlagForLighting_TimeOfDay GetMyTimeOfDay() {
            static BNM::Field<::GlobalNamespace::FlagForLighting_TimeOfDay> _field = GetClass().GetField(O("myTimeOfDay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMyTimeOfDay(::GlobalNamespace::FlagForLighting_TimeOfDay value) {
            static BNM::Field<::GlobalNamespace::FlagForLighting_TimeOfDay> _field = GetClass().GetField(O("myTimeOfDay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
