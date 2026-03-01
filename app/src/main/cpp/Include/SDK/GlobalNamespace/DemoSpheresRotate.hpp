#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PerformanceSystems/TimeSliceLodBehaviour.hpp"

namespace GlobalNamespace {
    struct DemoSpheresRotate : ::PerformanceSystems::TimeSliceLodBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DemoSpheresRotate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Material* GetBlack() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_black"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetGreen() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_green"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetRed() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_red"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetRenderer() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("_renderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotationSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("_rotationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::PerformanceSystems::TimeSliceControllerAsset*>* GetTimeSliceControllerAssets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::PerformanceSystems::TimeSliceControllerAsset*>*> _field = GetClass().GetField(O("_timeSliceControllerAssets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlack(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_black"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreen(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_green"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRed(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_red"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("_renderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_rotationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeSliceControllerAssets(::BNM::Structures::Mono::Array<::PerformanceSystems::TimeSliceControllerAsset*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::PerformanceSystems::TimeSliceControllerAsset*>*> _field = GetClass().GetField(O("_timeSliceControllerAssets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnLod0Enter() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLod0Enter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLod1Enter() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLod1Enter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLod2Enter() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLod2Enter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLodExit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLodExit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SliceUpdate(float deltaTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"), {"deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(deltaTime);
        }
        void SwapToTimeSlicer(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwapToTimeSlicer"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
    };
}
