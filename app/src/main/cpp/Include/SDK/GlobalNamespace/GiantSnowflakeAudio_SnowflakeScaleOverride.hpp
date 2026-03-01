#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GiantSnowflakeAudio_SnowflakeScaleOverride : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GiantSnowflakeAudio").GetInnerClass("SnowflakeScaleOverride");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetNewOverrideIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("newOverrideIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScaleMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNewOverrideIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("newOverrideIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
