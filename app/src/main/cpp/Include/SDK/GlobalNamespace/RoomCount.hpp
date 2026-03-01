#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTZone.hpp"
#include "PrivateRoomCount.hpp"
#include "../GorillaGameModes/GameModeType.hpp"

namespace GlobalNamespace {
    struct RoomCount : ::GlobalNamespace::PrivateRoomCount {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RoomCount");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::RoomCountForZone*>* GetZoneCountOverrides() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::RoomCountForZone*>*> _field = GetClass().GetField(O("zoneCountOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetZoneCountOverrides(::BNM::Structures::Mono::Array<::GlobalNamespace::RoomCountForZone*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::RoomCountForZone*>*> _field = GetClass().GetField(O("zoneCountOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int GetRoomCount(::GlobalNamespace::GTZone zone) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRoomCount"), {"zone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zone);
        }
        int GetRoomCount(::GlobalNamespace::GTZone zone, ::GorillaGameModes::GameModeType mode) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRoomCount"), {"zone", "mode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zone, mode);
        }
    };
}
