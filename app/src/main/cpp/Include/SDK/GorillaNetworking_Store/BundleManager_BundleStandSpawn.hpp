#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking_Store {
    struct BundleManager_BundleStandSpawn : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking.Store", "BundleManager").GetInnerClass("BundleStandSpawn");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaNetworking_Store::BundleStand* GetBundleStand() {
            static BNM::Field<::GorillaNetworking_Store::BundleStand*> _field = GetClass().GetField(O("bundleStand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking_Store::EndCapSpawnPoint* GetSpawnLocation() {
            static BNM::Field<::GorillaNetworking_Store::EndCapSpawnPoint*> _field = GetClass().GetField(O("spawnLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBundleStand(::GorillaNetworking_Store::BundleStand* value) {
            static BNM::Field<::GorillaNetworking_Store::BundleStand*> _field = GetClass().GetField(O("bundleStand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnLocation(::GorillaNetworking_Store::EndCapSpawnPoint* value) {
            static BNM::Field<::GorillaNetworking_Store::EndCapSpawnPoint*> _field = GetClass().GetField(O("spawnLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::BNM::IL2CPP::Il2CppObject* GetEndCapSpawnPoints() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetEndCapSpawnPoints"));
            return _m.Call();
        }
    };
}
