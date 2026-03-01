#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LckWallCameraSpawner_WallSpawnerState.hpp"

namespace GlobalNamespace {
    struct LckWallCameraSpawner : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LckWallCameraSpawner");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetCameraVisible() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_cameraVisible"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCameraVisible(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_cameraVisible"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState GetWallSpawnerState() {
            static BNM::Method<::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState> _method = GetClass().GetMethod(O("get_wallSpawnerState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetWallSpawnerState(::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_wallSpawnerState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetActivateDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("_activateDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::LckBodyCameraSpawner* GetBodySpawner() {
            static BNM::Field<::GlobalNamespace::LckBodyCameraSpawner*> _field = GetClass().GetField(O("_bodySpawner"));
            return _field.Get();
        }
        ::GlobalNamespace::LckDirectGrabbable* GetCameraHandleGrabbable() {
            static BNM::Field<::GlobalNamespace::LckDirectGrabbable*> _field = GetClass().GetField(O("_cameraHandleGrabbable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCameraModelOriginTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_cameraModelOriginTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCameraModelTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_cameraModelTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetCameraStrapPoints() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("_cameraStrapPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetCameraStrapPositions() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("_cameraStrapPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LineRenderer* GetCameraStrapRenderer() {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("_cameraStrapRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDummyTablet() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_dummyTablet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLckBodySpawnerPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_lckBodySpawnerPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetNormalColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_normalColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::Camera* GetPrewarmCamera() {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("_prewarmCamera"));
            return _field.Get();
        }
        float GetSpawnRotationOffsetAndroid() {
            static BNM::Field<float> _field = GetClass().GetField(O("_spawnRotationOffsetAndroid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpawnRotationOffsetWindows() {
            static BNM::Field<float> _field = GetClass().GetField(O("_spawnRotationOffsetWindows"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSwapEmobi() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_swapEmobi"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSwapTablet() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_swapTablet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState GetWallSpawnerState_f() {
            static BNM::Field<::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState> _field = GetClass().GetField(O("_wallSpawnerState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivateDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_activateDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetBodySpawner(::GlobalNamespace::LckBodyCameraSpawner* value) {
            static BNM::Field<::GlobalNamespace::LckBodyCameraSpawner*> _field = GetClass().GetField(O("_bodySpawner"));
            _field.Set(value);
        }
        void SetCameraHandleGrabbable(::GlobalNamespace::LckDirectGrabbable* value) {
            static BNM::Field<::GlobalNamespace::LckDirectGrabbable*> _field = GetClass().GetField(O("_cameraHandleGrabbable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraModelOriginTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_cameraModelOriginTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraModelTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_cameraModelTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraStrapPoints(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("_cameraStrapPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraStrapPositions(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("_cameraStrapPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCameraStrapRenderer(::LineRenderer* value) {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("_cameraStrapRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDummyTablet(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_dummyTablet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLckBodySpawnerPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_lckBodySpawnerPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNormalColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_normalColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPrewarmCamera(::Camera* value) {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("_prewarmCamera"));
            _field.Set(value);
        }
        void SetSpawnRotationOffsetAndroid(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_spawnRotationOffsetAndroid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnRotationOffsetWindows(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_spawnRotationOffsetWindows"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwapEmobi(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_swapEmobi"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwapTablet(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_swapTablet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWallSpawnerState_fs(::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState value) {
            static BNM::Field<::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState> _field = GetClass().GetField(O("_wallSpawnerState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP1 = void*>
        static void AddGTag(::GameObject* go, TP1 gtTagType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddGTag"), {"go", "gtTagType"});
            _m.Call(go, gtTagType);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreatePrewarmCamera() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreatePrewarmCamera"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DestroyPrewarmCamera() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyPrewarmCamera"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* DestroyPrewarmCameraDelayed() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DestroyPrewarmCameraDelayed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_cameraVisible() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_cameraVisible"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState get_wallSpawnerState() {
            static BNM::Method<::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState> _m = GetClass().GetMethod(O("get_wallSpawnerState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::LckBodyCameraSpawner* GetOrCreateBodyCameraSpawner() {
            static BNM::Method<::GlobalNamespace::LckBodyCameraSpawner*> _m = GetClass().GetMethod(O("GetOrCreateBodyCameraSpawner"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitCameraStrap() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitCameraStrap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
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
        void ResetCameraModel() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetCameraModel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_cameraVisible(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_cameraVisible"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_wallSpawnerState(::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_wallSpawnerState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool ShouldSpawnCamera(::Transform* gorillaGrabberTransform) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldSpawnCamera"), {"gorillaGrabberTransform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gorillaGrabberTransform);
        }
        void SpawnCamera(::GlobalNamespace::GorillaGrabber* lastGorillaGrabber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnCamera"), {"lastGorillaGrabber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(lastGorillaGrabber);
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
        void UpdateCameraStrap() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCameraStrap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
