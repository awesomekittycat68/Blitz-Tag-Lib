#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct LuauScriptRunner : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LuauScriptRunner");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::lua_State* GetL() {
            static BNM::Field<::GlobalNamespace::lua_State*> _field = GetClass().GetField(O("L"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::lua_CFunction* GetPostTickCallback() {
            static BNM::Field<::GlobalNamespace::lua_CFunction*> _field = GetClass().GetField(O("postTickCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::lua_CFunction* GetPreTickCallback() {
            static BNM::Field<::GlobalNamespace::lua_CFunction*> _field = GetClass().GetField(O("preTickCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetScript() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Script"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetScriptName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ScriptName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::LuauScriptRunner*>* GetScriptRunners() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::LuauScriptRunner*>*> _field = GetClass().GetField(O("ScriptRunners"));
            return _field.Get();
        }
        bool GetShouldTick() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShouldTick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetL(::GlobalNamespace::lua_State* value) {
            static BNM::Field<::GlobalNamespace::lua_State*> _field = GetClass().GetField(O("L"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPostTickCallback(::GlobalNamespace::lua_CFunction* value) {
            static BNM::Field<::GlobalNamespace::lua_CFunction*> _field = GetClass().GetField(O("postTickCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreTickCallback(::GlobalNamespace::lua_CFunction* value) {
            static BNM::Field<::GlobalNamespace::lua_CFunction*> _field = GetClass().GetField(O("preTickCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScript(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Script"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScriptName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ScriptName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetScriptRunners(::BNM::Structures::Mono::List<::GlobalNamespace::LuauScriptRunner*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::LuauScriptRunner*>*> _field = GetClass().GetField(O("ScriptRunners"));
            _field.Set(value);
        }
        void SetShouldTick(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShouldTick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static bool ErrorCheck(::GlobalNamespace::lua_State* L, int status) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ErrorCheck"), {"L", "status"});
            return _m.Call(L, status);
        }
        void Finalize_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Finalize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::LuauScriptRunner* FromFile(::BNM::Structures::Mono::String* filePath, ::GlobalNamespace::lua_CFunction* bindings, ::GlobalNamespace::lua_CFunction* tick) {
            static BNM::Method<::GlobalNamespace::LuauScriptRunner*> _m = GetClass().GetMethod(O("FromFile"), {"filePath", "bindings", "tick"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(filePath, bindings, tick);
        }
        bool Tick(float deltaTime) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Tick"), {"deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(deltaTime);
        }
    };
}
