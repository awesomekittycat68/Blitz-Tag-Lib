#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct AnimationPauser_$OnStateEnter$d__4 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AnimationPauser").GetInnerClass("<OnStateEnter>d__4");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Animator* GetAnimator() {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLayerIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("layerIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStateInfo() {
            static BNM::Field<void*> _field = GetClass().GetField(O("stateInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimator(::Animator* value) {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLayerIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("layerIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateInfo(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("stateInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void MoveNext() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void SetStateMachine(TP0 stateMachine) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStateMachine"), {"stateMachine"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stateMachine);
        }
    };
}
