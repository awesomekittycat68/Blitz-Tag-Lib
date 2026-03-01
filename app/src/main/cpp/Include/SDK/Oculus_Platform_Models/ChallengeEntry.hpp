#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform_Models {
    struct ChallengeEntry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "ChallengeEntry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetDisplayScore() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DisplayScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetExtraData() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("ExtraData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetID() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("ID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRank() {
            static BNM::Field<int> _field = GetClass().GetField(O("Rank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetScore() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("Score"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTimestamp() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Timestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::User* GetUser() {
            static BNM::Field<::Oculus_Platform_Models::User*> _field = GetClass().GetField(O("User"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
