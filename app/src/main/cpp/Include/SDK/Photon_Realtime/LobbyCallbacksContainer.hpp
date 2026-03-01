#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct LobbyCallbacksContainer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "LobbyCallbacksContainer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Realtime::LoadBalancingClient* GetClient() {
            static BNM::Field<::Photon_Realtime::LoadBalancingClient*> _field = GetClass().GetField(O("client"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void OnJoinedLobby() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedLobby"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLeftLobby() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftLobby"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLobbyStatisticsUpdate(::BNM::Structures::Mono::List<::Photon_Realtime::TypedLobbyInfo*>* lobbyStatistics) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLobbyStatisticsUpdate"), {"lobbyStatistics"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(lobbyStatistics);
        }
        void OnRoomListUpdate(::BNM::Structures::Mono::List<::Photon_Realtime::RoomInfo*>* roomList) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRoomListUpdate"), {"roomList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(roomList);
        }
    };
}
