#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipWebSocketDispatcher : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipWebSocketDispatcher");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::MothershipWebSocketDispatcher* GetInstance() {
            static BNM::Field<::GlobalNamespace::MothershipWebSocketDispatcher*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        ::GlobalNamespace::MothershipWebSocketDispatcher* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::MothershipWebSocketDispatcher*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GlobalNamespace::MothershipWebSocketDispatcher* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::MothershipWebSocketDispatcher*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        static bool GetIsApplicationQuitting() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isApplicationQuitting"));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::MothershipWebSocketDispatcher* value) {
            static BNM::Field<::GlobalNamespace::MothershipWebSocketDispatcher*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        static void SetIsApplicationQuitting(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isApplicationQuitting"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GlobalNamespace::MothershipWebSocketDispatcher* get_instance() {
            static BNM::Method<::GlobalNamespace::MothershipWebSocketDispatcher*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        void OnApplicationQuit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationQuit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
