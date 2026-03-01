#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct AbilityHaptic : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AbilityHaptic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("strength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("strength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void PlayIfHeldLocal(::GlobalNamespace::GameEntity* gameEntity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayIfHeldLocal"), {"gameEntity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntity);
        }
        void PlayIfSnappedLocal(::GlobalNamespace::GameEntity* gameEntity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayIfSnappedLocal"), {"gameEntity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameEntity);
        }
    };
}
