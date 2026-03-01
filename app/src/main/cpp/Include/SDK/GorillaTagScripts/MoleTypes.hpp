#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct MoleTypes : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "MoleTypes");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsLeftSideMoleType() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsLeftSideMoleType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsLeftSideMoleType(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsLeftSideMoleType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaTagScripts::Mole* GetMoleContainerParent() {
            static BNM::Method<::GorillaTagScripts::Mole*> _method = GetClass().GetMethod(O("get_MoleContainerParent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMoleContainerParent(::GorillaTagScripts::Mole* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MoleContainerParent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsHazard() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHazard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetMeshRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("MeshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMonkeMoleDefaultMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("monkeMoleDefaultMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMonkeMoleHitMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("monkeMoleHitMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetScorePoint() {
            static BNM::Field<int> _field = GetClass().GetField(O("scorePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsHazard(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHazard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("MeshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMonkeMoleDefaultMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("monkeMoleDefaultMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMonkeMoleHitMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("monkeMoleHitMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScorePoint(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("scorePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_IsLeftSideMoleType() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsLeftSideMoleType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTagScripts::Mole* get_MoleContainerParent() {
            static BNM::Method<::GorillaTagScripts::Mole*> _m = GetClass().GetMethod(O("get_MoleContainerParent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_IsLeftSideMoleType(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsLeftSideMoleType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MoleContainerParent(::GorillaTagScripts::Mole* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MoleContainerParent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
