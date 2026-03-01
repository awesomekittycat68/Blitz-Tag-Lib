#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PropHuntPropZone : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PropHuntPropZone");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "PropHuntPropZone: ";
        static constexpr const char* preLogEd = "(editor only log) PropHuntPropZone: ";
        static constexpr const char* preLogBeta = "(beta only log) PropHuntPropZone: ";
        static constexpr const char* preErr = "ERROR!!!  PropHuntPropZone: ";
        static constexpr const char* preErrEd = "ERROR!!!  (editor only log) PropHuntPropZone: ";
        static constexpr const char* preErrBeta = "ERROR!!!  (beta only log) PropHuntPropZone: ";
        static constexpr bool _k__GT_PROP_HUNT__USE_POOLING__ = true;
        ::BoxCollider* GetBoxCollider() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("boxCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasBoxCollider() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasBoxCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMSimDurationBeforeFreeze() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_simDurationBeforeFreeze"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextUnusedPropPlacement() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextUnusedPropPlacement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumProps() {
            static BNM::Field<int> _field = GetClass().GetField(O("numProps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PropPlacementRB* GetPropPlacementPrefab() {
            static BNM::Field<::GlobalNamespace::PropPlacementRB*> _field = GetClass().GetField(O("propPlacementPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::PropPlacementRB*>* GetPropPlacementRBs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::PropPlacementRB*>*> _field = GetClass().GetField(O("propPlacementRBs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("radius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSeedOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("seedOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBoxCollider(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("boxCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasBoxCollider(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasBoxCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSimDurationBeforeFreeze(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_simDurationBeforeFreeze"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextUnusedPropPlacement(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextUnusedPropPlacement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumProps(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numProps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPropPlacementPrefab(::GlobalNamespace::PropPlacementRB* value) {
            static BNM::Field<::GlobalNamespace::PropPlacementRB*> _field = GetClass().GetField(O("propPlacementPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("radius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedOffset(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("seedOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::PropPlacementRB* _GetOrCreatePropPlacementObj_NoPool() {
            static BNM::Method<::GlobalNamespace::PropPlacementRB*> _m = GetClass().GetMethod(O("_GetOrCreatePropPlacementObj_NoPool"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreateDecoys(int seed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateDecoys"), {"seed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seed);
        }
        void DestroyDecoys() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyDecoys"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDelayedAction(int contextId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDelayedAction"), {"contextId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(contextId);
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
        void OnRoundStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRoundStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
