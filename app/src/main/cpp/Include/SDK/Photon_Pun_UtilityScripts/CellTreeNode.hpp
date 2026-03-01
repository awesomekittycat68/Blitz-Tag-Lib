#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CellTreeNode_ENodeType.hpp"

namespace Photon_Pun_UtilityScripts {
    struct CellTreeNode : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "CellTreeNode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Vector3 GetBottomRight() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("BottomRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetCenter() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("Center"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Photon_Pun_UtilityScripts::CellTreeNode*>* GetChilds() {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Pun_UtilityScripts::CellTreeNode*>*> _field = GetClass().GetField(O("Childs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetId() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("Id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun_UtilityScripts::CellTreeNode_ENodeType GetNodeType() {
            static BNM::Field<::Photon_Pun_UtilityScripts::CellTreeNode_ENodeType> _field = GetClass().GetField(O("NodeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun_UtilityScripts::CellTreeNode* GetParent() {
            static BNM::Field<::Photon_Pun_UtilityScripts::CellTreeNode*> _field = GetClass().GetField(O("Parent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSize() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("Size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetTopLeft() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("TopLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBottomRight(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("BottomRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCenter(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("Center"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChilds(::BNM::Structures::Mono::List<::Photon_Pun_UtilityScripts::CellTreeNode*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Pun_UtilityScripts::CellTreeNode*>*> _field = GetClass().GetField(O("Childs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetId(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("Id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeType(::Photon_Pun_UtilityScripts::CellTreeNode_ENodeType value) {
            static BNM::Field<::Photon_Pun_UtilityScripts::CellTreeNode_ENodeType> _field = GetClass().GetField(O("NodeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParent(::Photon_Pun_UtilityScripts::CellTreeNode* value) {
            static BNM::Field<::Photon_Pun_UtilityScripts::CellTreeNode*> _field = GetClass().GetField(O("Parent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSize(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("Size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTopLeft(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("TopLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddChild(::Photon_Pun_UtilityScripts::CellTreeNode* child) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddChild"), {"child"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(child);
        }
        void Draw() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Draw"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GetActiveCells(::BNM::Structures::Mono::List<uint8_t>* activeCells, bool yIsUpAxis, ::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetActiveCells"), {"activeCells", "yIsUpAxis", "position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(activeCells, yIsUpAxis, position);
        }
        bool IsPointInsideCell(bool yIsUpAxis, ::BNM::Structures::Unity::Vector3 point) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPointInsideCell"), {"yIsUpAxis", "point"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(yIsUpAxis, point);
        }
        bool IsPointNearCell(bool yIsUpAxis, ::BNM::Structures::Unity::Vector3 point) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPointNearCell"), {"yIsUpAxis", "point"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(yIsUpAxis, point);
        }
    };
}
