#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "TransferrableObject.hpp"

namespace GlobalNamespace {
    struct CrankableToyCarHoldable : ::GlobalNamespace::TransferrableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrankableToyCarHoldable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::RubberDuckEvents* GetEvents() {
            static BNM::Field<::GlobalNamespace::RubberDuckEvents*> _field = GetClass().GetField(O("_events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetClickSound() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("clickSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferrableObjectHoldablePart_Crank* GetCrank() {
            static BNM::Field<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*> _field = GetClass().GetField(O("crank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrankAnglePerClick() {
            static BNM::Field<float> _field = GetClass().GetField(O("crankAnglePerClick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrankHapticDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("crankHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrankHapticStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("crankHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentCrankClickAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentCrankClickAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentCrankStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentCrankStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDeployablePart() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("deployablePart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrankableToyCarDeployed* GetDeployedCar() {
            static BNM::Field<::GlobalNamespace::CrankableToyCarDeployed*> _field = GetClass().GetField(O("deployedCar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDisabledWhileDeployed() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("disabledWhileDeployed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxClickPitch() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxClickPitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxCrankStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxCrankStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxLifetime() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLifetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinClickPitch() {
            static BNM::Field<float> _field = GetClass().GetField(O("minClickPitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinLifetime() {
            static BNM::Field<float> _field = GetClass().GetField(O("minLifetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetOverCrankedSound() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("overCrankedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOvercrankHapticDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("overcrankHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOvercrankHapticStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("overcrankHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEvents(::GlobalNamespace::RubberDuckEvents* value) {
            static BNM::Field<::GlobalNamespace::RubberDuckEvents*> _field = GetClass().GetField(O("_events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClickSound(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("clickSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrank(::GlobalNamespace::TransferrableObjectHoldablePart_Crank* value) {
            static BNM::Field<::GlobalNamespace::TransferrableObjectHoldablePart_Crank*> _field = GetClass().GetField(O("crank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrankAnglePerClick(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crankAnglePerClick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrankHapticDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crankHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrankHapticStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crankHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentCrankClickAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentCrankClickAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentCrankStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentCrankStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeployablePart(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("deployablePart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeployedCar(::GlobalNamespace::CrankableToyCarDeployed* value) {
            static BNM::Field<::GlobalNamespace::CrankableToyCarDeployed*> _field = GetClass().GetField(O("deployedCar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisabledWhileDeployed(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("disabledWhileDeployed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxClickPitch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxClickPitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxCrankStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxCrankStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxLifetime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLifetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinClickPitch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minClickPitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinLifetime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minLifetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverCrankedSound(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("overCrankedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOvercrankHapticDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("overcrankHapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOvercrankHapticStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("overcrankHapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DeployCarLocal(::BNM::Structures::Unity::Vector3 launchPos, ::BNM::Structures::Unity::Quaternion launchRot, ::BNM::Structures::Unity::Vector3 releaseVel, float lifetime, bool isRemote) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeployCarLocal"), {"launchPos", "launchRot", "releaseVel", "lifetime", "isRemote"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(launchPos, launchRot, releaseVel, lifetime, isRemote);
        }
        void LateUpdateReplicated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateReplicated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCarDeployed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCarDeployed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCarReturned() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCarReturned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCranked(float deltaAngle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCranked"), {"deltaAngle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(deltaAngle);
        }
        void OnDeployRPC(int sender, int receiver, ::BNM::Structures::Mono::Array<void*>* args, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDeployRPC"), {"sender", "receiver", "args", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sender, receiver, args, info);
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
        bool OnRelease(::GlobalNamespace::DropZone* zoneReleased, ::GameObject* releasingHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnRelease"), {"zoneReleased", "releasingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zoneReleased, releasingHand);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
