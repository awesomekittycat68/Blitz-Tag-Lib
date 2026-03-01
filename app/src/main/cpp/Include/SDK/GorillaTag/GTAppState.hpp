#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag {
    struct GTAppState : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "GTAppState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsQuitting() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isQuitting"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsQuitting(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_isQuitting"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static bool get_isQuitting() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isQuitting"));
            return _m.Call();
        }
        static void HandleOnAfterSceneLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnAfterSceneLoad"));
            _m.Call();
        }
        static void HandleOnSubsystemRegistration() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnSubsystemRegistration"));
            _m.Call();
        }
        static void set_isQuitting(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isQuitting"), {"value"});
            _m.Call(value);
        }
    };
}
