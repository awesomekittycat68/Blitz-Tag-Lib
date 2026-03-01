#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct TickSystem$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TickSystem`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*>
        static void AddCallbackTarget(TP0 target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCallbackTarget"), {"target"});
            _m.Call(target);
        }
        template <typename TP0 = void*>
        static void AddPostTickCallback(TP0 callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPostTickCallback"), {"callback"});
            _m.Call(callback);
        }
        template <typename TP0 = void*>
        static void AddPreTickCallback(TP0 callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPreTickCallback"), {"callback"});
            _m.Call(callback);
        }
        template <typename TP0 = void*>
        static void AddTickCallback(TP0 callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddTickCallback"), {"callback"});
            _m.Call(callback);
        }
        template <typename TP0 = void*>
        static void AddTickSystemCallBack(TP0 callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddTickSystemCallBack"), {"callback"});
            _m.Call(callback);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void OnEnterPlay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnterPlay"));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void RemoveCallbackTarget(TP0 target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCallbackTarget"), {"target"});
            _m.Call(target);
        }
        template <typename TP0 = void*>
        static void RemovePostTickCallback(TP0 callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePostTickCallback"), {"callback"});
            _m.Call(callback);
        }
        template <typename TP0 = void*>
        static void RemovePreTickCallback(TP0 callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePreTickCallback"), {"callback"});
            _m.Call(callback);
        }
        template <typename TP0 = void*>
        static void RemoveTickCallback(TP0 callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveTickCallback"), {"callback"});
            _m.Call(callback);
        }
        template <typename TP0 = void*>
        static void RemoveTickSystemCallback(TP0 callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveTickSystemCallback"), {"callback"});
            _m.Call(callback);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
