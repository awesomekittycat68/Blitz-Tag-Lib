#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SessionStatus.hpp"

namespace GlobalNamespace {
    struct UpgradeSessionData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "UpgradeSessionData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::TMPSession* GetSession() {
            static BNM::Field<::GlobalNamespace::TMPSession*> _field = GetClass().GetField(O("session"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SessionStatus GetStatus() {
            static BNM::Field<::GlobalNamespace::SessionStatus> _field = GetClass().GetField(O("status"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
