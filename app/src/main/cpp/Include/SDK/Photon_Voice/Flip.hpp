#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    struct Flip : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "Flip");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsHorizontal() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsHorizontal"));
            return _method.Call();
        }
        void SetIsHorizontal(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsHorizontal"));
            _method.Call(value);
        }
        bool GetIsVertical() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsVertical"));
            return _method.Call();
        }
        void SetIsVertical(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsVertical"));
            _method.Call(value);
        }
        static ::Photon_Voice::Flip GetBoth() {
            static BNM::Field<::Photon_Voice::Flip> _field = GetClass().GetField(O("Both"));
            return _field.Get();
        }
        static ::Photon_Voice::Flip GetHorizontal() {
            static BNM::Field<::Photon_Voice::Flip> _field = GetClass().GetField(O("Horizontal"));
            return _field.Get();
        }
        static ::Photon_Voice::Flip GetNone() {
            static BNM::Field<::Photon_Voice::Flip> _field = GetClass().GetField(O("None"));
            return _field.Get();
        }
        static ::Photon_Voice::Flip GetVertical() {
            static BNM::Field<::Photon_Voice::Flip> _field = GetClass().GetField(O("Vertical"));
            return _field.Get();
        }
        static void SetBoth(::Photon_Voice::Flip value) {
            static BNM::Field<::Photon_Voice::Flip> _field = GetClass().GetField(O("Both"));
            _field.Set(value);
        }
        static void SetHorizontal(::Photon_Voice::Flip value) {
            static BNM::Field<::Photon_Voice::Flip> _field = GetClass().GetField(O("Horizontal"));
            _field.Set(value);
        }
        static void SetNone(::Photon_Voice::Flip value) {
            static BNM::Field<::Photon_Voice::Flip> _field = GetClass().GetField(O("None"));
            _field.Set(value);
        }
        static void SetVertical(::Photon_Voice::Flip value) {
            static BNM::Field<::Photon_Voice::Flip> _field = GetClass().GetField(O("Vertical"));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        bool Equals_1(TP0 obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        bool get_IsHorizontal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsHorizontal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsVertical() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsVertical"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_IsHorizontal(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsHorizontal"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsVertical(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsVertical"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
