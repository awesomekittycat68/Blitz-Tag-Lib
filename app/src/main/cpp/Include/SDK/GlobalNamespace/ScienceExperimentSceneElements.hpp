#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ScienceExperimentSceneElements_DisableByLiquidData.hpp"

namespace GlobalNamespace {
    struct ScienceExperimentSceneElements : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ScienceExperimentSceneElements");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::ScienceExperimentSceneElements_DisableByLiquidData>* GetDisableByLiquidList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ScienceExperimentSceneElements_DisableByLiquidData>*> _field = GetClass().GetField(O("disableByLiquidList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetSodaEruptionParticles() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("sodaEruptionParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetSodaFizzParticles() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("sodaFizzParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDisableByLiquidList(::BNM::Structures::Mono::List<::GlobalNamespace::ScienceExperimentSceneElements_DisableByLiquidData>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ScienceExperimentSceneElements_DisableByLiquidData>*> _field = GetClass().GetField(O("disableByLiquidList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSodaEruptionParticles(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("sodaEruptionParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSodaFizzParticles(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("sodaFizzParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
