#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_ObstacleCourse {
    struct ObstacleEndLineTrigger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.ObstacleCourse", "ObstacleEndLineTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_OnPlayerTriggerEnter(::GorillaTagScripts_ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPlayerTriggerEnter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnPlayerTriggerEnter(::GorillaTagScripts_ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPlayerTriggerEnter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::GorillaTagScripts_ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent* GetOnPlayerTriggerEnter() {
            static BNM::Field<::GorillaTagScripts_ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*> _field = GetClass().GetField(O("OnPlayerTriggerEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOnPlayerTriggerEnter(::GorillaTagScripts_ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent* value) {
            static BNM::Field<::GorillaTagScripts_ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*> _field = GetClass().GetField(O("OnPlayerTriggerEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnPlayerTriggerEnter_1(::GorillaTagScripts_ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPlayerTriggerEnter"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void remove_OnPlayerTriggerEnter_1(::GorillaTagScripts_ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPlayerTriggerEnter"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
