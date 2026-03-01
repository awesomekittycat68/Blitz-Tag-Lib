#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LobbyType.hpp"

namespace Photon_Realtime {
    struct TypedLobby : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "TypedLobby");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsDefault() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsDefault"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::Photon_Realtime::TypedLobby* GetDefault() {
            static BNM::Field<::Photon_Realtime::TypedLobby*> _field = GetClass().GetField(O("Default"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::LobbyType GetType_f() {
            static BNM::Field<::Photon_Realtime::LobbyType> _field = GetClass().GetField(O("Type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetType(::Photon_Realtime::LobbyType value) {
            static BNM::Field<::Photon_Realtime::LobbyType> _field = GetClass().GetField(O("Type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_IsDefault() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsDefault"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
