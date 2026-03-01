#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SITechTreePageId.hpp"
#include "SIUpgradeType.hpp"

namespace GlobalNamespace {
    struct SITechTreeSO : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SITechTreeSO");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[SITechTreeSO]  ";
        static constexpr const char* preErr = "[SITechTreeSO]  ERROR!!!  ";
        static constexpr int RESOURCE_CAP = 20;
        bool GetInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Initialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInitialized(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Initialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* GetSpawnableEntities() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _method = GetClass().GetMethod(O("get_SpawnableEntities"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<int>* GetTreeNodeCounts() {
            static BNM::Method<::BNM::Structures::Mono::Array<int>*> _method = GetClass().GetMethod(O("get_TreeNodeCounts"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTreeNodeCounts(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TreeNodeCounts"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetTreePageCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TreePageCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTreePageCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TreePageCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreePage*>* GetTreePages() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreePage*>*> _method = GetClass().GetMethod(O("get_TreePages"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTreePages(::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreePage*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TreePages"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* GetSpawnableEntities_f() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("_spawnableEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SITechTreePage*>* GetTreePages_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SITechTreePage*>*> _field = GetClass().GetField(O("treePages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSpawnableEntities(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("_spawnableEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTreePages_fs(::BNM::Structures::Mono::Array<::GlobalNamespace::SITechTreePage*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SITechTreePage*>*> _field = GetClass().GetField(O("treePages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddSpawnableGadget(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddSpawnableGadget"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity);
        }
        void ClearTechTree() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearTechTree"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnsureInitialized() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnsureInitialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_Initialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Initialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* get_SpawnableEntities() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _m = GetClass().GetMethod(O("get_SpawnableEntities"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<int>* get_TreeNodeCounts() {
            static BNM::Method<::BNM::Structures::Mono::Array<int>*> _m = GetClass().GetMethod(O("get_TreeNodeCounts"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TreePageCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TreePageCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreePage*>* get_TreePages() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreePage*>*> _m = GetClass().GetMethod(O("get_TreePages"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::SITechTreeNode* GetTreeNode(::GlobalNamespace::SIUpgradeType upgradeType) {
            static BNM::Method<::GlobalNamespace::SITechTreeNode*> _m = GetClass().GetMethod(O("GetTreeNode"), {"upgradeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(upgradeType);
        }
        ::GlobalNamespace::SITechTreeNode* GetTreeNode(int pageId, int nodeId) {
            static BNM::Method<::GlobalNamespace::SITechTreeNode*> _m = GetClass().GetMethod(O("GetTreeNode"), {"pageId", "nodeId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pageId, nodeId);
        }
        ::GlobalNamespace::SITechTreePage* GetTreePage(::GlobalNamespace::SITechTreePageId id) {
            static BNM::Method<::GlobalNamespace::SITechTreePage*> _m = GetClass().GetMethod(O("GetTreePage"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id);
        }
        void InitTechTree() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitTechTree"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsValidNode(::GlobalNamespace::SIUpgradeType upgradeType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidNode"), {"upgradeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(upgradeType);
        }
        bool IsValidNode(int pageId, int nodeId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidNode"), {"pageId", "nodeId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pageId, nodeId);
        }
        bool IsValidPage(::GlobalNamespace::SITechTreePageId id) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidPage"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id);
        }
        void set_Initialized(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Initialized"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TreeNodeCounts(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TreeNodeCounts"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TreePageCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TreePageCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TreePages(::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreePage*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TreePages"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool TryGetTreePage(::GlobalNamespace::SITechTreePageId id, ::GlobalNamespace::SITechTreePage*& treePage) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetTreePage"), {"id", "treePage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id, &treePage);
        }
    };
}
