#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CritterConfiguration_AnimalType.hpp"

namespace GlobalNamespace {
    struct CritterIndex_AnimalTypeMeshEntry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CritterIndex").GetInnerClass("AnimalTypeMeshEntry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::CritterConfiguration_AnimalType GetAnimalType() {
            static BNM::Field<::GlobalNamespace::CritterConfiguration_AnimalType> _field = GetClass().GetField(O("animalType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("mesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimalType(::GlobalNamespace::CritterConfiguration_AnimalType value) {
            static BNM::Field<::GlobalNamespace::CritterConfiguration_AnimalType> _field = GetClass().GetField(O("animalType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("mesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
