#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BurstClassInfo_BurstFieldInfo.hpp"

namespace GlobalNamespace {
    struct BurstClassInfo_ClassInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BurstClassInfo").GetInnerClass("ClassInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetFieldList() {
            static BNM::Field<void*> _field = GetClass().GetField(O("FieldList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFunctionList() {
            static BNM::Field<void*> _field = GetClass().GetField(O("FunctionList"));
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
        int GetSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("Size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFieldList(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("FieldList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFunctionList(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("FunctionList"));
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
        void SetSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
