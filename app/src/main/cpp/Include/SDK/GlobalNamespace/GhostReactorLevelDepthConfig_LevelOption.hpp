#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GhostReactorLevelDepthConfig_LevelOption : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactorLevelDepthConfig").GetInnerClass("LevelOption");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GhostReactorLevelGenConfig* GetLevelConfig() {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelGenConfig*> _field = GetClass().GetField(O("levelConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWeight() {
            static BNM::Field<int> _field = GetClass().GetField(O("weight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLevelConfig(::GlobalNamespace::GhostReactorLevelGenConfig* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorLevelGenConfig*> _field = GetClass().GetField(O("levelConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeight(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("weight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
