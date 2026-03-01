#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FXSArgs.hpp"

namespace GlobalNamespace {
    struct MagicCauldron_IngredientArgs : ::GlobalNamespace::FXSArgs {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MagicCauldron").GetInnerClass("IngredientArgs");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetKey() {
            static BNM::Field<int> _field = GetClass().GetField(O("key"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetKey(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("key"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
