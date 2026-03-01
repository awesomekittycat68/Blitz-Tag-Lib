#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PropPlacementRB : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PropPlacementRB");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsInstantiatingAsync() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isInstantiatingAsync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PropHuntPropZone* GetParentZone() {
            static BNM::Field<::GlobalNamespace::PropHuntPropZone*> _field = GetClass().GetField(O("_parentZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPlacingProp() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_placingProp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetMRb() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("m_rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMSimDurationBeforeFreeze() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_simDurationBeforeFreeze"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetColliders(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsInstantiatingAsync(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isInstantiatingAsync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentZone(::GlobalNamespace::PropHuntPropZone* value) {
            static BNM::Field<::GlobalNamespace::PropHuntPropZone*> _field = GetClass().GetField(O("_parentZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlacingProp(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_placingProp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMRb(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("m_rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSimDurationBeforeFreeze(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_simDurationBeforeFreeze"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DestroyProp_NoPool() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyProp_NoPool"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPropFell() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPropFell"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void OnPropLoaded_NoPool(TP0 handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPropLoaded_NoPool"), {"handle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handle);
        }
        static bool TryPrepPropTemplate(::GlobalNamespace::PropPlacementRB* rb, ::GameObject* rendererGobj, ::GorillaTag_CosmeticSystem::CosmeticSO* _debugCosmeticSO) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryPrepPropTemplate"), {"rb", "rendererGobj", "_debugCosmeticSO"});
            return _m.Call(rb, rendererGobj, _debugCosmeticSO);
        }
    };
}
