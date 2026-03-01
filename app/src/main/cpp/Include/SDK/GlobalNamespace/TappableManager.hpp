#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NetworkSceneObject.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct TappableManager : ::GlobalNamespace::NetworkSceneObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TappableManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::TappableManager* GetGManager() {
            static BNM::Field<::GlobalNamespace::TappableManager*> _field = GetClass().GetField(O("gManager"));
            return _field.Get();
        }
        static void* GetGRegistry() {
            static BNM::Field<void*> _field = GetClass().GetField(O("gRegistry"));
            return _field.Get();
        }
        void* GetIdSet() {
            static BNM::Field<void*> _field = GetClass().GetField(O("idSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::Tappable*>* GetTappables() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::Tappable*>*> _field = GetClass().GetField(O("tappables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetGManager(::GlobalNamespace::TappableManager* value) {
            static BNM::Field<::GlobalNamespace::TappableManager*> _field = GetClass().GetField(O("gManager"));
            _field.Set(value);
        }
        static void SetGRegistry(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("gRegistry"));
            _field.Set(value);
        }
        void SetIdSet(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("idSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTappables(::BNM::Structures::Mono::List<::GlobalNamespace::Tappable*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::Tappable*>*> _field = GetClass().GetField(O("tappables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DebugTestTap() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugTestTap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void Register(::GlobalNamespace::Tappable* t) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"t"});
            _m.Call(t);
        }
        void RegisterInstance(::GlobalNamespace::Tappable* t) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterInstance"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(t);
        }
        template <typename TP2 = void*>
        static void RPC_SendOnGrab(::BNM::IL2CPP::Il2CppObject* runner, int key, TP2 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_SendOnGrab"), {"runner", "key", "info"});
            _m.Call(runner, key, info);
        }
        static void RPC_SendOnGrab$Invoker(::BNM::IL2CPP::Il2CppObject* runner, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_SendOnGrab@Invoker"), {"runner", "message"});
            _m.Call(runner, message);
        }
        template <typename TP2 = void*>
        static void RPC_SendOnRelease(::BNM::IL2CPP::Il2CppObject* runner, int key, TP2 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_SendOnRelease"), {"runner", "key", "info"});
            _m.Call(runner, key, info);
        }
        static void RPC_SendOnRelease$Invoker(::BNM::IL2CPP::Il2CppObject* runner, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_SendOnRelease@Invoker"), {"runner", "message"});
            _m.Call(runner, message);
        }
        template <typename TP3 = void*>
        static void RPC_SendOnTap(::BNM::IL2CPP::Il2CppObject* runner, int key, float tapStrength, TP3 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_SendOnTap"), {"runner", "key", "tapStrength", "info"});
            _m.Call(runner, key, tapStrength, info);
        }
        static void RPC_SendOnTap$Invoker(::BNM::IL2CPP::Il2CppObject* runner, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_SendOnTap@Invoker"), {"runner", "message"});
            _m.Call(runner, message);
        }
        void SendOnGrabRPC(int key, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendOnGrabRPC"), {"key", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, info);
        }
        void SendOnGrabShared(int key, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendOnGrabShared"), {"key", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, info);
        }
        void SendOnReleaseRPC(int key, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendOnReleaseRPC"), {"key", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, info);
        }
        void SendOnReleaseShared(int key, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendOnReleaseShared"), {"key", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, info);
        }
        void SendOnTapRPC(int key, float tapStrength, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendOnTapRPC"), {"key", "tapStrength", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, tapStrength, info);
        }
        void SendOnTapShared(int key, float tapStrength, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendOnTapShared"), {"key", "tapStrength", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, tapStrength, info);
        }
        static void Unregister(::GlobalNamespace::Tappable* t) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"t"});
            _m.Call(t);
        }
        void UnregisterInstance(::GlobalNamespace::Tappable* t) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterInstance"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(t);
        }
    };
}
