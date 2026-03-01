#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GamePlayerLocal_InputDataMotion.hpp"

namespace GlobalNamespace {
    struct GamePlayerLocal_InputData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GamePlayerLocal").GetInnerClass("InputData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GamePlayerLocal_InputDataMotion>* GetInputMotionHistory() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GamePlayerLocal_InputDataMotion>*> _field = GetClass().GetField(O("inputMotionHistory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxInputs() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxInputs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInputMotionHistory(::BNM::Structures::Mono::List<::GlobalNamespace::GamePlayerLocal_InputDataMotion>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GamePlayerLocal_InputDataMotion>*> _field = GetClass().GetField(O("inputMotionHistory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxInputs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxInputs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddInput(::GlobalNamespace::GamePlayerLocal_InputDataMotion data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddInput"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
        ::BNM::Structures::Unity::Vector3 GetAvgVel(float ignoreRecent, float window) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetAvgVel"), {"ignoreRecent", "window"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(ignoreRecent, window);
        }
        float GetMaxSpeed(float ignoreRecent, float window) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetMaxSpeed"), {"ignoreRecent", "window"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(ignoreRecent, window);
        }
    };
}
