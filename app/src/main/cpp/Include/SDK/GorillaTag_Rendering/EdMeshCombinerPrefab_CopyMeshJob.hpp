#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GTVertexDataStream0.hpp"
#include "../GlobalNamespace/GTVertexDataStream1.hpp"

namespace GorillaTag_Rendering {
    struct EdMeshCombinerPrefab_CopyMeshJob : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Rendering", "EdMeshCombinerPrefab").GetInnerClass("CopyMeshJob");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetAtlasSlices() {
            static BNM::Field<void*> _field = GetClass().GetField(O("atlasSlices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetBaseColors() {
            static BNM::Field<void*> _field = GetClass().GetField(O("baseColors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetDst0() {
            static BNM::Field<void*> _field = GetClass().GetField(O("dst0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetDst1() {
            static BNM::Field<void*> _field = GetClass().GetField(O("dst1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetIdxDst16() {
            static BNM::Field<void*> _field = GetClass().GetField(O("idxDst16"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetIdxDst32() {
            static BNM::Field<void*> _field = GetClass().GetField(O("idxDst32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsCandleFlame() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isCandleFlame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLightmapScaleOffsets() {
            static BNM::Field<void*> _field = GetClass().GetField(O("lightmapScaleOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMeshDataArray() {
            static BNM::Field<void*> _field = GetClass().GetField(O("meshDataArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetRandSeed() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("randSeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSourceSubmeshIndices() {
            static BNM::Field<void*> _field = GetClass().GetField(O("sourceSubmeshIndices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSourceTransforms() {
            static BNM::Field<void*> _field = GetClass().GetField(O("sourceTransforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUse32BitIndices() {
            static BNM::Field<bool> _field = GetClass().GetField(O("use32BitIndices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetUvModifiersMinMax() {
            static BNM::Field<void*> _field = GetClass().GetField(O("uvModifiersMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAtlasSlices(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("atlasSlices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseColors(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("baseColors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDst0(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("dst0"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDst1(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("dst1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdxDst16(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("idxDst16"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdxDst32(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("idxDst32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsCandleFlame(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isCandleFlame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLightmapScaleOffsets(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("lightmapScaleOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshDataArray(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("meshDataArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandSeed(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("randSeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSourceSubmeshIndices(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("sourceSubmeshIndices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSourceTransforms(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("sourceTransforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUse32BitIndices(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("use32BitIndices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUvModifiersMinMax(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("uvModifiersMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Execute() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
