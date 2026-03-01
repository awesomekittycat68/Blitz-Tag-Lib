#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag {
    struct GTLogErrorLimiter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "GTLogErrorLimiter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* __NULL__ = "__NULL__";
        static constexpr const char* k_lastMsgHeader = "!!!! THIS MESSAGE HAS REACHED MAX SPAM COUNT AND WILL NO LONGER BE LOGGED !!!!
";
        ::BNM::Structures::Mono::String* GetBaseMessage() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_baseMessage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBaseMessage(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_baseMessage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetBaseMessage_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_baseMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCountdown() {
            static BNM::Field<int> _field = GetClass().GetField(O("countdown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOccurrenceCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("occurrenceCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOccurrencesJoinString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("occurrencesJoinString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSb() {
            static BNM::Field<void*> _field = GetClass().GetField(O("sb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBaseMessage_fs(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_baseMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCountdown(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("countdown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOccurrenceCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("occurrenceCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOccurrencesJoinString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("occurrencesJoinString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSb(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("sb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddOccurence(::GameObject* gObj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddOccurence"), {"gObj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gObj);
        }
        void AddOccurrence(::BNM::Structures::Mono::String* s) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddOccurrence"), {"s"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(s);
        }
        void AddOccurrence(::BNM::IL2CPP::Il2CppObject* stringBuilder) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddOccurrence"), {"stringBuilder"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stringBuilder);
        }
        ::BNM::Structures::Mono::String* get_baseMessage() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_baseMessage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Log(::BNM::Structures::Mono::String* subMessage, ::BNM::IL2CPP::Il2CppObject* context, ::BNM::Structures::Mono::String* caller, ::BNM::Structures::Mono::String* sourceFilePath, int line) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Log"), {"subMessage", "context", "caller", "sourceFilePath", "line"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(subMessage, context, caller, sourceFilePath, line);
        }
        void Log(::BNM::IL2CPP::Il2CppObject* obj, ::BNM::IL2CPP::Il2CppObject* context, ::BNM::Structures::Mono::String* caller, ::BNM::Structures::Mono::String* sourceFilePath, int line) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Log"), {"obj", "context", "caller", "sourceFilePath", "line"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj, context, caller, sourceFilePath, line);
        }
        void LogOccurrences(::Component* component, ::BNM::IL2CPP::Il2CppObject* obj, ::BNM::Structures::Mono::String* caller, ::BNM::Structures::Mono::String* sourceFilePath, int line) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogOccurrences"), {"component", "obj", "caller", "sourceFilePath", "line"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(component, obj, caller, sourceFilePath, line);
        }
        template <typename TP0 = void*>
        void LogOccurrences(TP0 subMessage, ::BNM::IL2CPP::Il2CppObject* obj, ::BNM::Structures::Mono::String* caller, ::BNM::Structures::Mono::String* sourceFilePath, int line) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogOccurrences"), {"subMessage", "obj", "caller", "sourceFilePath", "line"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(subMessage, obj, caller, sourceFilePath, line);
        }
        void set_baseMessage(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_baseMessage"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
