#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct Gorillanalytics : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Gorillanalytics");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaGameModes::GameModeZoneMapping* GetGameModeData() {
            static BNM::Field<::GorillaGameModes::GameModeZoneMapping*> _field = GetClass().GetField(O("gameModeData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInterval() {
            static BNM::Field<float> _field = GetClass().GetField(O("interval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MapModeQueueSet* GetMapModeQueueSet() {
            static BNM::Field<::GlobalNamespace::MapModeQueueSet*> _field = GetClass().GetField(O("mapModeQueueSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetOneOverChance() {
            static BNM::Field<double> _field = GetClass().GetField(O("oneOverChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::PhotonNetworkController* GetPhotonNetworkController() {
            static BNM::Field<::GorillaNetworking::PhotonNetworkController*> _field = GetClass().GetField(O("photonNetworkController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::Gorillanalytics_UploadData* GetUploadData() {
            static BNM::Field<::GlobalNamespace::Gorillanalytics_UploadData*> _field = GetClass().GetField(O("uploadData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameModeData(::GorillaGameModes::GameModeZoneMapping* value) {
            static BNM::Field<::GorillaGameModes::GameModeZoneMapping*> _field = GetClass().GetField(O("gameModeData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInterval(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("interval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMapModeQueueSet(::GlobalNamespace::MapModeQueueSet* value) {
            static BNM::Field<::GlobalNamespace::MapModeQueueSet*> _field = GetClass().GetField(O("mapModeQueueSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOneOverChance(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("oneOverChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonNetworkController(::GorillaNetworking::PhotonNetworkController* value) {
            static BNM::Field<::GorillaNetworking::PhotonNetworkController*> _field = GetClass().GetField(O("photonNetworkController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void GetMapModeQueue(::BNM::Structures::Mono::String*& map, ::BNM::Structures::Mono::String*& mode, ::BNM::Structures::Mono::String*& queue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetMapModeQueue"), {"map", "mode", "queue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&map, &mode, &queue);
        }
        ::BNM::Coroutine::IEnumerator* Start() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void UploadGorillanalytics() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UploadGorillanalytics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
