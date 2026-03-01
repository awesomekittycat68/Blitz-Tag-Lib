#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityManager_ZoneState.hpp"
#include "GameEntityManager_ZoneStateRequest.hpp"

namespace GlobalNamespace {
    struct GameEntityManager_ZoneStateData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameEntityManager").GetInnerClass("ZoneStateData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetNumRecievedStateBytes() {
            static BNM::Field<int> _field = GetClass().GetField(O("numRecievedStateBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetRecievedStateBytes() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("recievedStateBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntityManager_ZoneState GetState() {
            static BNM::Field<::GlobalNamespace::GameEntityManager_ZoneState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetStateStartTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Photon_Realtime::Player*>* GetZonePlayers() {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Realtime::Player*>*> _field = GetClass().GetField(O("zonePlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityManager_ZoneStateRequest>* GetZoneStateRequests() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityManager_ZoneStateRequest>*> _field = GetClass().GetField(O("zoneStateRequests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNumRecievedStateBytes(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numRecievedStateBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecievedStateBytes(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("recievedStateBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::GameEntityManager_ZoneState value) {
            static BNM::Field<::GlobalNamespace::GameEntityManager_ZoneState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateStartTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZonePlayers(::BNM::Structures::Mono::List<::Photon_Realtime::Player*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Realtime::Player*>*> _field = GetClass().GetField(O("zonePlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneStateRequests(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityManager_ZoneStateRequest>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntityManager_ZoneStateRequest>*> _field = GetClass().GetField(O("zoneStateRequests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
