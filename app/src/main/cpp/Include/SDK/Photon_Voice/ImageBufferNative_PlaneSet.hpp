#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    struct ImageBufferNative_PlaneSet : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "ImageBufferNative").GetInnerClass("PlaneSet");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Types::nint GetItem() {
            static BNM::Method<::BNM::Types::nint> _method = GetClass().GetMethod(O("get_Item"));
            return _method.Call();
        }
        void SetItem(::BNM::Types::nint value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Item"));
            _method.Call(value);
        }
        int GetLength() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Length"));
            return _method.Call();
        }
        void SetLength(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Length"));
            _method.Call(value);
        }
        ::BNM::Types::nint GetPlane0() {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("plane0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Types::nint GetPlane1() {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("plane1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Types::nint GetPlane2() {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("plane2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Types::nint GetPlane3() {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("plane3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPlane0(::BNM::Types::nint value) {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("plane0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlane1(::BNM::Types::nint value) {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("plane1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlane2(::BNM::Types::nint value) {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("plane2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlane3(::BNM::Types::nint value) {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("plane3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Types::nint get_Item(int key) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("get_Item"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        int get_Length() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Length"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Item(int key, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Item"), {"key", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, value);
        }
        void set_Length(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Length"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
