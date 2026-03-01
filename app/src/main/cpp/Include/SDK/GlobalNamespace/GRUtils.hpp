#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRTool_GRToolType.hpp"
#include "GRToolProgressionManager_ToolParts.hpp"

namespace GlobalNamespace {
    struct GRUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::String* GetToolName(::GlobalNamespace::GRTool_GRToolType toolType) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetToolName"), {"toolType"});
            return _m.Call(toolType);
        }
        static ::GlobalNamespace::GRToolProgressionManager_ToolParts GetToolPart(::GlobalNamespace::GRTool_GRToolType toolType) {
            static BNM::Method<::GlobalNamespace::GRToolProgressionManager_ToolParts> _m = GetClass().GetMethod(O("GetToolPart"), {"toolType"});
            return _m.Call(toolType);
        }
    };
}
