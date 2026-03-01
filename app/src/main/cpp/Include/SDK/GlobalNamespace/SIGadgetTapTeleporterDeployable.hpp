#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SIGadgetTapTeleporterDeployable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetTapTeleporterDeployable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SIGadgetTapTeleporter* GetPad() {
            static BNM::Field<::GlobalNamespace::SIGadgetTapTeleporter*> _field = GetClass().GetField(O("_pad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetActivateDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("activateDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetActivateTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("activateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDestination() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("destination"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetIdentifierColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("identifierColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Renderer*>* GetIdentifierColorDisplay() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Renderer*>*> _field = GetClass().GetField(O("identifierColorDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLinkDirectionIndicator() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("linkDirectionIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetTapTeleporterDeployable* GetLinkedPoint() {
            static BNM::Field<::GlobalNamespace::SIGadgetTapTeleporterDeployable*> _field = GetClass().GetField(O("linkedPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMaintainVelocity() {
            static BNM::Field<bool> _field = GetClass().GetField(O("maintainVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRequiresSurfaceTapSinceTeleport() {
            static BNM::Field<bool> _field = GetClass().GetField(O("requiresSurfaceTapSinceTeleport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static float GetReteleportDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("reteleportDelay"));
            return _field.Get();
        }
        static float GetReteleportTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("reteleportTime"));
            return _field.Get();
        }
        ::Material* GetSelectionColor1() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("selectionColor1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetSelectionColor2() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("selectionColor2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetSelectionColorDisplay() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("selectionColorDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSelectionId() {
            static BNM::Field<int> _field = GetClass().GetField(O("selectionId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGameEntityStealthVisibility* GetStealth() {
            static BNM::Field<::GlobalNamespace::SIGameEntityStealthVisibility*> _field = GetClass().GetField(O("stealth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTeleportCheckDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("teleportCheckDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetTeleportSoundbank() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("teleportSoundbank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeToDie() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeToDie"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPad(::GlobalNamespace::SIGadgetTapTeleporter* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetTapTeleporter*> _field = GetClass().GetField(O("_pad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivateDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("activateDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivateTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("activateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestination(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("destination"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdentifierColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("identifierColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdentifierColorDisplay(::BNM::Structures::Mono::Array<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Renderer*>*> _field = GetClass().GetField(O("identifierColorDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinkDirectionIndicator(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("linkDirectionIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinkedPoint(::GlobalNamespace::SIGadgetTapTeleporterDeployable* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetTapTeleporterDeployable*> _field = GetClass().GetField(O("linkedPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaintainVelocity(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("maintainVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequiresSurfaceTapSinceTeleport(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("requiresSurfaceTapSinceTeleport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetReteleportDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("reteleportDelay"));
            _field.Set(value);
        }
        static void SetReteleportTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("reteleportTime"));
            _field.Set(value);
        }
        void SetSelectionColor1(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("selectionColor1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectionColor2(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("selectionColor2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectionColorDisplay(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("selectionColorDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectionId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("selectionId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStealth(::GlobalNamespace::SIGameEntityStealthVisibility* value) {
            static BNM::Field<::GlobalNamespace::SIGameEntityStealthVisibility*> _field = GetClass().GetField(O("stealth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportCheckDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("teleportCheckDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportSoundbank(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("teleportSoundbank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeToDie(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeToDie"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearLink() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearLink"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityStateChange(int64_t prevState, int64_t newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityStateChange"), {"prevState", "newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prevState, newState);
        }
        void ResetRetriggerBlock() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetRetriggerBlock"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetLink(::GlobalNamespace::SIGadgetTapTeleporter* newPad, ::GlobalNamespace::SIGadgetTapTeleporterDeployable* newLink) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLink"), {"newPad", "newLink"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPad, newLink);
        }
        void TeleportToLinked() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TeleportToLinked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TryTeleport() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryTeleport"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateLinkDisplay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateLinkDisplay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateSelectionDisplay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSelectionDisplay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
