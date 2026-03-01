#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActor.hpp"

namespace GlobalNamespace {
    struct CrittersCage : ::GlobalNamespace::CrittersActor {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersCage");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetCanCatch() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CanCatch"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetCritterScale() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_critterScale"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetLidActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_lidActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReleaseCooldownEnd() {
            static BNM::Field<float> _field = GetClass().GetField(O("_releaseCooldownEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCagePosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("cagePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetCloseSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("closeSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* GetCritterScales() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("critterScales"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetGrabPosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("grabPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasCritter() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasCritter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHeldByPlayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("heldByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInReleasingPosition() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inReleasingPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLid() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("lid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetOpenSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("openSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReleaseCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("releaseCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetSound() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("sound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLidActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_lidActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReleaseCooldownEnd(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_releaseCooldownEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCagePosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("cagePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCloseSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("closeSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCritterScales(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("critterScales"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabPosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("grabPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasCritter(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasCritter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeldByPlayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("heldByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInReleasingPosition(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inReleasingPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLid(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("lid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOpenSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("openSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReleaseCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("releaseCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSound(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("sound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int AddActorDataToList(::BNM::IL2CPP::Il2CppObject*& objList) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("AddActorDataToList"), {"objList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&objList);
        }
        bool get_CanCatch() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CanCatch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_critterScale() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_critterScale"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GrabbedBy(::GlobalNamespace::CrittersActor* grabbingActor, bool positionOverride, ::BNM::Structures::Unity::Quaternion localRotation, ::BNM::Structures::Unity::Vector3 localOffset, bool disableGrabbing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabbedBy"), {"grabbingActor", "positionOverride", "localRotation", "localOffset", "disableGrabbing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbingActor, positionOverride, localRotation, localOffset, disableGrabbing);
        }
        void HandleRemoteReleased() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleRemoteReleased"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Released(bool keepWorldPosition, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 impulseVelocity, ::BNM::Structures::Unity::Vector3 impulseAngularVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Released"), {"keepWorldPosition", "rotation", "position", "impulseVelocity", "impulseAngularVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(keepWorldPosition, rotation, position, impulseVelocity, impulseAngularVelocity);
        }
        void RemoteGrabbedBy(::GlobalNamespace::CrittersActor* grabbingActor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteGrabbedBy"), {"grabbingActor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbingActor);
        }
        void SendDataByCrittersActorType(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendDataByCrittersActorType"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream);
        }
        void SetHasCritter_1(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHasCritter"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetLidActive_1(bool active, bool playAudio) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLidActive"), {"active", "playAudio"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(active, playAudio);
        }
        bool ShouldDespawn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldDespawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int TotalActorDataLength() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("TotalActorDataLength"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void UpdateCageVisuals() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCageVisuals"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int UpdateFromRPC(::BNM::Structures::Mono::Array<void*>* data, int startingIndex) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UpdateFromRPC"), {"data", "startingIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, startingIndex);
        }
        bool UpdateSpecificActor(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateSpecificActor"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
    };
}
