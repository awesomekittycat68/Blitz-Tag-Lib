#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRAbilityBase.hpp"

namespace GlobalNamespace {
    struct GRAbilityFlashed : ::GlobalNamespace::GRAbilityBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRAbilityFlashed");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        double GetBehaviorEndTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("behaviorEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFlashAnimationIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("flashAnimationIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::AnimationData*>* GetFlashAnimations() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AnimationData*>*> _field = GetClass().GetField(O("flashAnimations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStunTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("stunTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBehaviorEndTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("behaviorEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlashAnimationIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("flashAnimationIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlashAnimations(::BNM::Structures::Mono::List<::GlobalNamespace::AnimationData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AnimationData*>*> _field = GetClass().GetField(O("flashAnimations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStunTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stunTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool IsDone() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsDone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnStop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetStunTime_1(float time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStunTime"), {"time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(time);
        }
        void Setup(::GlobalNamespace::GameAgent* agent, ::BNM::IL2CPP::Il2CppObject* anim, ::AudioSource* audioSource, ::Transform* root, ::Transform* head, ::GlobalNamespace::GRSenseLineOfSight* lineOfSight) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"agent", "anim", "audioSource", "root", "head", "lineOfSight"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(agent, anim, audioSource, root, head, lineOfSight);
        }
    };
}
