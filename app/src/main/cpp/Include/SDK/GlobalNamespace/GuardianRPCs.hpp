#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RPCNetworkBase.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GuardianRPCs : ::GlobalNamespace::RPCNetworkBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GuardianRPCs");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GorillaGuardianManager* GetGuardianManager() {
            static BNM::Field<::GlobalNamespace::GorillaGuardianManager*> _field = GetClass().GetField(O("guardianManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetLaunchCallLimit() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("launchCallLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameModeSerializer* GetSerializer() {
            static BNM::Field<::GlobalNamespace::GameModeSerializer*> _field = GetClass().GetField(O("serializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetSlamFXCallLimit() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("slamFXCallLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetSlapFXCallLimit() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("slapFXCallLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGuardianManager(::GlobalNamespace::GorillaGuardianManager* value) {
            static BNM::Field<::GlobalNamespace::GorillaGuardianManager*> _field = GetClass().GetField(O("guardianManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchCallLimit(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("launchCallLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializer(::GlobalNamespace::GameModeSerializer* value) {
            static BNM::Field<::GlobalNamespace::GameModeSerializer*> _field = GetClass().GetField(O("serializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlamFXCallLimit(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("slamFXCallLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlapFXCallLimit(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("slapFXCallLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void GuardianLaunchPlayer(::BNM::Structures::Unity::Vector3 velocity, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GuardianLaunchPlayer"), {"velocity", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(velocity, info);
        }
        void GuardianRequestEject(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GuardianRequestEject"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        template <typename TP0 = void*>
        void SetClassTarget(TP0 target, ::GlobalNamespace::GorillaWrappedSerializer* netHandler) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetClassTarget"), {"target", "netHandler"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target, netHandler);
        }
        void ShowSlamEffect(::BNM::Structures::Unity::Vector3 location, ::BNM::Structures::Unity::Vector3 direction, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowSlamEffect"), {"location", "direction", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(location, direction, info);
        }
        void ShowSlapEffects(::BNM::Structures::Unity::Vector3 location, ::BNM::Structures::Unity::Vector3 direction, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowSlapEffects"), {"location", "direction", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(location, direction, info);
        }
    };
}
