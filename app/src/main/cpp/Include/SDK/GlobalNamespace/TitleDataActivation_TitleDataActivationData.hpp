#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct TitleDataActivation_TitleDataActivationData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TitleDataActivation").GetInnerClass("TitleDataActivationData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*>* GetData() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*>*> _method = GetClass().GetMethod(O("get_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetData(::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*>* GetData_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*>*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetValidated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("validated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData_fs(::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*>*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValidated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("validated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*>* get_Data() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*>*> _m = GetClass().GetMethod(O("get_Data"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Data(::BNM::Structures::Mono::Array<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Data"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
