#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Fusion_CodeGen/FixedStorage$3.hpp"
#include "LurkerGhost_ghostState.hpp"

namespace GorillaTagScripts {
    struct LurkerGhost_LurkerGhostData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "LurkerGhost").GetInnerClass("LurkerGhostData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCurrentIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CurrentIndex"));
            return _method.Call();
        }
        void SetCurrentIndex(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentIndex"));
            _method.Call(value);
        }
        ::GorillaTagScripts::LurkerGhost_ghostState GetCurrentState() {
            static BNM::Method<::GorillaTagScripts::LurkerGhost_ghostState> _method = GetClass().GetMethod(O("get_CurrentState"));
            return _method.Call();
        }
        void SetCurrentState(::GorillaTagScripts::LurkerGhost_ghostState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentState"));
            _method.Call(value);
        }
        int GetTargetActor() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TargetActor"));
            return _method.Call();
        }
        void SetTargetActor(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TargetActor"));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Vector3 GetTargetPos() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_TargetPos"));
            return _method.Call();
        }
        void SetTargetPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TargetPos"));
            _method.Call(value);
        }
        int get_CurrentIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CurrentIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTagScripts::LurkerGhost_ghostState get_CurrentState() {
            static BNM::Method<::GorillaTagScripts::LurkerGhost_ghostState> _m = GetClass().GetMethod(O("get_CurrentState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TargetActor() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TargetActor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_TargetPos() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_TargetPos"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_CurrentIndex(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentIndex"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CurrentState(::GorillaTagScripts::LurkerGhost_ghostState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TargetActor(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TargetActor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TargetPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TargetPos"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
