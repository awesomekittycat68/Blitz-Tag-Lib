#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GRTool_GRToolType.hpp"

namespace GorillaTagScripts_GhostReactor {
    struct GRGameObjectExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.GhostReactor", "GRGameObjectExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GRTool_GRToolType GetToolType(::GameObject* obj) {
            static BNM::Method<::GlobalNamespace::GRTool_GRToolType> _m = GetClass().GetMethod(O("GetToolType"), {"obj"});
            return _m.Call(obj);
        }
    };
}
