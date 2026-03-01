#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "JoinType.hpp"

namespace GorillaNetworking {
    struct PhotonNetworkController_$AttemptToJoinPublicRoomAsync$d__69 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "PhotonNetworkController").GetInnerClass("<AttemptToJoinPublicRoomAsync>d__69");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<void*>* GetAdditionalCustomProperties() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("additionalCustomProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFilterSubscribed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("filterSubscribed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::JoinType GetRoomJoinType() {
            static BNM::Field<::GorillaNetworking::JoinType> _field = GetClass().GetField(O("roomJoinType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::GorillaNetworkJoinTrigger* GetTriggeredTrigger() {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("triggeredTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAdditionalCustomProperties(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("additionalCustomProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFilterSubscribed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("filterSubscribed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomJoinType(::GorillaNetworking::JoinType value) {
            static BNM::Field<::GorillaNetworking::JoinType> _field = GetClass().GetField(O("roomJoinType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggeredTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger* value) {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("triggeredTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void MoveNext() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void SetStateMachine(TP0 stateMachine) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStateMachine"), {"stateMachine"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stateMachine);
        }
    };
}
