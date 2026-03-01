#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    struct BuilderConveyorManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "BuilderConveyorManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTagScripts_Builder::BuilderConveyorManager* GetInstance() {
            static BNM::Method<::GorillaTagScripts_Builder::BuilderConveyorManager*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GorillaTagScripts_Builder::BuilderConveyorManager* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
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
        void* GetConveyorSplines() {
            static BNM::Field<void*> _field = GetClass().GetField(O("conveyorSplines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsSetup() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSetup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetJobShelfOffsets() {
            static BNM::Field<void*> _field = GetClass().GetField(O("jobShelfOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetJobSplineTimes() {
            static BNM::Field<void*> _field = GetClass().GetField(O("jobSplineTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxItemCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxItemCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPieceTransforms() {
            static BNM::Field<void*> _field = GetClass().GetField(O("pieceTransforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShelfSlice() {
            static BNM::Field<int> _field = GetClass().GetField(O("shelfSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTable* GetTable() {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("table"));
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
        void SetConveyorSplines(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("conveyorSplines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsSetup(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSetup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJobShelfOffsets(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("jobShelfOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJobSplineTimes(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("jobSplineTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxItemCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxItemCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceTransforms(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("pieceTransforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfSlice(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shelfSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTable(::GorillaTagScripts::BuilderTable* value) {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("table"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddPieceToJob(::GlobalNamespace::BuilderPiece* piece, float splineTime, int conveyorID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPieceToJob"), {"piece", "splineTime", "conveyorID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, splineTime, conveyorID);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* ConstructJobHandle() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ConstructJobHandle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GorillaTagScripts_Builder::BuilderConveyorManager* get_instance() {
            static BNM::Method<::GorillaTagScripts_Builder::BuilderConveyorManager*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        int GetPieceCreateTimestamp(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPieceCreateTimestamp"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(piece);
        }
        float GetSplineProgressForPiece(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetSplineProgressForPiece"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(piece);
        }
        void OnClearTable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnClearTable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemovePieceFromJob(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePieceFromJob"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        void RemovePieceFromJobAtIndex(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePieceFromJobAtIndex"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        static void set_instance(::GorillaTagScripts_Builder::BuilderConveyorManager* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_instance"), {"value"});
            _m.Call(value);
        }
        void Setup(::GorillaTagScripts::BuilderTable* mytable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"mytable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mytable);
        }
        void UpdateManager() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateManager"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
