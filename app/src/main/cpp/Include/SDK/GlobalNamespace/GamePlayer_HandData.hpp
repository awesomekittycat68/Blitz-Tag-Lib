#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityId.hpp"

namespace GlobalNamespace {
    struct GamePlayer_HandData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GamePlayer").GetInnerClass("HandData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GameEntityId GetGrabbedEntityId() {
            static BNM::Field<::GlobalNamespace::GameEntityId> _field = GetClass().GetField(O("grabbedEntityId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntityManager* GetGrabbedEntityManager() {
            static BNM::Field<::GlobalNamespace::GameEntityManager*> _field = GetClass().GetField(O("grabbedEntityManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntityId GetSnappedEntityId() {
            static BNM::Field<::GlobalNamespace::GameEntityId> _field = GetClass().GetField(O("snappedEntityId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntityManager* GetSnappedEntityManager() {
            static BNM::Field<::GlobalNamespace::GameEntityManager*> _field = GetClass().GetField(O("snappedEntityManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGrabbedEntityId(::GlobalNamespace::GameEntityId value) {
            static BNM::Field<::GlobalNamespace::GameEntityId> _field = GetClass().GetField(O("grabbedEntityId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedEntityManager(::GlobalNamespace::GameEntityManager* value) {
            static BNM::Field<::GlobalNamespace::GameEntityManager*> _field = GetClass().GetField(O("grabbedEntityManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnappedEntityId(::GlobalNamespace::GameEntityId value) {
            static BNM::Field<::GlobalNamespace::GameEntityId> _field = GetClass().GetField(O("snappedEntityId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnappedEntityManager(::GlobalNamespace::GameEntityManager* value) {
            static BNM::Field<::GlobalNamespace::GameEntityManager*> _field = GetClass().GetField(O("snappedEntityManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
