#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActor_CrittersActorType.hpp"

namespace GlobalNamespace {
    struct crittersAttractorStruct : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "crittersAttractorStruct");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("multiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersActor_CrittersActorType GetType_f() {
            static BNM::Field<::GlobalNamespace::CrittersActor_CrittersActorType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("multiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetType(::GlobalNamespace::CrittersActor_CrittersActorType value) {
            static BNM::Field<::GlobalNamespace::CrittersActor_CrittersActorType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
