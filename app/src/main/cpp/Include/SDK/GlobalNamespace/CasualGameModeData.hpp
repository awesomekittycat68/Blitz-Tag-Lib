#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CasualData.hpp"
#include "FusionGameModeData.hpp"

namespace GlobalNamespace {
    struct CasualGameModeData : ::GlobalNamespace::FusionGameModeData {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CasualGameModeData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::CasualData GetCasualData() {
            static BNM::Method<::GlobalNamespace::CasualData> _method = GetClass().GetMethod(O("get_casualData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCasualData(::GlobalNamespace::CasualData value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_casualData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::CasualData GetCasualData_f() {
            static BNM::Field<::GlobalNamespace::CasualData> _field = GetClass().GetField(O("_casualData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCasualData_fs(::GlobalNamespace::CasualData value) {
            static BNM::Field<::GlobalNamespace::CasualData> _field = GetClass().GetField(O("_casualData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CopyBackingFieldsToState(bool ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyBackingFieldsToState"), {""});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyStateToBackingFields() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyStateToBackingFields"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::CasualData get_casualData() {
            static BNM::Method<::GlobalNamespace::CasualData> _m = GetClass().GetMethod(O("get_casualData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_Data() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Data"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_casualData(::GlobalNamespace::CasualData value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_casualData"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_Data(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Data"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
