#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AnimatedBee.hpp"
#include "SRand.hpp"
#include "XSceneRef.hpp"

namespace GlobalNamespace {
    struct BeeSwarmManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BeeSwarmManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAvoidPointRadius() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_AvoidPointRadius"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAvoidPointRadius(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AvoidPointRadius"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetBeeAcceleration() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_BeeAcceleration"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBeeAcceleration(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BeeAcceleration"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::BeePerchPoint* GetBeeHive() {
            static BNM::Method<::GlobalNamespace::BeePerchPoint*> _method = GetClass().GetMethod(O("get_BeeHive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBeeHive(::GlobalNamespace::BeePerchPoint* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BeeHive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetBeeJitterDamping() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_BeeJitterDamping"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBeeJitterDamping(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BeeJitterDamping"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetBeeJitterStrength() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_BeeJitterStrength"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBeeJitterStrength(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BeeJitterStrength"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetBeeMaxFlowerDuration() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_BeeMaxFlowerDuration"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBeeMaxFlowerDuration(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BeeMaxFlowerDuration"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetBeeMaxJitterRadius() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_BeeMaxJitterRadius"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBeeMaxJitterRadius(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BeeMaxJitterRadius"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetBeeMaxTravelTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_BeeMaxTravelTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBeeMaxTravelTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BeeMaxTravelTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetBeeMinFlowerDuration() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_BeeMinFlowerDuration"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBeeMinFlowerDuration(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BeeMinFlowerDuration"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetBeeNearDestinationRadius() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_BeeNearDestinationRadius"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBeeNearDestinationRadius(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BeeNearDestinationRadius"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetBeeSpeed() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_BeeSpeed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBeeSpeed(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BeeSpeed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetGeneralBuzzRange() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_GeneralBuzzRange"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetGeneralBuzzRange(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_GeneralBuzzRange"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BeePerchPoint*>* GetAllPerchPoints() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BeePerchPoint*>*> _field = GetClass().GetField(O("allPerchPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GameObject*>* GetAvoidPoints() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("avoidPoints"));
            return _field.Get();
        }
        ::MeshRenderer* GetBeePrefab() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("beePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::AnimatedBee>* GetBees() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AnimatedBee>*> _field = GetClass().GetField(O("bees"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::XSceneRef>* GetFlowerSections() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::XSceneRef>*> _field = GetClass().GetField(O("flowerSections"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetFlowerSectionsResolved() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("flowerSectionsResolved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetGeneralBeeBuzz() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("generalBeeBuzz"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLoopSizePerBee() {
            static BNM::Field<int> _field = GetClass().GetField(O("loopSizePerBee"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetNearbyBeeBuzz() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("nearbyBeeBuzz"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumBees() {
            static BNM::Field<int> _field = GetClass().GetField(O("numBees"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetPlayerCamera() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("playerCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllPerchPoints(::BNM::Structures::Mono::List<::GlobalNamespace::BeePerchPoint*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BeePerchPoint*>*> _field = GetClass().GetField(O("allPerchPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBeePrefab(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("beePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBees(::BNM::Structures::Mono::List<::GlobalNamespace::AnimatedBee>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AnimatedBee>*> _field = GetClass().GetField(O("bees"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlowerSections(::BNM::Structures::Mono::Array<::GlobalNamespace::XSceneRef>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::XSceneRef>*> _field = GetClass().GetField(O("flowerSections"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlowerSectionsResolved(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("flowerSectionsResolved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGeneralBeeBuzz(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("generalBeeBuzz"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoopSizePerBee(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("loopSizePerBee"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNearbyBeeBuzz(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("nearbyBeeBuzz"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumBees(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numBees"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerCamera(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("playerCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float get_AvoidPointRadius() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_AvoidPointRadius"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_BeeAcceleration() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_BeeAcceleration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::BeePerchPoint* get_BeeHive() {
            static BNM::Method<::GlobalNamespace::BeePerchPoint*> _m = GetClass().GetMethod(O("get_BeeHive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_BeeJitterDamping() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_BeeJitterDamping"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_BeeJitterStrength() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_BeeJitterStrength"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_BeeMaxFlowerDuration() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_BeeMaxFlowerDuration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_BeeMaxJitterRadius() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_BeeMaxJitterRadius"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_BeeMaxTravelTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_BeeMaxTravelTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_BeeMinFlowerDuration() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_BeeMinFlowerDuration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_BeeNearDestinationRadius() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_BeeNearDestinationRadius"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_BeeSpeed() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_BeeSpeed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_GeneralBuzzRange() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_GeneralBuzzRange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSeedChange() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSeedChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PickPoints(int n, ::BNM::Structures::Mono::List<::GlobalNamespace::BeePerchPoint*>* pickBuffer, ::BNM::Structures::Mono::List<::GlobalNamespace::BeePerchPoint*>* allPerchPoints, ::GlobalNamespace::SRand& rand, ::BNM::Structures::Mono::List<::GlobalNamespace::BeePerchPoint*>* resultBuffer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PickPoints"), {"n", "pickBuffer", "allPerchPoints", "rand", "resultBuffer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(n, pickBuffer, allPerchPoints, &rand, resultBuffer);
        }
        static void RegisterAvoidPoint(::GameObject* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterAvoidPoint"), {"obj"});
            _m.Call(obj);
        }
        void set_AvoidPointRadius(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AvoidPointRadius"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_BeeAcceleration(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BeeAcceleration"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_BeeHive(::GlobalNamespace::BeePerchPoint* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BeeHive"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_BeeJitterDamping(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BeeJitterDamping"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_BeeJitterStrength(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BeeJitterStrength"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_BeeMaxFlowerDuration(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BeeMaxFlowerDuration"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_BeeMaxJitterRadius(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BeeMaxJitterRadius"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_BeeMaxTravelTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BeeMaxTravelTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_BeeMinFlowerDuration(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BeeMinFlowerDuration"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_BeeNearDestinationRadius(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BeeNearDestinationRadius"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_BeeSpeed(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BeeSpeed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_GeneralBuzzRange(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_GeneralBuzzRange"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void UnregisterAvoidPoint(::GameObject* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterAvoidPoint"), {"obj"});
            _m.Call(obj);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
