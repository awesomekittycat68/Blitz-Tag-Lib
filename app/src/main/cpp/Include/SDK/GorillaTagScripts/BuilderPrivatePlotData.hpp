#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/BuilderPiecePrivatePlot_PlotState.hpp"

namespace GorillaTagScripts {
    struct BuilderPrivatePlotData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "BuilderPrivatePlotData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsUnderCapacityLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isUnderCapacityLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsUnderCapacityRight() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isUnderCapacityRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOwnerActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("ownerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiecePrivatePlot_PlotState GetPlotState() {
            static BNM::Field<::GlobalNamespace::BuilderPiecePrivatePlot_PlotState> _field = GetClass().GetField(O("plotState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsUnderCapacityLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isUnderCapacityLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsUnderCapacityRight(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isUnderCapacityRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwnerActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ownerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlotState(::GlobalNamespace::BuilderPiecePrivatePlot_PlotState value) {
            static BNM::Field<::GlobalNamespace::BuilderPiecePrivatePlot_PlotState> _field = GetClass().GetField(O("plotState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
