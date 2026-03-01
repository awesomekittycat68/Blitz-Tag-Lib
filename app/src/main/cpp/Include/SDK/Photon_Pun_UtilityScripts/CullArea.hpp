#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun_UtilityScripts {
    struct CullArea : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "CullArea");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MAX_NUMBER_OF_ALLOWED_CELLS = 250;
        static constexpr int MAX_NUMBER_OF_SUBDIVISIONS = 3;
        int GetCellCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CellCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCellCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CellCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Pun_UtilityScripts::CellTree* GetCellTree() {
            static BNM::Method<::Photon_Pun_UtilityScripts::CellTree*> _method = GetClass().GetMethod(O("get_CellTree"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCellTree(::Photon_Pun_UtilityScripts::CellTree* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CellTree"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GameObject*>* GetMap() {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<int, ::GameObject*>*> _method = GetClass().GetMethod(O("get_Map"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMap(::BNM::Structures::Mono::Dictionary<int, ::GameObject*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Map"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Vector2 GetCenter() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("Center"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetFIRSTGROUPID() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("FIRST_GROUP_ID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetIdCounter() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("idCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumberOfSubdivisions() {
            static BNM::Field<int> _field = GetClass().GetField(O("NumberOfSubdivisions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRecreateCellHierarchy() {
            static BNM::Field<bool> _field = GetClass().GetField(O("RecreateCellHierarchy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetSize() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("Size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetSUBDIVISIONFIRSTLEVELORDER() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("SUBDIVISION_FIRST_LEVEL_ORDER"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetSUBDIVISIONSECONDLEVELORDER() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("SUBDIVISION_SECOND_LEVEL_ORDER"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetSUBDIVISIONTHIRDLEVELORDER() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("SUBDIVISION_THIRD_LEVEL_ORDER"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector2>* GetSubdivisions() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector2>*> _field = GetClass().GetField(O("Subdivisions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetYIsUpAxis() {
            static BNM::Field<bool> _field = GetClass().GetField(O("YIsUpAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCenter(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("Center"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdCounter(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("idCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumberOfSubdivisions(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("NumberOfSubdivisions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecreateCellHierarchy(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("RecreateCellHierarchy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSize(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("Size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubdivisions(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector2>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector2>*> _field = GetClass().GetField(O("Subdivisions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetYIsUpAxis(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("YIsUpAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreateCellHierarchy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateCellHierarchy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreateChildCells(::Photon_Pun_UtilityScripts::CellTreeNode* parent, int cellLevelInHierarchy) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateChildCells"), {"parent", "cellLevelInHierarchy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(parent, cellLevelInHierarchy);
        }
        void DrawCells() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawCells"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_CellCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CellCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Pun_UtilityScripts::CellTree* get_CellTree() {
            static BNM::Method<::Photon_Pun_UtilityScripts::CellTree*> _m = GetClass().GetMethod(O("get_CellTree"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GameObject*>* get_Map() {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<int, ::GameObject*>*> _m = GetClass().GetMethod(O("get_Map"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<uint8_t>* GetActiveCells(::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<::BNM::Structures::Mono::List<uint8_t>*> _m = GetClass().GetMethod(O("GetActiveCells"), {"position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(position);
        }
        bool IsCellCountAllowed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsCellCountAllowed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDrawGizmos() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDrawGizmos"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_CellCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CellCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CellTree(::Photon_Pun_UtilityScripts::CellTree* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CellTree"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Map(::BNM::Structures::Mono::Dictionary<int, ::GameObject*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Map"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
