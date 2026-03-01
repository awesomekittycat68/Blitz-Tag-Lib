#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ParticleEffect : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ParticleEffect");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int64_t GetEffectID() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_effectID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsPlaying() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isPlaying"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int64_t GetEffectID_f() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("_effectID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ParticleEffectsPool* GetPool() {
            static BNM::Field<::GlobalNamespace::ParticleEffectsPool*> _field = GetClass().GetField(O("pool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPoolIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("poolIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("system"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEffectID(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("_effectID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPool(::GlobalNamespace::ParticleEffectsPool* value) {
            static BNM::Field<::GlobalNamespace::ParticleEffectsPool*> _field = GetClass().GetField(O("pool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPoolIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("poolIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("system"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int64_t get_effectID() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_effectID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isPlaying() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnParticleSystemStopped() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnParticleSystemStopped"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Play() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Play"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Stop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Stop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
