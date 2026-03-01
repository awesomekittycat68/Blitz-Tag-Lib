#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRToolLantern_State.hpp"

namespace GlobalNamespace {
    struct GRToolLantern : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRToolLantern");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GRAttributes* GetAttributes() {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetFlareSpawnoffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("flareSpawnoffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameLight* GetGameLight() {
            static BNM::Field<::GlobalNamespace::GameLight*> _field = GetClass().GetField(O("gameLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetLanternFlarePrefab() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("lanternFlarePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastFlareDropTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastFlareDropTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxSpawnedFlares() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxSpawnedFlares"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::MeshAndMaterials*>* GetMeshAndMaterials() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MeshAndMaterials*>*> _field = GetClass().GetField(O("meshAndMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMinEnergyPerUse() {
            static BNM::Field<int> _field = GetClass().GetField(O("minEnergyPerUse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetMinFlareDropInterval() {
            static BNM::Field<double> _field = GetClass().GetField(O("minFlareDropInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinOnDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("minOnDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilityHaptic* GetOnHaptic() {
            static BNM::Field<::GlobalNamespace::AbilityHaptic*> _field = GetClass().GetField(O("onHaptic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetProvidingXRay() {
            static BNM::Field<bool> _field = GetClass().GetField(O("providingXRay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolLantern_State GetState() {
            static BNM::Field<::GlobalNamespace::GRToolLantern_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeLastTurnedOn() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeLastTurnedOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeOnPerEnergyUseDurationSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeOnPerEnergyUseDurationSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeOnSpentEnergy() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeOnSpentEnergy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRTool* GetTool() {
            static BNM::Field<::GlobalNamespace::GRTool*> _field = GetClass().GetField(O("tool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetTrackedEntities() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("trackedEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetTurnOnSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("turnOnSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTurnOnSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("turnOnSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetUpgrade1TurnOnSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade1TurnOnSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetUpgrade2TurnOnSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade2TurnOnSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetUpgrade3TurnOnSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade3TurnOnSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttributes(::GlobalNamespace::GRAttributes* value) {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlareSpawnoffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("flareSpawnoffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameLight(::GlobalNamespace::GameLight* value) {
            static BNM::Field<::GlobalNamespace::GameLight*> _field = GetClass().GetField(O("gameLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLanternFlarePrefab(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("lanternFlarePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastFlareDropTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastFlareDropTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxSpawnedFlares(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxSpawnedFlares"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshAndMaterials(::BNM::Structures::Mono::List<::GlobalNamespace::MeshAndMaterials*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MeshAndMaterials*>*> _field = GetClass().GetField(O("meshAndMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinEnergyPerUse(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("minEnergyPerUse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinFlareDropInterval(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("minFlareDropInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinOnDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minOnDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnHaptic(::GlobalNamespace::AbilityHaptic* value) {
            static BNM::Field<::GlobalNamespace::AbilityHaptic*> _field = GetClass().GetField(O("onHaptic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProvidingXRay(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("providingXRay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::GRToolLantern_State value) {
            static BNM::Field<::GlobalNamespace::GRToolLantern_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeLastTurnedOn(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeLastTurnedOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeOnPerEnergyUseDurationSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeOnPerEnergyUseDurationSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeOnSpentEnergy(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeOnSpentEnergy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTool(::GlobalNamespace::GRTool* value) {
            static BNM::Field<::GlobalNamespace::GRTool*> _field = GetClass().GetField(O("tool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrackedEntities(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("trackedEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnOnSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("turnOnSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnOnSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("turnOnSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade1TurnOnSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade1TurnOnSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade2TurnOnSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade2TurnOnSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade3TurnOnSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("upgrade3TurnOnSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddTrackedEntity(::GlobalNamespace::GameEntity* entityToTrack) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddTrackedEntity"), {"entityToTrack"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityToTrack);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanChangeState(int64_t newStateIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanChangeState"), {"newStateIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newStateIndex);
        }
        void DisableXRay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableXRay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnableLights(bool isOn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableLights"), {"isOn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isOn);
        }
        void EnableXRay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableXRay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsButtonHeld() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsButtonHeld"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsHeld() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHeld"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsHeldLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHeldLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGrabbed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrabbed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnReleased() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReleased"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnStateChanged(int64_t prevState, int64_t nextState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStateChanged"), {"prevState", "nextState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prevState, nextState);
        }
        void OnSummonedEntityDestroy(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSummonedEntityDestroy"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity);
        }
        void OnSummonedEntityInit(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSummonedEntityInit"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity);
        }
        void OnToolUpgraded(::GlobalNamespace::GRTool* tool) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnToolUpgraded"), {"tool"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tool);
        }
        void OnUpdateAuthority(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateAuthority"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void OnUpdateRemote(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateRemote"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void RemoveTrackedEntity(::GlobalNamespace::GameEntity* entityToRemove) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveTrackedEntity"), {"entityToRemove"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityToRemove);
        }
        void SetState_1(::GlobalNamespace::GRToolLantern_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void TryConsumeEnergy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryConsumeEnergy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TurnOff() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TurnOff"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TurnOn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TurnOn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool WasLastHeldLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("WasLastHeldLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
