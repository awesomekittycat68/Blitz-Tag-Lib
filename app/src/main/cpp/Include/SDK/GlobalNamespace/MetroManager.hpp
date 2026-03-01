#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MetroManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MetroManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::MetroBlimp*>* GetBlimps() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MetroBlimp*>*> _field = GetClass().GetField(O("_blimps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetBlimpsRotationAnchor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_blimpsRotationAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::MetroSpotlight*>* GetSpotlights() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MetroSpotlight*>*> _field = GetClass().GetField(O("_spotlights"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlimps(::BNM::Structures::Mono::Array<::GlobalNamespace::MetroBlimp*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MetroBlimp*>*> _field = GetClass().GetField(O("_blimps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlimpsRotationAnchor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_blimpsRotationAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpotlights(::BNM::Structures::Mono::Array<::GlobalNamespace::MetroSpotlight*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MetroSpotlight*>*> _field = GetClass().GetField(O("_spotlights"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
