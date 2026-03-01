#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EAssetReleaseTier.hpp"
#include "ESuperGameModes.hpp"
#include "SITechTreePageId.hpp"

namespace GlobalNamespace {
    struct SITechTreePage : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SITechTreePage");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeNode*>* GetDispensableGadgets() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeNode*>*> _method = GetClass().GetMethod(O("get_DispensableGadgets"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDispensableGadgets(::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeNode*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DispensableGadgets"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::EAssetReleaseTier GetEdReleaseTier() {
            static BNM::Method<::GlobalNamespace::EAssetReleaseTier> _method = GetClass().GetMethod(O("get_EdReleaseTier"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEdReleaseTier(::GlobalNamespace::EAssetReleaseTier value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_EdReleaseTier"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsAllowed() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsAllowed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsValid() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsValid"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetCostMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("costMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ESuperGameModes GetExcludedGameModes() {
            static BNM::Field<::GlobalNamespace::ESuperGameModes> _field = GetClass().GetField(O("excludedGameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Sprite* GetIcon() {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("icon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::EAssetReleaseTier GetMEdReleaseTier() {
            static BNM::Field<::GlobalNamespace::EAssetReleaseTier> _field = GetClass().GetField(O("m_edReleaseTier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNickName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("nickName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITechTreePageId GetPageId() {
            static BNM::Field<::GlobalNamespace::SITechTreePageId> _field = GetClass().GetField(O("pageId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SITechTreeNode*>* GetTreeNodes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SITechTreeNode*>*> _field = GetClass().GetField(O("treeNodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCostMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("costMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExcludedGameModes(::GlobalNamespace::ESuperGameModes value) {
            static BNM::Field<::GlobalNamespace::ESuperGameModes> _field = GetClass().GetField(O("excludedGameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIcon(::Sprite* value) {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("icon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMEdReleaseTier(::GlobalNamespace::EAssetReleaseTier value) {
            static BNM::Field<::GlobalNamespace::EAssetReleaseTier> _field = GetClass().GetField(O("m_edReleaseTier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNickName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("nickName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageId(::GlobalNamespace::SITechTreePageId value) {
            static BNM::Field<::GlobalNamespace::SITechTreePageId> _field = GetClass().GetField(O("pageId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTreeNodes(::BNM::Structures::Mono::Array<::GlobalNamespace::SITechTreeNode*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SITechTreeNode*>*> _field = GetClass().GetField(O("treeNodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void BuildGraph() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildGraph"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearGraph() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearGraph"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeNode*>* get_DispensableGadgets() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeNode*>*> _m = GetClass().GetMethod(O("get_DispensableGadgets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::EAssetReleaseTier get_EdReleaseTier() {
            static BNM::Method<::GlobalNamespace::EAssetReleaseTier> _m = GetClass().GetMethod(O("get_EdReleaseTier"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsAllowed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsAllowed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void PrintGraph() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PrintGraph"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_DispensableGadgets(::BNM::Structures::Mono::List<::GlobalNamespace::SITechTreeNode*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DispensableGadgets"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_EdReleaseTier(::GlobalNamespace::EAssetReleaseTier value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_EdReleaseTier"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
