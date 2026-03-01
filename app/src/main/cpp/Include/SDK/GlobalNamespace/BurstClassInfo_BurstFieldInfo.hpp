#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BurstClassInfo_EFieldTypes.hpp"

namespace GlobalNamespace {
    struct BurstClassInfo_BurstFieldInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BurstClassInfo").GetInnerClass("BurstFieldInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::BurstClassInfo_EFieldTypes GetFieldType() {
            static BNM::Field<::GlobalNamespace::BurstClassInfo_EFieldTypes> _field = GetClass().GetField(O("FieldType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMetatableName() {
            static BNM::Field<void*> _field = GetClass().GetField(O("MetatableName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetName() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNameHash() {
            static BNM::Field<int> _field = GetClass().GetField(O("NameHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("Offset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("Size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFieldType(::GlobalNamespace::BurstClassInfo_EFieldTypes value) {
            static BNM::Field<::GlobalNamespace::BurstClassInfo_EFieldTypes> _field = GetClass().GetField(O("FieldType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMetatableName(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("MetatableName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetName(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNameHash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("NameHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffset(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Offset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
