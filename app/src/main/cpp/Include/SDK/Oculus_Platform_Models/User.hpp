#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Oculus_Platform/UserPresenceStatus.hpp"

namespace Oculus_Platform_Models {
    struct User : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "User");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetDisplayName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DisplayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetID() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("ID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetImageURL() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ImageURL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::ManagedInfo* GetManagedInfo() {
            static BNM::Field<::Oculus_Platform_Models::ManagedInfo*> _field = GetClass().GetField(O("ManagedInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::ManagedInfo* GetManagedInfoOptional() {
            static BNM::Field<::Oculus_Platform_Models::ManagedInfo*> _field = GetClass().GetField(O("ManagedInfoOptional"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOculusID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("OculusID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPresence() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Presence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPresenceDeeplinkMessage() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PresenceDeeplinkMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPresenceDestinationApiName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PresenceDestinationApiName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPresenceLobbySessionId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PresenceLobbySessionId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPresenceMatchSessionId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PresenceMatchSessionId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform::UserPresenceStatus GetPresenceStatus() {
            static BNM::Field<::Oculus_Platform::UserPresenceStatus> _field = GetClass().GetField(O("PresenceStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSmallImageUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SmallImageUrl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
