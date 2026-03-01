#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SIGadgetDashYoyo_StateMaterialsInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetDashYoyo").GetInnerClass("StateMaterialsInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Material* GetCooldown() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("cooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetIdle() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("idle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetReady() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ready"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCooldown(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("cooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdle(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("idle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReady(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ready"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
