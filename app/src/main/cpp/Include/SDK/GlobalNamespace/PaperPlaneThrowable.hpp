#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "TransferrableObject.hpp"

namespace GlobalNamespace {
    struct PaperPlaneThrowable : ::GlobalNamespace::TransferrableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PaperPlaneThrowable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Vector3 GetItemWorldAngVel() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_itemWorldAngVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetItemWorldVel() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_itemWorldVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastWorldPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_lastWorldPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetLastWorldRot() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("_lastWorldRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::Camera* GetPlayerView() {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("_playerView"));
            return _field.Get();
        }
        ::GameObject* GetProjectilePrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetRenderer() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("_renderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetThrowableID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_throwableID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetThrowableIdHash() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_throwableIdHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<void*>* GetGEventArgs() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("gEventArgs"));
            return _field.Get();
        }
        static ::GlobalNamespace::PhotonEvent* GetGLaunchRPC() {
            static BNM::Field<::GlobalNamespace::PhotonEvent*> _field = GetClass().GetField(O("gLaunchRPC"));
            return _field.Get();
        }
        static ::Photon_Realtime::RaiseEventOptions* GetGRaiseOpts() {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("gRaiseOpts"));
            return _field.Get();
        }
        static int GetKProjectileEvent() {
            static BNM::Field<int> _field = GetClass().GetField(O("kProjectileEvent"));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiterWithCooldown* GetMSpamCheck() {
            static BNM::Field<::GlobalNamespace::CallLimiterWithCooldown*> _field = GetClass().GetField(O("m_spamCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinThrowSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("minThrowSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetItemWorldAngVel(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_itemWorldAngVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemWorldVel(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_itemWorldVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastWorldPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_lastWorldPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastWorldRot(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("_lastWorldRot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPlayerView(::Camera* value) {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("_playerView"));
            _field.Set(value);
        }
        void SetProjectilePrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("_renderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowableID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_throwableID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowableIdHash(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_throwableIdHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetGEventArgs(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("gEventArgs"));
            _field.Set(value);
        }
        static void SetGLaunchRPC(::GlobalNamespace::PhotonEvent* value) {
            static BNM::Field<::GlobalNamespace::PhotonEvent*> _field = GetClass().GetField(O("gLaunchRPC"));
            _field.Set(value);
        }
        static void SetGRaiseOpts(::Photon_Realtime::RaiseEventOptions* value) {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("gRaiseOpts"));
            _field.Set(value);
        }
        void SetMSpamCheck(::GlobalNamespace::CallLimiterWithCooldown* value) {
            static BNM::Field<::GlobalNamespace::CallLimiterWithCooldown*> _field = GetClass().GetField(O("m_spamCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinThrowSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minThrowSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::BNM::Structures::Unity::Vector3 CalcAngularVelocity(::BNM::Structures::Unity::Quaternion from, ::BNM::Structures::Unity::Quaternion to, float dt) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("CalcAngularVelocity"), {"from", "to", "dt"});
            return _m.Call(from, to, dt);
        }
        void DropItem() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DropItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static int FetchViewID(::GlobalNamespace::PaperPlaneThrowable* ppt) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FetchViewID"), {"ppt"});
            return _m.Call(ppt);
        }
        int GetThrowableId() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetThrowableId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LateUpdateLocal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LaunchProjectileLocal(::BNM::Structures::Unity::Vector3 launchPos, ::BNM::Structures::Unity::Quaternion launchRot, ::BNM::Structures::Unity::Vector3 releaseVel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LaunchProjectileLocal"), {"launchPos", "launchRot", "releaseVel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(launchPos, launchRot, releaseVel);
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
        void OnGrab(::GlobalNamespace::InteractionPoint* pointGrabbed, ::GameObject* grabbingHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrab"), {"pointGrabbed", "grabbingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pointGrabbed, grabbingHand);
        }
        void OnLaunchRPC(int sender, int receiver, ::BNM::Structures::Mono::Array<void*>* args, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLaunchRPC"), {"sender", "receiver", "args", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sender, receiver, args, info);
        }
        void OnPhotonEvent(::ExitGames_Client_Photon::EventData* evData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPhotonEvent"), {"evData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(evData);
        }
        void OnProjectileHit(::BNM::Structures::Unity::Vector3 endPoint) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProjectileHit"), {"endPoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(endPoint);
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
