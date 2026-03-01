#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ShaderHashId.hpp"

namespace GlobalNamespace {
    struct SIPosedTentacleArm : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIPosedTentacleArm");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetHasTentacle2() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasTentacle2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastAnchorPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_lastAnchorPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_lastPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetTentacleMat() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_tentacleMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetTentacleMat2() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_tentacleMat2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLengthFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("LengthFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTentacleAnchor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tentacleAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTentacleAnchor2() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tentacleAnchor2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShaderHashId GetTentacleEndHASH() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("tentacleEnd_HASH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShaderHashId GetTentacleEndDirHASH() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("tentacleEndDir_HASH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetTentacleRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("tentacleRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetTentacleRenderer2() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("tentacleRenderer2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShaderHashId GetTentacleRingOriginHASH() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("tentacleRingOrigin_HASH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetTentacleSharedMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("tentacleSharedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShaderHashId GetTentacleStartDirHASH() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("tentacleStartDir_HASH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHasTentacle2(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasTentacle2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastAnchorPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_lastAnchorPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_lastPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleMat(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_tentacleMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleMat2(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("_tentacleMat2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLengthFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("LengthFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleAnchor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tentacleAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleAnchor2(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tentacleAnchor2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleEndHASH(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("tentacleEnd_HASH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleEndDirHASH(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("tentacleEndDir_HASH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("tentacleRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleRenderer2(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("tentacleRenderer2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleRingOriginHASH(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("tentacleRingOrigin_HASH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleSharedMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("tentacleSharedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTentacleStartDirHASH(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("tentacleStartDir_HASH"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CanUpdateTentaclePose() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanUpdateTentaclePose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ConfigureFrom(::GlobalNamespace::SIGadgetTentacleArm* source, ::MeshRenderer* rend1, ::MeshRenderer* rend2, ::Transform* anchor1, ::Transform* anchor2) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConfigureFrom"), {"source", "rend1", "rend2", "anchor1", "anchor2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(source, rend1, rend2, anchor1, anchor2);
        }
        void EnsureMaterialsInitialized() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnsureMaterialsInitialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateTentacle(::Material* material, ::Transform* tentacle, ::Transform* anchor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTentacle"), {"material", "tentacle", "anchor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(material, tentacle, anchor);
        }
        void UpdateTentaclePose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTentaclePose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
