#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameBallData.hpp"
#include "GameBallId.hpp"
#include "GameBallManager_RPC.hpp"
#include "NetworkComponent.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GameBallManager : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameBallManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float MAX_LOCAL_MAGNITUDE_SQR = 6400.0f;
        static constexpr float MAX_LAUNCHER_DISTANCE_SQR = 1.0f;
        static constexpr float MAX_CATCH_DISTANCE_FROM_HAND_SQR = 25.0f;
        static constexpr float MAX_DISTANCE_FROM_HAND_SQR = 6.25f;
        static constexpr float MAX_THROW_VELOCITY_SQR = 1600.0f;
        ::BNM::Structures::Mono::Array<::GlobalNamespace::CallLimiter*>* GetCallLimiters() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CallLimiter*>*> _field = GetClass().GetField(O("_callLimiters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameBallData>* GetGameBallData() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameBallData>*> _field = GetClass().GetField(O("gameBallData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameBall*>* GetGameBalls() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameBall*>*> _field = GetClass().GetField(O("gameBalls"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::GameBallManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::GameBallManager*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetPhotonView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallLimiters(::BNM::Structures::Mono::Array<::GlobalNamespace::CallLimiter*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CallLimiter*>*> _field = GetClass().GetField(O("_callLimiters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameBallData(::BNM::Structures::Mono::List<::GlobalNamespace::GameBallData>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameBallData>*> _field = GetClass().GetField(O("gameBallData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameBalls(::BNM::Structures::Mono::List<::GlobalNamespace::GameBall*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameBall*>*> _field = GetClass().GetField(O("gameBalls"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::GameBallManager* value) {
            static BNM::Field<::GlobalNamespace::GameBallManager*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void SetPhotonView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::GameBallId AddGameBall(::GlobalNamespace::GameBall* gameBall) {
            static BNM::Method<::GlobalNamespace::GameBallId> _m = GetClass().GetMethod(O("AddGameBall"), {"gameBall"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameBall);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyBackingFieldsToState(bool ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyBackingFieldsToState"), {""});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyStateToBackingFields() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyStateToBackingFields"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::GameBall* GetGameBall(::GlobalNamespace::GameBallId id) {
            static BNM::Method<::GlobalNamespace::GameBall*> _m = GetClass().GetMethod(O("GetGameBall"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id);
        }
        void GrabBall(::GlobalNamespace::GameBallId gameBallId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation, ::GlobalNamespace::NetPlayer* grabbedByPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabBall"), {"gameBallId", "isLeftHand", "localPosition", "localRotation", "grabbedByPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId, isLeftHand, localPosition, localRotation, grabbedByPlayer);
        }
        void GrabBallRPC(int gameBallIndex, bool isLeftHand, int64_t packedPosRot, ::Photon_Realtime::Player* grabbedBy, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabBallRPC"), {"gameBallIndex", "isLeftHand", "packedPosRot", "grabbedBy", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallIndex, isLeftHand, packedPosRot, grabbedBy, info);
        }
        void LaunchBall(::GlobalNamespace::GameBallId gameBallId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LaunchBall"), {"gameBallId", "position", "rotation", "velocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId, position, rotation, velocity);
        }
        void LaunchBallRPC(int gameBallIndex, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, double throwTime, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LaunchBallRPC"), {"gameBallIndex", "position", "rotation", "velocity", "throwTime", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallIndex, position, rotation, velocity, throwTime, info);
        }
        void ReadDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReadDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void ReportRPCCall(::GlobalNamespace::GameBallManager_RPC rpcCall, ::Photon_Pun::PhotonMessageInfo info, ::BNM::Structures::Mono::String* susReason) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportRPCCall"), {"rpcCall", "info", "susReason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rpcCall, info, susReason);
        }
        void RequestGrabBall(::GlobalNamespace::GameBallId ballId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestGrabBall"), {"ballId", "isLeftHand", "localPosition", "localRotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ballId, isLeftHand, localPosition, localRotation);
        }
        void RequestGrabBallRPC(int gameBallIndex, bool isLeftHand, int64_t packedPosRot, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestGrabBallRPC"), {"gameBallIndex", "isLeftHand", "packedPosRot", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallIndex, isLeftHand, packedPosRot, info);
        }
        void RequestLaunchBall(::GlobalNamespace::GameBallId ballId, ::BNM::Structures::Unity::Vector3 velocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestLaunchBall"), {"ballId", "velocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ballId, velocity);
        }
        void RequestLaunchBallRPC(int gameBallIndex, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestLaunchBallRPC"), {"gameBallIndex", "position", "rotation", "velocity", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallIndex, position, rotation, velocity, info);
        }
        void RequestSetBallPosition(::GlobalNamespace::GameBallId ballId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSetBallPosition"), {"ballId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ballId);
        }
        void RequestSetBallPositionRPC(int gameBallIndex, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSetBallPositionRPC"), {"gameBallIndex", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallIndex, info);
        }
        void RequestTeleportBall(::GlobalNamespace::GameBallId id, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angularVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestTeleportBall"), {"id", "position", "rotation", "velocity", "angularVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id, position, rotation, velocity, angularVelocity);
        }
        void RequestThrowBall(::GlobalNamespace::GameBallId ballId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestThrowBall"), {"ballId", "isLeftHand", "velocity", "angVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ballId, isLeftHand, velocity, angVelocity);
        }
        void RequestThrowBallRPC(int gameBallIndex, bool isLeftHand, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestThrowBallRPC"), {"gameBallIndex", "isLeftHand", "position", "rotation", "velocity", "angVelocity", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallIndex, isLeftHand, position, rotation, velocity, angVelocity, info);
        }
        void TeleportBall(::GlobalNamespace::GameBallId gameBallId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angularVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TeleportBall"), {"gameBallId", "position", "rotation", "velocity", "angularVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId, position, rotation, velocity, angularVelocity);
        }
        void TeleportBallRPC(int gameBallIndex, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angularVelocity, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TeleportBallRPC"), {"gameBallIndex", "position", "rotation", "velocity", "angularVelocity", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallIndex, position, rotation, velocity, angularVelocity, info);
        }
        void ThrowBall(::GlobalNamespace::GameBallId gameBallId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity, ::GlobalNamespace::NetPlayer* thrownByPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ThrowBall"), {"gameBallId", "isLeftHand", "position", "rotation", "velocity", "angVelocity", "thrownByPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId, isLeftHand, position, rotation, velocity, angVelocity, thrownByPlayer);
        }
        void ThrowBallRPC(int gameBallIndex, bool isLeftHand, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity, ::Photon_Realtime::Player* thrownBy, double throwTime, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ThrowBallRPC"), {"gameBallIndex", "isLeftHand", "position", "rotation", "velocity", "angVelocity", "thrownBy", "throwTime", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallIndex, isLeftHand, position, rotation, velocity, angVelocity, thrownBy, throwTime, info);
        }
        ::GlobalNamespace::GameBallId TryGrabLocal(::BNM::Structures::Unity::Vector3 handPosition, int teamId) {
            static BNM::Method<::GlobalNamespace::GameBallId> _m = GetClass().GetMethod(O("TryGrabLocal"), {"handPosition", "teamId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handPosition, teamId);
        }
        bool ValidateCallLimits(::GlobalNamespace::GameBallManager_RPC rpcCall, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateCallLimits"), {"rpcCall", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rpcCall, info);
        }
        bool ValidateThrowBallParams(int gameBallIndex, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateThrowBallParams"), {"gameBallIndex", "position", "rotation", "velocity", "angVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameBallIndex, position, rotation, velocity, angVelocity);
        }
        void WriteDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
    };
}
