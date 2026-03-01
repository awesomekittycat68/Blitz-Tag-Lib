#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "../Photon_Pun/RpcTarget.hpp"

namespace GlobalNamespace {
    struct Tappable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Tappable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::TappableManager* GetManager() {
            static BNM::Field<::GlobalNamespace::TappableManager*> _field = GetClass().GetField(O("manager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOverrideTapCooldown() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideTapCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::RpcTarget GetRpcTarget() {
            static BNM::Field<::Photon_Pun::RpcTarget> _field = GetClass().GetField(O("rpcTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetStaticId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("staticId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTappableId() {
            static BNM::Field<int> _field = GetClass().GetField(O("tappableId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseStaticId() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useStaticId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetManager(::GlobalNamespace::TappableManager* value) {
            static BNM::Field<::GlobalNamespace::TappableManager*> _field = GetClass().GetField(O("manager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideTapCooldown(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideTapCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRpcTarget(::Photon_Pun::RpcTarget value) {
            static BNM::Field<::Photon_Pun::RpcTarget> _field = GetClass().GetField(O("rpcTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStaticId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("staticId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTappableId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("tappableId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseStaticId(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useStaticId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CalculateId(bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalculateId"), {"force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(force);
        }
        bool CanTap(bool isLeftHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanTap"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isLeftHand);
        }
        void EdRecalculateId() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EdRecalculateId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void OnGrab() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGrabLocal(float tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped sender) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrabLocal"), {"tapTime", "sender"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tapTime, sender);
        }
        void OnRelease() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRelease"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnReleaseLocal(float tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped sender) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReleaseLocal"), {"tapTime", "sender"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tapTime, sender);
        }
        void OnTap(float tapStrength) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTap"), {"tapStrength"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tapStrength);
        }
        void OnTapLocal(float tapStrength, float tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped sender) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTapLocal"), {"tapStrength", "tapTime", "sender"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tapStrength, tapTime, sender);
        }
        void OnValidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Validate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Validate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
