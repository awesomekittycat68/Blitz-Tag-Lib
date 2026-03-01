#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ProximityEffect : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProximityEffect");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* SHOW_CONDITION = "@centerTransform != null";
        static constexpr const char* SHOW_ROTATE_CONDITION = "@centerTransform != null && rotateCT";
        static constexpr const char* SHOW_SCALE_CONDITION = "@centerTransform != null && scaleCT";
        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetAnyAboveThreshold() {
            static BNM::Field<bool> _field = GetClass().GetField(O("anyAboveThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCenterTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("centerTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ContinuousPropertyArray* GetContinuousProperties() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyArray*> _field = GetClass().GetField(O("continuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetDefaultLeftHandLocalEuler() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("defaultLeftHandLocalEuler"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetDefaultLeftHandLocalPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("defaultLeftHandLocalPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableVisualization() {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableVisualization"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::ProximityEffect_ProximityEvent*>* GetEvents() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ProximityEffect_ProximityEvent*>*> _field = GetClass().GetField(O("events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLeftTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumTriggers() {
            static BNM::Field<int> _field = GetClass().GetField(O("numTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnScoreCalculated() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onScoreCalculated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPositionCTLerpSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("positionCTLerpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetReceivers() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("receivers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRightTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRotateCT() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rotateCT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotationCTLerpSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationCTLerpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetScaleCT() {
            static BNM::Field<bool> _field = GetClass().GetField(O("scaleCT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScaleCTLerpSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleCTLerpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScaleCTMult() {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleCTMult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ProximityEffectScoreCurvesSO* GetScoreCurves() {
            static BNM::Field<::GlobalNamespace::ProximityEffectScoreCurvesSO*> _field = GetClass().GetField(O("scoreCurves"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTriggersToActivate() {
            static BNM::Field<int> _field = GetClass().GetField(O("triggersToActivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVisualizationLineThickness() {
            static BNM::Field<float> _field = GetClass().GetField(O("visualizationLineThickness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetVisualizationMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("visualizationMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LineRenderer* GetVisualizer() {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("visualizer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnyAboveThreshold(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("anyAboveThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCenterTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("centerTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetContinuousProperties(::GorillaTag_Cosmetics::ContinuousPropertyArray* value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyArray*> _field = GetClass().GetField(O("continuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultLeftHandLocalEuler(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("defaultLeftHandLocalEuler"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultLeftHandLocalPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("defaultLeftHandLocalPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableVisualization(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableVisualization"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEvents(::BNM::Structures::Mono::Array<::GlobalNamespace::ProximityEffect_ProximityEvent*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ProximityEffect_ProximityEvent*>*> _field = GetClass().GetField(O("events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("leftTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumTriggers(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnScoreCalculated(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onScoreCalculated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionCTLerpSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("positionCTLerpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReceivers(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("receivers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rightTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotateCT(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rotateCT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationCTLerpSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationCTLerpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleCT(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("scaleCT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleCTLerpSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleCTLerpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleCTMult(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleCTMult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreCurves(::GlobalNamespace::ProximityEffectScoreCurvesSO* value) {
            static BNM::Field<::GlobalNamespace::ProximityEffectScoreCurvesSO*> _field = GetClass().GetField(O("scoreCurves"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggersToActivate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("triggersToActivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisualizationLineThickness(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("visualizationLineThickness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisualizationMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("visualizationMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisualizer(::LineRenderer* value) {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("visualizer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        void AddReceiver(TP0 receiver) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddReceiver"), {"receiver"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(receiver);
        }
        void AddTrigger() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddTrigger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CalculateProximityScores() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalculateProximityScores"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CalculateProximityScores(float& distance, float& alignment, float& parallel, ::BNM::Structures::Unity::Vector3& midpoint) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalculateProximityScores"), {"distance", "alignment", "parallel", "midpoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&distance, &alignment, &parallel, &midpoint);
        }
        void CalculateProximityScores(bool drawGizmos, float& distance, float& alignment, float& parallel, ::BNM::Structures::Unity::Vector3& midpoint) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalculateProximityScores"), {"drawGizmos", "distance", "alignment", "parallel", "midpoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(drawGizmos, &distance, &alignment, &parallel, &midpoint);
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void MoveTransform(::Transform* target, float score, ::BNM::Structures::Unity::Vector3 midpoint) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveTransform"), {"target", "score", "midpoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target, score, midpoint);
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
        template <typename TP0 = void*>
        void RemoveReceiver(TP0 receiver) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveReceiver"), {"receiver"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(receiver);
        }
        void RemoveTrigger() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveTrigger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void StartCalculating() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartCalculating"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopCalculating() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopCalculating"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
