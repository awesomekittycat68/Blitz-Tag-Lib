#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NetEventOptions_RecieverTarget.hpp"

namespace GlobalNamespace {
    struct NetEventOptions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NetEventOptions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetHasWebHooks() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasWebHooks"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Realtime::WebFlags* GetFlags() {
            static BNM::Field<::Photon_Realtime::WebFlags*> _field = GetClass().GetField(O("Flags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetEventOptions_RecieverTarget GetReciever() {
            static BNM::Field<::GlobalNamespace::NetEventOptions_RecieverTarget> _field = GetClass().GetField(O("Reciever"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetTargetActors() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("TargetActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFlags(::Photon_Realtime::WebFlags* value) {
            static BNM::Field<::Photon_Realtime::WebFlags*> _field = GetClass().GetField(O("Flags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReciever(::GlobalNamespace::NetEventOptions_RecieverTarget value) {
            static BNM::Field<::GlobalNamespace::NetEventOptions_RecieverTarget> _field = GetClass().GetField(O("Reciever"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetActors(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("TargetActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_HasWebHooks() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasWebHooks"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
