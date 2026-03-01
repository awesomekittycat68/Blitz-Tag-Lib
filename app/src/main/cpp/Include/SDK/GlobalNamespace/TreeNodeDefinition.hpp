#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MothershipResponse.hpp"

namespace GlobalNamespace {
    struct TreeNodeDefinition : ::GlobalNamespace::MothershipResponse {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TreeNodeDefinition");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::HydratedProgressionNodeCost* GetCost() {
            static BNM::Method<::GlobalNamespace::HydratedProgressionNodeCost*> _method = GetClass().GetMethod(O("get_cost"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCost(::GlobalNamespace::HydratedProgressionNodeCost* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_cost"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_id"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_id"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_name"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_name"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::ListEntitlementResultsVector* GetPrerequisiteEntitlements() {
            static BNM::Method<::GlobalNamespace::ListEntitlementResultsVector*> _method = GetClass().GetMethod(O("get_prerequisite_entitlements"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPrerequisiteEntitlements(::GlobalNamespace::ListEntitlementResultsVector* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_prerequisite_entitlements"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::PrerequisiteLevelVector* GetPrerequisiteLevels() {
            static BNM::Method<::GlobalNamespace::PrerequisiteLevelVector*> _method = GetClass().GetMethod(O("get_prerequisite_levels"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPrerequisiteLevels(::GlobalNamespace::PrerequisiteLevelVector* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_prerequisite_levels"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::ComplexPrerequisiteNodes* GetPrerequisiteNodes() {
            static BNM::Method<::GlobalNamespace::ComplexPrerequisiteNodes*> _method = GetClass().GetMethod(O("get_prerequisite_nodes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPrerequisiteNodes(::GlobalNamespace::ComplexPrerequisiteNodes* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_prerequisite_nodes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::MothershipHydratedTransactionCatalogItem* GetTransaction() {
            static BNM::Method<::GlobalNamespace::MothershipHydratedTransactionCatalogItem*> _method = GetClass().GetMethod(O("get_transaction"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTransaction(::GlobalNamespace::MothershipHydratedTransactionCatalogItem* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_transaction"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetTreeId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_tree_id"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTreeId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_tree_id"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void* GetSwigCPtr() {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSwigCPtr(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Dispose(bool disposing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"), {"disposing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disposing);
        }
        static ::GlobalNamespace::TreeNodeDefinition* FromMothershipResponse(::GlobalNamespace::MothershipResponse* response) {
            static BNM::Method<::GlobalNamespace::TreeNodeDefinition*> _m = GetClass().GetMethod(O("FromMothershipResponse"), {"response"});
            return _m.Call(response);
        }
        ::GlobalNamespace::HydratedProgressionNodeCost* get_cost() {
            static BNM::Method<::GlobalNamespace::HydratedProgressionNodeCost*> _m = GetClass().GetMethod(O("get_cost"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_id() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_id"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_name() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_name"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::ListEntitlementResultsVector* get_prerequisite_entitlements() {
            static BNM::Method<::GlobalNamespace::ListEntitlementResultsVector*> _m = GetClass().GetMethod(O("get_prerequisite_entitlements"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::PrerequisiteLevelVector* get_prerequisite_levels() {
            static BNM::Method<::GlobalNamespace::PrerequisiteLevelVector*> _m = GetClass().GetMethod(O("get_prerequisite_levels"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::ComplexPrerequisiteNodes* get_prerequisite_nodes() {
            static BNM::Method<::GlobalNamespace::ComplexPrerequisiteNodes*> _m = GetClass().GetMethod(O("get_prerequisite_nodes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::MothershipHydratedTransactionCatalogItem* get_transaction() {
            static BNM::Method<::GlobalNamespace::MothershipHydratedTransactionCatalogItem*> _m = GetClass().GetMethod(O("get_transaction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_tree_id() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_tree_id"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* getCPtr(::GlobalNamespace::TreeNodeDefinition* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        bool ParseFromString(::BNM::Structures::Mono::String* response) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ParseFromString"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(response);
        }
        void set_cost(::GlobalNamespace::HydratedProgressionNodeCost* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_cost"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_id(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_id"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_name(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_name"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_prerequisite_entitlements(::GlobalNamespace::ListEntitlementResultsVector* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_prerequisite_entitlements"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_prerequisite_levels(::GlobalNamespace::PrerequisiteLevelVector* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_prerequisite_levels"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_prerequisite_nodes(::GlobalNamespace::ComplexPrerequisiteNodes* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_prerequisite_nodes"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_transaction(::GlobalNamespace::MothershipHydratedTransactionCatalogItem* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_transaction"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_tree_id(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_tree_id"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void* swigRelease(::GlobalNamespace::TreeNodeDefinition* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
        bool ToJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__Value* treeNode, ::GlobalNamespace::SWIGTYPE_p_rapidjson__Document* body) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ToJson"), {"treeNode", "body"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(treeNode, body);
        }
    };
}
