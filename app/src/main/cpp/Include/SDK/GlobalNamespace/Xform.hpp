#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct Xform : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Xform");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void* GetAXISXRRT() {
            static BNM::Field<void*> _field = GetClass().GetField(O("AXIS_XR_RT"));
            return _field.Get();
        }
        static void* GetAXISYGUP() {
            static BNM::Field<void*> _field = GetClass().GetField(O("AXIS_YG_UP"));
            return _field.Get();
        }
        static void* GetAXISZBFW() {
            static BNM::Field<void*> _field = GetClass().GetField(O("AXIS_ZB_FW"));
            return _field.Get();
        }
        static ::BNM::Structures::Unity::Color GetCB() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("CB"));
            return _field.Get();
        }
        static ::BNM::Structures::Unity::Color GetCG() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("CG"));
            return _field.Get();
        }
        static ::BNM::Structures::Unity::Color GetCR() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("CR"));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetDisplayColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("displayColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetF2ONE() {
            static BNM::Field<void*> _field = GetClass().GetField(O("F2_ONE"));
            return _field.Get();
        }
        static void* GetF3ONE() {
            static BNM::Field<void*> _field = GetClass().GetField(O("F3_ONE"));
            return _field.Get();
        }
        void* GetLocalPosition() {
            static BNM::Field<void*> _field = GetClass().GetField(O("localPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetLocalRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("localRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLocalScale() {
            static BNM::Field<void*> _field = GetClass().GetField(O("localScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("parent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDisplayColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("displayColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPosition(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("localPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("localRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalScale(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("localScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("parent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* get_localExtents() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_localExtents"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Matrix4x4 LocalTRS() {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("LocalTRS"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Matrix4x4 TRS() {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("TRS"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
