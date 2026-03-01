#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MatchmakingMode.hpp"

namespace Photon_Realtime {
    struct OpJoinRandomRoomParams : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "OpJoinRandomRoomParams");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::ExitGames_Client_Photon::Hashtable* GetExpectedCustomRoomProperties() {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("ExpectedCustomRoomProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetExpectedMaxPlayers() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("ExpectedMaxPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetExpectedUsers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("ExpectedUsers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::MatchmakingMode GetMatchingType() {
            static BNM::Field<::Photon_Realtime::MatchmakingMode> _field = GetClass().GetField(O("MatchingType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSqlLobbyFilter() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SqlLobbyFilter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::TypedLobby* GetTypedLobby() {
            static BNM::Field<::Photon_Realtime::TypedLobby*> _field = GetClass().GetField(O("TypedLobby"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetExpectedCustomRoomProperties(::ExitGames_Client_Photon::Hashtable* value) {
            static BNM::Field<::ExitGames_Client_Photon::Hashtable*> _field = GetClass().GetField(O("ExpectedCustomRoomProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpectedMaxPlayers(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("ExpectedMaxPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpectedUsers(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("ExpectedUsers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatchingType(::Photon_Realtime::MatchmakingMode value) {
            static BNM::Field<::Photon_Realtime::MatchmakingMode> _field = GetClass().GetField(O("MatchingType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSqlLobbyFilter(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SqlLobbyFilter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTypedLobby(::Photon_Realtime::TypedLobby* value) {
            static BNM::Field<::Photon_Realtime::TypedLobby*> _field = GetClass().GetField(O("TypedLobby"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
