#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRToolProgressionManager_ToolParts.hpp"
#include "GRToolProgressionTree_EmployeeLevelRequirement.hpp"

namespace GlobalNamespace {
    struct GRToolProgressionTree_GRToolProgressionNode : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRToolProgressionTree").GetInnerClass("GRToolProgressionNode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* GetChildren() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*> _field = GetClass().GetField(O("children"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* GetParents() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*> _field = GetClass().GetField(O("parents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* GetPartMetadata() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*> _field = GetClass().GetField(O("partMetadata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement GetRequiredEmployeeLevel() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement> _field = GetClass().GetField(O("requiredEmployeeLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetResearchCost() {
            static BNM::Field<int> _field = GetClass().GetField(O("researchCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRootNode() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rootNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolProgressionManager_ToolParts GetType_f() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager_ToolParts> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUnlocked() {
            static BNM::Field<bool> _field = GetClass().GetField(O("unlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetChildren(::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*> _field = GetClass().GetField(O("children"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParents(::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*> _field = GetClass().GetField(O("parents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPartMetadata(::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*> _field = GetClass().GetField(O("partMetadata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequiredEmployeeLevel(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement> _field = GetClass().GetField(O("requiredEmployeeLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResearchCost(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("researchCost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRootNode(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rootNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetType(::GlobalNamespace::GRToolProgressionManager_ToolParts value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager_ToolParts> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlocked(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("unlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
