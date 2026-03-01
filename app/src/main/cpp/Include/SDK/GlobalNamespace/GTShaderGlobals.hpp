#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ShaderHashId.hpp"

namespace GlobalNamespace {
    struct GTShaderGlobals : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTShaderGlobals");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetFrame() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Frame"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Time"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetWorldSpaceCameraPos() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_WorldSpaceCameraPos"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GlobalNamespace::ShaderHashId GetGTBlueNoiseTex() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_BlueNoiseTex"));
            return _field.Get();
        }
        static ::GlobalNamespace::ShaderHashId GetGTBlueNoiseTexWH() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_BlueNoiseTex_WH"));
            return _field.Get();
        }
        static ::GlobalNamespace::ShaderHashId GetGTIFrame() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_iFrame"));
            return _field.Get();
        }
        static ::GlobalNamespace::ShaderHashId GetGTPawnActiveCount() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_PawnActiveCount"));
            return _field.Get();
        }
        static ::GlobalNamespace::ShaderHashId GetGTPawnData() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_PawnData"));
            return _field.Get();
        }
        static ::GlobalNamespace::ShaderHashId GetGTTime() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_Time"));
            return _field.Get();
        }
        static ::GlobalNamespace::ShaderHashId GetGTWorldSpaceCameraPos() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_WorldSpaceCameraPos"));
            return _field.Get();
        }
        static int GetGActivePawns() {
            static BNM::Field<int> _field = GetClass().GetField(O("gActivePawns"));
            return _field.Get();
        }
        static ::Texture2D* GetGBlueNoiseTex() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("gBlueNoiseTex"));
            return _field.Get();
        }
        static ::BNM::Structures::Unity::Vector4 GetGBlueNoiseTexWH() {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("gBlueNoiseTexWH"));
            return _field.Get();
        }
        static int GetGIFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("gIFrame"));
            return _field.Get();
        }
        static ::Camera* GetGMainCamera() {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("gMainCamera"));
            return _field.Get();
        }
        static ::BNM::Structures::Unity::Vector3 GetGMainCameraWorldPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("gMainCameraWorldPos"));
            return _field.Get();
        }
        static ::Transform* GetGMainCameraXform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gMainCameraXform"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>* GetGPawnData() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("gPawnData"));
            return _field.Get();
        }
        static void* GetGStartTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("gStartTime"));
            return _field.Get();
        }
        static float GetGTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("gTime"));
            return _field.Get();
        }
        static void SetGTBlueNoiseTex(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_BlueNoiseTex"));
            _field.Set(value);
        }
        static void SetGTBlueNoiseTexWH(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_BlueNoiseTex_WH"));
            _field.Set(value);
        }
        static void SetGTIFrame(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_iFrame"));
            _field.Set(value);
        }
        static void SetGTPawnActiveCount(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_PawnActiveCount"));
            _field.Set(value);
        }
        static void SetGTPawnData(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_PawnData"));
            _field.Set(value);
        }
        static void SetGTTime(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_Time"));
            _field.Set(value);
        }
        static void SetGTWorldSpaceCameraPos(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_WorldSpaceCameraPos"));
            _field.Set(value);
        }
        static void SetGActivePawns(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("gActivePawns"));
            _field.Set(value);
        }
        static void SetGBlueNoiseTex(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("gBlueNoiseTex"));
            _field.Set(value);
        }
        static void SetGBlueNoiseTexWH(::BNM::Structures::Unity::Vector4 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("gBlueNoiseTexWH"));
            _field.Set(value);
        }
        static void SetGIFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("gIFrame"));
            _field.Set(value);
        }
        static void SetGMainCamera(::Camera* value) {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("gMainCamera"));
            _field.Set(value);
        }
        static void SetGMainCameraWorldPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("gMainCameraWorldPos"));
            _field.Set(value);
        }
        static void SetGMainCameraXform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gMainCameraXform"));
            _field.Set(value);
        }
        static void SetGPawnData(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("gPawnData"));
            _field.Set(value);
        }
        static void SetGStartTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("gStartTime"));
            _field.Set(value);
        }
        static void SetGTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gTime"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static int get_Frame() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Frame"));
            return _m.Call();
        }
        static float get_Time() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Time"));
            return _m.Call();
        }
        static ::BNM::Structures::Unity::Vector3 get_WorldSpaceCameraPos() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_WorldSpaceCameraPos"));
            return _m.Call();
        }
        static void InitBlueNoiseTex() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitBlueNoiseTex"));
            _m.Call();
        }
        static void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
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
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void UpdateCamera() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCamera"));
            _m.Call();
        }
        static void UpdateFrame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFrame"));
            _m.Call();
        }
        static void UpdatePawns() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePawns"));
            _m.Call();
        }
        static void UpdateTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTime"));
            _m.Call();
        }
    };
}
