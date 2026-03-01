#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BoingKit {
    struct BoingReactorField_FieldParams : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingReactorField").GetInnerClass("FieldParams");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCellSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("CellSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCellsX() {
            static BNM::Field<int> _field = GetClass().GetField(O("CellsX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCellsY() {
            static BNM::Field<int> _field = GetClass().GetField(O("CellsY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCellsZ() {
            static BNM::Field<int> _field = GetClass().GetField(O("CellsZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDeltaTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("DeltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFalloffDimensions() {
            static BNM::Field<int> _field = GetClass().GetField(O("FalloffDimensions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFalloffMode() {
            static BNM::Field<int> _field = GetClass().GetField(O("FalloffMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFalloffRatio() {
            static BNM::Field<float> _field = GetClass().GetField(O("FalloffRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetFieldPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("FieldPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetGridCenter() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("GridCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetICellBaseX() {
            static BNM::Field<int> _field = GetClass().GetField(O("iCellBaseX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetICellBaseY() {
            static BNM::Field<int> _field = GetClass().GetField(O("iCellBaseY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetICellBaseZ() {
            static BNM::Field<int> _field = GetClass().GetField(O("iCellBaseZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMPadding0() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMPadding1() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPadding2() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPadding3() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPadding4() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPadding5() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding5"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumEffectors() {
            static BNM::Field<int> _field = GetClass().GetField(O("NumEffectors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPropagationDepth() {
            static BNM::Field<int> _field = GetClass().GetField(O("PropagationDepth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetStride() {
            static BNM::Field<int> _field = GetClass().GetField(O("Stride"));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetUpWs() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("UpWs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCellSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("CellSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCellsX(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("CellsX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCellsY(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("CellsY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCellsZ(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("CellsZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeltaTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("DeltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFalloffDimensions(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("FalloffDimensions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFalloffMode(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("FalloffMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFalloffRatio(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("FalloffRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFieldPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("FieldPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGridCenter(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("GridCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetICellBaseX(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("iCellBaseX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetICellBaseY(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("iCellBaseY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetICellBaseZ(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("iCellBaseZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding0(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding1(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_padding1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding2(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding3(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding4(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding4"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPadding5(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_padding5"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumEffectors(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("NumEffectors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPropagationDepth(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("PropagationDepth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpWs(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("UpWs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SuppressWarnings() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SuppressWarnings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
