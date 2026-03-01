#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DevConsole : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DevConsole");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::DevConsole* GetInstance() {
            static BNM::Field<::GlobalNamespace::DevConsole*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        static constexpr int kLogEntriesCapacityIncrementAmount = 1024;
        ::GlobalNamespace::DevConsole* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::DevConsole*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::DevConsole_LogEntry*>* GetLogEntries() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::DevConsole_LogEntry*>*> _method = GetClass().GetMethod(O("get_logEntries"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GlobalNamespace::DevConsole* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::DevConsole*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::DevConsole_LogEntry*>* GetLogEntries_f() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::DevConsole_LogEntry*>*> _field = GetClass().GetField(O("_logEntries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCanExpand() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canExpand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentLogIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentLogIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentZoomLevel() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentZoomLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetDisableWhileActive() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("disableWhileActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetEnableWhileActive() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("enableWhileActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetErrorSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("errorSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetExpandAmount() {
            static BNM::Field<int> _field = GetClass().GetField(O("expandAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetExpandedMessageIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("expandedMessageIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::DevConsoleInstance*>* GetInstances() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::DevConsoleInstance*>*> _field = GetClass().GetField(O("instances"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsMuted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMuted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLineStartHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("lineStartHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLineStartTextWidth() {
            static BNM::Field<float> _field = GetClass().GetField(O("lineStartTextWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::DevConsole_DisplayedLogLine*>* GetLogLines() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::DevConsole_DisplayedLogLine*>*> _field = GetClass().GetField(O("logLines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTargetLogIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("targetLogIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetTextScale() {
            static BNM::Field<double> _field = GetClass().GetField(O("textScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTextStartHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("textStartHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetTracebackScrubbing() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("tracebackScrubbing"));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::DevConsole* value) {
            static BNM::Field<::GlobalNamespace::DevConsole*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanExpand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canExpand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentLogIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentLogIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentZoomLevel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentZoomLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableWhileActive(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("disableWhileActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableWhileActive(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("enableWhileActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetErrorSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("errorSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpandAmount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("expandAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpandedMessageIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("expandedMessageIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstances(::BNM::Structures::Mono::List<::GlobalNamespace::DevConsoleInstance*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::DevConsoleInstance*>*> _field = GetClass().GetField(O("instances"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsMuted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMuted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineStartHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lineStartHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineStartTextWidth(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lineStartTextWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogLines(::BNM::Structures::Mono::List<::GlobalNamespace::DevConsole_DisplayedLogLine*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::DevConsole_DisplayedLogLine*>*> _field = GetClass().GetField(O("logLines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetLogIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("targetLogIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextScale(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("textScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextStartHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("textStartHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::GlobalNamespace::DevConsole* get_instance() {
            static BNM::Method<::GlobalNamespace::DevConsole*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::DevConsole_LogEntry*>* get_logEntries() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::DevConsole_LogEntry*>*> _m = GetClass().GetMethod(O("get_logEntries"));
            return _m.Call();
        }
        void OnDestroyDebugObject() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroyDebugObject"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
