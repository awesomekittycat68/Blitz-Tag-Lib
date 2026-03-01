#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RacingManager_RacerData.hpp"

namespace GlobalNamespace {
    struct RacingManager_RacerComparer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RacingManager").GetInnerClass("RacerComparer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::RacingManager_RacerComparer* GetInstance() {
            static BNM::Field<::GlobalNamespace::RacingManager_RacerComparer*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::GlobalNamespace::RacingManager_RacerComparer* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::RacingManager_RacerComparer*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::RacingManager_RacerComparer* value) {
            static BNM::Field<::GlobalNamespace::RacingManager_RacerComparer*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        int Compare(::GlobalNamespace::RacingManager_RacerData a, ::GlobalNamespace::RacingManager_RacerData b) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Compare"), {"a", "b"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(a, b);
        }
    };
}
