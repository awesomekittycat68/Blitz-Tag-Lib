#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LiquidMain : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LiquidMain");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetEffector() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("Effector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static float GetKMovingEffectorPhaseSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("kMovingEffectorPhaseSpeed"));
            return _field.Get();
        }
        static int GetKNumInstancedPlaneCellPerDrawCall() {
            static BNM::Field<int> _field = GetClass().GetField(O("kNumInstancedPlaneCellPerDrawCall"));
            return _field.Get();
        }
        static int GetKNumMovingEffectors() {
            static BNM::Field<int> _field = GetClass().GetField(O("kNumMovingEffectors"));
            return _field.Get();
        }
        static int GetKNumPlaneCells() {
            static BNM::Field<int> _field = GetClass().GetField(O("kNumPlaneCells"));
            return _field.Get();
        }
        static float GetKPlaneMeshCellSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("kPlaneMeshCellSize"));
            return _field.Get();
        }
        static int GetKPlaneMeshResolution() {
            static BNM::Field<int> _field = GetClass().GetField(O("kPlaneMeshResolution"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>* GetMAaInstancedPlaneCellMatrix() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("m_aaInstancedPlaneCellMatrix"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetMAMovingEffector() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("m_aMovingEffector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetMAMovingEffectorPhase() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("m_aMovingEffectorPhase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMPlaneMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_planeMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetPlaneMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("PlaneMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingReactorField* GetReactorField() {
            static BNM::Field<::BoingKit::BoingReactorField*> _field = GetClass().GetField(O("ReactorField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEffector(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("Effector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetKNumPlaneCells(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("kNumPlaneCells"));
            _field.Set(value);
        }
        void SetMAaInstancedPlaneCellMatrix(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("m_aaInstancedPlaneCellMatrix"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMAMovingEffector(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("m_aMovingEffector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMAMovingEffectorPhase(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("m_aMovingEffectorPhase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPlaneMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_planeMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlaneMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("PlaneMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactorField(::BoingKit::BoingReactorField* value) {
            static BNM::Field<::BoingKit::BoingReactorField*> _field = GetClass().GetField(O("ReactorField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ResetEffector(::GameObject* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetEffector"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
