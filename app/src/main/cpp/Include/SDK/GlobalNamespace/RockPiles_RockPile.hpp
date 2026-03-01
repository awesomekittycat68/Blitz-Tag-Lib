#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RockPiles_RockPile : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RockPiles").GetInnerClass("RockPile");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetThreshold() {
            static BNM::Field<int> _field = GetClass().GetField(O("threshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetVisual() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("visual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetThreshold(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("threshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisual(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("visual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
