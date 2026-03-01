#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonkeFX_ElementsRange.hpp"

namespace GorillaTag_MonkeFX {
    struct MonkeFX : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.MonkeFX", "MonkeFX");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float _k16BitFactor = 65536.0f;
        bool GetHasInstance() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHasInstance(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_hasInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaTag_MonkeFX::MonkeFX* GetInstance() {
            static BNM::Method<::GorillaTag_MonkeFX::MonkeFX*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GorillaTag_MonkeFX::MonkeFX* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetBoneNames() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_boneNames"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::Transform*>* GetBones() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("_bones"));
            return _field.Get();
        }
        static ::GorillaTag::GTLogErrorLimiter* GetErrorLogNullBone() {
            static BNM::Field<::GorillaTag::GTLogErrorLimiter*> _field = GetClass().GetField(O("_errorLog_nullBone"));
            return _field.Get();
        }
        static ::GorillaTag::GTLogErrorLimiter* GetErrorLogNullMainSkin() {
            static BNM::Field<::GorillaTag::GTLogErrorLimiter*> _field = GetClass().GetField(O("_errorLog_nullMainSkin"));
            return _field.Get();
        }
        static ::GorillaTag::GTLogErrorLimiter* GetErrorLogNullVRRigFromVRRigCache() {
            static BNM::Field<::GorillaTag::GTLogErrorLimiter*> _field = GetClass().GetField(O("_errorLog_nullVRRigFromVRRigCache"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GorillaTag_MonkeFX::MonkeFXSettingsSO*>*>* GetMeshIdToSettingsUsers() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::List<::GorillaTag_MonkeFX::MonkeFXSettingsSO*>*>*> _field = GetClass().GetField(O("_meshId_to_settingsUsers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::GlobalNamespace::VRRig*>* GetRigs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("_rigs"));
            return _field.Get();
        }
        static int GetRigsHash() {
            static BNM::Field<int> _field = GetClass().GetField(O("_rigsHash"));
            return _field.Get();
        }
        void* GetSettingsSOs() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_settingsSOs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTag_MonkeFX::MonkeFX_ElementsRange>* GetSrcMeshIdToElemRange() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_MonkeFX::MonkeFX_ElementsRange>*> _field = GetClass().GetField(O("_srcMeshId_to_elemRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetSrcMeshIdToSourceMesh() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_srcMeshId_to_sourceMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* GetSrcMeshInstToMeshId() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("_srcMeshInst_to_meshId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetBones(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("_bones"));
            _field.Set(value);
        }
        static void SetErrorLogNullMainSkin(::GorillaTag::GTLogErrorLimiter* value) {
            static BNM::Field<::GorillaTag::GTLogErrorLimiter*> _field = GetClass().GetField(O("_errorLog_nullMainSkin"));
            _field.Set(value);
        }
        static void SetRigs(::BNM::Structures::Mono::Array<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("_rigs"));
            _field.Set(value);
        }
        static void SetRigsHash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_rigsHash"));
            _field.Set(value);
        }
        static void EnsureInstance() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnsureInstance"));
            _m.Call();
        }
        static bool get_hasInstance() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasInstance"));
            return _m.Call();
        }
        static ::GorillaTag_MonkeFX::MonkeFX* get_instance() {
            static BNM::Method<::GorillaTag_MonkeFX::MonkeFX*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        static float GetScaleToFitInBounds(::BNM::IL2CPP::Il2CppObject* mesh) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetScaleToFitInBounds"), {"mesh"});
            return _m.Call(mesh);
        }
        static void InitBonesArray() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitBonesArray"));
            _m.Call();
        }
        static void OnAfterFirstSceneLoaded() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAfterFirstSceneLoaded"));
            _m.Call();
        }
        static float Pack0To1Floats(float x, float y) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Pack0To1Floats"), {"x", "y"});
            return _m.Call(x, y);
        }
        static void PauseTick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PauseTick"));
            _m.Call();
        }
        static void Register(::GorillaTag_MonkeFX::MonkeFXSettingsSO* settingsSO) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"settingsSO"});
            _m.Call(settingsSO);
        }
        static void ResumeTick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResumeTick"));
            _m.Call();
        }
        static void set_hasInstance(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_hasInstance"), {"value"});
            _m.Call(value);
        }
        static void set_instance(::GorillaTag_MonkeFX::MonkeFX* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_instance"), {"value"});
            _m.Call(value);
        }
        static void UpdateBone() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBone"));
            _m.Call();
        }
        static void UpdateBones() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateBones"));
            _m.Call();
        }
    };
}
