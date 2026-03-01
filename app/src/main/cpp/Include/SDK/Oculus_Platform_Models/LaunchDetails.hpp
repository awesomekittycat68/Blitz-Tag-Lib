#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Oculus_Platform/LaunchType.hpp"

namespace Oculus_Platform_Models {
    struct LaunchDetails : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "LaunchDetails");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetDeeplinkMessage() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DeeplinkMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDestinationApiName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DestinationApiName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLaunchSource() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("LaunchSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform::LaunchType GetLaunchType() {
            static BNM::Field<::Oculus_Platform::LaunchType> _field = GetClass().GetField(O("LaunchType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLobbySessionID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("LobbySessionID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMatchSessionID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MatchSessionID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTrackingID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TrackingID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::UserList* GetUsers() {
            static BNM::Field<::Oculus_Platform_Models::UserList*> _field = GetClass().GetField(O("Users"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::UserList* GetUsersOptional() {
            static BNM::Field<::Oculus_Platform_Models::UserList*> _field = GetClass().GetField(O("UsersOptional"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
