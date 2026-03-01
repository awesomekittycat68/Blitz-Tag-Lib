#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Oculus_Platform/PartyUpdateAction.hpp"

namespace Oculus_Platform_Models {
    struct PartyUpdateNotification : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "PartyUpdateNotification");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform::PartyUpdateAction GetAction() {
            static BNM::Field<::Oculus_Platform::PartyUpdateAction> _field = GetClass().GetField(O("Action"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetPartyId() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("PartyId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetSenderId() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("SenderId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetUpdateTimestamp() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("UpdateTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetUserAlias() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("UserAlias"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetUserId() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("UserId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetUserName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("UserName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
