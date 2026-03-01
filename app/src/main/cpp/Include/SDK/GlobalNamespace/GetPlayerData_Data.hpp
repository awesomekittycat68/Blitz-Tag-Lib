#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GetSessionResponseType.hpp"
#include "SessionStatus.hpp"

namespace GlobalNamespace {
    struct GetPlayerData_Data : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GetPlayerData_Data");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetAgeStatus() {
            static BNM::Field<void*> _field = GetClass().GetField(O("AgeStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasConfirmedSetup() {
            static BNM::Field<bool> _field = GetClass().GetField(O("HasConfirmedSetup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetOptInPermissions() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OptInPermissions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GetSessionResponseType GetResponseType() {
            static BNM::Field<::GlobalNamespace::GetSessionResponseType> _field = GetClass().GetField(O("responseType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TMPSession* GetSession() {
            static BNM::Field<::GlobalNamespace::TMPSession*> _field = GetClass().GetField(O("session"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStatus() {
            static BNM::Field<void*> _field = GetClass().GetField(O("status"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
