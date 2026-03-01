#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    struct BuilderConveyorManager_EvaluateSplineJob : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "BuilderConveyorManager").GetInnerClass("EvaluateSplineJob");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetConveyorIndices() {
            static BNM::Field<void*> _field = GetClass().GetField(O("conveyorIndices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetConveyorRotations() {
            static BNM::Field<void*> _field = GetClass().GetField(O("conveyorRotations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetConveyorSpline0() {
            static BNM::Field<void*> _field = GetClass().GetField(O("conveyorSpline0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetConveyorSpline1() {
            static BNM::Field<void*> _field = GetClass().GetField(O("conveyorSpline1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetConveyorSpline2() {
            static BNM::Field<void*> _field = GetClass().GetField(O("conveyorSpline2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetConveyorSpline3() {
            static BNM::Field<void*> _field = GetClass().GetField(O("conveyorSpline3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetShelfOffsets() {
            static BNM::Field<void*> _field = GetClass().GetField(O("shelfOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSplineTimes() {
            static BNM::Field<void*> _field = GetClass().GetField(O("splineTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetConveyorIndices(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("conveyorIndices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConveyorRotations(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("conveyorRotations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConveyorSpline0(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("conveyorSpline0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConveyorSpline1(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("conveyorSpline1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConveyorSpline2(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("conveyorSpline2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConveyorSpline3(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("conveyorSpline3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfOffsets(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("shelfOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSplineTimes(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("splineTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP1 = void*>
        void Execute(int index, TP1 transform) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"), {"index", "transform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, transform);
        }
        void* GetSplineAt(int index) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetSplineAt"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        template <typename TP1 = void*>
        void SetSplineAt(int index, TP1 s) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSplineAt"), {"index", "s"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, s);
        }
    };
}
