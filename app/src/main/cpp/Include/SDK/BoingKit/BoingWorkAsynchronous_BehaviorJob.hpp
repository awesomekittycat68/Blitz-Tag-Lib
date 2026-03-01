#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BoingWork_Output.hpp"
#include "BoingWork_Params.hpp"

namespace BoingKit {
    struct BoingWorkAsynchronous_BehaviorJob : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingWorkAsynchronous").GetInnerClass("BehaviorJob");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDeltaTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("DeltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFixedDeltaTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("FixedDeltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOutput() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Output"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetParams() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Params"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDeltaTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("DeltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFixedDeltaTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("FixedDeltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutput(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Output"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParams(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Params"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Execute(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
    };
}
