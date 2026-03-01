#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRTool_GRToolType.hpp"
#include "ProgressionManager_MothershipRequest.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_RecycleToolRequest : ::GlobalNamespace::ProgressionManager_MothershipRequest {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("RecycleToolRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetNumberOfPlayers() {
            static BNM::Field<int> _field = GetClass().GetField(O("NumberOfPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRTool_GRToolType GetToolBeingRecycled() {
            static BNM::Field<::GlobalNamespace::GRTool_GRToolType> _field = GetClass().GetField(O("ToolBeingRecycled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNumberOfPlayers(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("NumberOfPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolBeingRecycled(::GlobalNamespace::GRTool_GRToolType value) {
            static BNM::Field<::GlobalNamespace::GRTool_GRToolType> _field = GetClass().GetField(O("ToolBeingRecycled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
