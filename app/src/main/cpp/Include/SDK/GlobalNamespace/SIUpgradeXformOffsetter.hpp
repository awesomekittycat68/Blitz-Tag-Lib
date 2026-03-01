#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIUpgradeSet.hpp"
#include "SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp.hpp"

namespace GlobalNamespace {
    struct SIUpgradeXformOffsetter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIUpgradeXformOffsetter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[SIUpgradeXformOffsetter]  ";
        static constexpr const char* preErr = "[SIUpgradeXformOffsetter]  ERROR!!!  ";
        ::GlobalNamespace::SIGadget* GetMSuperInfectionGadget() {
            static BNM::Field<::GlobalNamespace::SIGadget*> _field = GetClass().GetField(O("m_superInfectionGadget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp>* GetMUpgradeXformOffsetOps() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp>*> _field = GetClass().GetField(O("m_upgradeXformOffsetOps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMSuperInfectionGadget(::GlobalNamespace::SIGadget* value) {
            static BNM::Field<::GlobalNamespace::SIGadget*> _field = GetClass().GetField(O("m_superInfectionGadget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMUpgradeXformOffsetOps(::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp>*> _field = GetClass().GetField(O("m_upgradeXformOffsetOps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void _HandleGadgetOnPostRefreshVisuals(::GlobalNamespace::SIUpgradeSet upgradeSet) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_HandleGadgetOnPostRefreshVisuals"), {"upgradeSet"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(upgradeSet);
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
    };
}
