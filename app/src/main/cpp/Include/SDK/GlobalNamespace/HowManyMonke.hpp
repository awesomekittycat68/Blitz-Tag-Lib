#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "HowManyMonke_State.hpp"

namespace GlobalNamespace {
    struct HowManyMonke : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HowManyMonke");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[GT/HowManyMonke]  ";
        static constexpr const char* preErr = "ERROR!!!  ";
        float GetRecheckDelay() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_RecheckDelay"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetCCUEndpoint() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("CCUEndpoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<int>* GetOnCheck() {
            static BNM::Field<::BNM::Structures::Mono::Action<int>*> _field = GetClass().GetField(O("OnCheck"));
            return _field.Get();
        }
        static int GetRecheckDelay_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("recheckDelay"));
            return _field.Get();
        }
        ::GlobalNamespace::HowManyMonke_State GetState() {
            static BNM::Field<::GlobalNamespace::HowManyMonke_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetThisMany() {
            static BNM::Field<int> _field = GetClass().GetField(O("ThisMany"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTitleDataKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("titleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCCUEndpoint(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("CCUEndpoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnCheck(::BNM::Structures::Mono::Action<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<int>*> _field = GetClass().GetField(O("OnCheck"));
            _field.Set(value);
        }
        static void SetRecheckDelay(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("recheckDelay"));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::HowManyMonke_State value) {
            static BNM::Field<::GlobalNamespace::HowManyMonke_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetThisMany(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ThisMany"));
            _field.Set(value);
        }
        void SetTitleDataKey(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("titleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::IL2CPP::Il2CppObject* FetchRecheckDelay() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("FetchRecheckDelay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* FetchThisMany() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("FetchThisMany"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static float get_RecheckDelay() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_RecheckDelay"));
            return _m.Call();
        }
        void onTD(::BNM::Structures::Mono::String* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onTD"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void onTDError(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onTDError"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
