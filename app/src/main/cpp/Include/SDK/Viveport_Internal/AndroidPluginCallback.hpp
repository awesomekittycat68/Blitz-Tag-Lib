#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport_Internal {
    struct AndroidPluginCallback : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport.Internal", "AndroidPluginCallback");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Viveport_Internal::IAPurchaseCallback* GetCallback() {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Viveport_Internal::StatusCallback* GetStatusCallback() {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("statusCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Viveport_Internal::StatusCallback2* GetStatusCallback2() {
            static BNM::Field<::Viveport_Internal::StatusCallback2*> _field = GetClass().GetField(O("statusCallback2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallback(::Viveport_Internal::IAPurchaseCallback* value) {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatusCallback(::Viveport_Internal::StatusCallback* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback*> _field = GetClass().GetField(O("statusCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatusCallback2(::Viveport_Internal::StatusCallback2* value) {
            static BNM::Field<::Viveport_Internal::StatusCallback2*> _field = GetClass().GetField(O("statusCallback2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void onResult(int statusCode, ::BNM::Structures::Mono::String* result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onResult"), {"statusCode", "result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(statusCode, result);
        }
    };
}
