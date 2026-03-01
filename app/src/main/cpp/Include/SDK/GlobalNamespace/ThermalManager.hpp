#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ThermalManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ThermalManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::ThermalManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::ThermalManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::GlobalNamespace::ThermalManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::ThermalManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        float GetLastTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::ThermalReceiver*>* GetReceivers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ThermalReceiver*>*> _field = GetClass().GetField(O("receivers"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::ThermalSourceVolume*>* GetSources() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ThermalSourceVolume*>*> _field = GetClass().GetField(O("sources"));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::ThermalManager* value) {
            static BNM::Field<::GlobalNamespace::ThermalManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetLastTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void Register(::GlobalNamespace::ThermalSourceVolume* source) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"source"});
            _m.Call(source);
        }
        static void Register(::GlobalNamespace::ThermalReceiver* receiver) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"receiver"});
            _m.Call(receiver);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void Unregister(::GlobalNamespace::ThermalSourceVolume* source) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"source"});
            _m.Call(source);
        }
        static void Unregister(::GlobalNamespace::ThermalReceiver* receiver) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"receiver"});
            _m.Call(receiver);
        }
    };
}
