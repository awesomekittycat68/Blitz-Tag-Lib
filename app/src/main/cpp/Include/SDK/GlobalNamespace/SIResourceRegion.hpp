#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SpawnRegion$2.hpp"

namespace GlobalNamespace {
    struct SIResourceRegion : ::GlobalNamespace::SpawnRegion$2<::GlobalNamespace::GameEntity*, ::GlobalNamespace::SIResourceRegion*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIResourceRegion");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetLastSpawnTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_LastSpawnTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLastSpawnTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LastSpawnTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::SIResource* GetResourcePrefab() {
            static BNM::Field<::GlobalNamespace::SIResource*> _field = GetClass().GetField(O("resourcePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetResourcePrefab(::GlobalNamespace::SIResource* value) {
            static BNM::Field<::GlobalNamespace::SIResource*> _field = GetClass().GetField(O("resourcePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float get_LastSpawnTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_LastSpawnTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_LastSpawnTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LastSpawnTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
