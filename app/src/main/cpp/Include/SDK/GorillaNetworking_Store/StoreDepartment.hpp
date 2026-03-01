#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking_Store {
    struct StoreDepartment : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking.Store", "StoreDepartment");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetDepartmentName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("departmentName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaNetworking_Store::StoreDisplay*>* GetDisplays() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking_Store::StoreDisplay*>*> _field = GetClass().GetField(O("Displays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDepartmentName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("departmentName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplays(::BNM::Structures::Mono::Array<::GorillaNetworking_Store::StoreDisplay*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking_Store::StoreDisplay*>*> _field = GetClass().GetField(O("Displays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void FindAllDisplays() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FindAllDisplays"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
