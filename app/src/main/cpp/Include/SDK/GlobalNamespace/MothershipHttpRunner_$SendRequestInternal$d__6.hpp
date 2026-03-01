#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipHttpRunner_$SendRequestInternal$d__6 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipHttpRunner").GetInnerClass("<SendRequestInternal>d__6");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::MothershipHTTPRequest* GetRequest() {
            static BNM::Field<::GlobalNamespace::MothershipHTTPRequest*> _field = GetClass().GetField(O("request"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipHTTPResponse*>* GetResponseCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipHTTPResponse*>*> _field = GetClass().GetField(O("responseCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::UnityWebRequest* GetUwr() {
            static BNM::Field<::UnityWebRequest*> _field = GetClass().GetField(O("uwr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRequest(::GlobalNamespace::MothershipHTTPRequest* value) {
            static BNM::Field<::GlobalNamespace::MothershipHTTPRequest*> _field = GetClass().GetField(O("request"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResponseCallback(::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipHTTPResponse*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipHTTPResponse*>*> _field = GetClass().GetField(O("responseCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUwr(::UnityWebRequest* value) {
            static BNM::Field<::UnityWebRequest*> _field = GetClass().GetField(O("uwr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool MoveNext() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
