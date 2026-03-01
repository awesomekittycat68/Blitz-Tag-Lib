#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Rendering {
    struct EdMeshCombinerPrefab : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Rendering", "EdMeshCombinerPrefab");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint32_t _k_maxVertsForUInt16 = 65535;
        static constexpr uint32_t _k_maxVertsForUInt32 = 4294967295;
        static constexpr uint32_t _k_maxVertCount = 65535;
        ::GorillaTag_Rendering::EdMeshCombinedPrefabData* GetCombinedData() {
            static BNM::Field<::GorillaTag_Rendering::EdMeshCombinedPrefabData*> _field = GetClass().GetField(O("combinedData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCombinedData(::GorillaTag_Rendering::EdMeshCombinedPrefabData* value) {
            static BNM::Field<::GorillaTag_Rendering::EdMeshCombinedPrefabData*> _field = GetClass().GetField(O("combinedData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CombineMeshesRuntime(::GorillaTag_Rendering::EdMeshCombinerPrefab* combiner, bool undo, ::GorillaTag_Rendering::EdMeshCombinedPrefabData* combinedPrefabData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CombineMeshesRuntime"), {"combiner", "undo", "combinedPrefabData"});
            _m.Call(combiner, undo, combinedPrefabData);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void Special_MarkDoNotCombine(::Component* component) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Special_MarkDoNotCombine"), {"component"});
            _m.Call(component);
        }
    };
}
