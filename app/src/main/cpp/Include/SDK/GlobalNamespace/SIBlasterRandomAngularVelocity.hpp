#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SIBlasterRandomAngularVelocity : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIBlasterRandomAngularVelocity");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetMaxVel() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMaxVel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ModifyProjectile(::GlobalNamespace::SIGadgetBlasterProjectile* projectile) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ModifyProjectile"), {"projectile"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile);
        }
    };
}
