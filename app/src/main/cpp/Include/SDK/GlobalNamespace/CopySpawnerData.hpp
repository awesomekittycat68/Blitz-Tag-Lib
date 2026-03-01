#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CopySpawnerData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CopySpawnerData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetSpawnerDataParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spawnerDataParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSpawnerDataParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spawnerDataParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CopyCageDeposits() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyCageDeposits"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyEquipmentSpawner() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyEquipmentSpawner"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopySpawnerDataInPrefab() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopySpawnerDataInPrefab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
