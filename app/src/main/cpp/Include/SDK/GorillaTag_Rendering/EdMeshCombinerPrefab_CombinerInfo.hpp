#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Rendering {
    struct EdMeshCombinerPrefab_CombinerInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Rendering", "EdMeshCombinerPrefab").GetInnerClass("CombinerInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsSkinnedMesh() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSkinnedMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLayer() {
            static BNM::Field<int> _field = GetClass().GetField(O("layer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMeshFilter() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("meshFilter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetRenderer() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("renderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSubMeshIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("subMeshIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::EdMeshCombinerModifierUVOffset* GetUvOffsetModifier() {
            static BNM::Field<::GlobalNamespace::EdMeshCombinerModifierUVOffset*> _field = GetClass().GetField(O("uvOffsetModifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsSkinnedMesh(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSkinnedMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLayer(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("layer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshFilter(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("meshFilter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("renderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubMeshIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("subMeshIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUvOffsetModifier(::GlobalNamespace::EdMeshCombinerModifierUVOffset* value) {
            static BNM::Field<::GlobalNamespace::EdMeshCombinerModifierUVOffset*> _field = GetClass().GetField(O("uvOffsetModifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
