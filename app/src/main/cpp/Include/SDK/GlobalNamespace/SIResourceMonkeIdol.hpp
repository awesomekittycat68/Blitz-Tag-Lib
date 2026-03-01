#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIResource.hpp"

namespace GlobalNamespace {
    struct SIResourceMonkeIdol : ::GlobalNamespace::SIResource {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIResourceMonkeIdol");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetDepositEnabledParticle() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("depositEnabledParticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDepositEnabledParticle(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("depositEnabledParticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void HandleDepositAuth(::GlobalNamespace::SIPlayer* depositingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleDepositAuth"), {"depositingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(depositingPlayer);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
