#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIUpgradeType.hpp"

namespace GlobalNamespace {
    struct SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIUpgradeXformOffsetter").GetInnerClass("SIUpgradeXformOffsetOp");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetTargetXform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("targetXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIUpgradeType GetUpgradeType() {
            static BNM::Field<::GlobalNamespace::SIUpgradeType> _field = GetClass().GetField(O("upgradeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetXform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("xform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTargetXform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("targetXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradeType(::GlobalNamespace::SIUpgradeType value) {
            static BNM::Field<::GlobalNamespace::SIUpgradeType> _field = GetClass().GetField(O("upgradeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetXform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("xform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
