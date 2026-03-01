#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GreyZoneSummoner : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GreyZoneSummoner");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetSummonerMaxDistance() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_SummonerMaxDistance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetSummoningFocusPoint() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_SummoningFocusPoint"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::SphereCollider* GetAreaTriggerCollider() {
            static BNM::Field<::SphereCollider*> _field = GetClass().GetField(O("areaTriggerCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TriggerEventNotifier* GetAreaTriggerNotifier() {
            static BNM::Field<::GlobalNamespace::TriggerEventNotifier*> _field = GetClass().GetField(O("areaTriggerNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCandlesParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("candlesParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCandlesTimeline() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("candlesTimeline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetGreyZoneActivationButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("greyZoneActivationButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaPressableButton*>* GetGreyZoneGravityFactorButtons() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaPressableButton*>*> _field = GetClass().GetField(O("greyZoneGravityFactorButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GreyZoneManager* GetGreyZoneManager() {
            static BNM::Field<::GlobalNamespace::GreyZoneManager*> _field = GetClass().GetField(O("greyZoneManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSummoningFocusPoint_f() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("summoningFocusPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::AudioSource*>* GetSummoningTones() {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioSource*>*> _field = GetClass().GetField(O("summoningTones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSummoningTonesFadeOverlap() {
            static BNM::Field<float> _field = GetClass().GetField(O("summoningTonesFadeOverlap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSummoningTonesFadeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("summoningTonesFadeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSummoningTonesMaxVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("summoningTonesMaxVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAreaTriggerCollider(::SphereCollider* value) {
            static BNM::Field<::SphereCollider*> _field = GetClass().GetField(O("areaTriggerCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAreaTriggerNotifier(::GlobalNamespace::TriggerEventNotifier* value) {
            static BNM::Field<::GlobalNamespace::TriggerEventNotifier*> _field = GetClass().GetField(O("areaTriggerNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCandlesParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("candlesParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCandlesTimeline(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("candlesTimeline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreyZoneActivationButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("greyZoneActivationButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreyZoneGravityFactorButtons(::BNM::Structures::Mono::List<::GlobalNamespace::GorillaPressableButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaPressableButton*>*> _field = GetClass().GetField(O("greyZoneGravityFactorButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreyZoneManager(::GlobalNamespace::GreyZoneManager* value) {
            static BNM::Field<::GlobalNamespace::GreyZoneManager*> _field = GetClass().GetField(O("greyZoneManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSummoningFocusPoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("summoningFocusPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSummoningTones(::BNM::Structures::Mono::List<::AudioSource*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioSource*>*> _field = GetClass().GetField(O("summoningTones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSummoningTonesFadeOverlap(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("summoningTonesFadeOverlap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSummoningTonesFadeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("summoningTonesFadeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSummoningTonesMaxVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("summoningTonesMaxVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ColliderEnteredArea(::GlobalNamespace::TriggerEventNotifier* notifier, ::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ColliderEnteredArea"), {"notifier", "other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(notifier, other);
        }
        void ColliderExitedArea(::GlobalNamespace::TriggerEventNotifier* notifier, ::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ColliderExitedArea"), {"notifier", "other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(notifier, other);
        }
        ::BNM::Coroutine::IEnumerator* FadeOutSummoningTones() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("FadeOutSummoningTones"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_SummonerMaxDistance() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_SummonerMaxDistance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_SummoningFocusPoint() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_SummoningFocusPoint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void OnGreyZoneActivated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGreyZoneActivated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateProgressFeedback(bool greyZoneAvailable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateProgressFeedback"), {"greyZoneAvailable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(greyZoneAvailable);
        }
    };
}
