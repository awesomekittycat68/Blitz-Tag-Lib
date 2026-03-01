#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaSkin_SkinType.hpp"

namespace GlobalNamespace {
    struct GorillaSkin : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaSkin");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAllowHeadless() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_allowHeadless"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Material* GetBodyMaterial() {
            static BNM::Method<::Material*> _method = GetClass().GetMethod(O("get_bodyMaterial"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* GetBodyMesh() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_bodyMesh"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Material* GetChestMaterial() {
            static BNM::Method<::Material*> _method = GetClass().GetMethod(O("get_chestMaterial"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Material* GetScoreboardMaterial() {
            static BNM::Method<::Material*> _method = GetClass().GetMethod(O("get_scoreboardMaterial"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Material* GetBodyMaterial_f() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_bodyMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetBodyMesh_f() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_bodyMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetBodyRuntime() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_bodyRuntime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetChestMaterial_f() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_chestMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetChestRuntime() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_chestRuntime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableHeadless() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_disableHeadless"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::Material*>* GetGMaterialsWriteCache() {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("_g_materialsWriteCache"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::Material*>* GetGSharedMaterialsCache() {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("_g_sharedMaterialsCache"));
            return _field.Get();
        }
        ::Material* GetScoreboardMaterial_f() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_scoreboardMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetScoreRuntime() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_scoreRuntime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBodyMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_bodyMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_bodyMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyRuntime(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_bodyRuntime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChestMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_chestMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChestRuntime(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_chestRuntime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableHeadless(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_disableHeadless"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetGMaterialsWriteCache(::BNM::Structures::Mono::List<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("_g_materialsWriteCache"));
            _field.Set(value);
        }
        static void SetGSharedMaterialsCache(::BNM::Structures::Mono::List<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("_g_sharedMaterialsCache"));
            _field.Set(value);
        }
        void SetScoreboardMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_scoreboardMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreRuntime(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_scoreRuntime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplySkinToMannequin(::GameObject* mannequin, bool swapMesh) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplySkinToMannequin"), {"mannequin", "swapMesh"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mannequin, swapMesh);
        }
        static void ApplyToRig(::GlobalNamespace::VRRig* rig, ::GlobalNamespace::GorillaSkin* skin, ::GlobalNamespace::GorillaSkin_SkinType type) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyToRig"), {"rig", "skin", "type"});
            _m.Call(rig, skin, type);
        }
        static ::GlobalNamespace::GorillaSkin* CopyWithInstancedMaterials(::GlobalNamespace::GorillaSkin* basis) {
            static BNM::Method<::GlobalNamespace::GorillaSkin*> _m = GetClass().GetMethod(O("CopyWithInstancedMaterials"), {"basis"});
            return _m.Call(basis);
        }
        bool get_allowHeadless() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_allowHeadless"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Material* get_bodyMaterial() {
            static BNM::Method<::Material*> _m = GetClass().GetMethod(O("get_bodyMaterial"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* get_bodyMesh() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_bodyMesh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Material* get_chestMaterial() {
            static BNM::Method<::Material*> _m = GetClass().GetMethod(O("get_chestMaterial"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Material* get_scoreboardMaterial() {
            static BNM::Method<::Material*> _m = GetClass().GetMethod(O("get_scoreboardMaterial"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::GorillaSkin* GetActiveSkin(::GlobalNamespace::VRRig* rig, bool& useDefaultBodySkin) {
            static BNM::Method<::GlobalNamespace::GorillaSkin*> _m = GetClass().GetMethod(O("GetActiveSkin"), {"rig", "useDefaultBodySkin"});
            return _m.Call(rig, &useDefaultBodySkin);
        }
        static void ShowActiveSkin(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowActiveSkin"), {"rig"});
            _m.Call(rig);
        }
        static void ShowSkin(::GlobalNamespace::VRRig* rig, ::GlobalNamespace::GorillaSkin* skin, bool useDefaultBodySkin) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowSkin"), {"rig", "skin", "useDefaultBodySkin"});
            _m.Call(rig, skin, useDefaultBodySkin);
        }
    };
}
