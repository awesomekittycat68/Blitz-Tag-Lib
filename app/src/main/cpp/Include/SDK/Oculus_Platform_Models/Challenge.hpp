#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Oculus_Platform/ChallengeCreationType.hpp"
#include "../Oculus_Platform/ChallengeVisibility.hpp"

namespace Oculus_Platform_Models {
    struct Challenge : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "Challenge");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform::ChallengeCreationType GetCreationType() {
            static BNM::Field<::Oculus_Platform::ChallengeCreationType> _field = GetClass().GetField(O("CreationType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDescription() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Description"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetEndDate() {
            static BNM::Field<void*> _field = GetClass().GetField(O("EndDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
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
        ::Oculus_Platform_Models::Leaderboard* GetLeaderboard() {
            static BNM::Field<::Oculus_Platform_Models::Leaderboard*> _field = GetClass().GetField(O("Leaderboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::UserList* GetParticipants() {
            static BNM::Field<::Oculus_Platform_Models::UserList*> _field = GetClass().GetField(O("Participants"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::UserList* GetParticipantsOptional() {
            static BNM::Field<::Oculus_Platform_Models::UserList*> _field = GetClass().GetField(O("ParticipantsOptional"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStartDate() {
            static BNM::Field<void*> _field = GetClass().GetField(O("StartDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTitle() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Title"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform::ChallengeVisibility GetVisibility() {
            static BNM::Field<::Oculus_Platform::ChallengeVisibility> _field = GetClass().GetField(O("Visibility"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
