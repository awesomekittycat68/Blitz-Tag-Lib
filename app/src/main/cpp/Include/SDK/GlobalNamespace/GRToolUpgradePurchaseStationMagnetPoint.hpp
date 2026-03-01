#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRToolUpgradePurchaseStationMagnetPoint : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRToolUpgradePurchaseStationMagnetPoint");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetMagnetAttachTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("magnetAttachTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMagnetAttachTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("magnetAttachTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
