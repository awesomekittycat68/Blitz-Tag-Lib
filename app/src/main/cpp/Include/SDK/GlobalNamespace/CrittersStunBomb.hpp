#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersToolThrowable.hpp"

namespace GlobalNamespace {
    struct CrittersStunBomb : ::GlobalNamespace::CrittersToolThrowable {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersStunBomb");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("radius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStunDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("stunDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("radius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStunDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stunDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnImpact(::BNM::Structures::Unity::Vector3 hitPosition, ::BNM::Structures::Unity::Vector3 hitNormal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnImpact"), {"hitPosition", "hitNormal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitPosition, hitNormal);
        }
        void OnImpactCritter(::GlobalNamespace::CrittersPawn* impactedCritter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnImpactCritter"), {"impactedCritter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(impactedCritter);
        }
    };
}
