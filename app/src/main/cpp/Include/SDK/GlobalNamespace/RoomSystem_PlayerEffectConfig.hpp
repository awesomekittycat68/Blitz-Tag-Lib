#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PlayerEffect.hpp"

namespace GlobalNamespace {
    struct RoomSystem_PlayerEffectConfig : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RoomSystem").GetInnerClass("PlayerEffectConfig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::TagEffects::TagEffectPack* GetTagEffectPack() {
            static BNM::Field<::TagEffects::TagEffectPack*> _field = GetClass().GetField(O("tagEffectPack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PlayerEffect GetType_f() {
            static BNM::Field<::GlobalNamespace::PlayerEffect> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTagEffectPack(::TagEffects::TagEffectPack* value) {
            static BNM::Field<::TagEffects::TagEffectPack*> _field = GetClass().GetField(O("tagEffectPack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetType(::GlobalNamespace::PlayerEffect value) {
            static BNM::Field<::GlobalNamespace::PlayerEffect> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
