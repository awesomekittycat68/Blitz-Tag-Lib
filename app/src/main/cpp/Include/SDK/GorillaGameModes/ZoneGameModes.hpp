#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GTZone.hpp"
#include "GameModeType.hpp"

namespace GorillaGameModes {
    struct ZoneGameModes : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaGameModes", "ZoneGameModes");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>* GetModes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("modes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>* GetPrivateModes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("privateModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>* GetZone() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>*> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetModes(::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("modes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrivateModes(::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("privateModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZone(::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>*> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
