#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Fusion_CodeGen/FixedStorage$4.hpp"

namespace GorillaTagScripts_ObstacleCourse {
    struct ObstacleCourseData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.ObstacleCourse", "ObstacleCourseData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetObstacleCourseCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ObstacleCourseCount"));
            return _method.Call();
        }
        void SetObstacleCourseCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ObstacleCourseCount"));
            _method.Call(value);
        }
        void* get_CurrentRaceState() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_CurrentRaceState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ObstacleCourseCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ObstacleCourseCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_WinnerActorNumber() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_WinnerActorNumber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_ObstacleCourseCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ObstacleCourseCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
