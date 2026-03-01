#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MatrixZonePair.hpp"
#include "SerializableBSPNode.hpp"
#include "SerializableBSPNode_Axis.hpp"

namespace GlobalNamespace {
    struct SerializableBSPTree : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SerializableBSPTree");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::MatrixZonePair>* GetMatrices() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MatrixZonePair>*> _field = GetClass().GetField(O("matrices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SerializableBSPNode>* GetNodes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SerializableBSPNode>*> _field = GetClass().GetField(O("nodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRootIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("rootIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneDef*>* GetZones() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneDef*>*> _field = GetClass().GetField(O("zones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMatrices(::BNM::Structures::Mono::Array<::GlobalNamespace::MatrixZonePair>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MatrixZonePair>*> _field = GetClass().GetField(O("matrices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodes(::BNM::Structures::Mono::Array<::GlobalNamespace::SerializableBSPNode>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SerializableBSPNode>*> _field = GetClass().GetField(O("nodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRootIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("rootIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZones(::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneDef*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneDef*>*> _field = GetClass().GetField(O("zones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::ZoneDef* FindZone(::BNM::Structures::Unity::Vector3 point) {
            static BNM::Method<::GlobalNamespace::ZoneDef*> _m = GetClass().GetMethod(O("FindZone"), {"point"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(point);
        }
        ::GlobalNamespace::ZoneDef* FindZoneRecursive(::BNM::Structures::Unity::Vector3 point, int nodeIndex) {
            static BNM::Method<::GlobalNamespace::ZoneDef*> _m = GetClass().GetMethod(O("FindZoneRecursive"), {"point", "nodeIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(point, nodeIndex);
        }
        float GetAxisValue(::BNM::Structures::Unity::Vector3 point, ::GlobalNamespace::SerializableBSPNode_Axis axis) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetAxisValue"), {"point", "axis"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(point, axis);
        }
    };
}
