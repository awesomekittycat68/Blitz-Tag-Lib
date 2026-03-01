#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipHttpRunner : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipHttpRunner");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::MothershipHttpRunner* GetInstance() {
            static BNM::Field<::GlobalNamespace::MothershipHttpRunner*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        ::GlobalNamespace::MothershipHttpRunner* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::MothershipHttpRunner*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GlobalNamespace::MothershipHttpRunner* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::MothershipHttpRunner*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::MothershipHttpRunner* value) {
            static BNM::Field<::GlobalNamespace::MothershipHttpRunner*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CreateInstance() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateInstance"));
            _m.Call();
        }
        static ::GlobalNamespace::MothershipHttpRunner* get_instance() {
            static BNM::Method<::GlobalNamespace::MothershipHttpRunner*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        void SendRequest(::UnityWebRequest* uwr, ::GlobalNamespace::MothershipHTTPRequest* request, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipHTTPResponse*>* responseCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendRequest"), {"uwr", "request", "responseCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(uwr, request, responseCallback);
        }
        ::BNM::Coroutine::IEnumerator* SendRequestInternal(::UnityWebRequest* uwr, ::GlobalNamespace::MothershipHTTPRequest* request, ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipHTTPResponse*>* responseCallback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("SendRequestInternal"), {"uwr", "request", "responseCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(uwr, request, responseCallback);
        }
    };
}
