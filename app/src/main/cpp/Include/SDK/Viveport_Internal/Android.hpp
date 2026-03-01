#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport_Internal {
    struct Android : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport.Internal", "Android");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetCurrentActivity() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_CurrentActivity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCurrentContext() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_CurrentContext"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* GetUnityPlayer() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_UnityPlayer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetApi() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_api"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetDeeplink() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_deeplink"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetIAPurchase() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_iAPurchase"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetSessionToken() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_sessionToken"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetSubscription() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_subscription"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetUnityPlayer_f() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_unityPlayer"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetUser() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_user"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetUserStats() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_userStats"));
            return _field.Get();
        }
        static void SetApi(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_api"));
            _field.Set(value);
        }
        static void SetDeeplink(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_deeplink"));
            _field.Set(value);
        }
        static void SetIAPurchase(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_iAPurchase"));
            _field.Set(value);
        }
        static void SetSessionToken(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_sessionToken"));
            _field.Set(value);
        }
        static void SetSubscription(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_subscription"));
            _field.Set(value);
        }
        static void SetUnityPlayer(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_unityPlayer"));
            _field.Set(value);
        }
        static void SetUser(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_user"));
            _field.Set(value);
        }
        static void SetUserStats(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_userStats"));
            _field.Set(value);
        }
        static ::BNM::IL2CPP::Il2CppObject* get_CurrentActivity() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_CurrentActivity"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* get_CurrentContext() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_CurrentContext"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* get_UnityPlayer() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_UnityPlayer"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetDeeplink_1() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetDeeplink"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetJavaAPI() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetJavaAPI"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetJavaIAPurchase() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetJavaIAPurchase"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetJavaSessionToken() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetJavaSessionToken"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetJavaSubscription() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetJavaSubscription"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetJavaUser() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetJavaUser"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetJavaUserStats() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetJavaUserStats"));
            return _m.Call();
        }
    };
}
