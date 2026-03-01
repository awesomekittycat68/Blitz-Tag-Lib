#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Aabb.hpp"
#include "BoingBase.hpp"
#include "BoingReactorField_CellMoveModeEnum.hpp"
#include "BoingReactorField_FalloffDimensionsEnum.hpp"
#include "BoingReactorField_FalloffModeEnum.hpp"
#include "BoingReactorField_FieldParams.hpp"
#include "BoingReactorField_HardwareModeEnum.hpp"
#include "BoingWork_Params.hpp"
#include "BoingWork_Params_InstanceData.hpp"

namespace BoingKit {
    struct BoingReactorField : ::BoingKit::BoingBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingReactorField");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetGpuResourceSetId() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_GpuResourceSetId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BoingKit::BoingReactorField_ShaderPropertyIdSet* GetShaderPropertyId() {
            static BNM::Method<::BoingKit::BoingReactorField_ShaderPropertyIdSet*> _method = GetClass().GetMethod(O("get_ShaderPropertyId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetAnchorPropagationAtBorder() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AnchorPropagationAtBorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingReactorField_CellMoveModeEnum GetCellMoveMode() {
            static BNM::Field<::BoingKit::BoingReactorField_CellMoveModeEnum> _field = GetClass().GetField(O("CellMoveMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
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
        ::BNM::Structures::Mono::Array<::BoingKit::BoingEffector*>* GetEffectors() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BoingKit::BoingEffector*>*> _field = GetClass().GetField(O("Effectors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnablePositionEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnablePositionEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnablePropagation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnablePropagation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableRotationEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableRotationEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingReactorField_FalloffDimensionsEnum GetFalloffDimensions() {
            static BNM::Field<::BoingKit::BoingReactorField_FalloffDimensionsEnum> _field = GetClass().GetField(O("FalloffDimensions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingReactorField_FalloffModeEnum GetFalloffMode() {
            static BNM::Field<::BoingKit::BoingReactorField_FalloffModeEnum> _field = GetClass().GetField(O("FalloffMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFalloffRatio() {
            static BNM::Field<float> _field = GetClass().GetField(O("FalloffRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGlobalReactionUpVector() {
            static BNM::Field<bool> _field = GetClass().GetField(O("GlobalReactionUpVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingReactorField_HardwareModeEnum GetHardwareMode() {
            static BNM::Field<::BoingKit::BoingReactorField_HardwareModeEnum> _field = GetClass().GetField(O("HardwareMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static float GetKPropagationFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("kPropagationFactor"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BoingKit::BoingWork_Params_InstanceData>* GetMACpuCell() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BoingKit::BoingWork_Params_InstanceData>*> _field = GetClass().GetField(O("m_aCpuCell"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::Aabb GetMBounds() {
            static BNM::Field<::BoingKit::Aabb> _field = GetClass().GetField(O("m_bounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMCellBufferNeedsReset() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_cellBufferNeedsReset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingReactorField_CellMoveModeEnum GetMCellMoveMode() {
            static BNM::Field<::BoingKit::BoingReactorField_CellMoveModeEnum> _field = GetClass().GetField(O("m_cellMoveMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMCellsBuffer() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_cellsBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMCellsX() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_cellsX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMCellsY() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_cellsY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMCellsZ() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_cellsZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMEffectorIndexBuffer() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_effectorIndexBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingReactorField_FieldParams GetMFieldParams() {
            static BNM::Field<::BoingKit::BoingReactorField_FieldParams> _field = GetClass().GetField(O("m_fieldParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMFieldParamsBuffer() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_fieldParamsBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMGpuResourceSetId() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_gpuResourceSetId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMGridCenter() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_gridCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingReactorField_HardwareModeEnum GetMHardwareMode() {
            static BNM::Field<::BoingKit::BoingReactorField_HardwareModeEnum> _field = GetClass().GetField(O("m_hardwareMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMICellBaseX() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_iCellBaseX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMICellBaseY() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_iCellBaseY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMICellBaseZ() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_iCellBaseZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMInit() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_init"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMNumEffectors() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_numEffectors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMQPrevGridCenterNorm() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_qPrevGridCenterNorm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMReactorParamsBuffer() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_reactorParamsBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMShader() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_shader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingWork_Params GetParams() {
            static BNM::Field<::BoingKit::BoingWork_Params> _field = GetClass().GetField(O("Params"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPositionPropagation() {
            static BNM::Field<float> _field = GetClass().GetField(O("PositionPropagation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPropagationDepth() {
            static BNM::Field<int> _field = GetClass().GetField(O("PropagationDepth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotationPropagation() {
            static BNM::Field<float> _field = GetClass().GetField(O("RotationPropagation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetSACellOffset() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("s_aCellOffset"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BoingKit::BoingWork_Params>* GetSAReactorParams() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BoingKit::BoingWork_Params>*> _field = GetClass().GetField(O("s_aReactorParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<float>* GetSASqrtInv() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("s_aSqrtInv"));
            return _field.Get();
        }
        static ::BoingKit::BoingReactorField_ComputeKernelId* GetSComputeKernelId() {
            static BNM::Field<::BoingKit::BoingReactorField_ComputeKernelId*> _field = GetClass().GetField(O("s_computeKernelId"));
            return _field.Get();
        }
        static ::BoingKit::BoingReactorField_ShaderPropertyIdSet* GetSShaderPropertyId() {
            static BNM::Field<::BoingKit::BoingReactorField_ShaderPropertyIdSet*> _field = GetClass().GetField(O("s_shaderPropertyId"));
            return _field.Get();
        }
        ::BoingKit::SharedBoingParams* GetSharedParams() {
            static BNM::Field<::BoingKit::SharedBoingParams*> _field = GetClass().GetField(O("SharedParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTwoDDistanceCheck() {
            static BNM::Field<bool> _field = GetClass().GetField(O("TwoDDistanceCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTwoDPositionInfluence() {
            static BNM::Field<bool> _field = GetClass().GetField(O("TwoDPositionInfluence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTwoDRotationInfluence() {
            static BNM::Field<bool> _field = GetClass().GetField(O("TwoDRotationInfluence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnchorPropagationAtBorder(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AnchorPropagationAtBorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCellMoveMode(::BoingKit::BoingReactorField_CellMoveModeEnum value) {
            static BNM::Field<::BoingKit::BoingReactorField_CellMoveModeEnum> _field = GetClass().GetField(O("CellMoveMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        void SetEffectors(::BNM::Structures::Mono::Array<::BoingKit::BoingEffector*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BoingKit::BoingEffector*>*> _field = GetClass().GetField(O("Effectors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnablePositionEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnablePositionEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnablePropagation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnablePropagation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableRotationEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableRotationEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFalloffDimensions(::BoingKit::BoingReactorField_FalloffDimensionsEnum value) {
            static BNM::Field<::BoingKit::BoingReactorField_FalloffDimensionsEnum> _field = GetClass().GetField(O("FalloffDimensions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFalloffMode(::BoingKit::BoingReactorField_FalloffModeEnum value) {
            static BNM::Field<::BoingKit::BoingReactorField_FalloffModeEnum> _field = GetClass().GetField(O("FalloffMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFalloffRatio(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("FalloffRatio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGlobalReactionUpVector(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("GlobalReactionUpVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHardwareMode(::BoingKit::BoingReactorField_HardwareModeEnum value) {
            static BNM::Field<::BoingKit::BoingReactorField_HardwareModeEnum> _field = GetClass().GetField(O("HardwareMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMACpuCell(::BNM::Structures::Mono::Array<::BoingKit::BoingWork_Params_InstanceData>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BoingKit::BoingWork_Params_InstanceData>*> _field = GetClass().GetField(O("m_aCpuCell"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMBounds(::BoingKit::Aabb value) {
            static BNM::Field<::BoingKit::Aabb> _field = GetClass().GetField(O("m_bounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMCellBufferNeedsReset(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_cellBufferNeedsReset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMCellMoveMode(::BoingKit::BoingReactorField_CellMoveModeEnum value) {
            static BNM::Field<::BoingKit::BoingReactorField_CellMoveModeEnum> _field = GetClass().GetField(O("m_cellMoveMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMCellsBuffer(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_cellsBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMCellsX(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_cellsX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMCellsY(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_cellsY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMCellsZ(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_cellsZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMEffectorIndexBuffer(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_effectorIndexBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMFieldParams(::BoingKit::BoingReactorField_FieldParams value) {
            static BNM::Field<::BoingKit::BoingReactorField_FieldParams> _field = GetClass().GetField(O("m_fieldParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMFieldParamsBuffer(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_fieldParamsBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMGpuResourceSetId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_gpuResourceSetId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMGridCenter(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_gridCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMHardwareMode(::BoingKit::BoingReactorField_HardwareModeEnum value) {
            static BNM::Field<::BoingKit::BoingReactorField_HardwareModeEnum> _field = GetClass().GetField(O("m_hardwareMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMICellBaseX(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_iCellBaseX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMICellBaseY(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_iCellBaseY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMICellBaseZ(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_iCellBaseZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMInit(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_init"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMNumEffectors(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_numEffectors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMQPrevGridCenterNorm(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_qPrevGridCenterNorm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMReactorParamsBuffer(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_reactorParamsBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMShader(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_shader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParams(::BoingKit::BoingWork_Params value) {
            static BNM::Field<::BoingKit::BoingWork_Params> _field = GetClass().GetField(O("Params"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionPropagation(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PositionPropagation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPropagationDepth(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("PropagationDepth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationPropagation(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("RotationPropagation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSACellOffset(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("s_aCellOffset"));
            _field.Set(value);
        }
        void SetSAReactorParams(::BNM::Structures::Mono::Array<::BoingKit::BoingWork_Params>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BoingKit::BoingWork_Params>*> _field = GetClass().GetField(O("s_aReactorParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSASqrtInv(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("s_aSqrtInv"));
            _field.Set(value);
        }
        static void SetSComputeKernelId(::BoingKit::BoingReactorField_ComputeKernelId* value) {
            static BNM::Field<::BoingKit::BoingReactorField_ComputeKernelId*> _field = GetClass().GetField(O("s_computeKernelId"));
            _field.Set(value);
        }
        static void SetSShaderPropertyId(::BoingKit::BoingReactorField_ShaderPropertyIdSet* value) {
            static BNM::Field<::BoingKit::BoingReactorField_ShaderPropertyIdSet*> _field = GetClass().GetField(O("s_shaderPropertyId"));
            _field.Set(value);
        }
        void SetSharedParams(::BoingKit::SharedBoingParams* value) {
            static BNM::Field<::BoingKit::SharedBoingParams*> _field = GetClass().GetField(O("SharedParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTwoDDistanceCheck(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("TwoDDistanceCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTwoDPositionInfluence(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("TwoDPositionInfluence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTwoDRotationInfluence(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("TwoDRotationInfluence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AccumulatePropagationWeightedNeighbor(::BoingKit::BoingWork_Params_InstanceData& data, ::BoingKit::BoingWork_Params_InstanceData& neighbor, float weight) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AccumulatePropagationWeightedNeighbor"), {"data", "neighbor", "weight"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&data, &neighbor, weight);
        }
        void AnchorPropagationBorder(::BoingKit::BoingWork_Params_InstanceData& data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AnchorPropagationBorder"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&data);
        }
        void DisposeCpuResources() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisposeCpuResources"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DisposeGpuResources() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisposeGpuResources"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DrawGizmos(bool drawEffectors) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawGizmos"), {"drawEffectors"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(drawEffectors);
        }
        void ExecuteCpu(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteCpu"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void ExecuteGpu(float dt, ::BNM::IL2CPP::Il2CppObject* effectorParamsBuffer, ::BNM::Structures::Mono::Dictionary<int, int>* effectorParamsIndexMap) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteGpu"), {"dt", "effectorParamsBuffer", "effectorParamsIndexMap"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt, effectorParamsBuffer, effectorParamsIndexMap);
        }
        void ExtendPropagationBorder(::BoingKit::BoingWork_Params_InstanceData& data, float weight, int adjDeltaX, int adjDeltaY, int adjDeltaZ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExtendPropagationBorder"), {"data", "weight", "adjDeltaX", "adjDeltaY", "adjDeltaZ"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&data, weight, adjDeltaX, adjDeltaY, adjDeltaZ);
        }
        void FinishPrepareExecuteCpu() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FinishPrepareExecuteCpu"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FinishPrepareExecuteGpu() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FinishPrepareExecuteGpu"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GatherPropagation(::BoingKit::BoingWork_Params_InstanceData& data, float weightSum) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GatherPropagation"), {"data", "weightSum"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&data, weightSum);
        }
        int get_GpuResourceSetId() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_GpuResourceSetId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BoingKit::BoingReactorField_ShaderPropertyIdSet* get_ShaderPropertyId() {
            static BNM::Method<::BoingKit::BoingReactorField_ShaderPropertyIdSet*> _m = GetClass().GetMethod(O("get_ShaderPropertyId"));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetCellCenterOffset(int x, int y, int z) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetCellCenterOffset"), {"x", "y", "z"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(x, y, z);
        }
        ::BNM::Structures::Unity::Vector3 GetGridCenter() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetGridCenter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleCellMove() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleCellMove"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitPropagationCpu(::BoingKit::BoingWork_Params_InstanceData& data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitPropagationCpu"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&data);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDrawGizmosSelected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDrawGizmosSelected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PrepareExecute() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PrepareExecute"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PropagateCpu(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PropagateCpu"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void PropagateSpringCpu(::BoingKit::BoingWork_Params_InstanceData& data, float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PropagateSpringCpu"), {"data", "dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&data, dt);
        }
        ::BNM::Structures::Unity::Vector3 QuantizeNorm(::BNM::Structures::Unity::Vector3 p) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("QuantizeNorm"), {"p"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(p);
        }
        void Reboot() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reboot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResolveCellIndex(int x, int y, int z, int baseMult, int& resX, int& resY, int& resZ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResolveCellIndex"), {"x", "y", "z", "baseMult", "resX", "resY", "resZ"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(x, y, z, baseMult, &resX, &resY, &resZ);
        }
        bool SampleCpuGrid(::BNM::Structures::Unity::Vector3 p, ::BNM::Structures::Unity::Vector3& positionOffset, ::BNM::Structures::Unity::Vector4& rotationOffset) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SampleCpuGrid"), {"p", "positionOffset", "rotationOffset"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(p, &positionOffset, &rotationOffset);
        }
        void Sanitize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Sanitize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateBounds() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBounds"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateFieldParamsGpu() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFieldParamsGpu"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateFlags() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFlags"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool UpdateShaderConstants(::BNM::IL2CPP::Il2CppObject* props, float positionSampleMultiplier, float rotationSampleMultiplier) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateShaderConstants"), {"props", "positionSampleMultiplier", "rotationSampleMultiplier"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(props, positionSampleMultiplier, rotationSampleMultiplier);
        }
        bool UpdateShaderConstants(::Material* material, float positionSampleMultiplier, float rotationSampleMultiplier) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateShaderConstants"), {"material", "positionSampleMultiplier", "rotationSampleMultiplier"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(material, positionSampleMultiplier, rotationSampleMultiplier);
        }
        void ValidateCpuResources() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateCpuResources"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ValidateGpuResources() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateGpuResources"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WrapCpu(int deltaX, int deltaY, int deltaZ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WrapCpu"), {"deltaX", "deltaY", "deltaZ"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(deltaX, deltaY, deltaZ);
        }
        void WrapGpu(int deltaX, int deltaY, int deltaZ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WrapGpu"), {"deltaX", "deltaY", "deltaZ"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(deltaX, deltaY, deltaZ);
        }
    };
}
