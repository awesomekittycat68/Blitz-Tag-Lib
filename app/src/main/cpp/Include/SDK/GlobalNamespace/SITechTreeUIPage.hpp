#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SITechTreePageId.hpp"
#include "SIUpgradeType.hpp"

namespace GlobalNamespace {
    struct SITechTreeUIPage : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SITechTreeUIPage");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeUINode*>* GetPageNodes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeUINode*>*> _field = GetClass().GetField(O("_pageNodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITechTreePageId GetId() {
            static BNM::Field<::GlobalNamespace::SITechTreePageId> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::RectTransform* GetNodeContainer() {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("nodeContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITechTreeUINode* GetNodePrefab() {
            static BNM::Field<::GlobalNamespace::SITechTreeUINode*> _field = GetClass().GetField(O("nodePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetUpgradeLinePrefab() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("upgradeLinePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetId(::GlobalNamespace::SITechTreePageId value) {
            static BNM::Field<::GlobalNamespace::SITechTreePageId> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeContainer(::RectTransform* value) {
            static BNM::Field<::RectTransform*> _field = GetClass().GetField(O("nodeContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodePrefab(::GlobalNamespace::SITechTreeUINode* value) {
            static BNM::Field<::GlobalNamespace::SITechTreeUINode*> _field = GetClass().GetField(O("nodePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradeLinePrefab(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("upgradeLinePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Configure(::GlobalNamespace::SITechTreeStation* techTreeStation, ::GlobalNamespace::SITechTreePage* treePage, ::Transform* imageTarget, ::Transform* textTarget) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Configure"), {"techTreeStation", "treePage", "imageTarget", "textTarget"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(techTreeStation, treePage, imageTarget, textTarget);
        }
        ::GlobalNamespace::SITechTreeUINode* GetUINode(::GlobalNamespace::SIUpgradeType upgradeType) {
            static BNM::Method<::GlobalNamespace::SITechTreeUINode*> _m = GetClass().GetMethod(O("GetUINode"), {"upgradeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(upgradeType);
        }
        void PopulateDefaultNodeData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateDefaultNodeData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopulatePlayerNodeData(::GlobalNamespace::SIPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulatePlayerNodeData"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
    };
}
