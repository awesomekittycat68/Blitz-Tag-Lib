#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CritterConfiguration_AnimalType.hpp"

namespace GlobalNamespace {
    struct CritterIndex : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CritterIndex");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::CritterIndex* GetInstance() {
            static BNM::Field<::GlobalNamespace::CritterIndex*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        ::GlobalNamespace::CritterConfiguration* GetItem() {
            static BNM::Method<::GlobalNamespace::CritterConfiguration*> _method = GetClass().GetMethod(O("get_Item"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GlobalNamespace::CritterIndex* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::CritterIndex*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry*>* GetAnimalMeshes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry*>*> _field = GetClass().GetField(O("animalMeshes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CritterConfiguration*>* GetCritterTypes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CritterConfiguration*>*> _field = GetClass().GetField(O("critterTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::CritterIndex* value) {
            static BNM::Field<::GlobalNamespace::CritterIndex*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetAnimalMeshes(::BNM::Structures::Mono::List<::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry*>*> _field = GetClass().GetField(O("animalMeshes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCritterTypes(::BNM::Structures::Mono::List<::GlobalNamespace::CritterConfiguration*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CritterConfiguration*>*> _field = GetClass().GetField(O("critterTypes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::CritterConfiguration* get_Item(int index) {
            static BNM::Method<::GlobalNamespace::CritterConfiguration*> _m = GetClass().GetMethod(O("get_Item"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        static void* GetCritterDateTime() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetCritterDateTime"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetMesh(::GlobalNamespace::CritterConfiguration_AnimalType animalType) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetMesh"), {"animalType"});
            return _m.Call(animalType);
        }
        ::GlobalNamespace::CritterConfiguration* GetRandomConfiguration(::GlobalNamespace::CrittersRegion* region) {
            static BNM::Method<::GlobalNamespace::CritterConfiguration*> _m = GetClass().GetMethod(O("GetRandomConfiguration"), {"region"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(region);
        }
        int GetRandomCritterType(::GlobalNamespace::CrittersRegion* region) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRandomCritterType"), {"region"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(region);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
