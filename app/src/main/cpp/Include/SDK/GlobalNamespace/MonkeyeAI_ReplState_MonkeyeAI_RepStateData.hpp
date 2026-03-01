#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Fusion_CodeGen/FixedStorage$1.hpp"
#include "../Fusion_CodeGen/FixedStorage$3.hpp"
#include "../Fusion_CodeGen/FixedStorage$33.hpp"
#include "MonkeyeAI_ReplState_EStates.hpp"

namespace GlobalNamespace {
    struct MonkeyeAI_ReplState_MonkeyeAI_RepStateData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MonkeyeAI_ReplState").GetInnerClass("MonkeyeAI_RepStateData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAlpha() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Alpha"));
            return _method.Call();
        }
        void SetAlpha(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Alpha"));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Vector3 GetAttackPos() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_AttackPos"));
            return _method.Call();
        }
        void SetAttackPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AttackPos"));
            _method.Call(value);
        }
        ::GlobalNamespace::MonkeyeAI_ReplState_EStates GetState() {
            static BNM::Method<::GlobalNamespace::MonkeyeAI_ReplState_EStates> _method = GetClass().GetMethod(O("get_State"));
            return _method.Call();
        }
        void SetState(::GlobalNamespace::MonkeyeAI_ReplState_EStates value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_State"));
            _method.Call(value);
        }
        float GetTimer() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Timer"));
            return _method.Call();
        }
        void SetTimer(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Timer"));
            _method.Call(value);
        }
        float get_Alpha() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Alpha"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_AttackPos() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_AttackPos"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_FloorEnabled() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_FloorEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_FreezePlayer() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_FreezePlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_PortalEnabled() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_PortalEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::MonkeyeAI_ReplState_EStates get_State() {
            static BNM::Method<::GlobalNamespace::MonkeyeAI_ReplState_EStates> _m = GetClass().GetMethod(O("get_State"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_Timer() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Timer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_UserId() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_UserId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Alpha(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Alpha"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AttackPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AttackPos"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_FloorEnabled(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FloorEnabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_FreezePlayer(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FreezePlayer"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_PortalEnabled(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PortalEnabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_State(::GlobalNamespace::MonkeyeAI_ReplState_EStates value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_State"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Timer(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Timer"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_UserId(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UserId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
