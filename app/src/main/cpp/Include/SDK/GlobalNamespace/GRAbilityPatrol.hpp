#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRAbilityBase.hpp"

namespace GlobalNamespace {
    struct GRAbilityPatrol : ::GlobalNamespace::GRAbilityBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRAbilityPatrol");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::AudioClip*>* GetAmbientPatrolSounds() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("ambientPatrolSounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetAmbientSoundDelayMax() {
            static BNM::Field<double> _field = GetClass().GetField(O("ambientSoundDelayMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetAmbientSoundDelayMin() {
            static BNM::Field<double> _field = GetClass().GetField(O("ambientSoundDelayMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAmbientSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("ambientSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastPartrolAmbientSoundTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastPartrolAmbientSoundTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastStateChange() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastStateChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityMoveToTarget* GetMoveAbility() {
            static BNM::Field<::GlobalNamespace::GRAbilityMoveToTarget*> _field = GetClass().GetField(O("moveAbility"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNavMeshAgent() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("navMeshAgent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetNextPatrolGroanTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("nextPatrolGroanTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextPatrolNode() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextPatrolNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPatrolGroanSoundDelayRandom() {
            static BNM::Field<void*> _field = GetClass().GetField(O("patrolGroanSoundDelayRandom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPatrolGroanSoundRandom() {
            static BNM::Field<void*> _field = GetClass().GetField(O("patrolGroanSoundRandom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRPatrolPath* GetPatrolPath() {
            static BNM::Field<::GlobalNamespace::GRPatrolPath*> _field = GetClass().GetField(O("patrolPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAmbientPatrolSounds(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("ambientPatrolSounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAmbientSoundDelayMax(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("ambientSoundDelayMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAmbientSoundDelayMin(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("ambientSoundDelayMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAmbientSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ambientSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPartrolAmbientSoundTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastPartrolAmbientSoundTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastStateChange(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastStateChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMoveAbility(::GlobalNamespace::GRAbilityMoveToTarget* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityMoveToTarget*> _field = GetClass().GetField(O("moveAbility"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNavMeshAgent(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("navMeshAgent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextPatrolGroanTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("nextPatrolGroanTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextPatrolNode(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextPatrolNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPatrolGroanSoundDelayRandom(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("patrolGroanSoundDelayRandom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPatrolGroanSoundRandom(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("patrolGroanSoundRandom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPatrolPath(::GlobalNamespace::GRPatrolPath* value) {
            static BNM::Field<::GlobalNamespace::GRPatrolPath*> _field = GetClass().GetField(O("patrolPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CalculateNextPatrolGroan() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalculateNextPatrolGroan"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::GRPatrolPath* GetPatrolPath_1() {
            static BNM::Method<::GlobalNamespace::GRPatrolPath*> _m = GetClass().GetMethod(O("GetPatrolPath"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool HasValidPatrolPath() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasValidPatrolPath"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitializeRandoms() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeRandoms"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsDone() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsDone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnStop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUpdateAuthority(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateAuthority"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void OnUpdateRemote(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateRemote"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void PlayPatrolGroan() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayPatrolGroan"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetNextPatrolNode_1(int nextPatrolNode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNextPatrolNode"), {"nextPatrolNode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nextPatrolNode);
        }
        void SetPatrolPath_1(::GlobalNamespace::GRPatrolPath* patrolPath) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPatrolPath"), {"patrolPath"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(patrolPath);
        }
        void Setup(::GlobalNamespace::GameAgent* agent, ::BNM::IL2CPP::Il2CppObject* anim, ::AudioSource* audioSource, ::Transform* root, ::Transform* head, ::GlobalNamespace::GRSenseLineOfSight* lineOfSight) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"agent", "anim", "audioSource", "root", "head", "lineOfSight"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(agent, anim, audioSource, root, head, lineOfSight);
        }
    };
}
