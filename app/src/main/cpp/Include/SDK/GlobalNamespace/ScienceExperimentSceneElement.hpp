#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ScienceExperimentElementID.hpp"

namespace GlobalNamespace {
    struct ScienceExperimentSceneElement : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ScienceExperimentSceneElement");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::ScienceExperimentElementID GetElementID() {
            static BNM::Field<::GlobalNamespace::ScienceExperimentElementID> _field = GetClass().GetField(O("elementID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFollowElement() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("followElement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetElementID(::GlobalNamespace::ScienceExperimentElementID value) {
            static BNM::Field<::GlobalNamespace::ScienceExperimentElementID> _field = GetClass().GetField(O("elementID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFollowElement(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("followElement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
