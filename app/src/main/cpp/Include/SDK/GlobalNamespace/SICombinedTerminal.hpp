#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EKioskAnimState.hpp"
#include "SICombinedTerminal_TerminalSubFunction.hpp"
#include "SITouchscreenButton_SITouchscreenButtonType.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct SICombinedTerminal : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SICombinedTerminal");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetActivePage() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ActivePage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsAuthority() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsAuthority"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::SuperInfectionManager* GetSIManager() {
            static BNM::Method<::GlobalNamespace::SuperInfectionManager*> _method = GetClass().GetMethod(O("get_SIManager"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetActivePage_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("_activePage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIPlayer* GetActivePlayer() {
            static BNM::Field<::GlobalNamespace::SIPlayer*> _field = GetClass().GetField(O("activePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetActiveUserBounds() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("activeUserBounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetDispenser* GetDispenser() {
            static BNM::Field<::GlobalNamespace::SIGadgetDispenser*> _field = GetClass().GetField(O("dispenser"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFoldupDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("foldupDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFoldupTimeStart() {
            static BNM::Field<float> _field = GetClass().GetField(O("foldupTimeStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsOccupied() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOccupied"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsOccupiedByActivePlayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOccupiedByActivePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsOccupiedByLocalPlayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOccupiedByLocalPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GTAnimator*>* GetMGtAnimators() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTAnimator*>*> _field = GetClass().GetField(O("m_gtAnimators"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetOnePointTwoText() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("onePointTwoText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIResourceCollection* GetResourceCollection() {
            static BNM::Field<::GlobalNamespace::SIResourceCollection*> _field = GetClass().GetField(O("resourceCollection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("rigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::EKioskAnimState GetState() {
            static BNM::Field<::GlobalNamespace::EKioskAnimState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SuperInfection* GetSuperInfection() {
            static BNM::Field<::GlobalNamespace::SuperInfection*> _field = GetClass().GetField(O("superInfection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITechTreeStation* GetTechTree() {
            static BNM::Field<::GlobalNamespace::SITechTreeStation*> _field = GetClass().GetField(O("techTree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasOccupied() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasOccupied"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetWrongPlayerBuzz() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("wrongPlayerBuzz"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetZeroZeroImage() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("zeroZeroImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivePage(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_activePage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivePlayer(::GlobalNamespace::SIPlayer* value) {
            static BNM::Field<::GlobalNamespace::SIPlayer*> _field = GetClass().GetField(O("activePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveUserBounds(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("activeUserBounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDispenser(::GlobalNamespace::SIGadgetDispenser* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetDispenser*> _field = GetClass().GetField(O("dispenser"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFoldupDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("foldupDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFoldupTimeStart(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("foldupTimeStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsOccupied(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOccupied"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsOccupiedByActivePlayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOccupiedByActivePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsOccupiedByLocalPlayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOccupiedByLocalPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMGtAnimators(::BNM::Structures::Mono::Array<::GlobalNamespace::GTAnimator*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTAnimator*>*> _field = GetClass().GetField(O("m_gtAnimators"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnePointTwoText(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("onePointTwoText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourceCollection(::GlobalNamespace::SIResourceCollection* value) {
            static BNM::Field<::GlobalNamespace::SIResourceCollection*> _field = GetClass().GetField(O("resourceCollection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("rigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::EKioskAnimState value) {
            static BNM::Field<::GlobalNamespace::EKioskAnimState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuperInfection(::GlobalNamespace::SuperInfection* value) {
            static BNM::Field<::GlobalNamespace::SuperInfection*> _field = GetClass().GetField(O("superInfection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTechTree(::GlobalNamespace::SITechTreeStation* value) {
            static BNM::Field<::GlobalNamespace::SITechTreeStation*> _field = GetClass().GetField(O("techTree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasOccupied(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasOccupied"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWrongPlayerBuzz(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("wrongPlayerBuzz"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZeroZeroImage(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("zeroZeroImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AnimQueueState(::GlobalNamespace::EKioskAnimState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AnimQueueState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DeserializeZoneData(::BNM::IL2CPP::Il2CppObject* reader) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeZoneData"), {"reader"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reader);
        }
        int get_ActivePage() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ActivePage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsAuthority() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::SuperInfectionManager* get_SIManager() {
            static BNM::Method<::GlobalNamespace::SuperInfectionManager*> _m = GetClass().GetMethod(O("get_SIManager"));
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
        void PlayerHandScanned(int actorNr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerHandScanned"), {"actorNr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNr);
        }
        void PlayWrongPlayerBuzz(::Transform* xForm) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayWrongPlayerBuzz"), {"xForm"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(xForm);
        }
        void ReadDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SerializeZoneData(::BNM::IL2CPP::Il2CppObject* writer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeZoneData"), {"writer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer);
        }
        void SetActivePage_1(int pageId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetActivePage"), {"pageId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pageId);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TouchscreenButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType buttonType, int data, int actorNr, ::GlobalNamespace::SICombinedTerminal_TerminalSubFunction subFunction) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TouchscreenButtonPressed"), {"buttonType", "data", "actorNr", "subFunction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonType, data, actorNr, subFunction);
        }
        void WriteDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
    };
}
