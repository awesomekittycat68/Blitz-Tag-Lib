#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ColliderEnabledManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ColliderEnabledManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::ColliderEnabledManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::ColliderEnabledManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        float GetDisableLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("disableLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetFloorCollider() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("floorCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFloorCollidersEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("floorCollidersEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFloorEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("floorEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::ColliderEnabledManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::ColliderEnabledManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        float GetTimeDisabled() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaSurfaceOverride*>* GetWalls() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaSurfaceOverride*>*> _field = GetClass().GetField(O("walls"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWallsAfterMaterial() {
            static BNM::Field<int> _field = GetClass().GetField(O("wallsAfterMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWallsBeforeMaterial() {
            static BNM::Field<int> _field = GetClass().GetField(O("wallsBeforeMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasFloorEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasFloorEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDisableLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("disableLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloorCollider(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("floorCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloorCollidersEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("floorCollidersEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloorEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("floorEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::ColliderEnabledManager* value) {
            static BNM::Field<::GlobalNamespace::ColliderEnabledManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetTimeDisabled(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWalls(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaSurfaceOverride*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaSurfaceOverride*>*> _field = GetClass().GetField(O("walls"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWallsAfterMaterial(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("wallsAfterMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWallsBeforeMaterial(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("wallsBeforeMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasFloorEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasFloorEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DisableFloor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableFloor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DisableFloorForFrame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableFloorForFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
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
