#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersPawn_CreatureState.hpp"

namespace GlobalNamespace {
    struct CrittersPawn_CreatureUpdateData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersPawn").GetInnerClass("CreatureUpdateData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        double GetLastImpulseTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastImpulseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersPawn_CreatureState GetState() {
            static BNM::Field<::GlobalNamespace::CrittersPawn_CreatureState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLastImpulseTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastImpulseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::CrittersPawn_CreatureState value) {
            static BNM::Field<::GlobalNamespace::CrittersPawn_CreatureState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool SameData(::GlobalNamespace::CrittersPawn* creature) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SameData"), {"creature"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(creature);
        }
    };
}
