#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SceneBakeMode.hpp"

namespace BuildSafe {
    struct SceneBakeTask : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BuildSafe", "SceneBakeTask");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BuildSafe::SceneBakeMode GetBakeMode() {
            static BNM::Method<::BuildSafe::SceneBakeMode> _method = GetClass().GetMethod(O("get_bakeMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBakeMode(::BuildSafe::SceneBakeMode value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_bakeMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetCallbackOrder() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_callbackOrder"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCallbackOrder(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_callbackOrder"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetRunIfInactive() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_runIfInactive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRunIfInactive(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_runIfInactive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BuildSafe::SceneBakeMode GetMBakeMode() {
            static BNM::Field<::BuildSafe::SceneBakeMode> _field = GetClass().GetField(O("m_bakeMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMCallbackOrder() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_callbackOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMRunIfInactive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_runIfInactive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMBakeMode(::BuildSafe::SceneBakeMode value) {
            static BNM::Field<::BuildSafe::SceneBakeMode> _field = GetClass().GetField(O("m_bakeMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMCallbackOrder(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_callbackOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMRunIfInactive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_runIfInactive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ForceRun() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceRun"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BuildSafe::SceneBakeMode get_bakeMode() {
            static BNM::Method<::BuildSafe::SceneBakeMode> _m = GetClass().GetMethod(O("get_bakeMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_callbackOrder() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_callbackOrder"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_runIfInactive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_runIfInactive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void OnSceneBake(TP0 scene, ::BuildSafe::SceneBakeMode mode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSceneBake"), {"scene", "mode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(scene, mode);
        }
        void set_bakeMode(::BuildSafe::SceneBakeMode value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_bakeMode"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_callbackOrder(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_callbackOrder"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_runIfInactive(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_runIfInactive"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
