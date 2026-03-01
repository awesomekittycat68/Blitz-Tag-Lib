#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIUpgradeType.hpp"

namespace GlobalNamespace {
    struct SITechTreeUINode : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SITechTreeUINode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeUINode*>* GetChildren() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeUINode*>*> _method = GetClass().GetMethod(O("get_Children"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsConfigured() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsConfigured"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeUINode*>* GetParents() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeUINode*>*> _method = GetClass().GetMethod(O("get_Parents"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetUpgradeLines() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _method = GetClass().GetMethod(O("get_UpgradeLines"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Material* GetBlackMat() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("blackMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITouchscreenButton* GetButton() {
            static BNM::Field<::GlobalNamespace::SITouchscreenButton*> _field = GetClass().GetField(O("button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetCircle() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("circle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetGreenMat() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("greenMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ObjectHierarchyFlattener* GetImageFlattener() {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattener*> _field = GetClass().GetField(O("imageFlattener"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNodeNickName() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nodeNickName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetRedMat() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("redMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ObjectHierarchyFlattener* GetTextFlattener() {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattener*> _field = GetClass().GetField(O("textFlattener"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetTriangle() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("triangle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIUpgradeType GetUpgradeType() {
            static BNM::Field<::GlobalNamespace::SIUpgradeType> _field = GetClass().GetField(O("upgradeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlackMat(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("blackMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButton(::GlobalNamespace::SITouchscreenButton* value) {
            static BNM::Field<::GlobalNamespace::SITouchscreenButton*> _field = GetClass().GetField(O("button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCircle(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("circle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreenMat(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("greenMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImageFlattener(::GlobalNamespace::ObjectHierarchyFlattener* value) {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattener*> _field = GetClass().GetField(O("imageFlattener"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeNickName(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nodeNickName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRedMat(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("redMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextFlattener(::GlobalNamespace::ObjectHierarchyFlattener* value) {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattener*> _field = GetClass().GetField(O("textFlattener"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriangle(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("triangle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradeType(::GlobalNamespace::SIUpgradeType value) {
            static BNM::Field<::GlobalNamespace::SIUpgradeType> _field = GetClass().GetField(O("upgradeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AdjustPosition(::BNM::Structures::Unity::Vector3 positionOffset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AdjustPosition"), {"positionOffset"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(positionOffset);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeUINode*>* get_Children() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeUINode*>*> _m = GetClass().GetMethod(O("get_Children"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsConfigured() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsConfigured"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeUINode*>* get_Parents() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeUINode*>*> _m = GetClass().GetMethod(O("get_Parents"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* get_UpgradeLines() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("get_UpgradeLines"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetMaxWordLength(::BNM::Structures::Mono::String* text) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetMaxWordLength"), {"text"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(text);
        }
        void SetGadgetUnlockNode(bool isUnlockNode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGadgetUnlockNode"), {"isUnlockNode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isUnlockNode);
        }
        void SetNodeLockStateColor(::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNodeLockStateColor"), {"color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(color);
        }
        void SetTechTreeNode(::GlobalNamespace::SITechTreeStation* techTreeStation, ::GlobalNamespace::SIUpgradeType nodeUpgradeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTechTreeNode"), {"techTreeStation", "nodeUpgradeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(techTreeStation, nodeUpgradeType);
        }
    };
}
