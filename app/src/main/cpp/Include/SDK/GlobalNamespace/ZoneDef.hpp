#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GroupJoinZoneA.hpp"
#include "GroupJoinZoneAB.hpp"
#include "GroupJoinZoneB.hpp"
#include "GTSubZone.hpp"
#include "GTZone.hpp"

namespace GlobalNamespace {
    struct ZoneDef : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ZoneDef");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GroupJoinZoneAB GetGroupZoneAB() {
            static BNM::Method<::GlobalNamespace::GroupJoinZoneAB> _method = GetClass().GetMethod(O("get_groupZoneAB"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GroupJoinZoneA GetGroupZone() {
            static BNM::Field<::GlobalNamespace::GroupJoinZoneA> _field = GetClass().GetField(O("groupZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GroupJoinZoneB GetGroupZoneB() {
            static BNM::Field<::GlobalNamespace::GroupJoinZoneB> _field = GetClass().GetField(O("groupZoneB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTSubZone GetSubZoneId() {
            static BNM::Field<::GlobalNamespace::GTSubZone> _field = GetClass().GetField(O("subZoneId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTrackEnter() {
            static BNM::Field<bool> _field = GetClass().GetField(O("trackEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTrackExit() {
            static BNM::Field<bool> _field = GetClass().GetField(O("trackExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTrackStay() {
            static BNM::Field<bool> _field = GetClass().GetField(O("trackStay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTrackStayIntervalSec() {
            static BNM::Field<int> _field = GetClass().GetField(O("trackStayIntervalSec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetZoneId() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zoneId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGroupZone(::GlobalNamespace::GroupJoinZoneA value) {
            static BNM::Field<::GlobalNamespace::GroupJoinZoneA> _field = GetClass().GetField(O("groupZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroupZoneB(::GlobalNamespace::GroupJoinZoneB value) {
            static BNM::Field<::GlobalNamespace::GroupJoinZoneB> _field = GetClass().GetField(O("groupZoneB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubZoneId(::GlobalNamespace::GTSubZone value) {
            static BNM::Field<::GlobalNamespace::GTSubZone> _field = GetClass().GetField(O("subZoneId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrackEnter(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("trackEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrackExit(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("trackExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrackStay(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("trackStay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrackStayIntervalSec(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("trackStayIntervalSec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneId(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zoneId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::GroupJoinZoneAB get_groupZoneAB() {
            static BNM::Method<::GlobalNamespace::GroupJoinZoneAB> _m = GetClass().GetMethod(O("get_groupZoneAB"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsSameZone(::GlobalNamespace::ZoneDef* other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSameZone"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
    };
}
