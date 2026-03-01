#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LivCameraDockPreviewSync : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LivCameraDockPreviewSync");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetLastCameraFOV() {
            static BNM::Field<float> _field = GetClass().GetField(O("_lastCameraFOV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastDockFOV() {
            static BNM::Field<float> _field = GetClass().GetField(O("_lastDockFOV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Docking::LivCameraDock* GetDock() {
            static BNM::Field<::Docking::LivCameraDock*> _field = GetClass().GetField(O("dock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Camera* GetParentCamera() {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("parentCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLastCameraFOV(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_lastCameraFOV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastDockFOV(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_lastDockFOV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDock(::Docking::LivCameraDock* value) {
            static BNM::Field<::Docking::LivCameraDock*> _field = GetClass().GetField(O("dock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentCamera(::Camera* value) {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("parentCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
