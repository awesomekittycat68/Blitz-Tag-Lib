#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_ObstacleCourse {
    struct ObstacleCourseZoneTrigger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.ObstacleCourse", "ObstacleCourseZoneTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_OnPlayerTriggerEnter(::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPlayerTriggerEnter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnPlayerTriggerEnter(::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPlayerTriggerEnter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnPlayerTriggerExit(::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPlayerTriggerExit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnPlayerTriggerExit(::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPlayerTriggerExit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void* GetBodyLayer() {
            static BNM::Field<void*> _field = GetClass().GetField(O("bodyLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent* GetOnPlayerTriggerEnter() {
            static BNM::Field<::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*> _field = GetClass().GetField(O("OnPlayerTriggerEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent* GetOnPlayerTriggerExit() {
            static BNM::Field<::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*> _field = GetClass().GetField(O("OnPlayerTriggerExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBodyLayer(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("bodyLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPlayerTriggerEnter(::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent* value) {
            static BNM::Field<::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*> _field = GetClass().GetField(O("OnPlayerTriggerEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPlayerTriggerExit(::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent* value) {
            static BNM::Field<::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent*> _field = GetClass().GetField(O("OnPlayerTriggerExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnPlayerTriggerEnter_1(::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPlayerTriggerEnter"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnPlayerTriggerExit_1(::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPlayerTriggerExit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void remove_OnPlayerTriggerEnter_1(::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPlayerTriggerEnter"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnPlayerTriggerExit_1(::GorillaTagScripts_ObstacleCourse::ObstacleCourseZoneTrigger_ObstacleCourseTriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPlayerTriggerExit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
