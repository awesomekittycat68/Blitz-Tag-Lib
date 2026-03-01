#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SizeManager_SizeChangerType.hpp"

namespace GlobalNamespace {
    struct SizeManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SizeManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float returnToNormalEasing = 0.33f;
        float GetCurrentScale() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_currentScale"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCurrentSizeLayerMaskValue() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_currentSizeLayerMaskValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentSizeLayerMaskValue(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_currentSizeLayerMaskValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetBuildInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("buildInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<float>* GetInitLineScalar() {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("initLineScalar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLarge() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLarge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsSmall() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSmall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLargeThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("largeThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::LineRenderer*>* GetLineRenderers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::LineRenderer*>*> _field = GetClass().GetField(O("lineRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMagnitudeThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("magnitudeThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetMainCameraTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("mainCameraTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SizeManager_SizeChangerType GetMyType() {
            static BNM::Field<::GlobalNamespace::SizeManager_SizeChangerType> _field = GetClass().GetField(O("myType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("rate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSmallThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("smallThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion::GTPlayer* GetTargetPlayer() {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("targetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetTargetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("targetRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SizeChanger*>* GetTouchingChangers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SizeChanger*>*> _field = GetClass().GetField(O("touchingChangers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuildInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("buildInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitLineScalar(::BNM::Structures::Mono::List<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("initLineScalar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLarge(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLarge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsSmall(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSmall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLargeThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("largeThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineRenderers(::BNM::Structures::Mono::Array<::LineRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::LineRenderer*>*> _field = GetClass().GetField(O("lineRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMagnitudeThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("magnitudeThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainCameraTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("mainCameraTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyType(::GlobalNamespace::SizeManager_SizeChangerType value) {
            static BNM::Field<::GlobalNamespace::SizeManager_SizeChangerType> _field = GetClass().GetField(O("myType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmallThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("smallThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetPlayer(::GorillaLocomotion::GTPlayer* value) {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("targetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("targetRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTouchingChangers(::BNM::Structures::Mono::List<::GlobalNamespace::SizeChanger*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SizeChanger*>*> _field = GetClass().GetField(O("touchingChangers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BuildInitialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildInitialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckSizeChangeEvents(float newSize) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckSizeChangeEvents"), {"newSize"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newSize);
        }
        void CollectLineRenderers(::GameObject* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CollectLineRenderers"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        ::GlobalNamespace::SizeChanger* ControllingChanger(::Transform* t) {
            static BNM::Method<::GlobalNamespace::SizeChanger*> _m = GetClass().GetMethod(O("ControllingChanger"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t);
        }
        float get_currentScale() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_currentScale"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_currentSizeLayerMaskValue() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_currentSizeLayerMaskValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InvokeFixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeFixedUpdate"));
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
        float ScaleFromChanger(::GlobalNamespace::SizeChanger* sC, ::Transform* t, float deltaTime) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ScaleFromChanger"), {"sC", "t", "deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sC, t, deltaTime);
        }
        void set_currentSizeLayerMaskValue(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_currentSizeLayerMaskValue"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        float SizeOverTime(float targetSize, float easing, float deltaTime) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("SizeOverTime"), {"targetSize", "easing", "deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(targetSize, easing, deltaTime);
        }
    };
}
