#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaMaterialReaction_EMomentInState.hpp"
#include "GorillaMaterialReaction_ReactionEntry.hpp"

namespace GorillaTag_Reactions {
    struct GorillaMaterialReaction : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Reactions", "GorillaMaterialReaction");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        double GetCurrentMatIndexStartTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("_currentMatIndexStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetCurrentMomentDuration() {
            static BNM::Field<double> _field = GetClass().GetField(O("_currentMomentDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Reactions::GorillaMaterialReaction_EMomentInState GetCurrentMomentInState() {
            static BNM::Field<::GorillaTag_Reactions::GorillaMaterialReaction_EMomentInState> _field = GetClass().GetField(O("_currentMomentInState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetMatXMomentXActiveBoolToGObjs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("_mat_x_moment_x_activeBool_to_gObjs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMatCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_matCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMomentEnumCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_momentEnumCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetOwnerVRRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_ownerVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPreviousMatIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_previousMatIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReactionsRemaining() {
            static BNM::Field<int> _field = GetClass().GetField(O("_reactionsRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Reactions::GorillaMaterialReaction_ReactionEntry>* GetStatusEffectReactions() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Reactions::GorillaMaterialReaction_ReactionEntry>*> _field = GetClass().GetField(O("_statusEffectReactions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentMatIndexStartTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("_currentMatIndexStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentMomentDuration(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("_currentMomentDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentMomentInState(::GorillaTag_Reactions::GorillaMaterialReaction_EMomentInState value) {
            static BNM::Field<::GorillaTag_Reactions::GorillaMaterialReaction_EMomentInState> _field = GetClass().GetField(O("_currentMomentInState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatXMomentXActiveBoolToGObjs(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("_mat_x_moment_x_activeBool_to_gObjs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_matCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMomentEnumCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_momentEnumCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwnerVRRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_ownerVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousMatIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_previousMatIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactionsRemaining(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_reactionsRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatusEffectReactions(::BNM::Structures::Mono::Array<::GorillaTag_Reactions::GorillaMaterialReaction_ReactionEntry>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Reactions::GorillaMaterialReaction_ReactionEntry>*> _field = GetClass().GetField(O("_statusEffectReactions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
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
        void PopulateRuntimeLookupArrays() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateRuntimeLookupArrays"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemoveAndReportNulls() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveAndReportNulls"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
