#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PerformanceSystems/TimeSliceLodBehaviour.hpp"

namespace GlobalNamespace {
    struct DemoCubeATimeSliceBehaviourEvents : ::PerformanceSystems::TimeSliceLodBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DemoCubeATimeSliceBehaviourEvents");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Material* GetGreen() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_green"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIterationsOfExpensiveOp() {
            static BNM::Field<int> _field = GetClass().GetField(O("_iterationsOfExpensiveOp"));
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
        void SetGreen(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_green"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIterationsOfExpensiveOp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_iterationsOfExpensiveOp"));
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
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
    };
}
