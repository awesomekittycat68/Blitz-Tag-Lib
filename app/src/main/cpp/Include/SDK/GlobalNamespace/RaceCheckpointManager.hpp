#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RaceCheckpointManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RaceCheckpointManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::RaceCheckpoint*>* GetCheckpoints() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::RaceCheckpoint*>*> _field = GetClass().GetField(O("checkpoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RaceVisual* GetVisual() {
            static BNM::Field<::GlobalNamespace::RaceVisual*> _field = GetClass().GetField(O("visual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCheckpoints(::BNM::Structures::Mono::Array<::GlobalNamespace::RaceCheckpoint*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::RaceCheckpoint*>*> _field = GetClass().GetField(O("checkpoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisual(::GlobalNamespace::RaceVisual* value) {
            static BNM::Field<::GlobalNamespace::RaceVisual*> _field = GetClass().GetField(O("visual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool IsPlayerNearCheckpoint(::GlobalNamespace::VRRig* player, int checkpointIdx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerNearCheckpoint"), {"player", "checkpointIdx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, checkpointIdx);
        }
        void OnCheckpointReached(int index, ::GlobalNamespace::SoundBankPlayer* checkpointSound) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCheckpointReached"), {"index", "checkpointSound"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, checkpointSound);
        }
        void OnRaceEnd() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRaceEnd"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnRaceStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRaceStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
