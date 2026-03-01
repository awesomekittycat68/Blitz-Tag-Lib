#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BoingEffector_Params.hpp"
#include "BoingManager_UpdateMode.hpp"

namespace BoingKit {
    struct BoingWorkSynchronous : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingWorkSynchronous");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void ExecuteBehaviors(::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingBehavior*>* behaviorMap, ::BoingKit::BoingManager_UpdateMode updateMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteBehaviors"), {"behaviorMap", "updateMode"});
            _m.Call(behaviorMap, updateMode);
        }
        static void ExecuteBones(::BNM::Structures::Mono::Array<::BoingKit::BoingEffector_Params>* aEffectorParams, ::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingBones*>* bonesMap, ::BoingKit::BoingManager_UpdateMode updateMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteBones"), {"aEffectorParams", "bonesMap", "updateMode"});
            _m.Call(aEffectorParams, bonesMap, updateMode);
        }
        static void ExecuteReactors(::BNM::Structures::Mono::Array<::BoingKit::BoingEffector_Params>* aEffectorParams, ::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactor*>* reactorMap, ::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactorField*>* fieldMap, ::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactorFieldCPUSampler*>* cpuSamplerMap, ::BoingKit::BoingManager_UpdateMode updateMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteReactors"), {"aEffectorParams", "reactorMap", "fieldMap", "cpuSamplerMap", "updateMode"});
            _m.Call(aEffectorParams, reactorMap, fieldMap, cpuSamplerMap, updateMode);
        }
        static void PullBonesResults(::BNM::Structures::Mono::Array<::BoingKit::BoingEffector_Params>* aEffectorParams, ::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingBones*>* bonesMap, ::BoingKit::BoingManager_UpdateMode updateMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PullBonesResults"), {"aEffectorParams", "bonesMap", "updateMode"});
            _m.Call(aEffectorParams, bonesMap, updateMode);
        }
    };
}
