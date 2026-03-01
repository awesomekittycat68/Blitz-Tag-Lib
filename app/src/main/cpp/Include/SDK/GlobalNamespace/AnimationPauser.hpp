#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct AnimationPauser : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AnimationPauser");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetAnimPauseDuration() {
            static BNM::Field<int> _field = GetClass().GetField(O("_animPauseDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxTimeBetweenAnims() {
            static BNM::Field<int> _field = GetClass().GetField(O("_maxTimeBetweenAnims"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMinTimeBetweenAnims() {
            static BNM::Field<int> _field = GetClass().GetField(O("_minTimeBetweenAnims"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetRestartAnimName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Restart_Anim_Name"));
            return _field.Get();
        }
        void SetAnimPauseDuration(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_animPauseDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxTimeBetweenAnims(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_maxTimeBetweenAnims"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinTimeBetweenAnims(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_minTimeBetweenAnims"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP1 = void*>
        void OnStateEnter(::Animator* animator, TP1 stateInfo, int layerIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStateEnter"), {"animator", "stateInfo", "layerIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(animator, stateInfo, layerIndex);
        }
    };
}
