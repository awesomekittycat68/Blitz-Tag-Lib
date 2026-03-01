#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform_Models {
    struct ApplicationInvite : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "ApplicationInvite");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform_Models::Destination* GetDestination() {
            static BNM::Field<::Oculus_Platform_Models::Destination*> _field = GetClass().GetField(O("Destination"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::Destination* GetDestinationOptional() {
            static BNM::Field<::Oculus_Platform_Models::Destination*> _field = GetClass().GetField(O("DestinationOptional"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetID() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("ID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLobbySessionId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("LobbySessionId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMatchSessionId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MatchSessionId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::User* GetRecipient() {
            static BNM::Field<::Oculus_Platform_Models::User*> _field = GetClass().GetField(O("Recipient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::User* GetRecipientOptional() {
            static BNM::Field<::Oculus_Platform_Models::User*> _field = GetClass().GetField(O("RecipientOptional"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
