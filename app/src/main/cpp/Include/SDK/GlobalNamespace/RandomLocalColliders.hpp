#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SRand.hpp"

namespace GlobalNamespace {
    struct RandomLocalColliders : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RandomLocalColliders");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::LightningDispatcherEvent* GetColliderFound() {
            static BNM::Field<::GlobalNamespace::LightningDispatcherEvent*> _field = GetClass().GetField(O("colliderFound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxRadias() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxRadias"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxseekFreq() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxseekFreq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinRadias() {
            static BNM::Field<float> _field = GetClass().GetField(O("minRadias"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinseekFreq() {
            static BNM::Field<float> _field = GetClass().GetField(O("minseekFreq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::SRand GetRand() {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("rand"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetRaycastHits() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("raycastHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSeekFreq() {
            static BNM::Field<float> _field = GetClass().GetField(O("seekFreq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeSinceSeek() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeSinceSeek"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetColliderFound(::GlobalNamespace::LightningDispatcherEvent* value) {
            static BNM::Field<::GlobalNamespace::LightningDispatcherEvent*> _field = GetClass().GetField(O("colliderFound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxRadias(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxRadias"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxseekFreq(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxseekFreq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinRadias(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minRadias"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinseekFreq(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minseekFreq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRand(::GlobalNamespace::SRand value) {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("rand"));
            _field.Set(value);
        }
        void SetRaycastHits(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("raycastHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeekFreq(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("seekFreq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeSinceSeek(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeSinceSeek"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void seek() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("seek"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
