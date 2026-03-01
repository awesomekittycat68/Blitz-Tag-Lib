#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GhostReactor_EntityTypeRespawnTracker : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactor").GetInnerClass("EntityTypeRespawnTracker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int64_t GetEntityCreateData() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("entityCreateData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEntityNextRespawnTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("entityNextRespawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEntityTypeID() {
            static BNM::Field<int> _field = GetClass().GetField(O("entityTypeID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEntityCreateData(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("entityCreateData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntityNextRespawnTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("entityNextRespawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntityTypeID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("entityTypeID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
