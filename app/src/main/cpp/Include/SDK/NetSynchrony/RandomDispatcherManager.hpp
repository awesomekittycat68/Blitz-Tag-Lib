#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace NetSynchrony {
    struct RandomDispatcherManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("NetSynchrony", "RandomDispatcherManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::NetSynchrony::RandomDispatcherManager* GetInstance() {
            static BNM::Field<::NetSynchrony::RandomDispatcherManager*> _field = GetClass().GetField(O("__instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::NetSynchrony::RandomDispatcher*>* GetRandomDispatchers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::NetSynchrony::RandomDispatcher*>*> _field = GetClass().GetField(O("randomDispatchers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetServerTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("serverTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetInstance(::NetSynchrony::RandomDispatcherManager* value) {
            static BNM::Field<::NetSynchrony::RandomDispatcherManager*> _field = GetClass().GetField(O("__instance"));
            _field.Set(value);
        }
        void SetRandomDispatchers(::BNM::Structures::Mono::Array<::NetSynchrony::RandomDispatcher*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::NetSynchrony::RandomDispatcher*>*> _field = GetClass().GetField(O("randomDispatchers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetServerTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("serverTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AdjustedServerTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AdjustedServerTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTimeChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTimeChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
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
