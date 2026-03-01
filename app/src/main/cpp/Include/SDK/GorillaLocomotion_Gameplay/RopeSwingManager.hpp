#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/NetworkSceneObject.hpp"
#include "../GlobalNamespace/PhotonMessageInfoWrapped.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GorillaLocomotion_Gameplay {
    struct RopeSwingManager : ::GlobalNamespace::NetworkSceneObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Gameplay", "RopeSwingManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaLocomotion_Gameplay::RopeSwingManager* GetInstance() {
            static BNM::Method<::GorillaLocomotion_Gameplay::RopeSwingManager*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GorillaLocomotion_Gameplay::RopeSwingManager* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GorillaLocomotion_Gameplay::GorillaRopeSwing*>* GetRopes() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GorillaLocomotion_Gameplay::GorillaRopeSwing*>*> _field = GetClass().GetField(O("ropes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRopes(::BNM::Structures::Mono::Dictionary<int, ::GorillaLocomotion_Gameplay::GorillaRopeSwing*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GorillaLocomotion_Gameplay::GorillaRopeSwing*>*> _field = GetClass().GetField(O("ropes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GorillaLocomotion_Gameplay::RopeSwingManager* get_instance() {
            static BNM::Method<::GorillaLocomotion_Gameplay::RopeSwingManager*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        static void Register(::GorillaLocomotion_Gameplay::GorillaRopeSwing* t) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"t"});
            _m.Call(t);
        }
        void RegisterInstance(::GorillaLocomotion_Gameplay::GorillaRopeSwing* t) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterInstance"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(t);
        }
        template <typename TP5 = void*>
        static void RPC_SetVelocity(::BNM::IL2CPP::Il2CppObject* runner, int ropeId, int boneIndex, ::BNM::Structures::Unity::Vector3 velocity, bool wholeRope, TP5 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_SetVelocity"), {"runner", "ropeId", "boneIndex", "velocity", "wholeRope", "info"});
            _m.Call(runner, ropeId, boneIndex, velocity, wholeRope, info);
        }
        static void RPC_SetVelocity$Invoker(::BNM::IL2CPP::Il2CppObject* runner, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_SetVelocity@Invoker"), {"runner", "message"});
            _m.Call(runner, message);
        }
        void SendSetVelocity_RPC(int ropeId, int boneIndex, ::BNM::Structures::Unity::Vector3 velocity, bool wholeRope) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendSetVelocity_RPC"), {"ropeId", "boneIndex", "velocity", "wholeRope"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ropeId, boneIndex, velocity, wholeRope);
        }
        static void set_instance(::GorillaLocomotion_Gameplay::RopeSwingManager* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_instance"), {"value"});
            _m.Call(value);
        }
        void SetVelocity(int ropeId, int boneIndex, ::BNM::Structures::Unity::Vector3 velocity, bool wholeRope, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVelocity"), {"ropeId", "boneIndex", "velocity", "wholeRope", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ropeId, boneIndex, velocity, wholeRope, info);
        }
        void SetVelocityShared(int ropeId, int boneIndex, ::BNM::Structures::Unity::Vector3 velocity, bool wholeRope, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVelocityShared"), {"ropeId", "boneIndex", "velocity", "wholeRope", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ropeId, boneIndex, velocity, wholeRope, info);
        }
        bool TryGetRope(int ropeId, ::GorillaLocomotion_Gameplay::GorillaRopeSwing*& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetRope"), {"ropeId", "result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(ropeId, &result);
        }
        static void Unregister(::GorillaLocomotion_Gameplay::GorillaRopeSwing* t) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"t"});
            _m.Call(t);
        }
        void UnregisterInstance(::GorillaLocomotion_Gameplay::GorillaRopeSwing* t) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterInstance"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(t);
        }
    };
}
