#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DestroyIfNotBeta : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DestroyIfNotBeta");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetMShouldKeepIfBeta() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_shouldKeepIfBeta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMShouldKeepIfCreatorBuild() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_shouldKeepIfCreatorBuild"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMShouldKeepIfBeta(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_shouldKeepIfBeta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMShouldKeepIfCreatorBuild(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_shouldKeepIfCreatorBuild"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
