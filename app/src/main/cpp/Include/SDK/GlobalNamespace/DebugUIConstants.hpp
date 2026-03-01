#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DebugUIConstants : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DebugUIConstants");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetGameModes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("GameModes"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetPlayerNames() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("PlayerNames"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetPlayfabIDs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("PlayfabIDs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetRoomIDs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("RoomIDs"));
            return _field.Get();
        }
    };
}
