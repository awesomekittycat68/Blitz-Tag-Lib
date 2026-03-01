#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ParticleSystemEventShortcut : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ParticleSystemEventShortcut");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPoolExists() {
            static BNM::Field<bool> _field = GetClass().GetField(O("poolExists"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetPs() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("ps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetShape() {
            static BNM::Field<void*> _field = GetClass().GetField(O("shape"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPoolExists(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("poolExists"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPs(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("ps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShape(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("shape"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ClearAndPlay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearAndPlay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitIfNeeded() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitIfNeeded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnParticleSystemStopped() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnParticleSystemStopped"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayFromMesh(::MeshRenderer* mesh) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayFromMesh"), {"mesh"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mesh);
        }
        void PlayFromSkin(::SkinnedMeshRenderer* skin) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayFromSkin"), {"skin"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(skin);
        }
        void ReturnToPool() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnToPool"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopAndClear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopAndClear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
