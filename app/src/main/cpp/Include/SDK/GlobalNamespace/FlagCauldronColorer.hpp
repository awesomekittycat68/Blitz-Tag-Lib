#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FlagCauldronColorer_ColorMode.hpp"

namespace GlobalNamespace {
    struct FlagCauldronColorer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FlagCauldronColorer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetColorPoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("colorPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FlagCauldronColorer_ColorMode GetMode() {
            static BNM::Field<::GlobalNamespace::FlagCauldronColorer_ColorMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetColorPoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("colorPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMode(::GlobalNamespace::FlagCauldronColorer_ColorMode value) {
            static BNM::Field<::GlobalNamespace::FlagCauldronColorer_ColorMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
