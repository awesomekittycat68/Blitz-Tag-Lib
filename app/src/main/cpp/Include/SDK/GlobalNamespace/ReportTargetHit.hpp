#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SRand.hpp"

namespace GlobalNamespace {
    struct ReportTargetHit : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ReportTargetHit");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::LightningDispatcherEvent* GetColliderFound() {
            static BNM::Field<::GlobalNamespace::LightningDispatcherEvent*> _field = GetClass().GetField(O("colliderFound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxseekFreq() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxseekFreq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinseekFreq() {
            static BNM::Field<float> _field = GetClass().GetField(O("minseekFreq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::NetSynchrony::RandomDispatcher* GetNsRand() {
            static BNM::Field<::NetSynchrony::RandomDispatcher*> _field = GetClass().GetField(O("nsRand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::SRand GetRand() {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("rand"));
            return _field.Get();
        }
        float GetSeekFreq() {
            static BNM::Field<float> _field = GetClass().GetField(O("seekFreq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetTargets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("targets"));
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
        void SetMaxseekFreq(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxseekFreq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinseekFreq(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minseekFreq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNsRand(::NetSynchrony::RandomDispatcher* value) {
            static BNM::Field<::NetSynchrony::RandomDispatcher*> _field = GetClass().GetField(O("nsRand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRand(::GlobalNamespace::SRand value) {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("rand"));
            _field.Set(value);
        }
        void SetSeekFreq(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("seekFreq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargets(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("targets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeSinceSeek(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeSinceSeek"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void NsRand_Dispatch(::NetSynchrony::RandomDispatcher* randomDispatcher) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NsRand_Dispatch"), {"randomDispatcher"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(randomDispatcher);
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
