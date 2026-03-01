#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RockPiles_RockPile.hpp"

namespace GlobalNamespace {
    struct RockPiles : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RockPiles");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::RockPiles_RockPile>* GetRocks() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::RockPiles_RockPile>*> _field = GetClass().GetField(O("_rocks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRocks(::BNM::Structures::Mono::Array<::GlobalNamespace::RockPiles_RockPile>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::RockPiles_RockPile>*> _field = GetClass().GetField(O("_rocks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Show(int visiblePercentage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Show"), {"visiblePercentage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(visiblePercentage);
        }
        void ShowRock(int rockToShow) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowRock"), {"rockToShow"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rockToShow);
        }
    };
}
