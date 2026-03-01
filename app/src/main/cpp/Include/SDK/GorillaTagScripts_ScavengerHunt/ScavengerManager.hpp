#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_ScavengerHunt {
    struct ScavengerManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.ScavengerHunt", "ScavengerManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaTagScripts_ScavengerHunt::ScavengerManager* get_Instance() {
            static BNM::Method<::GorillaTagScripts_ScavengerHunt::ScavengerManager*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static constexpr const char* MothershipKey = "ScavengerHunt";
        ::GorillaTagScripts_ScavengerHunt::ScavengerManager* GetInstance() {
            static BNM::Method<::GorillaTagScripts_ScavengerHunt::ScavengerManager*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GorillaTagScripts_ScavengerHunt::ScavengerManager* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::GorillaTagScripts_ScavengerHunt::ScavengerManager_Hunt*>* GetHunts() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts_ScavengerHunt::ScavengerManager_Hunt*>*> _field = GetClass().GetField(O("Hunts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHunts(::BNM::Structures::Mono::Array<::GorillaTagScripts_ScavengerHunt::ScavengerManager_Hunt*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts_ScavengerHunt::ScavengerManager_Hunt*>*> _field = GetClass().GetField(O("Hunts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Collect(::GorillaTagScripts_ScavengerHunt::ScavengerTarget* target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Collect"), {"target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target);
        }
        void FromJson(::BNM::Structures::Mono::String* json) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FromJson"), {"json"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(json);
        }
        void FromJson(::GorillaTagScripts_ScavengerHunt::ScavengerManager_ScavengerJson* json) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FromJson"), {"json"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(json);
        }
        static ::GorillaTagScripts_ScavengerHunt::ScavengerManager* get_Instance_1() {
            static BNM::Method<::GorillaTagScripts_ScavengerHunt::ScavengerManager*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        ::GorillaTagScripts_ScavengerHunt::ScavengerManager_Hunt* GetHunt(::BNM::Structures::Mono::String* huntName) {
            static BNM::Method<::GorillaTagScripts_ScavengerHunt::ScavengerManager_Hunt*> _m = GetClass().GetMethod(O("GetHunt"), {"huntName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(huntName);
        }
        ::BNM::Coroutine::IEnumerator* ImportMothershipUserData() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ImportMothershipUserData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsCollected(::GorillaTagScripts_ScavengerHunt::ScavengerTarget* target) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsCollected"), {"target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(target);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGetUserDataFailure(::GlobalNamespace::MothershipError* error, int responseCode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetUserDataFailure"), {"error", "responseCode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error, responseCode);
        }
        void OnGetUserDataSuccess(::GlobalNamespace::MothershipUserData* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetUserDataSuccess"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
        void OnSetUserDataFailure(::GlobalNamespace::MothershipError* error, int statusCode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSetUserDataFailure"), {"error", "statusCode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error, statusCode);
        }
        void OnSetUserDataSuccess(::GlobalNamespace::SetUserDataResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSetUserDataSuccess"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void RegisterTarget(::GorillaTagScripts_ScavengerHunt::ScavengerTarget* target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterTarget"), {"target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target);
        }
        static void set_Instance(::GorillaTagScripts_ScavengerHunt::ScavengerManager* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Instance"), {"value"});
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GorillaTagScripts_ScavengerHunt::ScavengerManager_ScavengerJson* ToJson() {
            static BNM::Method<::GorillaTagScripts_ScavengerHunt::ScavengerManager_ScavengerJson*> _m = GetClass().GetMethod(O("ToJson"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
