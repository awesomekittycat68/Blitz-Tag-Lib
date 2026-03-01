#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BoundsInt.hpp"

namespace GlobalNamespace {
    struct BSPTreeBuilder_BoxMetadata : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BSPTreeBuilder").GetInnerClass("BoxMetadata");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::BoundsInt GetBounds() {
            static BNM::Field<::GlobalNamespace::BoundsInt> _field = GetClass().GetField(O("bounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoxCollider* GetBox() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("box"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMatrixIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("matrixIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPriority() {
            static BNM::Field<int> _field = GetClass().GetField(O("priority"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ZoneDef* GetZone() {
            static BNM::Field<::GlobalNamespace::ZoneDef*> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBox(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("box"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatrixIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("matrixIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPriority(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("priority"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZone(::GlobalNamespace::ZoneDef* value) {
            static BNM::Field<::GlobalNamespace::ZoneDef*> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool ContainsPoint(::BNM::Structures::Unity::Vector3 worldPoint) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ContainsPoint"), {"worldPoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(worldPoint);
        }
        ::GlobalNamespace::BoundsInt GetWorldBounds() {
            static BNM::Method<::GlobalNamespace::BoundsInt> _m = GetClass().GetMethod(O("GetWorldBounds"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
