#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MetroBlimp : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MetroBlimp");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* _INNER_GLOW = "_INNER_GLOW";
        bool GetLowering() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_lowering"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNumHandsOnBlimp() {
            static BNM::Field<float> _field = GetClass().GetField(O("_numHandsOnBlimp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartLocalHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("_startLocalHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTopStayTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_topStayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAscendSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("ascendSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetBlimpMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("blimpMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetBlimpRenderer() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("blimpRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDescendOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("descendOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDescendReactionTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("descendReactionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDescendSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("descendSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MetroSpotlight* GetSpotLightLeft() {
            static BNM::Field<::GlobalNamespace::MetroSpotlight*> _field = GetClass().GetField(O("spotLightLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MetroSpotlight* GetSpotLightRight() {
            static BNM::Field<::GlobalNamespace::MetroSpotlight*> _field = GetClass().GetField(O("spotLightRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoxCollider* GetTopCollider() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("topCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLowering(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_lowering"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumHandsOnBlimp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_numHandsOnBlimp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartLocalHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_startLocalHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTopStayTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_topStayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAscendSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ascendSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlimpMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("blimpMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlimpRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("blimpRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDescendOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("descendOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDescendReactionTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("descendReactionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDescendSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("descendSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpotLightLeft(::GlobalNamespace::MetroSpotlight* value) {
            static BNM::Field<::GlobalNamespace::MetroSpotlight*> _field = GetClass().GetField(O("spotLightLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpotLightRight(::GlobalNamespace::MetroSpotlight* value) {
            static BNM::Field<::GlobalNamespace::MetroSpotlight*> _field = GetClass().GetField(O("spotLightRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTopCollider(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("topCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool IsPlayerHand(::Collider* c) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerHand"), {"c"});
            return _m.Call(c);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
