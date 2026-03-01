#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Fusion_CodeGen/FixedStorage$1.hpp"

namespace GlobalNamespace {
    struct HalloweenGhostChaser_GhostData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HalloweenGhostChaser").GetInnerClass("GhostData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCurrentSpeed() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_CurrentSpeed"));
            return _method.Call();
        }
        void SetCurrentSpeed(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentSpeed"));
            _method.Call(value);
        }
        int GetCurrentState() {
            static BNM::Field<int> _field = GetClass().GetField(O("CurrentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetIsSummoned() {
            static BNM::Field<void*> _field = GetClass().GetField(O("IsSummoned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSpawnIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("SpawnIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTargetActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("TargetActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentState(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("CurrentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsSummoned(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("IsSummoned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("SpawnIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("TargetActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float get_CurrentSpeed() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_CurrentSpeed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_CurrentSpeed(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentSpeed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
