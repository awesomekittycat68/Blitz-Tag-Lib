#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BoingEffector_Params.hpp"
#include "BoingManager_UpdateMode.hpp"
#include "BoingWork_Output.hpp"
#include "BoingWork_Params.hpp"

namespace BoingKit {
    struct BoingWorkAsynchronous : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingWorkAsynchronous");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void* GetSABehaviorOutput() {
            static BNM::Field<void*> _field = GetClass().GetField(O("s_aBehaviorOutput"));
            return _field.Get();
        }
        static void* GetSABehaviorParams() {
            static BNM::Field<void*> _field = GetClass().GetField(O("s_aBehaviorParams"));
            return _field.Get();
        }
        static void* GetSAEffectors() {
            static BNM::Field<void*> _field = GetClass().GetField(O("s_aEffectors"));
            return _field.Get();
        }
        static void* GetSAReactorExecOutput() {
            static BNM::Field<void*> _field = GetClass().GetField(O("s_aReactorExecOutput"));
            return _field.Get();
        }
        static void* GetSAReactorExecParams() {
            static BNM::Field<void*> _field = GetClass().GetField(O("s_aReactorExecParams"));
            return _field.Get();
        }
        static bool GetSBehaviorJobNeedsGather() {
            static BNM::Field<bool> _field = GetClass().GetField(O("s_behaviorJobNeedsGather"));
            return _field.Get();
        }
        static void* GetSHBehaviorJob() {
            static BNM::Field<void*> _field = GetClass().GetField(O("s_hBehaviorJob"));
            return _field.Get();
        }
        static void* GetSHReactorJob() {
            static BNM::Field<void*> _field = GetClass().GetField(O("s_hReactorJob"));
            return _field.Get();
        }
        static bool GetSReactorJobNeedsGather() {
            static BNM::Field<bool> _field = GetClass().GetField(O("s_reactorJobNeedsGather"));
            return _field.Get();
        }
        static void SetSABehaviorOutput(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("s_aBehaviorOutput"));
            _field.Set(value);
        }
        static void SetSABehaviorParams(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("s_aBehaviorParams"));
            _field.Set(value);
        }
        static void SetSAEffectors(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("s_aEffectors"));
            _field.Set(value);
        }
        static void SetSAReactorExecOutput(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("s_aReactorExecOutput"));
            _field.Set(value);
        }
        static void SetSAReactorExecParams(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("s_aReactorExecParams"));
            _field.Set(value);
        }
        static void SetSBehaviorJobNeedsGather(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("s_behaviorJobNeedsGather"));
            _field.Set(value);
        }
        static void SetSHBehaviorJob(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("s_hBehaviorJob"));
            _field.Set(value);
        }
        static void SetSHReactorJob(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("s_hReactorJob"));
            _field.Set(value);
        }
        static void SetSReactorJobNeedsGather(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("s_reactorJobNeedsGather"));
            _field.Set(value);
        }
        static void ExecuteBehaviors(::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingBehavior*>* behaviorMap, ::BoingKit::BoingManager_UpdateMode updateMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteBehaviors"), {"behaviorMap", "updateMode"});
            _m.Call(behaviorMap, updateMode);
        }
        static void ExecuteBones(::BNM::Structures::Mono::Array<::BoingKit::BoingEffector_Params>* aEffectorParams, ::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingBones*>* bonesMap, ::BoingKit::BoingManager_UpdateMode updateMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteBones"), {"aEffectorParams", "bonesMap", "updateMode"});
            _m.Call(aEffectorParams, bonesMap, updateMode);
        }
        static void ExecuteReactors(::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingEffector*>* effectorMap, ::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactor*>* reactorMap, ::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactorField*>* fieldMap, ::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactorFieldCPUSampler*>* cpuSamplerMap, ::BoingKit::BoingManager_UpdateMode updateMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteReactors"), {"effectorMap", "reactorMap", "fieldMap", "cpuSamplerMap", "updateMode"});
            _m.Call(effectorMap, reactorMap, fieldMap, cpuSamplerMap, updateMode);
        }
        static void PostUnregisterBehaviorCleanUp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostUnregisterBehaviorCleanUp"));
            _m.Call();
        }
        static void PostUnregisterEffectorReactorCleanUp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostUnregisterEffectorReactorCleanUp"));
            _m.Call();
        }
        static void PullBonesResults(::BNM::Structures::Mono::Array<::BoingKit::BoingEffector_Params>* aEffectorParams, ::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingBones*>* bonesMap, ::BoingKit::BoingManager_UpdateMode updateMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PullBonesResults"), {"aEffectorParams", "bonesMap", "updateMode"});
            _m.Call(aEffectorParams, bonesMap, updateMode);
        }
    };
}
