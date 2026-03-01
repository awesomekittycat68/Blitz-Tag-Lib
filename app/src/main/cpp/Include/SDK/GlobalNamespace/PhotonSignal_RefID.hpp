#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PhotonSignal_RefID : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PhotonSignal").GetInnerClass("RefID");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Count"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static int GetGNextID() {
            static BNM::Field<int> _field = GetClass().GetField(O("gNextID"));
            return _field.Get();
        }
        static int GetGRefCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("gRefCount"));
            return _field.Get();
        }
        static void* GetGRefTable() {
            static BNM::Field<void*> _field = GetClass().GetField(O("gRefTable"));
            return _field.Get();
        }
        int GetIntValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("intValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetGNextID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("gNextID"));
            _field.Set(value);
        }
        static void SetGRefCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("gRefCount"));
            _field.Set(value);
        }
        void SetIntValue(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("intValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Finalize_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Finalize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static int get_Count() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Count"));
            return _m.Call();
        }
        static int Register(::GlobalNamespace::PhotonSignal* ps) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Register"), {"ps"});
            return _m.Call(ps);
        }
    };
}
