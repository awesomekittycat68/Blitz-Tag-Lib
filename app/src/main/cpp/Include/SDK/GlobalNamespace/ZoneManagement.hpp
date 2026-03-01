#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTZone.hpp"

namespace GlobalNamespace {
    struct ZoneManagement : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ZoneManagement");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::ZoneManagement* GetInstance() {
            static BNM::Field<::GlobalNamespace::ZoneManagement*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr const char* preLog = "[GT/ZoneManagement]  ";
        static constexpr const char* preErr = "ERROR!!!  ";
        static constexpr const char* preErrBeta = "(beta only log)  ";
        bool GetHasInstance() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHasInstance(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_hasInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_OnZoneChange(::GlobalNamespace::ZoneManagement_ZoneChangeEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnZoneChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnZoneChange(::GlobalNamespace::ZoneManagement_ZoneChangeEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnZoneChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>* GetScenesToLoadOps() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_scenes_to_loadOps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>* GetScenesToUnloadOps() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_scenes_to_unloadOps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GTZone>* GetActiveZones() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GTZone>*> _field = GetClass().GetField(O("activeZones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetAllObjects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("allObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::ZoneManagement* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::ZoneManagement*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::Camera* GetMainCamera() {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("mainCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<bool>* GetObjectActivationState() {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("objectActivationState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnSceneLoadsCompleted() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnSceneLoadsCompleted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::ZoneManagement_ZoneChangeEvent* GetOnZoneChange() {
            static BNM::Field<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*> _field = GetClass().GetField(O("OnZoneChange"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnZoneChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onZoneChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSceneForceStayLoaded() {
            static BNM::Field<void*> _field = GetClass().GetField(O("sceneForceStayLoaded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetScenesLoaded() {
            static BNM::Field<void*> _field = GetClass().GetField(O("scenesLoaded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetScenesRequested() {
            static BNM::Field<void*> _field = GetClass().GetField(O("scenesRequested"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetScenesToUnload() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("scenesToUnload"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneData*>* GetZones() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneData*>*> _field = GetClass().GetField(O("zones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetScenesToLoadOps(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_scenes_to_loadOps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScenesToUnloadOps(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_scenes_to_unloadOps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveZones(::BNM::Structures::Mono::List<::GlobalNamespace::GTZone>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GTZone>*> _field = GetClass().GetField(O("activeZones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllObjects(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("allObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::ZoneManagement* value) {
            static BNM::Field<::GlobalNamespace::ZoneManagement*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetMainCamera(::Camera* value) {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("mainCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectActivationState(::BNM::Structures::Mono::Array<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<bool>*> _field = GetClass().GetField(O("objectActivationState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnSceneLoadsCompleted(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnSceneLoadsCompleted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnZoneChange(::GlobalNamespace::ZoneManagement_ZoneChangeEvent* value) {
            static BNM::Field<::GlobalNamespace::ZoneManagement_ZoneChangeEvent*> _field = GetClass().GetField(O("OnZoneChange"));
            _field.Set(value);
        }
        void SetOnZoneChanged(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onZoneChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSceneForceStayLoaded(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("sceneForceStayLoaded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScenesLoaded(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("scenesLoaded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScenesRequested(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("scenesRequested"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScenesToUnload(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("scenesToUnload"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZones(::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneData*>*> _field = GetClass().GetField(O("zones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void add_OnZoneChange_1(::GlobalNamespace::ZoneManagement_ZoneChangeEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnZoneChange"), {"value"});
            _m.Call(value);
        }
        static void AddSceneToForceStayLoaded(::BNM::Structures::Mono::String* sceneName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddSceneToForceStayLoaded"), {"sceneName"});
            _m.Call(sceneName);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void FindInstance() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FindInstance"));
            _m.Call();
        }
        bool get_hasInstance() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasInstance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* GetAllLoadedScenes() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetAllLoadedScenes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GameObject* GetPrimaryGameObject(::GlobalNamespace::GTZone zone) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("GetPrimaryGameObject"), {"zone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zone);
        }
        ::GlobalNamespace::ZoneData* GetZoneData(::GlobalNamespace::GTZone zone) {
            static BNM::Method<::GlobalNamespace::ZoneData*> _m = GetClass().GetMethod(O("GetZoneData"), {"zone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zone);
        }
        void HandleOnSceneLoadCompleted(::BNM::IL2CPP::Il2CppObject* thisLoadOp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnSceneLoadCompleted"), {"thisLoadOp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(thisLoadOp);
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool IsInZone(::GlobalNamespace::GTZone zone) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInZone"), {"zone"});
            return _m.Call(zone);
        }
        bool IsSceneLoaded(::GlobalNamespace::GTZone gtZone) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSceneLoaded"), {"gtZone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gtZone);
        }
        bool IsSceneLoaded(::BNM::Structures::Mono::String* sceneName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSceneLoaded"), {"sceneName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sceneName);
        }
        static bool IsValidZoneInt(int zoneInt) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidZoneInt"), {"zoneInt"});
            return _m.Call(zoneInt);
        }
        bool IsZoneActive(::GlobalNamespace::GTZone zone) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsZoneActive"), {"zone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zone);
        }
        static void remove_OnZoneChange_1(::GlobalNamespace::ZoneManagement_ZoneChangeEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnZoneChange"), {"value"});
            _m.Call(value);
        }
        static void RemoveSceneFromForceStayLoaded(::BNM::Structures::Mono::String* sceneName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveSceneFromForceStayLoaded"), {"sceneName"});
            _m.Call(sceneName);
        }
        void set_hasInstance(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_hasInstance"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void SetActiveZone(::GlobalNamespace::GTZone zone) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetActiveZone"), {"zone"});
            _m.Call(zone);
        }
        static void SetActiveZones_1(::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>* zones) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetActiveZones"), {"zones"});
            _m.Call(zones);
        }
        void SetZones_1(::BNM::Structures::Mono::Array<::GlobalNamespace::GTZone>* newActiveZones) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetZones"), {"newActiveZones"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newActiveZones);
        }
    };
}
