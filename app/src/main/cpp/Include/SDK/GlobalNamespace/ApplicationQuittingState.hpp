#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ApplicationQuittingState : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ApplicationQuittingState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsQuitting() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsQuitting"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsQuitting(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsQuitting"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static bool get_IsQuitting() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsQuitting"));
            return _m.Call();
        }
        static void HandleApplicationQuitting() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleApplicationQuitting"));
            _m.Call();
        }
        static void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.Call();
        }
        static void set_IsQuitting(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsQuitting"), {"value"});
            _m.Call(value);
        }
    };
}
