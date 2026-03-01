#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BezierControlPointMode.hpp"

namespace GlobalNamespace {
    struct BezierSpline : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BezierSpline");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetControlPointCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ControlPointCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCurveCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CurveCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetLoop() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Loop"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLoop(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Loop"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<float>* GetLengthsTable() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("_lengthsTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetTimesTable() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("_timesTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTotalArcLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("_totalArcLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLoop_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::BezierControlPointMode>* GetModes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::BezierControlPointMode>*> _field = GetClass().GetField(O("modes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetPoints() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("points"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLengthsTable(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("_lengthsTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimesTable(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("_timesTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalArcLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_totalArcLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoop_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModes(::BNM::Structures::Mono::Array<::GlobalNamespace::BezierControlPointMode>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::BezierControlPointMode>*> _field = GetClass().GetField(O("modes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPoints(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("points"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddCurve() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCurve"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BuildSplineFromPoints(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* newPoints, ::BNM::Structures::Mono::Array<::GlobalNamespace::BezierControlPointMode>* newModes, bool isLoop) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildSplineFromPoints"), {"newPoints", "newModes", "isLoop"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPoints, newModes, isLoop);
        }
        void buildTimesLenghtsTables(int subdivisions) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("buildTimesLenghtsTables"), {"subdivisions"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(subdivisions);
        }
        void EnforceMode(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnforceMode"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        int get_ControlPointCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ControlPointCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_CurveCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CurveCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_Loop() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Loop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetControlPoint(int index) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetControlPoint"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        ::GlobalNamespace::BezierControlPointMode GetControlPointMode(int index) {
            static BNM::Method<::GlobalNamespace::BezierControlPointMode> _m = GetClass().GetMethod(O("GetControlPointMode"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        ::BNM::Structures::Unity::Vector3 GetDirection(float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetDirection"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t);
        }
        ::BNM::Structures::Unity::Vector3 GetDirection(float t, bool ConstantVelocity) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetDirection"), {"t", "ConstantVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t, ConstantVelocity);
        }
        float getPathFromTime(float t) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("getPathFromTime"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t);
        }
        ::BNM::Structures::Unity::Vector3 GetPoint(float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetPoint"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t);
        }
        ::BNM::Structures::Unity::Vector3 GetPoint(float t, bool ConstantVelocity) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetPoint"), {"t", "ConstantVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t, ConstantVelocity);
        }
        ::BNM::Structures::Unity::Vector3 GetPointLocal(float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetPointLocal"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t);
        }
        ::BNM::Structures::Unity::Vector3 GetVelocity(float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetVelocity"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t);
        }
        void RemoveCurve(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCurve"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        void RemoveLastCurve() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveLastCurve"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_Loop(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Loop"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetControlPoint(int index, ::BNM::Structures::Unity::Vector3 point) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetControlPoint"), {"index", "point"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, point);
        }
        void SetControlPointMode(int index, ::GlobalNamespace::BezierControlPointMode mode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetControlPointMode"), {"index", "mode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, mode);
        }
    };
}
