#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PlayerAgeGateWarningStatus.hpp"

namespace GlobalNamespace {
    struct WarningsServer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "WarningsServer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::WarningsServer* GetInstance() {
            static BNM::Field<::GlobalNamespace::WarningsServer*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::WarningsServer* value) {
            static BNM::Field<::GlobalNamespace::WarningsServer*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        void* FetchPlayerData(TP0 token) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("FetchPlayerData"), {"token"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(token);
        }
        template <typename TP0 = void*>
        void* GetOptInFollowUpMessage(TP0 token) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetOptInFollowUpMessage"), {"token"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(token);
        }
    };
}
