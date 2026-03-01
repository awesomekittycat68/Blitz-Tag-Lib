#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonoBehaviourStatic$1.hpp"

namespace GlobalNamespace {
    struct GTSignalRelay : ::GlobalNamespace::MonoBehaviourStatic$1<::GlobalNamespace::GTSignalRelay*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTSignalRelay");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::List<::GlobalNamespace::GTSignalListener*>* GetGActiveListeners() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GTSignalListener*>*> _field = GetClass().GetField(O("gActiveListeners"));
            return _field.Get();
        }
        static void* GetGListenerSet() {
            static BNM::Field<void*> _field = GetClass().GetField(O("gListenerSet"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GlobalNamespace::GTSignalListener*>*>* GetGSignalIdToListeners() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GlobalNamespace::GTSignalListener*>*>*> _field = GetClass().GetField(O("gSignalIdToListeners"));
            return _field.Get();
        }
        static void SetGActiveListeners(::BNM::Structures::Mono::List<::GlobalNamespace::GTSignalListener*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GTSignalListener*>*> _field = GetClass().GetField(O("gActiveListeners"));
            _field.Set(value);
        }
        static void SetGListenerSet(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("gListenerSet"));
            _field.Set(value);
        }
        static void SetGSignalIdToListeners(::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GlobalNamespace::GTSignalListener*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GlobalNamespace::GTSignalListener*>*>*> _field = GetClass().GetField(O("gSignalIdToListeners"));
            _field.Set(value);
        }
        static void* get_ActiveListeners() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_ActiveListeners"));
            return _m.Call();
        }
        static void InitializeOnLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeOnLoad"));
            _m.Call();
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
        static void Register(::GlobalNamespace::GTSignalListener* listener) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"listener"});
            _m.Call(listener);
        }
        static void Unregister(::GlobalNamespace::GTSignalListener* listener) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"listener"});
            _m.Call(listener);
        }
    };
}
