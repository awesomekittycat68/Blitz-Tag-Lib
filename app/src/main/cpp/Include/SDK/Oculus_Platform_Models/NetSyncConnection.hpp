#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Oculus_Platform/NetSyncConnectionStatus.hpp"
#include "../Oculus_Platform/NetSyncDisconnectReason.hpp"

namespace Oculus_Platform_Models {
    struct NetSyncConnection : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "NetSyncConnection");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int64_t GetConnectionId() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("ConnectionId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform::NetSyncDisconnectReason GetDisconnectReason() {
            static BNM::Field<::Oculus_Platform::NetSyncDisconnectReason> _field = GetClass().GetField(O("DisconnectReason"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetSessionId() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("SessionId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform::NetSyncConnectionStatus GetStatus() {
            static BNM::Field<::Oculus_Platform::NetSyncConnectionStatus> _field = GetClass().GetField(O("Status"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetZoneId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ZoneId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
