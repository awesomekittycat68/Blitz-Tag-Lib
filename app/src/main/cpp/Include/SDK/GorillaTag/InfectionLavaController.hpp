#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "InfectionLavaController_LavaSyncData.hpp"
#include "InfectionLavaController_RisingLavaState.hpp"
#include "../GorillaTag_GuidedRefs/GuidedRefReceiverArrayInfo.hpp"
#include "../GorillaTag_GuidedRefs/GuidedRefReceiverFieldInfo.hpp"

namespace GorillaTag {
    struct InfectionLavaController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "InfectionLavaController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaTag::InfectionLavaController* get_Instance() {
            static BNM::Method<::GorillaTag::InfectionLavaController*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GorillaTag::InfectionLavaController* GetInstance() {
            static BNM::Field<::GorillaTag::InfectionLavaController*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr const char* lavaRockProjectileTag = "LavaRockProjectile";
        bool GetInCompetitiveQueue() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InCompetitiveQueue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaTag::InfectionLavaController* GetInstance_pg() {
            static BNM::Method<::GorillaTag::InfectionLavaController*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetLavaCurrentlyActivated() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_LavaCurrentlyActivated"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetPlayerCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PlayerCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetSurfaceCenter() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_SurfaceCenter"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetActivationProgessSmooth() {
            static BNM::Field<float> _field = GetClass().GetField(O("activationProgessSmooth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetActivationVotePercentageCompetitiveQueue() {
            static BNM::Field<float> _field = GetClass().GetField(O("activationVotePercentageCompetitiveQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetActivationVotePercentageDefaultQueue() {
            static BNM::Field<float> _field = GetClass().GetField(O("activationVotePercentageDefaultQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetCurrentTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("currentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugLavaActivationVotes() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugLavaActivationVotes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDrainTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("drainTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEruptTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("eruptTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFullTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("fullTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGuidedRefsFullyResolved() {
            static BNM::Field<bool> _field = GetClass().GetField(O("guidedRefsFullyResolved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaTag::InfectionLavaController* GetInstance_f() {
            static BNM::Field<::GorillaTag::InfectionLavaController*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        float GetLagResolutionLavaProgressPerSecond() {
            static BNM::Field<float> _field = GetClass().GetField(O("lagResolutionLavaProgressPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastTagSelfRPCTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastTagSelfRPCTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLavaActivationDrainRateVsPlayerCount() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lavaActivationDrainRateVsPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLavaActivationEndPos() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lavaActivationEndPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo GetLavaActivationEndPosGRef() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("lavaActivationEndPos_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Gradient* GetLavaActivationGradient() {
            static BNM::Field<::Gradient*> _field = GetClass().GetField(O("lavaActivationGradient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SlingshotProjectileHitNotifier* GetLavaActivationProjectileHitNotifier() {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier*> _field = GetClass().GetField(O("lavaActivationProjectileHitNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo GetLavaActivationProjectileHitNotifierGRef() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("lavaActivationProjectileHitNotifier_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetLavaActivationRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("lavaActivationRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo GetLavaActivationRendererGRef() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("lavaActivationRenderer_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLavaActivationRockProgressVsPlayerCount() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lavaActivationRockProgressVsPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLavaActivationStartPos() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lavaActivationStartPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo GetLavaActivationStartPosGRef() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("lavaActivationStartPos_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLavaActivationVisualMovementProgressPerSecond() {
            static BNM::Field<float> _field = GetClass().GetField(O("lavaActivationVisualMovementProgressPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLavaActivationVoteCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("lavaActivationVoteCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetLavaActivationVotePlayerIds() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("lavaActivationVotePlayerIds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLavaMeshMaxScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("lavaMeshMaxScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLavaMeshMinScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("lavaMeshMinScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLavaMeshTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lavaMeshTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo GetLavaMeshTransformGRef() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("lavaMeshTransform_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLavaProgressAnimationCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lavaProgressAnimationCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLavaProgressLinear() {
            static BNM::Field<float> _field = GetClass().GetField(O("lavaProgressLinear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLavaProgressSmooth() {
            static BNM::Field<float> _field = GetClass().GetField(O("lavaProgressSmooth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLavaScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("lavaScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLavaSurfacePlaneTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lavaSurfacePlaneTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo GetLavaSurfacePlaneTransformGRef() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("lavaSurfacePlaneTransform_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume* GetLavaVolume() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("lavaVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo GetLavaVolumeGRef() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("lavaVolume_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLocalLagLavaProgressOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("localLagLavaProgressOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaSerializerScene* GetNetworkObject() {
            static BNM::Field<::GlobalNamespace::GorillaSerializerScene*> _field = GetClass().GetField(O("networkObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetPrevTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("prevTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::InfectionLavaController_LavaSyncData GetReliableState() {
            static BNM::Field<::GorillaTag::InfectionLavaController_LavaSyncData> _field = GetClass().GetField(O("reliableState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRiseTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("riseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag::VolcanoEffects*>* GetVolcanoEffects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag::VolcanoEffects*>*> _field = GetClass().GetField(O("volcanoEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_GuidedRefs::GuidedRefReceiverArrayInfo GetVolcanoEffectsGRefs() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverArrayInfo> _field = GetClass().GetField(O("volcanoEffects_gRefs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivationProgessSmooth(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("activationProgessSmooth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivationVotePercentageCompetitiveQueue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("activationVotePercentageCompetitiveQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivationVotePercentageDefaultQueue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("activationVotePercentageDefaultQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("currentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugLavaActivationVotes(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugLavaActivationVotes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrainTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("drainTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEruptTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("eruptTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFullTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fullTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuidedRefsFullyResolved(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("guidedRefsFullyResolved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaTag::InfectionLavaController* value) {
            static BNM::Field<::GorillaTag::InfectionLavaController*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetLagResolutionLavaProgressPerSecond(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lagResolutionLavaProgressPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTagSelfRPCTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastTagSelfRPCTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaActivationDrainRateVsPlayerCount(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lavaActivationDrainRateVsPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaActivationEndPos(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lavaActivationEndPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaActivationEndPosGRef(::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("lavaActivationEndPos_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaActivationGradient(::Gradient* value) {
            static BNM::Field<::Gradient*> _field = GetClass().GetField(O("lavaActivationGradient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaActivationProjectileHitNotifier(::GlobalNamespace::SlingshotProjectileHitNotifier* value) {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier*> _field = GetClass().GetField(O("lavaActivationProjectileHitNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaActivationProjectileHitNotifierGRef(::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("lavaActivationProjectileHitNotifier_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaActivationRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("lavaActivationRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaActivationRendererGRef(::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("lavaActivationRenderer_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaActivationRockProgressVsPlayerCount(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lavaActivationRockProgressVsPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaActivationStartPos(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lavaActivationStartPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaActivationStartPosGRef(::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("lavaActivationStartPos_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaActivationVisualMovementProgressPerSecond(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lavaActivationVisualMovementProgressPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaActivationVoteCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lavaActivationVoteCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaActivationVotePlayerIds(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("lavaActivationVotePlayerIds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaMeshMaxScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lavaMeshMaxScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaMeshMinScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lavaMeshMinScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaMeshTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lavaMeshTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaMeshTransformGRef(::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("lavaMeshTransform_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaProgressAnimationCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lavaProgressAnimationCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaProgressLinear(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lavaProgressLinear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaProgressSmooth(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lavaProgressSmooth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lavaScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaSurfacePlaneTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lavaSurfacePlaneTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaSurfacePlaneTransformGRef(::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("lavaSurfacePlaneTransform_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaVolume(::GorillaLocomotion_Swimming::WaterVolume* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("lavaVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaVolumeGRef(::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("lavaVolume_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalLagLavaProgressOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("localLagLavaProgressOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkObject(::GlobalNamespace::GorillaSerializerScene* value) {
            static BNM::Field<::GlobalNamespace::GorillaSerializerScene*> _field = GetClass().GetField(O("networkObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("prevTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReliableState(::GorillaTag::InfectionLavaController_LavaSyncData value) {
            static BNM::Field<::GorillaTag::InfectionLavaController_LavaSyncData> _field = GetClass().GetField(O("reliableState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRiseTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("riseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolcanoEffects(::BNM::Structures::Mono::Array<::GorillaTag::VolcanoEffects*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag::VolcanoEffects*>*> _field = GetClass().GetField(O("volcanoEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolcanoEffectsGRefs(::GorillaTag_GuidedRefs::GuidedRefReceiverArrayInfo value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverArrayInfo> _field = GetClass().GetField(O("volcanoEffects_gRefs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddLavaRock(int playerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddLavaRock"), {"playerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerId);
        }
        void AddVoteForVolcanoActivation(int playerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddVoteForVolcanoActivation"), {"playerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerId);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckLocalPlayerAgainstLava(double currentTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckLocalPlayerAgainstLava"), {"currentTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentTime);
        }
        bool get_InCompetitiveQueue() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InCompetitiveQueue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GorillaTag::InfectionLavaController* get_Instance_1() {
            static BNM::Method<::GorillaTag::InfectionLavaController*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        bool get_LavaCurrentlyActivated() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_LavaCurrentlyActivated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_LavaPlane() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_LavaPlane"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PlayerCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PlayerCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_SurfaceCenter() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_SurfaceCenter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void IfNullThenLogAndDisableSelf(::BNM::IL2CPP::Il2CppObject* obj, ::BNM::Structures::Mono::String* fieldName, int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IfNullThenLogAndDisableSelf"), {"obj", "fieldName", "index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj, fieldName, index);
        }
        void JumpToState(::GorillaTag::InfectionLavaController_RisingLavaState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JumpToState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void LocalPlayerInLava(double currentTime, bool enteredLavaThisFrame) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalPlayerInLava"), {"currentTime", "enteredLavaThisFrame"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentTime, enteredLavaThisFrame);
        }
        void OnActivationLavaProjectileHit(::GlobalNamespace::SlingshotProjectile* projectile, ::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnActivationLavaProjectileHit"), {"projectile", "collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, collision);
        }
        void OnColliderEnteredLava(::GorillaLocomotion_Swimming::WaterVolume* volume, ::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnColliderEnteredLava"), {"volume", "collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(volume, collider);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
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
        void OnGuidedRefTargetDestroyed(int fieldId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGuidedRefTargetDestroyed"), {"fieldId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fieldId);
        }
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer* otherNetPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"otherNetPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherNetPlayer);
        }
        void RemoveVoteForVolcanoActivation(int playerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveVoteForVolcanoActivation"), {"playerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerId);
        }
        void UpdateLava(float fillProgress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateLava"), {"fillProgress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fillProgress);
        }
        void UpdateLocalState(double currentTime, ::GorillaTag::InfectionLavaController_LavaSyncData syncData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateLocalState"), {"currentTime", "syncData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentTime, syncData);
        }
        void UpdateReliableState(double currentTime, ::GorillaTag::InfectionLavaController_LavaSyncData& syncData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateReliableState"), {"currentTime", "syncData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentTime, &syncData);
        }
        void UpdateVolcanoActivationLava(float activationProgress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateVolcanoActivationLava"), {"activationProgress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(activationProgress);
        }
        void VerifyReferences() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VerifyReferences"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
