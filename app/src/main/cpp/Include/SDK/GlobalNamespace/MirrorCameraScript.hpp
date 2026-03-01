#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MirrorCameraScript : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MirrorCameraScript");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Camera* GetMainCamera() {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("mainCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Camera* GetMirrorCamera() {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("mirrorCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMainCamera(::Camera* value) {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("mainCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMirrorCamera(::Camera* value) {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("mirrorCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CalculateReflectionMatrix(::BNM::Structures::Unity::Matrix4x4& reflectionMatrix, ::BNM::Structures::Unity::Vector4 plane) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalculateReflectionMatrix"), {"reflectionMatrix", "plane"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&reflectionMatrix, plane);
        }
        ::BNM::Structures::Unity::Vector4 CameraSpacePlane(::Camera* cam, ::BNM::Structures::Unity::Vector3 pos, ::BNM::Structures::Unity::Vector3 normal, float sideSign) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("CameraSpacePlane"), {"cam", "pos", "normal", "sideSign"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cam, pos, normal, sideSign);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MirrorCullingMaskChanged(int newMask) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MirrorCullingMaskChanged"), {"newMask"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newMask);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
