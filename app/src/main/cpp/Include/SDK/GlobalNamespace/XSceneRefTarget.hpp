#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct XSceneRefTarget : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "XSceneRefTarget");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void* GetEpoch() {
            static BNM::Field<void*> _field = GetClass().GetField(O("epoch"));
            return _field.Get();
        }
        static int GetLastAssignedID() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastAssignedID"));
            return _field.Get();
        }
        int GetLastRegisteredID() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastRegisteredID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUniqueID() {
            static BNM::Field<int> _field = GetClass().GetField(O("UniqueID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetEpoch(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("epoch"));
            _field.Set(value);
        }
        static void SetLastAssignedID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastAssignedID"));
            _field.Set(value);
        }
        void SetLastRegisteredID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastRegisteredID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUniqueID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("UniqueID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AssignNewID() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AssignNewID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static int CreateNewID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CreateNewID"));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnValidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Register(bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(force);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
