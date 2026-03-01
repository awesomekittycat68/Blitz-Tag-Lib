#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BoingEffector_Params.hpp"
#include "BoingManager_UpdateMode.hpp"

namespace BoingKit {
    struct BoingManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDeltaTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_DeltaTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetFixedDeltaTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_FixedDeltaTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetNumBehaviors() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_NumBehaviors"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetNumCPUFieldSamplers() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_NumCPUFieldSamplers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetNumEffectors() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_NumEffectors"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetNumFields() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_NumFields"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetNumGPUFieldSamplers() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_NumGPUFieldSamplers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetNumReactors() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_NumReactors"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::SphereCollider* GetSharedSphereCollider() {
            static BNM::Method<::SphereCollider*> _method = GetClass().GetMethod(O("get_SharedSphereCollider"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static int GetKEffectorParamsIncrement() {
            static BNM::Field<int> _field = GetClass().GetField(O("kEffectorParamsIncrement"));
            return _field.Get();
        }
        static ::BoingKit::BoingManager_BehaviorRegisterDelegate* GetOnBehaviorRegister() {
            static BNM::Field<::BoingKit::BoingManager_BehaviorRegisterDelegate*> _field = GetClass().GetField(O("OnBehaviorRegister"));
            return _field.Get();
        }
        static ::BoingKit::BoingManager_BehaviorUnregisterDelegate* GetOnBehaviorUnregister() {
            static BNM::Field<::BoingKit::BoingManager_BehaviorUnregisterDelegate*> _field = GetClass().GetField(O("OnBehaviorUnregister"));
            return _field.Get();
        }
        static ::BoingKit::BoingManager_BonesRegisterDelegate* GetOnBonesRegister() {
            static BNM::Field<::BoingKit::BoingManager_BonesRegisterDelegate*> _field = GetClass().GetField(O("OnBonesRegister"));
            return _field.Get();
        }
        static ::BoingKit::BoingManager_BonesUnregisterDelegate* GetOnBonesUnregister() {
            static BNM::Field<::BoingKit::BoingManager_BonesUnregisterDelegate*> _field = GetClass().GetField(O("OnBonesUnregister"));
            return _field.Get();
        }
        static ::BoingKit::BoingManager_EffectorRegisterDelegate* GetOnEffectorRegister() {
            static BNM::Field<::BoingKit::BoingManager_EffectorRegisterDelegate*> _field = GetClass().GetField(O("OnEffectorRegister"));
            return _field.Get();
        }
        static ::BoingKit::BoingManager_EffectorUnregisterDelegate* GetOnEffectorUnregister() {
            static BNM::Field<::BoingKit::BoingManager_EffectorUnregisterDelegate*> _field = GetClass().GetField(O("OnEffectorUnregister"));
            return _field.Get();
        }
        static ::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate* GetOnFieldGPUSamplerUnregister() {
            static BNM::Field<::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*> _field = GetClass().GetField(O("OnFieldGPUSamplerUnregister"));
            return _field.Get();
        }
        static ::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate* GetOnReactorFieldCPUSamplerRegister() {
            static BNM::Field<::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*> _field = GetClass().GetField(O("OnReactorFieldCPUSamplerRegister"));
            return _field.Get();
        }
        static ::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate* GetOnReactorFieldCPUSamplerUnregister() {
            static BNM::Field<::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*> _field = GetClass().GetField(O("OnReactorFieldCPUSamplerUnregister"));
            return _field.Get();
        }
        static ::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate* GetOnReactorFieldGPUSamplerRegister() {
            static BNM::Field<::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*> _field = GetClass().GetField(O("OnReactorFieldGPUSamplerRegister"));
            return _field.Get();
        }
        static ::BoingKit::BoingManager_ReactorFieldRegisterDelegate* GetOnReactorFieldRegister() {
            static BNM::Field<::BoingKit::BoingManager_ReactorFieldRegisterDelegate*> _field = GetClass().GetField(O("OnReactorFieldRegister"));
            return _field.Get();
        }
        static ::BoingKit::BoingManager_ReactorFieldUnregisterDelegate* GetOnReactorFieldUnregister() {
            static BNM::Field<::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*> _field = GetClass().GetField(O("OnReactorFieldUnregister"));
            return _field.Get();
        }
        static ::BoingKit::BoingManager_ReactorRegisterDelegate* GetOnReactorRegister() {
            static BNM::Field<::BoingKit::BoingManager_ReactorRegisterDelegate*> _field = GetClass().GetField(O("OnReactorRegister"));
            return _field.Get();
        }
        static ::BoingKit::BoingManager_ReactorUnregisterDelegate* GetOnReactorUnregister() {
            static BNM::Field<::BoingKit::BoingManager_ReactorUnregisterDelegate*> _field = GetClass().GetField(O("OnReactorUnregister"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BoingKit::BoingEffector_Params>* GetSAEffectorParams() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BoingKit::BoingEffector_Params>*> _field = GetClass().GetField(O("s_aEffectorParams"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingBehavior*>* GetSBehaviorMap() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingBehavior*>*> _field = GetClass().GetField(O("s_behaviorMap"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingBones*>* GetSBonesMap() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingBones*>*> _field = GetClass().GetField(O("s_bonesMap"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactorFieldCPUSampler*>* GetSCpuSamplerMap() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactorFieldCPUSampler*>*> _field = GetClass().GetField(O("s_cpuSamplerMap"));
            return _field.Get();
        }
        static float GetSDeltaTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("s_deltaTime"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingEffector*>* GetSEffectorMap() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingEffector*>*> _field = GetClass().GetField(O("s_effectorMap"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetSEffectorParamsBuffer() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("s_effectorParamsBuffer"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, int>* GetSEffectorParamsIndexMap() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("s_effectorParamsIndexMap"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BoingKit::BoingEffector_Params>* GetSEffectorParamsList() {
            static BNM::Field<::BNM::Structures::Mono::List<::BoingKit::BoingEffector_Params>*> _field = GetClass().GetField(O("s_effectorParamsList"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactorField*>* GetSFieldMap() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactorField*>*> _field = GetClass().GetField(O("s_fieldMap"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactorFieldGPUSampler*>* GetSGpuSamplerMap() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactorFieldGPUSampler*>*> _field = GetClass().GetField(O("s_gpuSamplerMap"));
            return _field.Get();
        }
        static ::GameObject* GetSManagerGo() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("s_managerGo"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactor*>* GetSReactorMap() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactor*>*> _field = GetClass().GetField(O("s_reactorMap"));
            return _field.Get();
        }
        static bool GetUseAsynchronousJobs() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseAsynchronousJobs"));
            return _field.Get();
        }
        static void SetOnBehaviorRegister(::BoingKit::BoingManager_BehaviorRegisterDelegate* value) {
            static BNM::Field<::BoingKit::BoingManager_BehaviorRegisterDelegate*> _field = GetClass().GetField(O("OnBehaviorRegister"));
            _field.Set(value);
        }
        static void SetOnBehaviorUnregister(::BoingKit::BoingManager_BehaviorUnregisterDelegate* value) {
            static BNM::Field<::BoingKit::BoingManager_BehaviorUnregisterDelegate*> _field = GetClass().GetField(O("OnBehaviorUnregister"));
            _field.Set(value);
        }
        static void SetOnBonesRegister(::BoingKit::BoingManager_BonesRegisterDelegate* value) {
            static BNM::Field<::BoingKit::BoingManager_BonesRegisterDelegate*> _field = GetClass().GetField(O("OnBonesRegister"));
            _field.Set(value);
        }
        static void SetOnBonesUnregister(::BoingKit::BoingManager_BonesUnregisterDelegate* value) {
            static BNM::Field<::BoingKit::BoingManager_BonesUnregisterDelegate*> _field = GetClass().GetField(O("OnBonesUnregister"));
            _field.Set(value);
        }
        static void SetOnEffectorRegister(::BoingKit::BoingManager_EffectorRegisterDelegate* value) {
            static BNM::Field<::BoingKit::BoingManager_EffectorRegisterDelegate*> _field = GetClass().GetField(O("OnEffectorRegister"));
            _field.Set(value);
        }
        static void SetOnEffectorUnregister(::BoingKit::BoingManager_EffectorUnregisterDelegate* value) {
            static BNM::Field<::BoingKit::BoingManager_EffectorUnregisterDelegate*> _field = GetClass().GetField(O("OnEffectorUnregister"));
            _field.Set(value);
        }
        static void SetOnFieldGPUSamplerUnregister(::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate* value) {
            static BNM::Field<::BoingKit::BoingManager_ReactorFieldGPUSamplerUnregisterDelegate*> _field = GetClass().GetField(O("OnFieldGPUSamplerUnregister"));
            _field.Set(value);
        }
        static void SetOnReactorFieldCPUSamplerRegister(::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate* value) {
            static BNM::Field<::BoingKit::BoingManager_ReactorFieldCPUSamplerRegisterDelegate*> _field = GetClass().GetField(O("OnReactorFieldCPUSamplerRegister"));
            _field.Set(value);
        }
        static void SetOnReactorFieldCPUSamplerUnregister(::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate* value) {
            static BNM::Field<::BoingKit::BoingManager_ReactorFieldCPUSamplerUnregisterDelegate*> _field = GetClass().GetField(O("OnReactorFieldCPUSamplerUnregister"));
            _field.Set(value);
        }
        static void SetOnReactorFieldGPUSamplerRegister(::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate* value) {
            static BNM::Field<::BoingKit::BoingManager_ReactorFieldGPUSamplerRegisterDelegate*> _field = GetClass().GetField(O("OnReactorFieldGPUSamplerRegister"));
            _field.Set(value);
        }
        static void SetOnReactorFieldRegister(::BoingKit::BoingManager_ReactorFieldRegisterDelegate* value) {
            static BNM::Field<::BoingKit::BoingManager_ReactorFieldRegisterDelegate*> _field = GetClass().GetField(O("OnReactorFieldRegister"));
            _field.Set(value);
        }
        static void SetOnReactorFieldUnregister(::BoingKit::BoingManager_ReactorFieldUnregisterDelegate* value) {
            static BNM::Field<::BoingKit::BoingManager_ReactorFieldUnregisterDelegate*> _field = GetClass().GetField(O("OnReactorFieldUnregister"));
            _field.Set(value);
        }
        static void SetOnReactorRegister(::BoingKit::BoingManager_ReactorRegisterDelegate* value) {
            static BNM::Field<::BoingKit::BoingManager_ReactorRegisterDelegate*> _field = GetClass().GetField(O("OnReactorRegister"));
            _field.Set(value);
        }
        static void SetOnReactorUnregister(::BoingKit::BoingManager_ReactorUnregisterDelegate* value) {
            static BNM::Field<::BoingKit::BoingManager_ReactorUnregisterDelegate*> _field = GetClass().GetField(O("OnReactorUnregister"));
            _field.Set(value);
        }
        static void SetSAEffectorParams(::BNM::Structures::Mono::Array<::BoingKit::BoingEffector_Params>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BoingKit::BoingEffector_Params>*> _field = GetClass().GetField(O("s_aEffectorParams"));
            _field.Set(value);
        }
        static void SetSBehaviorMap(::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingBehavior*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingBehavior*>*> _field = GetClass().GetField(O("s_behaviorMap"));
            _field.Set(value);
        }
        static void SetSBonesMap(::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingBones*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingBones*>*> _field = GetClass().GetField(O("s_bonesMap"));
            _field.Set(value);
        }
        static void SetSCpuSamplerMap(::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactorFieldCPUSampler*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactorFieldCPUSampler*>*> _field = GetClass().GetField(O("s_cpuSamplerMap"));
            _field.Set(value);
        }
        static void SetSDeltaTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("s_deltaTime"));
            _field.Set(value);
        }
        static void SetSEffectorMap(::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingEffector*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingEffector*>*> _field = GetClass().GetField(O("s_effectorMap"));
            _field.Set(value);
        }
        static void SetSEffectorParamsBuffer(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("s_effectorParamsBuffer"));
            _field.Set(value);
        }
        static void SetSEffectorParamsIndexMap(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("s_effectorParamsIndexMap"));
            _field.Set(value);
        }
        static void SetSEffectorParamsList(::BNM::Structures::Mono::List<::BoingKit::BoingEffector_Params>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BoingKit::BoingEffector_Params>*> _field = GetClass().GetField(O("s_effectorParamsList"));
            _field.Set(value);
        }
        static void SetSFieldMap(::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactorField*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactorField*>*> _field = GetClass().GetField(O("s_fieldMap"));
            _field.Set(value);
        }
        static void SetSGpuSamplerMap(::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactorFieldGPUSampler*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactorFieldGPUSampler*>*> _field = GetClass().GetField(O("s_gpuSamplerMap"));
            _field.Set(value);
        }
        static void SetSManagerGo(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("s_managerGo"));
            _field.Set(value);
        }
        static void SetSReactorMap(::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BoingKit::BoingReactor*>*> _field = GetClass().GetField(O("s_reactorMap"));
            _field.Set(value);
        }
        static void DispatchReactorFieldCompute() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DispatchReactorFieldCompute"));
            _m.Call();
        }
        static void Execute(::BoingKit::BoingManager_UpdateMode updateMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"), {"updateMode"});
            _m.Call(updateMode);
        }
        static void ExecuteBehaviors(::BoingKit::BoingManager_UpdateMode updateMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteBehaviors"), {"updateMode"});
            _m.Call(updateMode);
        }
        static void ExecuteBones(::BoingKit::BoingManager_UpdateMode updateMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteBones"), {"updateMode"});
            _m.Call(updateMode);
        }
        static void ExecuteReactors(::BoingKit::BoingManager_UpdateMode updateMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteReactors"), {"updateMode"});
            _m.Call(updateMode);
        }
        static void* get_Behaviors() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Behaviors"));
            return _m.Call();
        }
        static float get_DeltaTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_DeltaTime"));
            return _m.Call();
        }
        static void* get_Effectors() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Effectors"));
            return _m.Call();
        }
        static float get_FixedDeltaTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_FixedDeltaTime"));
            return _m.Call();
        }
        static int get_NumBehaviors() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_NumBehaviors"));
            return _m.Call();
        }
        static int get_NumCPUFieldSamplers() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_NumCPUFieldSamplers"));
            return _m.Call();
        }
        static int get_NumEffectors() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_NumEffectors"));
            return _m.Call();
        }
        static int get_NumFields() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_NumFields"));
            return _m.Call();
        }
        static int get_NumGPUFieldSamplers() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_NumGPUFieldSamplers"));
            return _m.Call();
        }
        static int get_NumReactors() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_NumReactors"));
            return _m.Call();
        }
        static void* get_ReactorFieldCPUSamlers() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_ReactorFieldCPUSamlers"));
            return _m.Call();
        }
        static void* get_ReactorFieldGPUSampler() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_ReactorFieldGPUSampler"));
            return _m.Call();
        }
        static void* get_ReactorFields() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_ReactorFields"));
            return _m.Call();
        }
        static void* get_Reactors() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Reactors"));
            return _m.Call();
        }
        static ::SphereCollider* get_SharedSphereCollider() {
            static BNM::Method<::SphereCollider*> _m = GetClass().GetMethod(O("get_SharedSphereCollider"));
            return _m.Call();
        }
        static void PostUnregisterBehavior() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostUnregisterBehavior"));
            _m.Call();
        }
        static void PostUnregisterBones() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostUnregisterBones"));
            _m.Call();
        }
        static void PostUnregisterEffectorReactor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostUnregisterEffectorReactor"));
            _m.Call();
        }
        static void PreRegisterBehavior() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PreRegisterBehavior"));
            _m.Call();
        }
        static void PreRegisterBones() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PreRegisterBones"));
            _m.Call();
        }
        static void PreRegisterEffectorReactor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PreRegisterEffectorReactor"));
            _m.Call();
        }
        static void PullBehaviorResults(::BoingKit::BoingManager_UpdateMode updateMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PullBehaviorResults"), {"updateMode"});
            _m.Call(updateMode);
        }
        static void PullBonesResults(::BoingKit::BoingManager_UpdateMode updateMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PullBonesResults"), {"updateMode"});
            _m.Call(updateMode);
        }
        static void PullReactorResults(::BoingKit::BoingManager_UpdateMode updateMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PullReactorResults"), {"updateMode"});
            _m.Call(updateMode);
        }
        static void RefreshEffectorParams() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshEffectorParams"));
            _m.Call();
        }
        static void Register(::BoingKit::BoingBehavior* behavior) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"behavior"});
            _m.Call(behavior);
        }
        static void Register(::BoingKit::BoingEffector* effector) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"effector"});
            _m.Call(effector);
        }
        static void Register(::BoingKit::BoingReactor* reactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"reactor"});
            _m.Call(reactor);
        }
        static void Register(::BoingKit::BoingReactorField* field) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"field"});
            _m.Call(field);
        }
        static void Register(::BoingKit::BoingReactorFieldCPUSampler* sampler) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"sampler"});
            _m.Call(sampler);
        }
        static void Register(::BoingKit::BoingReactorFieldGPUSampler* sampler) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"sampler"});
            _m.Call(sampler);
        }
        static void Register(::BoingKit::BoingBones* bones) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"bones"});
            _m.Call(bones);
        }
        static void RestoreBehaviors() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestoreBehaviors"));
            _m.Call();
        }
        static void RestoreBones() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestoreBones"));
            _m.Call();
        }
        static void RestoreReactors() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestoreReactors"));
            _m.Call();
        }
        static void Unregister(::BoingKit::BoingBehavior* behavior) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"behavior"});
            _m.Call(behavior);
        }
        static void Unregister(::BoingKit::BoingEffector* effector) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"effector"});
            _m.Call(effector);
        }
        static void Unregister(::BoingKit::BoingReactor* reactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"reactor"});
            _m.Call(reactor);
        }
        static void Unregister(::BoingKit::BoingReactorField* field) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"field"});
            _m.Call(field);
        }
        static void Unregister(::BoingKit::BoingReactorFieldCPUSampler* sampler) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"sampler"});
            _m.Call(sampler);
        }
        static void Unregister(::BoingKit::BoingReactorFieldGPUSampler* sampler) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"sampler"});
            _m.Call(sampler);
        }
        static void Unregister(::BoingKit::BoingBones* bones) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"bones"});
            _m.Call(bones);
        }
        static void ValidateManager() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateManager"));
            _m.Call();
        }
    };
}
