#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TitleDataActivation_RelativeDateTime.hpp"

namespace GlobalNamespace {
    struct TitleDataActivation_RelativeDateTimeWindow : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TitleDataActivation").GetInnerClass("RelativeDateTimeWindow");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::TitleDataActivation_RelativeDateTime GetEndDateTime() {
            static BNM::Method<::GlobalNamespace::TitleDataActivation_RelativeDateTime> _method = GetClass().GetMethod(O("get_EndDateTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEndDateTime(::GlobalNamespace::TitleDataActivation_RelativeDateTime value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_EndDateTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::TitleDataActivation_RelativeDateTime GetStartDateTime() {
            static BNM::Method<::GlobalNamespace::TitleDataActivation_RelativeDateTime> _method = GetClass().GetMethod(O("get_StartDateTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetStartDateTime(::GlobalNamespace::TitleDataActivation_RelativeDateTime value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_StartDateTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void* GetDtEnd() {
            static BNM::Field<void*> _field = GetClass().GetField(O("dtEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetDtStart() {
            static BNM::Field<void*> _field = GetClass().GetField(O("dtStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TitleDataActivation_RelativeDateTime GetEndDateTime_f() {
            static BNM::Field<::GlobalNamespace::TitleDataActivation_RelativeDateTime> _field = GetClass().GetField(O("endDateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TitleDataActivation_RelativeDateTime GetStartDateTime_f() {
            static BNM::Field<::GlobalNamespace::TitleDataActivation_RelativeDateTime> _field = GetClass().GetField(O("startDateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDtEnd(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("dtEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDtStart(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("dtStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndDateTime_fs(::GlobalNamespace::TitleDataActivation_RelativeDateTime value) {
            static BNM::Field<::GlobalNamespace::TitleDataActivation_RelativeDateTime> _field = GetClass().GetField(O("endDateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartDateTime_fs(::GlobalNamespace::TitleDataActivation_RelativeDateTime value) {
            static BNM::Field<::GlobalNamespace::TitleDataActivation_RelativeDateTime> _field = GetClass().GetField(O("startDateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::TitleDataActivation_RelativeDateTime get_EndDateTime() {
            static BNM::Method<::GlobalNamespace::TitleDataActivation_RelativeDateTime> _m = GetClass().GetMethod(O("get_EndDateTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::TitleDataActivation_RelativeDateTime get_StartDateTime() {
            static BNM::Method<::GlobalNamespace::TitleDataActivation_RelativeDateTime> _m = GetClass().GetMethod(O("get_StartDateTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void IsInWindow(TP0 d, bool& inRange, float& delay) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IsInWindow"), {"d", "inRange", "delay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d, &inRange, &delay);
        }
        void set_EndDateTime(::GlobalNamespace::TitleDataActivation_RelativeDateTime value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_EndDateTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_StartDateTime(::GlobalNamespace::TitleDataActivation_RelativeDateTime value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_StartDateTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
