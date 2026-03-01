#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ShaderHashId.hpp"

namespace GlobalNamespace {
    struct GTShaderVolume : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTShaderVolume");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MAX_VOLUMES = 16;
        static ::GlobalNamespace::ShaderHashId GetGTShaderVolumes() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_ShaderVolumes"));
            return _field.Get();
        }
        static ::GlobalNamespace::ShaderHashId GetGTShaderVolumesActive() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_ShaderVolumesActive"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GTShaderVolume*>* GetGVolumes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GTShaderVolume*>*> _field = GetClass().GetField(O("gVolumes"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>* GetShaderData() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("ShaderData"));
            return _field.Get();
        }
        static void SetGTShaderVolumes(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_ShaderVolumes"));
            _field.Set(value);
        }
        static void SetGTShaderVolumesActive(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GT_ShaderVolumesActive"));
            _field.Set(value);
        }
        static void SetGVolumes(::BNM::Structures::Mono::List<::GlobalNamespace::GTShaderVolume*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GTShaderVolume*>*> _field = GetClass().GetField(O("gVolumes"));
            _field.Set(value);
        }
        static void SetShaderData(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("ShaderData"));
            _field.Set(value);
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
        static void SyncVolumeData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SyncVolumeData"));
            _m.Call();
        }
    };
}
