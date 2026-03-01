#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace TagEffects {
    struct GameObjectOnDisableDispatcher : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("TagEffects", "GameObjectOnDisableDispatcher");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_OnDisabled(::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDisabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnDisabled(::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDisabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent* GetOnDisabled() {
            static BNM::Field<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*> _field = GetClass().GetField(O("OnDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOnDisabled(::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent* value) {
            static BNM::Field<::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*> _field = GetClass().GetField(O("OnDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnDisabled_1(::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDisabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_OnDisabled_1(::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDisabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
