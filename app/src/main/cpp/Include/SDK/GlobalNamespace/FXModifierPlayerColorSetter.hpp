#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FXModifier.hpp"

namespace GlobalNamespace {
    struct FXModifierPlayerColorSetter : ::GlobalNamespace::FXModifier {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FXModifierPlayerColorSetter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::PlayerColoredCosmetic* GetPlayerColoredCosmetic() {
            static BNM::Field<::GlobalNamespace::PlayerColoredCosmetic*> _field = GetClass().GetField(O("playerColoredCosmetic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPlayerColoredCosmetic(::GlobalNamespace::PlayerColoredCosmetic* value) {
            static BNM::Field<::GlobalNamespace::PlayerColoredCosmetic*> _field = GetClass().GetField(O("playerColoredCosmetic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void UpdateScale(float scale, ::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateScale"), {"scale", "color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(scale, color);
        }
    };
}
