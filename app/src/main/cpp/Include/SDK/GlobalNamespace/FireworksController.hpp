#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FireworksController_ExplosionEvent.hpp"
#include "SRand.hpp"
#include "TimeSince.hpp"

namespace GlobalNamespace {
    struct FireworksController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FireworksController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::FireworksController_ExplosionEvent>* GetExplosionQueue() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::FireworksController_ExplosionEvent>*> _field = GetClass().GetField(O("_explosionQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TimeEvent* GetFireworksEvent() {
            static BNM::Field<::GlobalNamespace::TimeEvent*> _field = GetClass().GetField(O("_fireworksEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetLastBurst() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("_lastBurst"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetLastWhistle() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("_lastWhistle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::Firework*>* GetLaunchOrder() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::Firework*>*> _field = GetClass().GetField(O("_launchOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SRand GetRnd() {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("_rnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TimeSince GetTimeSinceLastWhistle() {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_timeSinceLastWhistle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetBursts() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("bursts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::Firework*>* GetFireworks() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::Firework*>*> _field = GetClass().GetField(O("fireworks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinWhistleDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("minWhistleDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetRoundLength() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("roundLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetRoundNumVolleys() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("roundNumVolleys"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSeed() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("seed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetWhistles() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("whistles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWhistleVolumeMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("whistleVolumeMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWhistleVolumeMin() {
            static BNM::Field<float> _field = GetClass().GetField(O("whistleVolumeMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetExplosionQueue(::BNM::Structures::Mono::Array<::GlobalNamespace::FireworksController_ExplosionEvent>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::FireworksController_ExplosionEvent>*> _field = GetClass().GetField(O("_explosionQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireworksEvent(::GlobalNamespace::TimeEvent* value) {
            static BNM::Field<::GlobalNamespace::TimeEvent*> _field = GetClass().GetField(O("_fireworksEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastBurst(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("_lastBurst"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastWhistle(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("_lastWhistle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchOrder(::BNM::Structures::Mono::Array<::GlobalNamespace::Firework*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::Firework*>*> _field = GetClass().GetField(O("_launchOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRnd(::GlobalNamespace::SRand value) {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("_rnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeSinceLastWhistle(::GlobalNamespace::TimeSince value) {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_timeSinceLastWhistle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBursts(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("bursts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireworks(::BNM::Structures::Mono::Array<::GlobalNamespace::Firework*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::Firework*>*> _field = GetClass().GetField(O("fireworks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinWhistleDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minWhistleDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoundLength(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("roundLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoundNumVolleys(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("roundNumVolleys"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeed(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("seed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhistles(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("whistles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhistleVolumeMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("whistleVolumeMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhistleVolumeMin(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("whistleVolumeMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DoExplosion(::GlobalNamespace::FireworksController_ExplosionEvent ev) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoExplosion"), {"ev"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ev);
        }
        void Launch(::GlobalNamespace::Firework* fw) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Launch"), {"fw"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fw);
        }
        void LaunchVolley() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LaunchVolley"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LaunchVolleyRound() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LaunchVolleyRound"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PostExplosionEvent(::GlobalNamespace::FireworksController_ExplosionEvent ev) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostExplosionEvent"), {"ev"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ev);
        }
        void ProcessEvents() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessEvents"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RenderGizmo(::GlobalNamespace::Firework* fw, ::BNM::Structures::Unity::Color c) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RenderGizmo"), {"fw", "c"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fw, c);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
