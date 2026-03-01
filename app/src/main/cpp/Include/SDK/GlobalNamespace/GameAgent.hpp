#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GameAgent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameAgent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_onBehaviorStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onBehaviorStateChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onBehaviorStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onBehaviorStateChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_onBodyStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onBodyStateChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onBodyStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onBodyStateChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_onJumpRequested(::GlobalNamespace::GameAgent_JumpRequestedEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onJumpRequested"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onJumpRequested(::GlobalNamespace::GameAgent_JumpRequestedEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onJumpRequested"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_onNavigationFailed(::GlobalNamespace::GameAgent_NavigationFailedEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onNavigationFailed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onNavigationFailed(::GlobalNamespace::GameAgent_NavigationFailedEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onNavigationFailed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_onReachedNavigationLink(::GlobalNamespace::GameAgent_NavigationLinkReachedEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onReachedNavigationLink"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onReachedNavigationLink(::GlobalNamespace::GameAgent_NavigationLinkReachedEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onReachedNavigationLink"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::Structures::Mono::List<void*>* GetAgentComponents() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("agentComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableNetworkSync() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableNetworkSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasNotifiedNavigationFailure() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasNotifiedNavigationFailure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastPosOnNavMesh() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPosOnNavMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastReceivedDest() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastReceivedDest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastRequestedDest() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastRequestedDest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNavAgent() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("navAgent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetNavAgentless() {
            static BNM::Field<bool> _field = GetClass().GetField(O("navAgentless"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNetworkPositionCorrectionDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("networkPositionCorrectionDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameAgent_StateChangedEvent* GetOnBehaviorStateChanged() {
            static BNM::Field<::GlobalNamespace::GameAgent_StateChangedEvent*> _field = GetClass().GetField(O("onBehaviorStateChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameAgent_StateChangedEvent* GetOnBodyStateChanged() {
            static BNM::Field<::GlobalNamespace::GameAgent_StateChangedEvent*> _field = GetClass().GetField(O("onBodyStateChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameAgent_JumpRequestedEvent* GetOnJumpRequested() {
            static BNM::Field<::GlobalNamespace::GameAgent_JumpRequestedEvent*> _field = GetClass().GetField(O("onJumpRequested"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameAgent_NavigationFailedEvent* GetOnNavigationFailed() {
            static BNM::Field<::GlobalNamespace::GameAgent_NavigationFailedEvent*> _field = GetClass().GetField(O("onNavigationFailed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameAgent_NavigationLinkReachedEvent* GetOnReachedNavigationLink() {
            static BNM::Field<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*> _field = GetClass().GetField(O("onReachedNavigationLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPauseEntityThink() {
            static BNM::Field<bool> _field = GetClass().GetField(O("pauseEntityThink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRigidBody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetTargetPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("targetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasOnOffMeshNavLink() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasOnOffMeshNavLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAgentComponents(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("agentComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableNetworkSync(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableNetworkSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasNotifiedNavigationFailure(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasNotifiedNavigationFailure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPosOnNavMesh(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPosOnNavMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastReceivedDest(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastReceivedDest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRequestedDest(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastRequestedDest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNavAgent(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("navAgent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNavAgentless(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("navAgentless"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkPositionCorrectionDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("networkPositionCorrectionDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnBehaviorStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent* value) {
            static BNM::Field<::GlobalNamespace::GameAgent_StateChangedEvent*> _field = GetClass().GetField(O("onBehaviorStateChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnBodyStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent* value) {
            static BNM::Field<::GlobalNamespace::GameAgent_StateChangedEvent*> _field = GetClass().GetField(O("onBodyStateChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnJumpRequested(::GlobalNamespace::GameAgent_JumpRequestedEvent* value) {
            static BNM::Field<::GlobalNamespace::GameAgent_JumpRequestedEvent*> _field = GetClass().GetField(O("onJumpRequested"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnNavigationFailed(::GlobalNamespace::GameAgent_NavigationFailedEvent* value) {
            static BNM::Field<::GlobalNamespace::GameAgent_NavigationFailedEvent*> _field = GetClass().GetField(O("onNavigationFailed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnReachedNavigationLink(::GlobalNamespace::GameAgent_NavigationLinkReachedEvent* value) {
            static BNM::Field<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*> _field = GetClass().GetField(O("onReachedNavigationLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPauseEntityThink(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("pauseEntityThink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigidBody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("targetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasOnOffMeshNavLink(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasOnOffMeshNavLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_onBehaviorStateChanged_1(::GlobalNamespace::GameAgent_StateChangedEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onBehaviorStateChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_onBodyStateChanged_1(::GlobalNamespace::GameAgent_StateChangedEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onBodyStateChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_onJumpRequested_1(::GlobalNamespace::GameAgent_JumpRequestedEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onJumpRequested"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_onNavigationFailed_1(::GlobalNamespace::GameAgent_NavigationFailedEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onNavigationFailed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_onReachedNavigationLink_1(::GlobalNamespace::GameAgent_NavigationLinkReachedEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onReachedNavigationLink"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ApplyDestination(::BNM::Structures::Unity::Vector3 dest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyDestination"), {"dest"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dest);
        }
        void ApplyNetworkUpdate(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyNetworkUpdate"), {"position", "rotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position, rotation);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearLastRequestedDestination() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearLastRequestedDestination"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::GameAgentManager* GetGameAgentManager() {
            static BNM::Method<::GlobalNamespace::GameAgentManager*> _m = GetClass().GetMethod(O("GetGameAgentManager"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetLastPosOnNavMesh_1() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetLastPosOnNavMesh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsOnNavMesh() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsOnNavMesh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnBehaviorStateChanged(uint8_t newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBehaviorStateChanged"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void OnBodyStateChanged(uint8_t newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBodyStateChanged"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
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
        void OnEntityStateChange(int64_t prevState, int64_t nextState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityStateChange"), {"prevState", "nextState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prevState, nextState);
        }
        void OnJumpRequested(::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3 end, float heightScale, float speedScale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJumpRequested"), {"start", "end", "heightScale", "speedScale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(start, end, heightScale, speedScale);
        }
        void OnThink(float deltaTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnThink"), {"deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(deltaTime);
        }
        void OnUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_onBehaviorStateChanged_1(::GlobalNamespace::GameAgent_StateChangedEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onBehaviorStateChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_onBodyStateChanged_1(::GlobalNamespace::GameAgent_StateChangedEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onBodyStateChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_onJumpRequested_1(::GlobalNamespace::GameAgent_JumpRequestedEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onJumpRequested"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_onNavigationFailed_1(::GlobalNamespace::GameAgent_NavigationFailedEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onNavigationFailed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_onReachedNavigationLink_1(::GlobalNamespace::GameAgent_NavigationLinkReachedEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onReachedNavigationLink"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void RequestBehaviorChange(uint8_t behavior) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestBehaviorChange"), {"behavior"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(behavior);
        }
        void RequestDestination(::BNM::Structures::Unity::Vector3 dest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestDestination"), {"dest"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dest);
        }
        void RequestStateChange(uint8_t state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestStateChange"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void RequestTarget(::GlobalNamespace::NetPlayer* targetPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestTarget"), {"targetPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetPlayer);
        }
        void SetDisableNetworkSync_1(bool disable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDisableNetworkSync"), {"disable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disable);
        }
        void SetIsPathing(bool isPathing, bool ignoreRigiBody) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetIsPathing"), {"isPathing", "ignoreRigiBody"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isPathing, ignoreRigiBody);
        }
        void SetSpeed(float speed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSpeed"), {"speed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(speed);
        }
        void SetStopped(bool stopMovement) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStopped"), {"stopMovement"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stopMovement);
        }
        void SetVelocity(::BNM::Structures::Unity::Vector3 vel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVelocity"), {"vel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(vel);
        }
        static void UpdateFacing(::Transform* transform, ::BNM::IL2CPP::Il2CppObject* navAgent, ::GlobalNamespace::NetPlayer* targetPlayer, float turnspeed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFacing"), {"transform", "navAgent", "targetPlayer", "turnspeed"});
            _m.Call(transform, navAgent, targetPlayer, turnspeed);
        }
        static void UpdateFacingDir(::Transform* transform, ::BNM::IL2CPP::Il2CppObject* navAgent, ::BNM::Structures::Unity::Vector3 facingDir, float turnspeed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFacingDir"), {"transform", "navAgent", "facingDir", "turnspeed"});
            _m.Call(transform, navAgent, facingDir, turnspeed);
        }
        static void UpdateFacingForward(::Transform* transform, ::BNM::IL2CPP::Il2CppObject* navAgent, float turnspeed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFacingForward"), {"transform", "navAgent", "turnspeed"});
            _m.Call(transform, navAgent, turnspeed);
        }
        static void UpdateFacingPos(::Transform* transform, ::BNM::IL2CPP::Il2CppObject* navAgent, ::BNM::Structures::Unity::Vector3 facingPos, float turnspeed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFacingPos"), {"transform", "navAgent", "facingPos", "turnspeed"});
            _m.Call(transform, navAgent, facingPos, turnspeed);
        }
        static void UpdateFacingTarget(::Transform* transform, ::BNM::IL2CPP::Il2CppObject* navAgent, ::Transform* target, float turnspeed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFacingTarget"), {"transform", "navAgent", "target", "turnspeed"});
            _m.Call(transform, navAgent, target, turnspeed);
        }
    };
}
