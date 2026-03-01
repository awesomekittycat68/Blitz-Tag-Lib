#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion_Gameplay {
    struct TestRopePerf : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Gameplay", "TestRopePerf");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetRopesCustom() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ropesCustom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRopesCustomVectorized() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ropesCustomVectorized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRopesOld() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ropesOld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRopesCustom(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ropesCustom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopesCustomVectorized(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ropesCustomVectorized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopesOld(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ropesOld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Coroutine::IEnumerator* Start() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
