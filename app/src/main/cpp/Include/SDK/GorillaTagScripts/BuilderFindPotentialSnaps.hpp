#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderGridPlaneData.hpp"
#include "BuilderPotentialPlacementData.hpp"
#include "BuilderTable_SnapParams.hpp"

namespace GorillaTagScripts {
    struct BuilderFindPotentialSnaps : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "BuilderFindPotentialSnaps");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetCheckGridPlanes() {
            static BNM::Field<void*> _field = GetClass().GetField(O("checkGridPlanes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTable_SnapParams GetCurrSnapParams() {
            static BNM::Field<::GorillaTagScripts::BuilderTable_SnapParams> _field = GetClass().GetField(O("currSnapParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetGridPlanes() {
            static BNM::Field<void*> _field = GetClass().GetField(O("gridPlanes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGridSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("gridSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLocalToWorldPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("localToWorldPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetLocalToWorldRot() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("localToWorldRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPotentialPlacements() {
            static BNM::Field<void*> _field = GetClass().GetField(O("potentialPlacements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetWorldToLocalPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("worldToLocalPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetWorldToLocalRot() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("worldToLocalRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCheckGridPlanes(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("checkGridPlanes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrSnapParams(::GorillaTagScripts::BuilderTable_SnapParams value) {
            static BNM::Field<::GorillaTagScripts::BuilderTable_SnapParams> _field = GetClass().GetField(O("currSnapParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGridPlanes(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("gridPlanes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGridSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gridSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalToWorldPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("localToWorldPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalToWorldRot(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("localToWorldRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPotentialPlacements(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("potentialPlacements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWorldToLocalPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("worldToLocalPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWorldToLocalRot(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("worldToLocalRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Execute(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        template <typename TP0 = void*>
        void* Rotate180(TP0 v, int offsetX, int offsetY) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Rotate180"), {"v", "offsetX", "offsetY"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(v, offsetX, offsetY);
        }
        template <typename TP0 = void*>
        void* Rotate270(TP0 v, int offsetX, int offsetY) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Rotate270"), {"v", "offsetX", "offsetY"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(v, offsetX, offsetY);
        }
        template <typename TP0 = void*>
        void* Rotate90(TP0 v, int offsetX, int offsetY) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Rotate90"), {"v", "offsetX", "offsetY"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(v, offsetX, offsetY);
        }
        bool TryPlaceGridPlaneOnGridPlane(::GorillaTagScripts::BuilderGridPlaneData& gridPlane, ::GorillaTagScripts::BuilderGridPlaneData& checkGridPlane, ::GorillaTagScripts::BuilderPotentialPlacementData& potentialPlacement) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryPlaceGridPlaneOnGridPlane"), {"gridPlane", "checkGridPlane", "potentialPlacement"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&gridPlane, &checkGridPlane, &potentialPlacement);
        }
    };
}
