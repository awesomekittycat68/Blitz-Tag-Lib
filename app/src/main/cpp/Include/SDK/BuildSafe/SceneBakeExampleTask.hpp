#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SceneBakeMode.hpp"
#include "SceneBakeTask.hpp"

namespace BuildSafe {
    struct SceneBakeExampleTask : ::BuildSafe::SceneBakeTask {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BuildSafe", "SceneBakeExampleTask");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void DuplicateAndRecolor(::GameObject* target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DuplicateAndRecolor"), {"target"});
            _m.Call(target);
        }
        template <typename TP0 = void*>
        void OnSceneBake(TP0 scene, ::BuildSafe::SceneBakeMode mode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSceneBake"), {"scene", "mode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(scene, mode);
        }
    };
}
