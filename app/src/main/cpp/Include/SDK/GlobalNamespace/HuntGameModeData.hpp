#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FusionGameModeData.hpp"
#include "HuntData.hpp"

namespace GlobalNamespace {
    struct HuntGameModeData : ::GlobalNamespace::FusionGameModeData {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HuntGameModeData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::HuntData GetHuntdata() {
            static BNM::Method<::GlobalNamespace::HuntData> _method = GetClass().GetMethod(O("get_huntdata"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHuntdata(::GlobalNamespace::HuntData value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_huntdata"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::HuntData GetHuntdata_f() {
            static BNM::Field<::GlobalNamespace::HuntData> _field = GetClass().GetField(O("_huntdata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHuntdata_fs(::GlobalNamespace::HuntData value) {
            static BNM::Field<::GlobalNamespace::HuntData> _field = GetClass().GetField(O("_huntdata"));
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
        void* get_Data() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Data"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::HuntData get_huntdata() {
            static BNM::Method<::GlobalNamespace::HuntData> _m = GetClass().GetMethod(O("get_huntdata"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void set_Data(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Data"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_huntdata(::GlobalNamespace::HuntData value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_huntdata"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
