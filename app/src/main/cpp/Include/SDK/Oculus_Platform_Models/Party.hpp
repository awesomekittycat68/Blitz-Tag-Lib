#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform_Models {
    struct Party : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "Party");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint64_t GetID() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("ID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::UserList* GetInvitedUsers() {
            static BNM::Field<::Oculus_Platform_Models::UserList*> _field = GetClass().GetField(O("InvitedUsers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::UserList* GetInvitedUsersOptional() {
            static BNM::Field<::Oculus_Platform_Models::UserList*> _field = GetClass().GetField(O("InvitedUsersOptional"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::User* GetLeader() {
            static BNM::Field<::Oculus_Platform_Models::User*> _field = GetClass().GetField(O("Leader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::User* GetLeaderOptional() {
            static BNM::Field<::Oculus_Platform_Models::User*> _field = GetClass().GetField(O("LeaderOptional"));
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
