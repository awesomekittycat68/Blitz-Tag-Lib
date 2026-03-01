#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    struct MainThreadDispatcher : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "MainThreadDispatcher");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Viveport::MainThreadDispatcher* GetInstance() {
            static BNM::Field<::Viveport::MainThreadDispatcher*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static void* GetActions() {
            static BNM::Field<void*> _field = GetClass().GetField(O("actions"));
            return _field.Get();
        }
        static ::Viveport::MainThreadDispatcher* GetInstance_f() {
            static BNM::Field<::Viveport::MainThreadDispatcher*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void SetInstance(::Viveport::MainThreadDispatcher* value) {
            static BNM::Field<::Viveport::MainThreadDispatcher*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        ::BNM::Coroutine::IEnumerator* ActionWrapper(::BNM::Structures::Mono::Action<>* action) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ActionWrapper"), {"action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(action);
        }
        template <typename T1>
        ::BNM::Coroutine::IEnumerator* ActionWrapper(::BNM::Structures::Mono::Action<T1>* action, T1 param1) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ActionWrapper"), {"action", "param1"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(action, param1);
        }
        template <typename T1, typename T2>
        ::BNM::Coroutine::IEnumerator* ActionWrapper(::BNM::Structures::Mono::Action<T1, T2>* action, T1 param1, T2 param2) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ActionWrapper"), {"action", "param1", "param2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(action, param1, param2);
        }
        template <typename T1, typename T2, typename T3>
        ::BNM::Coroutine::IEnumerator* ActionWrapper(::BNM::Structures::Mono::Action<T1, T2, T3>* action, T1 param1, T2 param2, T3 param3) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ActionWrapper"), {"action", "param1", "param2", "param3"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(action, param1, param2, param3);
        }
        template <typename T1, typename T2, typename T3, typename T4>
        ::BNM::Coroutine::IEnumerator* ActionWrapper(::BNM::Structures::Mono::Action<T1, T2, T3, T4>* action, T1 param1, T2 param2, T3 param3, T4 param4) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ActionWrapper"), {"action", "param1", "param2", "param3", "param4"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(action, param1, param2, param3, param4);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Enqueue(::BNM::Coroutine::IEnumerator* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Enqueue"), {"action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action);
        }
        void Enqueue(::BNM::Structures::Mono::Action<>* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Enqueue"), {"action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action);
        }
        template <typename T1>
        void Enqueue(::BNM::Structures::Mono::Action<T1>* action, T1 param1) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Enqueue"), {"action", "param1"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action, param1);
        }
        template <typename T1, typename T2>
        void Enqueue(::BNM::Structures::Mono::Action<T1, T2>* action, T1 param1, T2 param2) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Enqueue"), {"action", "param1", "param2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action, param1, param2);
        }
        template <typename T1, typename T2, typename T3>
        void Enqueue(::BNM::Structures::Mono::Action<T1, T2, T3>* action, T1 param1, T2 param2, T3 param3) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Enqueue"), {"action", "param1", "param2", "param3"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action, param1, param2, param3);
        }
        template <typename T1, typename T2, typename T3, typename T4>
        void Enqueue(::BNM::Structures::Mono::Action<T1, T2, T3, T4>* action, T1 param1, T2 param2, T3 param3, T4 param4) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Enqueue"), {"action", "param1", "param2", "param3", "param4"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action, param1, param2, param3, param4);
        }
        static ::Viveport::MainThreadDispatcher* Instance() {
            static BNM::Method<::Viveport::MainThreadDispatcher*> _m = GetClass().GetMethod(O("Instance"));
            return _m.Call();
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
