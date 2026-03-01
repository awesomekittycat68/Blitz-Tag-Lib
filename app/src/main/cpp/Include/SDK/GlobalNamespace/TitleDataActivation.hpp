#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct TitleDataActivation : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TitleDataActivation");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData* GetActivationData() {
            static BNM::Field<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*> _field = GetClass().GetField(O("activationData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetGameObjects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("gameObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOnOffState() {
            static BNM::Field<bool> _field = GetClass().GetField(O("onOffState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetReferenceDate() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ReferenceDate"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTitleDataKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("titleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTitleDataObjectID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("titleDataObjectID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivationData(::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData* value) {
            static BNM::Field<::GlobalNamespace::TitleDataActivation_TitleDataObjectActivationData*> _field = GetClass().GetField(O("activationData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameObjects(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("gameObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnOffState(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("onOffState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetReferenceDate(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ReferenceDate"));
            _field.Set(value);
        }
        void SetTitleDataKey(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("titleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleDataObjectID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("titleDataObjectID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float GetDelayedActivationTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetDelayedActivationTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
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
        void onTD(::BNM::Structures::Mono::String* s) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onTD"), {"s"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(s);
        }
        void onTDError(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onTDError"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        static void onTDReferenceDate(::BNM::Structures::Mono::String* s) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onTDReferenceDate"), {"s"});
            _m.Call(s);
        }
        static void onTDReferenceDateError(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onTDReferenceDateError"), {"error"});
            _m.Call(error);
        }
        void PlayAnimatorAtScheduledTime(::Animator* animator) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayAnimatorAtScheduledTime"), {"animator"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(animator);
        }
        static void RuntimeInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RuntimeInit"));
            _m.Call();
        }
        void SetState(bool onOff, float delayedActivation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"onOff", "delayedActivation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(onOff, delayedActivation);
        }
    };
}
