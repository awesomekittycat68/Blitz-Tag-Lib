#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/PhotonMessageInfoWrapped.hpp"
#include "../GlobalNamespace/Tappable.hpp"

namespace GorillaTagScripts_ObstacleCourse {
    struct TappableBell : ::GlobalNamespace::Tappable {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.ObstacleCourse", "TappableBell");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_OnTapped(::GorillaTagScripts_ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnTapped"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnTapped(::GorillaTagScripts_ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnTapped"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::GorillaTagScripts_ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent* GetOnTapped() {
            static BNM::Field<::GorillaTagScripts_ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*> _field = GetClass().GetField(O("OnTapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetRpcCooldown() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("rpcCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetWinnerRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("winnerRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOnTapped(::GorillaTagScripts_ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent* value) {
            static BNM::Field<::GorillaTagScripts_ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*> _field = GetClass().GetField(O("OnTapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRpcCooldown(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("rpcCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWinnerRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("winnerRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnTapped_1(::GorillaTagScripts_ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnTapped"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void OnTapLocal(float tapStrength, float tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTapLocal"), {"tapStrength", "tapTime", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tapStrength, tapTime, info);
        }
        void remove_OnTapped_1(::GorillaTagScripts_ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnTapped"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
