#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GhostReactorLevelGeneratorV2_TreeLevelConfig : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactorLevelGeneratorV2").GetInnerClass("TreeLevelConfig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSection*>* GetBlockers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSection*>*> _field = GetClass().GetField(O("blockers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSectionConnector*>* GetConnectors() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSectionConnector*>*> _field = GetClass().GetField(O("connectors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDisableAfterDatetime() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DisableAfterDatetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetEnableAfterDatetime() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("EnableAfterDatetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSection*>* GetEndCaps() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSection*>*> _field = GetClass().GetField(O("endCaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig*>* GetEndCapSpawnConfigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig*>*> _field = GetClass().GetField(O("endCapSpawnConfigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSection*>* GetHubs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSection*>*> _field = GetClass().GetField(O("hubs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxCaps() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxCaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxHubs() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxHubs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMinCaps() {
            static BNM::Field<int> _field = GetClass().GetField(O("minCaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMinHubs() {
            static BNM::Field<int> _field = GetClass().GetField(O("minHubs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig*>* GetSectionSpawnConfigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig*>*> _field = GetClass().GetField(O("sectionSpawnConfigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlockers(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSection*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSection*>*> _field = GetClass().GetField(O("blockers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConnectors(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSectionConnector*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSectionConnector*>*> _field = GetClass().GetField(O("connectors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableAfterDatetime(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DisableAfterDatetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableAfterDatetime(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("EnableAfterDatetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndCaps(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSection*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSection*>*> _field = GetClass().GetField(O("endCaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndCapSpawnConfigs(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig*>*> _field = GetClass().GetField(O("endCapSpawnConfigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHubs(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSection*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelSection*>*> _field = GetClass().GetField(O("hubs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxCaps(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxCaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxHubs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxHubs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinCaps(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("minCaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinHubs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("minHubs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSectionSpawnConfigs(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorSpawnConfig*>*> _field = GetClass().GetField(O("sectionSpawnConfigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool ValidateDatetime(::BNM::Structures::Mono::String* timestamp) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateDatetime"), {"timestamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(timestamp);
        }
    };
}
