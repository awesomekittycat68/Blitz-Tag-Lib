#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderTable_DroppedPieceState.hpp"

namespace GorillaTagScripts {
    struct BuilderTable_DroppedPieceData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "BuilderTable").GetInnerClass("DroppedPieceData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTagScripts::BuilderTable_DroppedPieceState GetDroppedState() {
            static BNM::Field<::GorillaTagScripts::BuilderTable_DroppedPieceState> _field = GetClass().GetField(O("droppedState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFilteredSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("filteredSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpeedThreshCrossedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("speedThreshCrossedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDroppedState(::GorillaTagScripts::BuilderTable_DroppedPieceState value) {
            static BNM::Field<::GorillaTagScripts::BuilderTable_DroppedPieceState> _field = GetClass().GetField(O("droppedState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFilteredSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("filteredSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeedThreshCrossedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("speedThreshCrossedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
