#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SnapJointType.hpp"

namespace GlobalNamespace {
    struct SuperInfectionManager_$GetPoints$d__42 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SuperInfectionManager").GetInnerClass("<GetPoints>d__42");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SnapJointType GetJointType() {
            static BNM::Field<::GlobalNamespace::SnapJointType> _field = GetClass().GetField(O("jointType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetJointType(::GlobalNamespace::SnapJointType value) {
            static BNM::Field<::GlobalNamespace::SnapJointType> _field = GetClass().GetField(O("jointType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool MoveNext() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
