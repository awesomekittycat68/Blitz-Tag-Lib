#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct Id128 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Id128");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetA() {
            static BNM::Field<int> _field = GetClass().GetField(O("a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetB() {
            static BNM::Field<int> _field = GetClass().GetField(O("b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetC() {
            static BNM::Field<int> _field = GetClass().GetField(O("c"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetD() {
            static BNM::Field<int> _field = GetClass().GetField(O("d"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::Id128 GetEmpty() {
            static BNM::Field<::GlobalNamespace::Id128> _field = GetClass().GetField(O("Empty"));
            return _field.Get();
        }
        void* GetGuid() {
            static BNM::Field<void*> _field = GetClass().GetField(O("guid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetH128() {
            static BNM::Field<void*> _field = GetClass().GetField(O("h128"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetX() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("x"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetY() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("y"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetA(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetB(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetC(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("c"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetD(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("d"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuid(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("guid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH128(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("h128"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetX(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("x"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetY(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("y"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int CompareTo(::GlobalNamespace::Id128 id) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CompareTo"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id);
        }
        template <typename TP0 = void*>
        int CompareTo(TP0 obj) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CompareTo"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        static ::GlobalNamespace::Id128 ComputeMD5(::BNM::Structures::Mono::String* s) {
            static BNM::Method<::GlobalNamespace::Id128> _m = GetClass().GetMethod(O("ComputeMD5"), {"s"});
            return _m.Call(s);
        }
        static ::GlobalNamespace::Id128 ComputeSHV2(::BNM::Structures::Mono::String* s) {
            static BNM::Method<::GlobalNamespace::Id128> _m = GetClass().GetMethod(O("ComputeSHV2"), {"s"});
            return _m.Call(s);
        }
        bool Equals_1(::GlobalNamespace::Id128 id) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id);
        }
        template <typename TP0 = void*>
        bool Equals_1(TP0 g) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"g"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(g);
        }
        template <typename TP0 = void*>
        bool Equals_1(TP0 h) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"h"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(h);
        }
        template <typename TP0 = void*>
        bool Equals_1(TP0 obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::Id128 NewId() {
            static BNM::Method<::GlobalNamespace::Id128> _m = GetClass().GetMethod(O("NewId"));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* ToByteArray() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("ToByteArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* ToInts() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ToInts"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* ToLongs() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ToLongs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
