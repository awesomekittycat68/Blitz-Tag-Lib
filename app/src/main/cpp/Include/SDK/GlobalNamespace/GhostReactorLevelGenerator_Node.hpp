#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GhostReactorLevelGenerator_NodeType.hpp"

namespace GlobalNamespace {
    struct GhostReactorLevelGenerator_Node : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactorLevelGenerator").GetInnerClass("Node");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetAnchorCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("anchorCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetAnchorOrder() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("anchorOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAttachAnchorIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("attachAnchorIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GhostReactorLevelGenerator_Node*>* GetChildren() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*> _field = GetClass().GetField(O("children"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetConfigIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("configIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorLevelSectionConnector* GetConnectorInstance() {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelSectionConnector*> _field = GetClass().GetField(O("connectorInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetParentAnchorIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("parentAnchorIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorLevelSection* GetSectionInstance() {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelSection*> _field = GetClass().GetField(O("sectionInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorLevelGenerator_NodeType GetType_f() {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelGenerator_NodeType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnchorCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("anchorCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnchorOrder(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("anchorOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachAnchorIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("attachAnchorIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChildren(::BNM::Structures::Mono::Array<::GlobalNamespace::GhostReactorLevelGenerator_Node*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*> _field = GetClass().GetField(O("children"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfigIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("configIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConnectorInstance(::GlobalNamespace::GhostReactorLevelSectionConnector* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelSectionConnector*> _field = GetClass().GetField(O("connectorInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentAnchorIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("parentAnchorIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSectionInstance(::GlobalNamespace::GhostReactorLevelSection* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelSection*> _field = GetClass().GetField(O("sectionInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetType(::GlobalNamespace::GhostReactorLevelGenerator_NodeType value) {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelGenerator_NodeType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
