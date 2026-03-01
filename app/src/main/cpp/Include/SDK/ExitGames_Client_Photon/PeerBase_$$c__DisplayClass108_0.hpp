#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DebugLevel.hpp"

namespace ExitGames_Client_Photon {
    struct PeerBase_$$c__DisplayClass108_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "PeerBase").GetInnerClass("<>c__DisplayClass108_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetDebugReturn() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("debugReturn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::DebugLevel GetLevel() {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("level"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDebugReturn(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("debugReturn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevel(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("level"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
