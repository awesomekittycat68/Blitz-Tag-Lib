#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct TitleDataActivation_TitleDataObjectActivationData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TitleDataActivation").GetInnerClass("TitleDataObjectActivationData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*>* GetAbsoluteDateTimeWindow() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*>*> _method = GetClass().GetMethod(O("get_AbsoluteDateTimeWindow"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAbsoluteDateTimeWindow(::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AbsoluteDateTimeWindow"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*>* GetRelativeDateTimeWindow() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*>*> _method = GetClass().GetMethod(O("get_RelativeDateTimeWindow"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRelativeDateTimeWindow(::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RelativeDateTimeWindow"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetTitleDataObjectID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_TitleDataObjectID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTitleDataObjectID(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TitleDataObjectID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*>* GetAbsoluteDateTimeWindow_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*>*> _field = GetClass().GetField(O("absoluteDateTimeWindow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*>* GetRelativeDateTimeWindow_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*>*> _field = GetClass().GetField(O("relativeDateTimeWindow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTitleDataObjectID_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("titleDataObjectID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetValidated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("validated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAbsoluteDateTimeWindow_fs(::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*>*> _field = GetClass().GetField(O("absoluteDateTimeWindow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRelativeDateTimeWindow_fs(::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*>*> _field = GetClass().GetField(O("relativeDateTimeWindow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleDataObjectID_fs(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("titleDataObjectID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValidated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("validated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*>* get_AbsoluteDateTimeWindow() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*>*> _m = GetClass().GetMethod(O("get_AbsoluteDateTimeWindow"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*>* get_RelativeDateTimeWindow() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*>*> _m = GetClass().GetMethod(O("get_RelativeDateTimeWindow"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_TitleDataObjectID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_TitleDataObjectID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_AbsoluteDateTimeWindow(::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_AbsoluteDateTimeWindow*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AbsoluteDateTimeWindow"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_RelativeDateTimeWindow(::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_RelativeDateTimeWindow*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RelativeDateTimeWindow"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TitleDataObjectID(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TitleDataObjectID"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
