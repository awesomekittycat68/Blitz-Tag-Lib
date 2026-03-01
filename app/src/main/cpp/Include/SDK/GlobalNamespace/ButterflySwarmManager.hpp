#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AnimatedButterfly.hpp"
#include "SRand.hpp"
#include "XSceneRef.hpp"

namespace GlobalNamespace {
    struct ButterflySwarmManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ButterflySwarmManager");
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
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* GetBeeColors() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _method = GetClass().GetMethod(O("get_BeeColors"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBeeColors(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BeeColors"));
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
        float GetDestRotationAlignmentSpeed() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_DestRotationAlignmentSpeed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDestRotationAlignmentSpeed(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DestRotationAlignmentSpeed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetPerchedFlapPhase() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_PerchedFlapPhase"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPerchedFlapPhase(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PerchedFlapPhase"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetPerchedFlapSpeed() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_PerchedFlapSpeed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPerchedFlapSpeed(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PerchedFlapSpeed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Quaternion GetTravellingLocalRotation() {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _method = GetClass().GetMethod(O("get_TravellingLocalRotation"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTravellingLocalRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TravellingLocalRotation"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Vector3 GetTravellingLocalRotationEuler() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_TravellingLocalRotationEuler"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTravellingLocalRotationEuler(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TravellingLocalRotationEuler"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::List<::GameObject*>*>* GetAllPerchZones() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::List<::GameObject*>*>*> _field = GetClass().GetField(O("allPerchZones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetBeePrefab() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("beePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::AnimatedButterfly>* GetButterflies() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AnimatedButterfly>*> _field = GetClass().GetField(O("butterflies"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLoopSizePerBee() {
            static BNM::Field<int> _field = GetClass().GetField(O("loopSizePerBee"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxFlapSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxFlapSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinFlapSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("minFlapSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumBees() {
            static BNM::Field<int> _field = GetClass().GetField(O("numBees"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::XSceneRef>* GetPerchSections() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::XSceneRef>*> _field = GetClass().GetField(O("perchSections"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllPerchZones(::BNM::Structures::Mono::List<::BNM::Structures::Mono::List<::GameObject*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::List<::GameObject*>*>*> _field = GetClass().GetField(O("allPerchZones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBeePrefab(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("beePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButterflies(::BNM::Structures::Mono::List<::GlobalNamespace::AnimatedButterfly>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AnimatedButterfly>*> _field = GetClass().GetField(O("butterflies"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoopSizePerBee(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("loopSizePerBee"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxFlapSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxFlapSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinFlapSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minFlapSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumBees(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numBees"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerchSections(::BNM::Structures::Mono::Array<::GlobalNamespace::XSceneRef>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::XSceneRef>*> _field = GetClass().GetField(O("perchSections"));
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
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* get_BeeColors() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _m = GetClass().GetMethod(O("get_BeeColors"));
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
        float get_DestRotationAlignmentSpeed() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_DestRotationAlignmentSpeed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_PerchedFlapPhase() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_PerchedFlapPhase"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_PerchedFlapSpeed() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_PerchedFlapSpeed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Quaternion get_TravellingLocalRotation() {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("get_TravellingLocalRotation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_TravellingLocalRotationEuler() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_TravellingLocalRotationEuler"));
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
        void PickPoints(int n, ::BNM::Structures::Mono::List<::BNM::Structures::Mono::List<::GameObject*>*>* pickBuffer, ::GlobalNamespace::SRand& rand, ::BNM::Structures::Mono::List<::GameObject*>* resultBuffer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PickPoints"), {"n", "pickBuffer", "rand", "resultBuffer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(n, pickBuffer, &rand, resultBuffer);
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
        void set_BeeColors(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BeeColors"), {"value"});
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
        void set_DestRotationAlignmentSpeed(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DestRotationAlignmentSpeed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PerchedFlapPhase(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PerchedFlapPhase"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PerchedFlapSpeed(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PerchedFlapSpeed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TravellingLocalRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TravellingLocalRotation"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TravellingLocalRotationEuler(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TravellingLocalRotationEuler"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
