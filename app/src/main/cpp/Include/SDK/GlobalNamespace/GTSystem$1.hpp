#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct GTSystem$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTSystem`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Pun::PhotonView* GetPhotonView() {
            static BNM::Method<::Photon_Pun::PhotonView*> _method = GetClass().GetMethod(O("get_photonView"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Pun::PhotonView* GetPhotonView_pg() {
            static BNM::Method<::Photon_Pun::PhotonView*> _method = GetClass().GetMethod(O("get_PhotonView"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<T>* GetInstances() {
            static BNM::Field<::BNM::Structures::Mono::List<T>*> _field = GetClass().GetField(O("_instances"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetNetworked() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_networked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetPhotonView_f() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("_photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetGAppQuitting() {
            static BNM::Field<bool> _field = GetClass().GetField(O("gAppQuitting"));
            return _field.Get();
        }
        static bool GetGInitializing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("gInitializing"));
            return _field.Get();
        }
        static void* GetGQueueRegister() {
            static BNM::Field<void*> _field = GetClass().GetField(O("gQueueRegister"));
            return _field.Get();
        }
        void SetInstances(::BNM::Structures::Mono::List<T>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<T>*> _field = GetClass().GetField(O("_instances"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworked(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_networked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("_photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetGAppQuitting(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("gAppQuitting"));
            _field.Set(value);
        }
        static void SetGInitializing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("gInitializing"));
            _field.Set(value);
        }
        static void SetGQueueRegister(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("gQueueRegister"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::Photon_Pun::PhotonView* get_photonView() {
            static BNM::Method<::Photon_Pun::PhotonView*> _m = GetClass().GetMethod(O("get_photonView"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::Photon_Pun::PhotonView* get_PhotonView() {
            static BNM::Method<::Photon_Pun::PhotonView*> _m = GetClass().GetMethod(O("get_PhotonView"));
            return _m.Call();
        }
        void OnApplicationQuit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationQuit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnRegister(T instance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRegister"), {"instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(instance);
        }
        void OnTick(float dt, T instance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTick"), {"dt", "instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt, instance);
        }
        void OnUnregister(T instance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUnregister"), {"instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(instance);
        }
        static void Register(T instance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"instance"});
            _m.Call(instance);
        }
        bool RegisterInstance(T instance) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RegisterInstance"), {"instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(instance);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void Unregister(T instance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"instance"});
            _m.Call(instance);
        }
        bool UnregisterInstance(T instance) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UnregisterInstance"), {"instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(instance);
        }
    };
}
