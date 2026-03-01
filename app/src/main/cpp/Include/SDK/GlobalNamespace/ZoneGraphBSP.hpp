#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ZoneGraphBSP : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ZoneGraphBSP");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::ZoneGraphBSP* get_Instance() {
            static BNM::Method<::GlobalNamespace::ZoneGraphBSP*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        ::GlobalNamespace::ZoneGraphBSP* GetInstance() {
            static BNM::Method<::GlobalNamespace::ZoneGraphBSP*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GlobalNamespace::ZoneGraphBSP* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::SerializableBSPTree* GetBspTree() {
            static BNM::Field<::GlobalNamespace::SerializableBSPTree*> _field = GetClass().GetField(O("bspTree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBspTree(::GlobalNamespace::SerializableBSPTree* value) {
            static BNM::Field<::GlobalNamespace::SerializableBSPTree*> _field = GetClass().GetField(O("bspTree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CompileBSP() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CompileBSP"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::ZoneDef* FindZoneAtPoint(::BNM::Structures::Unity::Vector3 worldPoint) {
            static BNM::Method<::GlobalNamespace::ZoneDef*> _m = GetClass().GetMethod(O("FindZoneAtPoint"), {"worldPoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(worldPoint);
        }
        static ::GlobalNamespace::ZoneGraphBSP* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::ZoneGraphBSP*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        ::GlobalNamespace::SerializableBSPTree* GetBSPTree() {
            static BNM::Method<::GlobalNamespace::SerializableBSPTree*> _m = GetClass().GetMethod(O("GetBSPTree"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool HasCompiledTree() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasCompiledTree"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsPointInAnyZone(::BNM::Structures::Unity::Vector3 worldPoint) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPointInAnyZone"), {"worldPoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(worldPoint);
        }
        void Preprocess() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Preprocess"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void set_Instance(::GlobalNamespace::ZoneGraphBSP* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Instance"), {"value"});
            _m.Call(value);
        }
    };
}
