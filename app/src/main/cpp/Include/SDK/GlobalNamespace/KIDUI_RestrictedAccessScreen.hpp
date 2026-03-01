#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SessionStatus.hpp"

namespace GlobalNamespace {
    struct KIDUI_RestrictedAccessScreen : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDUI_RestrictedAccessScreen");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::KIDAgeAppeal* GetAgeAppealScreen() {
            static BNM::Field<::GlobalNamespace::KIDAgeAppeal*> _field = GetClass().GetField(O("_ageAppealScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPendingStatusIndicator() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_pendingStatusIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetProhibitedStatusIndicator() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_prohibitedStatusIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAgeAppealScreen(::GlobalNamespace::KIDAgeAppeal* value) {
            static BNM::Field<::GlobalNamespace::KIDAgeAppeal*> _field = GetClass().GetField(O("_ageAppealScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendingStatusIndicator(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_pendingStatusIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProhibitedStatusIndicator(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_prohibitedStatusIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnChangeAgePressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnChangeAgePressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void ShowRestrictedAccessScreen(TP0 sessionStatus) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowRestrictedAccessScreen"), {"sessionStatus"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sessionStatus);
        }
    };
}
