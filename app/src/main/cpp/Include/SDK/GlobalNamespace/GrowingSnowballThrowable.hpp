#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GrowingSnowballThrowable_AOERangeDebugDraw.hpp"
#include "GrowingSnowballThrowable_SizeParameters.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "SnowballThrowable.hpp"

namespace GlobalNamespace {
    struct GrowingSnowballThrowable : ::GlobalNamespace::SnowballThrowable {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GrowingSnowballThrowable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCurrentSnowballRadius() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_CurrentSnowballRadius"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetMaxSizeLevel() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_MaxSizeLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetSizeLevel() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SizeLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void* GetAoeRangeDebugDrawQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("aoeRangeDebugDrawQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PhotonEvent* GetChangeSizeEvent() {
            static BNM::Field<::GlobalNamespace::PhotonEvent*> _field = GetClass().GetField(O("changeSizeEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCombineBasedOnSpeedThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("combineBasedOnSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetDebugDrawAOERange() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawAOERange"));
            return _field.Get();
        }
        float GetDebugDrawAOERangeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("debugDrawAOERangeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaintainSizeLevelUntilLocalTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("maintainSizeLevelUntilLocalTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetModelOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("modelOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetModelParentOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("modelParentOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetModelRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("modelRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GrowingSnowballThrowable* GetOtherHandSnowball() {
            static BNM::Field<::GlobalNamespace::GrowingSnowballThrowable*> _field = GetClass().GetField(O("otherHandSnowball"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetSizeIncreaseSoundBankPlayer() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("sizeIncreaseSoundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSizeLevel_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("sizeLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSnowballModelParentTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("snowballModelParentTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSnowballModelTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("snowballModelTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GrowingSnowballThrowable_SizeParameters>* GetSnowballSizeLevels() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GrowingSnowballThrowable_SizeParameters>*> _field = GetClass().GetField(O("snowballSizeLevels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PhotonEvent* GetSnowballThrowEvent() {
            static BNM::Field<::GlobalNamespace::PhotonEvent*> _field = GetClass().GetField(O("snowballThrowEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetTwoHandedSnowballGrowing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("twoHandedSnowballGrowing"));
            return _field.Get();
        }
        void SetAoeRangeDebugDrawQueue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("aoeRangeDebugDrawQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChangeSizeEvent(::GlobalNamespace::PhotonEvent* value) {
            static BNM::Field<::GlobalNamespace::PhotonEvent*> _field = GetClass().GetField(O("changeSizeEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCombineBasedOnSpeedThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("combineBasedOnSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetDebugDrawAOERange(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawAOERange"));
            _field.Set(value);
        }
        void SetDebugDrawAOERangeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("debugDrawAOERangeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaintainSizeLevelUntilLocalTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maintainSizeLevelUntilLocalTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModelOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("modelOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModelParentOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("modelParentOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModelRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("modelRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOtherHandSnowball(::GlobalNamespace::GrowingSnowballThrowable* value) {
            static BNM::Field<::GlobalNamespace::GrowingSnowballThrowable*> _field = GetClass().GetField(O("otherHandSnowball"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSizeIncreaseSoundBankPlayer(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("sizeIncreaseSoundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSizeLevel(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sizeLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnowballModelParentTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("snowballModelParentTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnowballModelTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("snowballModelTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnowballSizeLevels(::BNM::Structures::Mono::List<::GlobalNamespace::GrowingSnowballThrowable_SizeParameters>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GrowingSnowballThrowable_SizeParameters>*> _field = GetClass().GetField(O("snowballSizeLevels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnowballThrowEvent(::GlobalNamespace::PhotonEvent* value) {
            static BNM::Field<::GlobalNamespace::PhotonEvent*> _field = GetClass().GetField(O("snowballThrowEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTwoHandedSnowballGrowing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("twoHandedSnowballGrowing"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ChangeSizeEventReceiver(int sender, int receiver, ::BNM::Structures::Mono::Array<void*>* args, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeSizeEventReceiver"), {"sender", "receiver", "args", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sender, receiver, args, info);
        }
        void CreatePhotonEventsIfNull() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreatePhotonEventsIfNull"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DestroyPhotonEvents() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyPhotonEvents"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float get_CurrentSnowballRadius() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_CurrentSnowballRadius"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_MaxSizeLevel() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_MaxSizeLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SizeLevel() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SizeLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetValidSizeLevel(int inputSizeLevel) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetValidSizeLevel"), {"inputSizeLevel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(inputSizeLevel);
        }
        void IncreaseSize(int increase) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncreaseSize"), {"increase"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(increase);
        }
        void LateUpdateLocal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::SlingshotProjectile* LaunchSnowballLocal(::BNM::Structures::Unity::Vector3 location, ::BNM::Structures::Unity::Vector3 velocity, float scale) {
            static BNM::Method<::GlobalNamespace::SlingshotProjectile*> _m = GetClass().GetMethod(O("LaunchSnowballLocal"), {"location", "velocity", "scale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(location, velocity, scale);
        }
        ::GlobalNamespace::SlingshotProjectile* LaunchSnowballLocal(::BNM::Structures::Unity::Vector3 location, ::BNM::Structures::Unity::Vector3 velocity, float scale, bool randomizeColour, ::BNM::Structures::Unity::Color colour) {
            static BNM::Method<::GlobalNamespace::SlingshotProjectile*> _m = GetClass().GetMethod(O("LaunchSnowballLocal"), {"location", "velocity", "scale", "randomizeColour", "colour"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(location, velocity, scale, randomizeColour, colour);
        }
        ::GlobalNamespace::SlingshotProjectile* LaunchSnowballRemote(::BNM::Structures::Unity::Vector3 location, ::BNM::Structures::Unity::Vector3 velocity, float scale, int index, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<::GlobalNamespace::SlingshotProjectile*> _m = GetClass().GetMethod(O("LaunchSnowballRemote"), {"location", "velocity", "scale", "index", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(location, velocity, scale, index, info);
        }
        ::GlobalNamespace::SlingshotProjectile* LaunchSnowballRemote(::BNM::Structures::Unity::Vector3 location, ::BNM::Structures::Unity::Vector3 velocity, float scale, int index, bool randomizeColour, ::BNM::Structures::Unity::Color colour, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<::GlobalNamespace::SlingshotProjectile*> _m = GetClass().GetMethod(O("LaunchSnowballRemote"), {"location", "velocity", "scale", "index", "randomizeColour", "colour", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(location, velocity, scale, index, randomizeColour, colour, info);
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
        void OnGrab(::GlobalNamespace::InteractionPoint* pointGrabbed, ::GameObject* grabbingHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrab"), {"pointGrabbed", "grabbingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pointGrabbed, grabbingHand);
        }
        void OnSnowballRelease() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSnowballRelease"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PerformSnowballThrowAuthority() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PerformSnowballThrowAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetSizeLevelAuthority(int sizeLevel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSizeLevelAuthority"), {"sizeLevel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sizeLevel);
        }
        void SetSizeLevelLocal(int sizeLevel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSizeLevelLocal"), {"sizeLevel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sizeLevel);
        }
        void SnowballThrowEventReceiver(int sender, int receiver, ::BNM::Structures::Mono::Array<void*>* args, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SnowballThrowEventReceiver"), {"sender", "receiver", "args", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sender, receiver, args, info);
        }
        ::GlobalNamespace::SlingshotProjectile* SpawnGrowingSnowball(::BNM::Structures::Unity::Vector3& velocity, float scale) {
            static BNM::Method<::GlobalNamespace::SlingshotProjectile*> _m = GetClass().GetMethod(O("SpawnGrowingSnowball"), {"velocity", "scale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&velocity, scale);
        }
        void StartedMultiplayerSession() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartedMultiplayerSession"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void VRRigActivated(::GlobalNamespace::RigContainer* rigContainer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VRRigActivated"), {"rigContainer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rigContainer);
        }
        void VRRigDeactivated(::GlobalNamespace::RigContainer* rigContainer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VRRigDeactivated"), {"rigContainer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rigContainer);
        }
    };
}
