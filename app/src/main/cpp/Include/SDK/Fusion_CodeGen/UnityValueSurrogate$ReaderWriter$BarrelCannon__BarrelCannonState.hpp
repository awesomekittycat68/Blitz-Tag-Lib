#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/BarrelCannon_BarrelCannonState.hpp"

namespace Fusion_CodeGen {
    struct UnityValueSurrogate$ReaderWriter$BarrelCannon__BarrelCannonState : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Fusion.CodeGen", "UnityValueSurrogate@ReaderWriter@BarrelCannon__BarrelCannonState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::BarrelCannon_BarrelCannonState GetDataProperty() {
            static BNM::Method<::GlobalNamespace::BarrelCannon_BarrelCannonState> _method = GetClass().GetMethod(O("get_DataProperty"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDataProperty(::GlobalNamespace::BarrelCannon_BarrelCannonState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DataProperty"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::BarrelCannon_BarrelCannonState GetData() {
            static BNM::Field<::GlobalNamespace::BarrelCannon_BarrelCannonState> _field = GetClass().GetField(O("Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData(::GlobalNamespace::BarrelCannon_BarrelCannonState value) {
            static BNM::Field<::GlobalNamespace::BarrelCannon_BarrelCannonState> _field = GetClass().GetField(O("Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::BarrelCannon_BarrelCannonState get_DataProperty() {
            static BNM::Method<::GlobalNamespace::BarrelCannon_BarrelCannonState> _m = GetClass().GetMethod(O("get_DataProperty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_DataProperty(::GlobalNamespace::BarrelCannon_BarrelCannonState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DataProperty"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
