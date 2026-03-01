#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonoBehaviourTick.hpp"

namespace GlobalNamespace {
    struct GRShiftSirenLight : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRShiftSirenLight");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetBrightLight() {
            static BNM::Field<float> _field = GetClass().GetField(O("brightLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDimLight() {
            static BNM::Field<float> _field = GetClass().GetField(O("dimLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGreenLight() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("greenLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetGreenLightParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("greenLightParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Light* GetReadyRoomLight() {
            static BNM::Field<::Light*> _field = GetClass().GetField(O("readyRoomLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRedLight() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("redLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRedLightParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("redLightParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotationRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorShiftManager* GetShiftManager() {
            static BNM::Field<::GlobalNamespace::GhostReactorShiftManager*> _field = GetClass().GetField(O("shiftManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBrightLight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("brightLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDimLight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dimLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreenLight(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("greenLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreenLightParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("greenLightParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReadyRoomLight(::Light* value) {
            static BNM::Field<::Light*> _field = GetClass().GetField(O("readyRoomLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRedLight(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("redLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRedLightParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("redLightParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftManager(::GlobalNamespace::GhostReactorShiftManager* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorShiftManager*> _field = GetClass().GetField(O("shiftManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
