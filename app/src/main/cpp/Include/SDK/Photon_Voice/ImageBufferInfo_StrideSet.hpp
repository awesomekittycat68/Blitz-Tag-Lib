#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    struct ImageBufferInfo_StrideSet : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "ImageBufferInfo").GetInnerClass("StrideSet");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetItem() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Item"));
            return _method.Call();
        }
        void SetItem(int value) {
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
        int GetStride0() {
            static BNM::Field<int> _field = GetClass().GetField(O("stride0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStride1() {
            static BNM::Field<int> _field = GetClass().GetField(O("stride1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStride2() {
            static BNM::Field<int> _field = GetClass().GetField(O("stride2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStride3() {
            static BNM::Field<int> _field = GetClass().GetField(O("stride3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetStride0(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("stride0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStride1(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("stride1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStride2(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("stride2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStride3(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("stride3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int get_Item(int key) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Item"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(key);
        }
        int get_Length() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Length"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Item(int key, int value) {
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
