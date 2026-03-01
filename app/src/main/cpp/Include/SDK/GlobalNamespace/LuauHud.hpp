#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LuauHud : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LuauHud");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::LuauHud* get_Instance() {
            static BNM::Method<::GlobalNamespace::LuauHud*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GlobalNamespace::LuauHud* GetInstance() {
            static BNM::Field<::GlobalNamespace::LuauHud*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        ::GlobalNamespace::LuauHud* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::LuauHud*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GlobalNamespace::LuauHud* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::LuauHud*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetBuilder() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("builder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetButtonDown() {
            static BNM::Field<bool> _field = GetClass().GetField(O("buttonDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDebugHud() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("debugHud"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetLuauLogs() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("luauLogs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetResetTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("resetTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetScript() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("script"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowLog() {
            static BNM::Field<bool> _field = GetClass().GetField(O("showLog"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseLuauHud() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useLuauHud"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::LuauHud* value) {
            static BNM::Field<::GlobalNamespace::LuauHud*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetBuilder(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("builder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonDown(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("buttonDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugHud(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("debugHud"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLuauLogs(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("luauLogs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResetTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("resetTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScript(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("script"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowLog(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("showLog"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseLuauHud(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useLuauHud"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GlobalNamespace::LuauHud* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::LuauHud*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* LoadLocalScript() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("LoadLocalScript"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LuauLog(::BNM::Structures::Mono::String* log) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LuauLog"), {"log"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(log);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RestartLuauScript() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestartLuauScript"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
