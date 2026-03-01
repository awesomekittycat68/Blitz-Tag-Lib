#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ActiveWebSocket : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ActiveWebSocket");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::MothershipOpenWebSocketEventArgs* GetRequestData() {
            static BNM::Field<::GlobalNamespace::MothershipOpenWebSocketEventArgs*> _field = GetClass().GetField(O("requestData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipOpenWebSocketEventArgs*>* GetResetSocket() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipOpenWebSocketEventArgs*>*> _field = GetClass().GetField(O("resetSocket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetWebsocket() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("websocket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRequestData(::GlobalNamespace::MothershipOpenWebSocketEventArgs* value) {
            static BNM::Field<::GlobalNamespace::MothershipOpenWebSocketEventArgs*> _field = GetClass().GetField(O("requestData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResetSocket(::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipOpenWebSocketEventArgs*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::MothershipOpenWebSocketEventArgs*>*> _field = GetClass().GetField(O("resetSocket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWebsocket(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("websocket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
