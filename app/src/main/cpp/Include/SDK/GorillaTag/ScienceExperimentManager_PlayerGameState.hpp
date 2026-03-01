#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag {
    struct ScienceExperimentManager_PlayerGameState : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "ScienceExperimentManager").GetInnerClass("PlayerGameState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetPlayerId() {
            static BNM::Field<int> _field = GetClass().GetField(O("playerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTouchedLiquid() {
            static BNM::Field<bool> _field = GetClass().GetField(O("touchedLiquid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTouchedLiquidAtProgress() {
            static BNM::Field<float> _field = GetClass().GetField(O("touchedLiquidAtProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPlayerId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTouchedLiquid(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("touchedLiquid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTouchedLiquidAtProgress(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("touchedLiquidAtProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
