#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace NetSynchrony {
    struct RandomDispatcher : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("NetSynchrony", "RandomDispatcher");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_Dispatch(::NetSynchrony::RandomDispatcher_RandomDispatcherEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_Dispatch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_Dispatch(::NetSynchrony::RandomDispatcher_RandomDispatcherEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_Dispatch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::NetSynchrony::RandomDispatcher_RandomDispatcherEvent* GetDispatch() {
            static BNM::Field<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*> _field = GetClass().GetField(O("Dispatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<float>* GetDispatchTimes() {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("dispatchTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxWaitTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxWaitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinWaitTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("minWaitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTotalMinutes() {
            static BNM::Field<float> _field = GetClass().GetField(O("totalMinutes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDispatch(::NetSynchrony::RandomDispatcher_RandomDispatcherEvent* value) {
            static BNM::Field<::NetSynchrony::RandomDispatcher_RandomDispatcherEvent*> _field = GetClass().GetField(O("Dispatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDispatchTimes(::BNM::Structures::Mono::List<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("dispatchTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxWaitTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxWaitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinWaitTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minWaitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalMinutes(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("totalMinutes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_Dispatch_1(::NetSynchrony::RandomDispatcher_RandomDispatcherEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_Dispatch"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Init(double seconds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"seconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seconds);
        }
        void remove_Dispatch_1(::NetSynchrony::RandomDispatcher_RandomDispatcherEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_Dispatch"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Sync(double seconds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Sync"), {"seconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seconds);
        }
        void Tick(double seconds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"), {"seconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seconds);
        }
    };
}
