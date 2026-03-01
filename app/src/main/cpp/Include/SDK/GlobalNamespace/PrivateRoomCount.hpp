#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTZone.hpp"
#include "../GorillaGameModes/GameModeType.hpp"

namespace GlobalNamespace {
    struct PrivateRoomCount : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PrivateRoomCount");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("count"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::RoomCountForMode*>* GetModeCountOverrides() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::RoomCountForMode*>*> _field = GetClass().GetField(O("modeCountOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("count"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModeCountOverrides(::BNM::Structures::Mono::Array<::GlobalNamespace::RoomCountForMode*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::RoomCountForMode*>*> _field = GetClass().GetField(O("modeCountOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int GetRoomCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRoomCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetRoomCount(::GorillaGameModes::GameModeType mode) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRoomCount"), {"mode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(mode);
        }
        int GetRoomCount(::GlobalNamespace::GTZone zone, ::GorillaGameModes::GameModeType mode) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRoomCount"), {"zone", "mode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zone, mode);
        }
    };
}
