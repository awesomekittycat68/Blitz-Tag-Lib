#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTDelayedExec_Listener.hpp"

namespace GlobalNamespace {
    struct GTDelayedExec : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTDelayedExec");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int k_defaultMaxListenersCount = 1024;
        ::GlobalNamespace::GTDelayedExec* GetInstance() {
            static BNM::Method<::GlobalNamespace::GTDelayedExec*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GlobalNamespace::GTDelayedExec* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetListenerCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_listenerCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetListenerCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_listenerCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::BNM::Structures::Mono::Array<float>* GetListenerDelays() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("_listenerDelays"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::GlobalNamespace::GTDelayedExec_Listener>* GetListeners() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTDelayedExec_Listener>*> _field = GetClass().GetField(O("_listeners"));
            return _field.Get();
        }
        static int GetMaxListenersCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxListenersCount"));
            return _field.Get();
        }
        static void SetListenerDelays(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("_listenerDelays"));
            _field.Set(value);
        }
        static void SetListeners(::BNM::Structures::Mono::Array<::GlobalNamespace::GTDelayedExec_Listener>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTDelayedExec_Listener>*> _field = GetClass().GetField(O("_listeners"));
            _field.Set(value);
        }
        static void SetMaxListenersCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxListenersCount"));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        static void Add(TP0 listener, float delay, int contextId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"listener", "delay", "contextId"});
            _m.Call(listener, delay, contextId);
        }
        static void EdReInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EdReInit"));
            _m.Call();
        }
        static ::GlobalNamespace::GTDelayedExec* get_instance() {
            static BNM::Method<::GlobalNamespace::GTDelayedExec*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        static int get_listenerCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_listenerCount"));
            return _m.Call();
        }
        static void InitializeAfterAssemblies() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeAfterAssemblies"));
            _m.Call();
        }
        static void set_instance(::GlobalNamespace::GTDelayedExec* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_instance"), {"value"});
            _m.Call(value);
        }
        static void set_listenerCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_listenerCount"), {"value"});
            _m.Call(value);
        }
    };
}
