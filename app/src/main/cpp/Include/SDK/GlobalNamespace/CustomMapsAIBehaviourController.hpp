#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CustomMapsAIBehaviourController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapsAIBehaviourController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int BEHAVIOUR_COUNT = 3;
        ::GlobalNamespace::GRPlayer* GetTargetPlayer() {
            static BNM::Method<::GlobalNamespace::GRPlayer*> _method = GetClass().GetMethod(O("get_TargetPlayer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTargetPlayer(::GlobalNamespace::GRPlayer* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TargetPlayer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GameAgent* GetAgent() {
            static BNM::Field<::GlobalNamespace::GameAgent*> _field = GetClass().GetField(O("agent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAllowTargetingTaggedPlayers() {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowTargetingTaggedPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Animator*>* GetAnimators() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Animator*>*> _field = GetClass().GetField(O("animators"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAttributes* GetAttributes() {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<void*, ::GlobalNamespace::CustomMapsBehaviourBase*>* GetBehaviourDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<void*, ::GlobalNamespace::CustomMapsBehaviourBase*>*> _field = GetClass().GetField(O("behaviourDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCurrentBehaviour() {
            static BNM::Field<void*> _field = GetClass().GetField(O("currentBehaviour"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentBehaviourIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentBehaviourIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int16_t GetLuaAgentID() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("luaAgentID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetMovementSpeedParamIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("movementSpeedParamIndex"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetTempRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetUsedBehaviours() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("usedBehaviours"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetVisibilityHits() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("visibilityHits"));
            return _field.Get();
        }
        void* GetVisibilityLayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("visibilityLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAgent(::GlobalNamespace::GameAgent* value) {
            static BNM::Field<::GlobalNamespace::GameAgent*> _field = GetClass().GetField(O("agent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllowTargetingTaggedPlayers(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowTargetingTaggedPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimators(::BNM::Structures::Mono::Array<::Animator*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Animator*>*> _field = GetClass().GetField(O("animators"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttributes(::GlobalNamespace::GRAttributes* value) {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBehaviourDict(::BNM::Structures::Mono::Dictionary<void*, ::GlobalNamespace::CustomMapsBehaviourBase*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<void*, ::GlobalNamespace::CustomMapsBehaviourBase*>*> _field = GetClass().GetField(O("behaviourDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentBehaviour(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("currentBehaviour"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentBehaviourIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentBehaviourIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLuaAgentID(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("luaAgentID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsedBehaviours(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("usedBehaviours"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetVisibilityHits(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("visibilityHits"));
            _field.Set(value);
        }
        void SetVisibilityLayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("visibilityLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearTarget() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearTarget"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::GRPlayer* FindBestTarget(::BNM::Structures::Unity::Vector3 sourcePos, float maxRange, float maxRangeSq, float minDotVal) {
            static BNM::Method<::GlobalNamespace::GRPlayer*> _m = GetClass().GetMethod(O("FindBestTarget"), {"sourcePos", "maxRange", "maxRangeSq", "minDotVal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sourcePos, maxRange, maxRangeSq, minDotVal);
        }
        ::GlobalNamespace::GRPlayer* get_TargetPlayer() {
            static BNM::Method<::GlobalNamespace::GRPlayer*> _m = GetClass().GetMethod(O("get_TargetPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        int GetNavAgentType(TP0 navType) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNavAgentType"), {"navType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(navType);
        }
        void InitAnimators() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitAnimators"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsAnimationPlaying(::BNM::Structures::Mono::String* stateName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAnimationPlaying"), {"stateName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stateName);
        }
        bool IsTargetable(::GlobalNamespace::GRPlayer* potentialTarget) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTargetable"), {"potentialTarget"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(potentialTarget);
        }
        bool IsTargetInRange(::BNM::Structures::Unity::Vector3 startPos, ::GlobalNamespace::GRPlayer* target, float maxRangeSq, ::BNM::Structures::Unity::Vector3& toTarget) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTargetInRange"), {"startPos", "target", "maxRangeSq", "toTarget"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(startPos, target, maxRangeSq, &toTarget);
        }
        bool IsTargetVisible(::BNM::Structures::Unity::Vector3 startPos, ::GlobalNamespace::GRPlayer* target, float maxDist) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTargetVisible"), {"startPos", "target", "maxDist"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(startPos, target, maxDist);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
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
        void OnNetworkBehaviourStateChanged(uint8_t newstate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnNetworkBehaviourStateChanged"), {"newstate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newstate);
        }
        void OnThink() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnThink"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
        }
        void PlayAnimation(::BNM::Structures::Mono::String* stateName, float blendTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayAnimation"), {"stateName", "blendTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stateName, blendTime);
        }
        void RequestDestination(::BNM::Structures::Unity::Vector3 destination) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestDestination"), {"destination"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(destination);
        }
        void set_TargetPlayer(::GlobalNamespace::GRPlayer* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TargetPlayer"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetTarget(::GlobalNamespace::GRPlayer* newTarget) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTarget"), {"newTarget"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newTarget);
        }
        void SetupBehaviours(::BNM::IL2CPP::Il2CppObject* aiAgent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupBehaviours"), {"aiAgent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(aiAgent);
        }
        void SetupNewEnemy(::BNM::IL2CPP::Il2CppObject* newEnemy) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupNewEnemy"), {"newEnemy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newEnemy);
        }
        void StopMoving() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopMoving"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateAnimators() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateAnimators"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
