#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MaterialCycler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MaterialCycler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetCrDirty() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("crDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MaterialCyclerNetworked* GetMaterialCyclerNetworked() {
            static BNM::Field<::GlobalNamespace::MaterialCyclerNetworked*> _field = GetClass().GetField(O("materialCyclerNetworked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::MaterialCycler_MaterialPack*>* GetMaterials() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MaterialCycler_MaterialPack*>*> _field = GetClass().GetField(O("materials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Renderer*>* GetRenderers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Renderer*>*> _field = GetClass().GetField(O("renderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetReset() {
            static BNM::Field<void*> _field = GetClass().GetField(O("reset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSetColorTarget() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("setColorTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSynchTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("synchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCrDirty(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("crDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterialCyclerNetworked(::GlobalNamespace::MaterialCyclerNetworked* value) {
            static BNM::Field<::GlobalNamespace::MaterialCyclerNetworked*> _field = GetClass().GetField(O("materialCyclerNetworked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterials(::BNM::Structures::Mono::Array<::GlobalNamespace::MaterialCycler_MaterialPack*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MaterialCycler_MaterialPack*>*> _field = GetClass().GetField(O("materials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderers(::BNM::Structures::Mono::Array<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Renderer*>*> _field = GetClass().GetField(O("renderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReset(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("reset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetColorTarget(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("setColorTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSynchTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("synchTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP1 = void*>
        void MaterialCyclerNetworked_OnSynchronize(int idx, TP1 rgb) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MaterialCyclerNetworked_OnSynchronize"), {"idx", "rgb"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(idx, rgb);
        }
        void NextMaterial() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NextMaterial"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetColor(::BNM::Structures::Unity::Vector3 rgb) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetColor"), {"rgb"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rgb);
        }
        void SetDirty() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDirty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetMaterials_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMaterials"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void synchronize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("synchronize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* timeOutDirty() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("timeOutDirty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
