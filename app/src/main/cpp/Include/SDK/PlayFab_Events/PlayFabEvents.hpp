#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Events {
    struct PlayFabEvents : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Events", "PlayFabEvents");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::PlayFab_Events::PlayFabEvents* GetInstance() {
            static BNM::Field<::PlayFab_Events::PlayFabEvents*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        void add_OnGlobalErrorEvent(::PlayFab_Events::PlayFabEvents_PlayFabErrorEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGlobalErrorEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnGlobalErrorEvent(::PlayFab_Events::PlayFabEvents_PlayFabErrorEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGlobalErrorEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        static ::PlayFab_Events::PlayFabEvents* GetInstance_f() {
            static BNM::Field<::PlayFab_Events::PlayFabEvents*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        ::PlayFab_Events::PlayFabEvents_PlayFabErrorEvent* GetOnGlobalErrorEvent() {
            static BNM::Field<::PlayFab_Events::PlayFabEvents_PlayFabErrorEvent*> _field = GetClass().GetField(O("OnGlobalErrorEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetInstance(::PlayFab_Events::PlayFabEvents* value) {
            static BNM::Field<::PlayFab_Events::PlayFabEvents*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetOnGlobalErrorEvent(::PlayFab_Events::PlayFabEvents_PlayFabErrorEvent* value) {
            static BNM::Field<::PlayFab_Events::PlayFabEvents_PlayFabErrorEvent*> _field = GetClass().GetField(O("OnGlobalErrorEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnGlobalErrorEvent_1(::PlayFab_Events::PlayFabEvents_PlayFabErrorEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGlobalErrorEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static ::PlayFab_Events::PlayFabEvents* Init() {
            static BNM::Method<::PlayFab_Events::PlayFabEvents*> _m = GetClass().GetMethod(O("Init"));
            return _m.Call();
        }
        void OnProcessingErrorEvent(::PlayFab_SharedModels::PlayFabRequestCommon* request, ::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProcessingErrorEvent"), {"request", "error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, error);
        }
        void OnProcessingEvent(::PlayFab_Internal::ApiProcessingEventArgs* e) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProcessingEvent"), {"e"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(e);
        }
        void remove_OnGlobalErrorEvent_1(::PlayFab_Events::PlayFabEvents_PlayFabErrorEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGlobalErrorEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void UnregisterInstance(TP0 instance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterInstance"), {"instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(instance);
        }
    };
}
