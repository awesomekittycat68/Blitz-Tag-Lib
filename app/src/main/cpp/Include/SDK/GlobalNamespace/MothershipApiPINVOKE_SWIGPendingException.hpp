#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipApiPINVOKE_SWIGPendingException : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipApiPINVOKE").GetInnerClass("SWIGPendingException");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetPending() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Pending"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static void* GetExceptionsLock() {
            static BNM::Field<void*> _field = GetClass().GetField(O("exceptionsLock"));
            return _field.Get();
        }
        static int GetNumExceptionsPending() {
            static BNM::Field<int> _field = GetClass().GetField(O("numExceptionsPending"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetPendingException() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("pendingException"));
            return _field.Get();
        }
        static void SetExceptionsLock(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("exceptionsLock"));
            _field.Set(value);
        }
        static void SetNumExceptionsPending(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numExceptionsPending"));
            _field.Set(value);
        }
        static void SetPendingException(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("pendingException"));
            _field.Set(value);
        }
        static bool get_Pending() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Pending"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* Retrieve() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("Retrieve"));
            return _m.Call();
        }
        static void Set(::BNM::IL2CPP::Il2CppObject* e) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Set"), {"e"});
            _m.Call(e);
        }
    };
}
