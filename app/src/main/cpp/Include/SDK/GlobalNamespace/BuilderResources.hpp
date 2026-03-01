#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderResourceQuantity.hpp"

namespace GlobalNamespace {
    struct BuilderResources : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderResources");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResourceQuantity>* GetQuantities() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResourceQuantity>*> _field = GetClass().GetField(O("quantities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetQuantities(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResourceQuantity>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResourceQuantity>*> _field = GetClass().GetField(O("quantities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
