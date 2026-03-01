#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SlingshotTester : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SlingshotTester");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SlingshotTestScenario* GetCurrentScenario() {
            static BNM::Field<::GlobalNamespace::SlingshotTestScenario*> _field = GetClass().GetField(O("currentScenario"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SlingshotTestScenario*>* GetScenarioList() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SlingshotTestScenario*>*> _field = GetClass().GetField(O("scenarioList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentScenario(::GlobalNamespace::SlingshotTestScenario* value) {
            static BNM::Field<::GlobalNamespace::SlingshotTestScenario*> _field = GetClass().GetField(O("currentScenario"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScenarioList(::BNM::Structures::Mono::Array<::GlobalNamespace::SlingshotTestScenario*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SlingshotTestScenario*>*> _field = GetClass().GetField(O("scenarioList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
