#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SerializableBSPNode_Axis.hpp"

namespace GlobalNamespace {
    struct BspTestPlayer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BspTestPlayer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::ZoneGraphBSP* GetBspSystem() {
            static BNM::Field<::GlobalNamespace::ZoneGraphBSP*> _field = GetClass().GetField(O("bspSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ZoneDef* GetCurrentZone() {
            static BNM::Field<::GlobalNamespace::ZoneDef*> _field = GetClass().GetField(O("currentZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCurrentZoneName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentZoneName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMoveSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("moveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetPositionDisplayText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("positionDisplayText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUse3DMovement() {
            static BNM::Field<bool> _field = GetClass().GetField(O("use3DMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetZoneDisplayText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("zoneDisplayText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBspSystem(::GlobalNamespace::ZoneGraphBSP* value) {
            static BNM::Field<::GlobalNamespace::ZoneGraphBSP*> _field = GetClass().GetField(O("bspSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentZone(::GlobalNamespace::ZoneDef* value) {
            static BNM::Field<::GlobalNamespace::ZoneDef*> _field = GetClass().GetField(O("currentZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentZoneName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentZoneName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMoveSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("moveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionDisplayText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("positionDisplayText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUse3DMovement(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("use3DMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneDisplayText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("zoneDisplayText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CreateUI() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateUI"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DrawBSPSplits() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawBSPSplits"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP3 = void*>
        void DrawPlayerPath(::GlobalNamespace::SerializableBSPTree* tree, ::BNM::Structures::Unity::Vector3 playerPos, int nodeIndex, TP3 bounds, int depth) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawPlayerPath"), {"tree", "playerPos", "nodeIndex", "bounds", "depth"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tree, playerPos, nodeIndex, bounds, depth);
        }
        template <typename TP2 = void*>
        void DrawSplitPlane(::GlobalNamespace::SerializableBSPNode_Axis axis, float splitValue, TP2 bounds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawSplitPlane"), {"axis", "splitValue", "bounds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(axis, splitValue, bounds);
        }
        ::BNM::Structures::Unity::Color GetAxisColor(::GlobalNamespace::SerializableBSPNode_Axis axis, int depth) {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("GetAxisColor"), {"axis", "depth"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(axis, depth);
        }
        float GetAxisValue(::BNM::Structures::Unity::Vector3 point, ::GlobalNamespace::SerializableBSPNode_Axis axis) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetAxisValue"), {"point", "axis"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(point, axis);
        }
        void HandleMovement() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleMovement"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDrawGizmosSelected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDrawGizmosSelected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void UpdateUI() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateUI"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateZoneInfo() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateZoneInfo"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
