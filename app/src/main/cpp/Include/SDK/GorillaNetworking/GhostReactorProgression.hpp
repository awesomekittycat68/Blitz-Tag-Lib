#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    struct GhostReactorProgression : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "GhostReactorProgression");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaNetworking::GhostReactorProgression* GetInstance() {
            static BNM::Field<::GorillaNetworking::GhostReactorProgression*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr const char* grPSODirectory = "ProgressionTiersData";
        ::GlobalNamespace::GRPlayer* GetGrPlayer() {
            static BNM::Field<::GlobalNamespace::GRPlayer*> _field = GetClass().GetField(O("_grPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("_reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::GRProgressionScriptableObject* GetGrPSO() {
            static BNM::Field<::GlobalNamespace::GRProgressionScriptableObject*> _field = GetClass().GetField(O("grPSO"));
            return _field.Get();
        }
        static ::GorillaNetworking::GhostReactorProgression* GetInstance_f() {
            static BNM::Field<::GorillaNetworking::GhostReactorProgression*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetProgressionTrackId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("progressionTrackId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGrPlayer(::GlobalNamespace::GRPlayer* value) {
            static BNM::Field<::GlobalNamespace::GRPlayer*> _field = GetClass().GetField(O("_grPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("_reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetGrPSO(::GlobalNamespace::GRProgressionScriptableObject* value) {
            static BNM::Field<::GlobalNamespace::GRProgressionScriptableObject*> _field = GetClass().GetField(O("grPSO"));
            _field.Set(value);
        }
        static void SetInstance(::GorillaNetworking::GhostReactorProgression* value) {
            static BNM::Field<::GorillaNetworking::GhostReactorProgression*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetProgressionTrackId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("progressionTrackId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static int GetGrade(int points) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetGrade"), {"points"});
            return _m.Call(points);
        }
        static void* GetGradePointDetails(int points) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetGradePointDetails"), {"points"});
            return _m.Call(points);
        }
        void GetStartingProgression(::GlobalNamespace::GRPlayer* grPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetStartingProgression"), {"grPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grPlayer);
        }
        static int GetTitleLevel(int points) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetTitleLevel"), {"points"});
            return _m.Call(points);
        }
        static ::BNM::Structures::Mono::String* GetTitleName(int points) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetTitleName"), {"points"});
            return _m.Call(points);
        }
        static ::BNM::Structures::Mono::String* GetTitleNameAndGrade(int points) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetTitleNameAndGrade"), {"points"});
            return _m.Call(points);
        }
        static ::BNM::Structures::Mono::String* GetTitleNameFromLevel(int level) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetTitleNameFromLevel"), {"level"});
            return _m.Call(level);
        }
        static void LoadGRPSO() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadGRPSO"));
            _m.Call();
        }
        void OnNodeUnlocked() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnNodeUnlocked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTrackRead(::BNM::Structures::Mono::String* trackId, int progress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTrackRead"), {"trackId", "progress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(trackId, progress);
        }
        void OnTrackSet(::BNM::Structures::Mono::String* trackId, int progress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTrackSet"), {"trackId", "progress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(trackId, progress);
        }
        void SetProgression(int progressionAmountToAdd, ::GlobalNamespace::GRPlayer* grPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetProgression"), {"progressionAmountToAdd", "grPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(progressionAmountToAdd, grPlayer);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UnlockProgressionTreeNode(::BNM::Structures::Mono::String* treeId, ::BNM::Structures::Mono::String* nodeId, ::GlobalNamespace::GhostReactor* reactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnlockProgressionTreeNode"), {"treeId", "nodeId", "reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(treeId, nodeId, reactor);
        }
    };
}
